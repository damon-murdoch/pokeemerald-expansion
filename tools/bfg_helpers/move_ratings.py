# Showdown Data
import src.showdown as showdown

# C/H Source File Parser
import src.cparser as cparser

# Common Library
import src.common as common

# Config File
import src.config as config

# Built-in libs
import math, os

# Constants file containing moves
MOVES_H = "include/constants/moves.h"

# Output filename / directory
OUTPUT_DIRECTORY = "src/data/battle_frontier"
OUTPUT_FILENAME = "battle_frontier_generator_move_ratings.h"

# Constants
MOVE_RATING_DEFAULT = 0
EFFECT_RATING_DEFAULT = 0

# Normalised value
# If this is set to 0, it will be ignored
MOVE_RATING_MAXIMUM = 0xFF

# 0-3 Priority Modifier range
MOVE_PRIORITY_MIN = 0
MOVE_PRIORITY_MAX = 1

# 0-1.5x Modifier Range
MOVE_PRIORITY_MODIFIER = 1

MOVE_CRIT_RATIO_MODIFIER = 10

SECONDARY_EFFECT_CHANCE_MODIFIER = 0
SECONDARY_EFFECT_BOOST_MODIFIER = 1  # Stat Boosts/Drops

# Status/Volatile Status Effect Modifiers
SECONDARY_EFFECT_STATUS_MODIFIERS = {
    # Status
    "psn": 1,
    "brn": 2,
    "frz": 2,
    "par": 2,
    "tox": 2,
    "slp": 2,
    # Volatile
    "flinch": 2,
    "confusion": 2,
    "healblock": 1,
    "saltcure": 2,
    "sparklingaria": 1,
    "syrupbomb": 1,
    # Negative
    "mustrecharge": -2,
    "glaiverush": 0,
    "lockedmove": -2,
    "rage": -4,
    "uproar": -4,
    # Default
    "default": 0,
}

# Move Flag Modifiers
MOVE_FLAG_EFFECT_MODIFIERS = {
    # Negative Flags
    "charge": -1,
    "recharge": -1,
    "cantusetwice": -1,
    "futuremove": -2,
    # Relevant Flags
    "heal": 2,
    "sound": 1,
    "defrost": 1,
    "bypasssub": 1,
    # Possibly Relevant Flags
    "gravity": 0,
    "contact": 0,
    "slicing": 0,
    "wind": 0,
    "nonsky": 0,
    "pulse": 0,
    "bullet": 0,
    "punch": 0,
    "distance": 0,
    "dance": 0,
    "bite": 0,
    "pledgecombo": 0,
    "reflectable": 0,
    # Irrelevant Flags
    "allyanim": 0,
    "protect": 0,
    "mirror": 0,
    "metronome": 0,
    "failencore": 0,
    "failmefirst": 0,
    "nosleeptalk": 0,
    "noassist": 0,
    "failcopycat": 0,
    "failmimic": 0,
    "failinstruct": 0,
    "noparentalbond": 0,
    "mustpressure": 0,
    # Default
    "default": 0,
}

MOVE_SECONDARY_MODIFIER = 1
MOVE_FLAG_MODIFIER = 10

MOVE_POWER_MODIFIER = 1

# Power Modifiers
MOVE_OHKO_POWER = 127
MOVE_HALF_POWER = 63

def get_secondary_effect_rating(effect, self=False):
    effect_rating = EFFECT_RATING_DEFAULT
    if effect == None or effect == {}:
        return 0  # No effect

    chance = 100
    if chance in effect:
        chance = effect["chance"]

    if "self" in effect:
        self_effect = {"chance": chance}
        self_effect.update(effect["self"])
        return get_secondary_effect_rating(self_effect, self=True)

    if "boosts" in effect:
        for stat in effect["boosts"]:
            boost = effect["boosts"][stat]
            if self == False:
                boost = abs(boost)  # Ignore Positive/Negative
            effect_rating += math.floor(boost * SECONDARY_EFFECT_BOOST_MODIFIER)

    if "status" in effect:
        status = effect["status"]
        if status in SECONDARY_EFFECT_STATUS_MODIFIERS:
            effect_rating += SECONDARY_EFFECT_STATUS_MODIFIERS[status]
        else:
            effect_rating += SECONDARY_EFFECT_STATUS_MODIFIERS["default"]

    if "volatileStatus" in effect:
        volatile_status = effect["volatileStatus"]
        if volatile_status in SECONDARY_EFFECT_STATUS_MODIFIERS:
            effect_rating += SECONDARY_EFFECT_STATUS_MODIFIERS[volatile_status]
        else:
            effect_rating += SECONDARY_EFFECT_STATUS_MODIFIERS["default"]

    effect_rating *= math.floor(chance * SECONDARY_EFFECT_CHANCE_MODIFIER)

    return effect_rating


def get_move_ratings(MOVES):
    # Filtered moves
    moves = []

    # Open the moves file
    with open(MOVES_H) as f:
        const_moves = list(cparser.parse_defines(f.readlines()).keys())

        # Loop over the constants
        for const_move in const_moves:
            # Convert const to moveId
            moveId = common.convert_const_to_move_id(const_move)

            try:
                # Throw error if move is excluded
                if moveId in common.MOVE_EXCLUSIONS:
                    raise Exception("Move is in the exclusions list!")

                # Move data found
                if moveId in MOVES:
                    # Dereference move data
                    move = MOVES[moveId]

                    if move["category"] == "Status":
                        raise Exception("Move is a status move!")
                    if "isZ" in move and move["isZ"] != False:
                        raise Exception("Move is a z-move!")
                    if "isMax" in move and move["isMax"] != False:
                        raise Exception("Move is a max move!")

                    # Add to list
                    moves.append(moveId)
                else:
                    raise Exception("Move with moveId not found!")

            except Exception as e:
                common.log_error(f"Skipped '{moveId}': {str(e)}")

        # Move Ratings
        ratings = {}

        # Highest rating
        highest_rating = 0
        lowest_rating = MOVE_RATING_MAXIMUM

        # Loop over filtered moves
        for moveId in moves:
            # Default Move Rating
            rating = MOVE_RATING_DEFAULT

            # Dereference move data
            move = MOVES[moveId]

            # Process Power
            power = move["basePower"]
            if "multihit" in move:
                hits = move["multihit"]
                if type(hits) != int:
                    hits = math.ceil(
                        (hits[0] + hits[1]) / 2
                    )  # Average number of hits, rounded up
                power *= hits
            if power == 0:  # Special case
                if moveId in ["fissure", "guillotine", "horndrill", "sheercold"]:
                    power = MOVE_OHKO_POWER
                elif moveId in ["naturesmadness", "ruination", "superfang"]:
                    power = MOVE_HALF_POWER
                elif moveId in ["return", "frustration"]:
                    power = 102
                else:
                    power = 80

            # Apply power modifier
            rating += math.floor(power * MOVE_POWER_MODIFIER)

            # Process Crit Ratio
            if "critRatio" in move:
                crit_ratio = move["critRatio"]
                rating += math.floor(crit_ratio * MOVE_CRIT_RATIO_MODIFIER)

            # Handle secondary effects
            if "secondary" in move:
                secondary_rating = get_secondary_effect_rating(move["secondary"])
                rating += math.floor(secondary_rating * MOVE_SECONDARY_MODIFIER)

            # Multiple secondary effects
            if "secondaries" in move:
                for secondary in move["secondaries"]:
                    secondary_rating = get_secondary_effect_rating(secondary)
                    rating += math.floor(secondary_rating * MOVE_SECONDARY_MODIFIER)

            # Self-Effects
            if "self" in move:
                self_rating = get_secondary_effect_rating(move["self"], self=True)
                rating += math.floor(self_rating * MOVE_SECONDARY_MODIFIER)

            # Process Flags
            for flag in move["flags"]:
                if flag in MOVE_FLAG_EFFECT_MODIFIERS:
                    rating += math.floor(
                        MOVE_FLAG_EFFECT_MODIFIERS[flag]
                        * move["flags"][flag]
                        * MOVE_FLAG_MODIFIER
                    )

            # Process Priority
            priority = move["priority"]
            priority = min(
                MOVE_PRIORITY_MAX, priority
            )  # Ensure less than MOVE_PRIORITY_MAX
            priority = max(
                MOVE_PRIORITY_MIN, priority
            )  # Ensure greater than MOVE_PRIORITY_MIN

            # Apply priority modifier
            rating *= (1 + (priority * MOVE_PRIORITY_MODIFIER))

            # Process Accuracy
            accuracy = move["accuracy"]
            if accuracy == True:
                accuracy = 100  # Cannot miss

            # Apply accuracy modifier
            rating *= math.floor(accuracy)

            # Add move rating to table (round down)
            ratings[moveId] = math.floor(rating)

            # Update highest rating
            if rating > highest_rating:
                highest_rating = rating

            # Update lowest rating
            if rating < lowest_rating:
                lowest_rating = rating

        return ratings, highest_rating, lowest_rating


# Main Process
if __name__ == "__main__":
    # If move rating generation is enabled
    if config.check_config("BFG_GENERATE_MOVE_RATINGS") == True:

        # Get showdown data files
        MOVES, POKEMON = showdown.get_showdown_data()

        # Create output content
        output = [
            "// File Auto-Generated By tools/bfg_helpers/move_ratings.py",
            "",
            "const u8 gBattleFrontierAttackRatings[MOVES_COUNT] = {",
        ]

        # Get the ratings, highest rating for the moves
        ratings, highest_rating, lowest_rating = get_move_ratings(MOVES)

        # Offset to ensure all ratings are at least 0
        offset = 0

        # Lowest rating is less than 0
        if lowest_rating < 0:
            # Add lowest rating to all ratings
            offset = abs(lowest_rating)

            # Update ratings
            for move in ratings:
                ratings[move] += offset

            # Update highest rating
            highest_rating += offset

        # Sort ratings from highest to lowest
        ratings_sorted = sorted(ratings.items(), key=lambda x: x[1], reverse=True)

        normalizer = 1  # No change
        if MOVE_RATING_MAXIMUM != 0:
            normalizer = MOVE_RATING_MAXIMUM / highest_rating

        # Loop over sorted moves
        for i in range(len(ratings_sorted)):
            move = ratings_sorted[i]
            moveData = MOVES[move[0]]
            moveName = f"MOVE_{common.convert_string_to_const(moveData['name'])}"
            output.append(f"\t[{moveName}] = {math.floor(move[1] * normalizer)},")

        output.append("};\n")

        os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)
        outpath = os.path.join(OUTPUT_DIRECTORY, OUTPUT_FILENAME)

        with open(outpath, "w+") as f:
            f.write("\n".join(output))
