# This script is for building a html site for browsing available pokemon, learnsets, etc.

import re, os, json

# C file parsing library
import src.cparser as cparser

# Teachable Learnsets file
TEACHABLE_LEARNSETS = "src/data/pokemon/teachable_learnsets.h"

# Level-up Learnsets file(s) (gen_1-9.h)
LEVEL_UP_LEARNSETS = "src/data/pokemon/level_up_learnsets"

# Egg-move Learnsets file
EGG_MOVE_LEARNSETS = "src/data/pokemon/egg_moves.h"

# Output data file
LEARNSET_DATA_OUT = "learnset_data.json"

# Ignored Moves
IGNORE_MOVES = [
    "MOVE_UNAVAILABLE"
]

# Ignored Species
IGNORE_SPECIES = [
    "None"
]

# Convert species name to pretty string
def format_species_name(name, sep=" "):

    # Find all of the
    tokens = list(re.findall("[A-Z][^A-Z]*", name))

    # Join the tokens using the seperator
    return sep.join(tokens)


def format_move_name(name):

    # Split the tokens, excluding 'move'
    tokens = name.split("_")[1:]

    # Join tokens with spaces, removing the
    # trailing ',' and converting to title case
    return " ".join(tokens).replace(",", "").title()


def parse_learnsets(file, trailing):

    # Learnsets table
    learnsets = {}

    # Open the learnsets file
    with open(file, "r", encoding="utf8") as f:

        # Parse lines from file
        content = f.readlines()

        # Current species tracker
        species = None

        # Loop over the lines
        for raw_line in content:

            # Strip whitespace
            line = raw_line.strip()

            # Line contains species
            if "static const u16 s" in line:

                # Parse species from line
                raw_species = (
                    line.replace("static const u16 s", "").replace(trailing, "").strip()
                )

                # Convert species string to pretty name
                species = format_species_name(raw_species)

                # Create list for species
                learnsets[species] = []

            # Line contains a move
            elif line.startswith("MOVE_"):

                # Parse the move name from the line
                move = format_move_name(line)

                # Add the moveset to the list
                learnsets[species].append(move)

    # Return the learnsets data
    return learnsets


def get_learnset_data():

    # Species lookup table
    learnset_data = {}

    with open(TEACHABLE_LEARNSETS, "r", encoding="utf8") as f:
        teachable = cparser.parse_learnsets(f.readlines(), "Teachable")

        # Loop over the species
        for species in teachable:

            # Species not in ignored species list
            if not species in IGNORE_SPECIES:

                # Moves list
                teachable_moves = []

                # Loop over all of the moves
                for move in teachable[species]:
                    # Move not in ignored moves list
                    if not move in IGNORE_MOVES:
                        # Add pretty name to teachable moves list
                        teachable_moves.append(format_move_name(move))

                # Species not inserted, add it
                if species not in learnset_data:
                    learnset_data[species] = {"name": format_species_name(species)}

                # Initialise species data
                learnset_data[species]["teachable"] = teachable_moves

    with open(EGG_MOVE_LEARNSETS, "r", encoding="utf8") as f:
        eggmoves = cparser.parse_learnsets(f.readlines(), "EggMove")

        # Loop over the species
        for species in eggmoves:

            # Species not in ignored species list
            if not species in IGNORE_SPECIES:

                # Moves list
                egg_moves = []

                # Loop over all of the moves
                for move in eggmoves[species]:
                    # Move not in ignored moves list
                    if not move in IGNORE_MOVES:
                        # Add pretty name to egg moves list
                        egg_moves.append(format_move_name(move))

                # Species not inserted, add it
                if species not in learnset_data:
                    learnset_data[species] = {
                        "name": format_species_name(species),
                        "teachable": [],
                    }

                # Initialise species data
                learnset_data[species]["egg"] = teachable_moves

    # Get all of the level up learnset files
    files = os.listdir(LEVEL_UP_LEARNSETS)

    # Loop over the files
    for file in files:

        # Build the path to the file
        filepath = f"{LEVEL_UP_LEARNSETS}/{file}"

        # Ensure file is not a folder
        if os.path.isfile(filepath):

            # Open the learnset file for the current generation
            with open(f"{LEVEL_UP_LEARNSETS}/{file}", "r", encoding="utf8") as f:
                levelup = cparser.parse_level_up_learnsets(f.readlines())

                # Loop over the species
                for species in levelup:
                    # Species not in ignored species list
                    if not species in IGNORE_SPECIES:
                        # Moves list
                        level_up_moves = []

                        # Loop over all of the moves
                        for move in levelup[species]:
                            # Convert move name to pretty name
                            move["name"] = format_move_name(move["name"])

                            # Add move to the moves list
                            level_up_moves.append(move)

                        # Species not inserted, add it
                        if species not in learnset_data:
                            learnset_data[species] = {
                                "name": format_species_name(species),
                                "teachable": [],
                                "egg": [],
                            }

                        # Initialise species data
                        learnset_data[species]["levelup"] = level_up_moves

    return learnset_data


if __name__ == "__main__":

    # Build learnset data file
    learnset_data = get_learnset_data()

    # Get the path to the running script
    script_path = os.path.dirname(os.path.realpath(__file__))

    # Dump learnset data to file (same directory as script)
    with open(f"{script_path}/{LEARNSET_DATA_OUT}", "w") as f:
        json.dump(learnset_data, f)
