# Showdown Data
import src.showdown as showdown

# Common Library
import src.common as common

# Built-in libs
import os, re

OUTPUT_DIRECTORY = "src/data/battle_frontier"
OUTPUT_FILENAME = "battle_frontier_generator_trainer_class_mons.h"

# Ignore Pokedex Num. Below 1
IGNORE_SPECIAL = True

# Ignored species
ignore_species = ["cosmog", "cosmoem", "meltan"]

# Seperate tables for restricted mons
# e.g. Mythicals, Box Legends, etc.
SPLIT_RESTRICTED = True

# Include Box Legends/Mythicals in Restricted List
INCLUDE_BOX_LEGEND = True
INCLUDE_MYTHICAL = True

# Custom Restricteds
restricteds = ["deoxys", "arceus"]

# Seperate tables for mega pokemon
SPLIT_MEGA = True

megas = [
    "venusaur",
    "charizard",
    "blastoise",
    "beedrill",
    "pidgeot",
    "alakazam",
    "slowbro",
    "gengar",
    "kangaskhan",
    "pinsir",
    "gyarados",
    "aerodactyl",
    "mewtwo",
    "ampharos",
    "steelix",
    "scizor",
    "heracross",
    "houndoom",
    "tyranitar",
    "sceptile",
    "blaziken",
    "swampert",
    "gardevoir",
    "sableye",
    "mawile",
    "aggron",
    "medicham",
    "manectric",
    "sharpedo",
    "camerupt",
    "altaria",
    "banette",
    "absol",
    "glalie",
    "salamence",
    "metagross",
    "latias",
    "latios",
    "rayquaza",
    "lopunny",
    "garchomp",
    "lucario",
    "abomasnow",
    "gallade",
    "audino",
    "diancie",
]

eevees = [
    "jolteon",
    "flareon",
    "umbreon",
    "leafeon",
    "sylveon",
    "glaceon",
    "espeon",
    "vaporean",
    "eevee",
]

regis = ["regirock", "regice", "registeel", "regigigas", "regidrago", "regieleki"]

trainer_classes = [
    "TRAINER_CLASS_HIKER",
    # 'TRAINER_CLASS_TEAM_AQUA',
    "TRAINER_CLASS_PKMN_BREEDER",
    "TRAINER_CLASS_COOLTRAINER",
    "TRAINER_CLASS_BIRD_KEEPER",
    "TRAINER_CLASS_COLLECTOR",
    "TRAINER_CLASS_SWIMMER_M",
    # 'TRAINER_CLASS_TEAM_MAGMA',
    "TRAINER_CLASS_EXPERT",
    # 'TRAINER_CLASS_AQUA_ADMIN',
    "TRAINER_CLASS_BLACK_BELT",
    # 'TRAINER_CLASS_AQUA_LEADER',
    "TRAINER_CLASS_HEX_MANIAC",
    "TRAINER_CLASS_AROMA_LADY",
    "TRAINER_CLASS_RUIN_MANIAC",
    # 'TRAINER_CLASS_INTERVIEWER',
    "TRAINER_CLASS_TUBER_F",
    "TRAINER_CLASS_TUBER_M",
    "TRAINER_CLASS_LADY",
    "TRAINER_CLASS_BEAUTY",
    "TRAINER_CLASS_RICH_BOY",
    "TRAINER_CLASS_POKEMANIAC",
    "TRAINER_CLASS_GUITARIST",
    "TRAINER_CLASS_KINDLER",
    "TRAINER_CLASS_CAMPER",
    "TRAINER_CLASS_PICNICKER",
    "TRAINER_CLASS_BUG_MANIAC",
    "TRAINER_CLASS_PSYCHIC",
    "TRAINER_CLASS_GENTLEMAN",
    # 'TRAINER_CLASS_ELITE_FOUR',
    # 'TRAINER_CLASS_LEADER',
    "TRAINER_CLASS_SCHOOL_KID",
    # 'TRAINER_CLASS_SR_AND_JR',
    # 'TRAINER_CLASS_WINSTRATE',
    "TRAINER_CLASS_POKEFAN",
    "TRAINER_CLASS_YOUNGSTER",
    # 'TRAINER_CLASS_CHAMPION',
    "TRAINER_CLASS_FISHERMAN",
    "TRAINER_CLASS_TRIATHLETE",
    "TRAINER_CLASS_DRAGON_TAMER",
    "TRAINER_CLASS_NINJA_BOY",
    "TRAINER_CLASS_BATTLE_GIRL",
    "TRAINER_CLASS_PARASOL_LADY",
    "TRAINER_CLASS_SWIMMER_F",
    # 'TRAINER_CLASS_TWINS',
    "TRAINER_CLASS_SAILOR",
    # "TRAINER_CLASS_COOLTRAINER_2",
    # 'TRAINER_CLASS_MAGMA_ADMIN',
    # 'TRAINER_CLASS_RIVAL',
    "TRAINER_CLASS_BUG_CATCHER",
    "TRAINER_CLASS_PKMN_RANGER",
    # 'TRAINER_CLASS_MAGMA_LEADER',
    "TRAINER_CLASS_LASS",
    # 'TRAINER_CLASS_YOUNG_COUPLE',
    # 'TRAINER_CLASS_OLD_COUPLE',
    # 'TRAINER_CLASS_SIS_AND_BRO',
    # 'TRAINER_CLASS_SALON_MAIDEN',
    # 'TRAINER_CLASS_DOME_ACE',
    # 'TRAINER_CLASS_PALACE_MAVEN',
    # 'TRAINER_CLASS_ARENA_TYCOON',
    # 'TRAINER_CLASS_FACTORY_HEAD',
    # 'TRAINER_CLASS_PIKE_QUEEN',
    # 'TRAINER_CLASS_PYRAMID_KING',
    # 'TRAINER_CLASS_RS_PROTAG',
    "TRAINER_CLASS_DEFAULT",
]

# Main Process
if __name__ == "__main__":

    # Before all else, abort if the config is off
    with open(common.CONFIG_FILE, "r") as file:
        rating_config = re.findall("#define BFG_GENERATE_TRAINER_MONS *([^ ]*)", file.read())
        if len(rating_config) != 1:
            quit()
        if rating_config[0] != "TRUE":
            quit() 

    # Get showdown data files
    MOVES, POKEMON = showdown.get_showdown_data()

    # List of valid Pokemon
    # Excludes alt. Formes, etc.
    pokemon = []

    # Loop over species ids
    for speciesId in POKEMON:
        species = POKEMON[speciesId]

        if speciesId in ignore_species:
            continue  # Skip ignored species

        if IGNORE_SPECIAL and species["num"] < 1:
            continue  # Skip special Pokemon

        # Base forme for species
        if "baseSpecies" in species:
            if "forme" in species:
                forme = species["forme"]
                if not (
                    (forme == "Alola" and speciesId != "pikachualola")
                    or forme == "Galar"
                    or forme == "Hisui"
                    or forme == "Paldea"
                ):
                    continue  # Skip non-regional variants

        # Add species id to list
        pokemon.append(speciesId)

    # Class species table
    classes = {}
    classes_mega = {}
    classes_restricted = {}

    classes_lookup = {}

    # Initialise lists
    for trainer_class in trainer_classes:
        classes[trainer_class] = []
        classes_mega[trainer_class] = []
        classes_restricted[trainer_class] = []

        classes_lookup[trainer_class] = common.convert_const_to_camel(
            f"G_SPECIES_LIST_{trainer_class}"
        )

    # Lookup table of species which have appeared
    # in at least one facility class species list
    coverage = {}

    # Loop over species
    for speciesId in pokemon:
        species = POKEMON[speciesId]
        coverage[speciesId] = 0

        # Default Trainer Class (Contains All Species)
        if SPLIT_MEGA == True and speciesId in megas:
            classes_mega["TRAINER_CLASS_DEFAULT"].append(speciesId)
        if (
            SPLIT_RESTRICTED == True
            and speciesId in restricteds
            or (
                (
                    INCLUDE_BOX_LEGEND
                    and common.is_tagged(species, "Restricted Legendary")
                )
                or (INCLUDE_MYTHICAL and common.is_tagged(species, "Mythical"))
            )
        ):
            classes_restricted["TRAINER_CLASS_DEFAULT"].append(speciesId)
        else:
            classes["TRAINER_CLASS_DEFAULT"].append(speciesId)
        # coverage[speciesId] += 1

        # Process classes based on types
        for type in species["types"]:
            # Most Common Types
            if type == "Normal":
                for trainer_class in trainer_classes:  # All Trainer Classes
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Water":
                for trainer_class in [
                    "TRAINER_CLASS_POKEFAN",
                    "TRAINER_CLASS_COOLTRAINER",
                    # "TRAINER_CLASS_COOLTRAINER_2",
                    "TRAINER_CLASS_GENTLEMAN",
                    "TRAINER_CLASS_TUBER_M",
                    "TRAINER_CLASS_TUBER_F",
                    "TRAINER_CLASS_SWIMMER_M",
                    "TRAINER_CLASS_SWIMMER_F",
                    "TRAINER_CLASS_FISHERMAN",
                    "TRAINER_CLASS_SAILOR",
                    "TRAINER_CLASS_COLLECTOR",
                    # "TRAINER_CLASS_RICH_BOY",
                    # "TRAINER_CLASS_LADY",
                    "TRAINER_CLASS_POKEMANIAC",
                    "TRAINER_CLASS_PKMN_BREEDER",
                    "TRAINER_CLASS_DRAGON_TAMER",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Fire":
                for trainer_class in [
                    "TRAINER_CLASS_POKEFAN",
                    "TRAINER_CLASS_COOLTRAINER",
                    # "TRAINER_CLASS_COOLTRAINER_2",
                    # "TRAINER_CLASS_GENTLEMAN",
                    "TRAINER_CLASS_COLLECTOR",
                    "TRAINER_CLASS_BATTLE_GIRL",
                    "TRAINER_CLASS_BLACK_BELT",
                    # "TRAINER_CLASS_RICH_BOY",
                    # "TRAINER_CLASS_LADY",
                    "TRAINER_CLASS_POKEMANIAC",
                    "TRAINER_CLASS_KINDLER",
                    "TRAINER_CLASS_PKMN_BREEDER",
                    "TRAINER_CLASS_DRAGON_TAMER",
                    "TRAINER_CLASS_CAMPER",
                    "TRAINER_CLASS_PICNICKER",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Grass":
                for trainer_class in [
                    "TRAINER_CLASS_POKEFAN",
                    # "TRAINER_CLASS_COOLTRAINER",
                    # "TRAINER_CLASS_COOLTRAINER_2",
                    # "TRAINER_CLASS_GENTLEMAN",
                    "TRAINER_CLASS_AROMA_LADY",
                    "TRAINER_CLASS_COLLECTOR",
                    "TRAINER_CLASS_RICH_BOY",
                    "TRAINER_CLASS_LADY",
                    "TRAINER_CLASS_POKEMANIAC",
                    "TRAINER_CLASS_CAMPER",
                    "TRAINER_CLASS_PICNICKER",
                    "TRAINER_CLASS_PKMN_BREEDER",
                    "TRAINER_CLASS_PKMN_RANGER",
                    # "TRAINER_CLASS_LASS",
                    # "TRAINER_CLASS_YOUNGSTER",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Electric":
                for trainer_class in [
                    "TRAINER_CLASS_POKEFAN",
                    "TRAINER_CLASS_COOLTRAINER",
                    # "TRAINER_CLASS_COOLTRAINER_2",
                    # "TRAINER_CLASS_GENTLEMAN",
                    "TRAINER_CLASS_BEAUTY",
                    "TRAINER_CLASS_PARASOL_LADY",
                    "TRAINER_CLASS_GUITARIST",
                    # "TRAINER_CLASS_CAMPER",
                    # "TRAINER_CLASS_PICNICKER",
                    "TRAINER_CLASS_PKMN_BREEDER",
                    "TRAINER_CLASS_COLLECTOR",
                    "TRAINER_CLASS_POKEMANIAC",
                    "TRAINER_CLASS_SCHOOL_KID",
                    "TRAINER_CLASS_LASS",
                    "TRAINER_CLASS_YOUNGSTER",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Flying":
                for trainer_class in [
                    "TRAINER_CLASS_POKEFAN",
                    "TRAINER_CLASS_EXPERT",
                    "TRAINER_CLASS_GENTLEMAN",
                    "TRAINER_CLASS_COOLTRAINER",
                    "TRAINER_CLASS_BIRD_KEEPER",
                    "TRAINER_CLASS_RICH_BOY",
                    "TRAINER_CLASS_LADY",
                    # "TRAINER_CLASS_GUITARIST",
                    "TRAINER_CLASS_CAMPER",
                    "TRAINER_CLASS_PICNICKER",
                    "TRAINER_CLASS_PKMN_BREEDER",
                    "TRAINER_CLASS_PKMN_RANGER",
                    "TRAINER_CLASS_SCHOOL_KID",
                    "TRAINER_CLASS_LASS",
                    "TRAINER_CLASS_YOUNGSTER",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            # Regular Types
            elif type == "Fighting":
                for trainer_class in [
                    "TRAINER_CLASS_BATTLE_GIRL",
                    "TRAINER_CLASS_BLACK_BELT",
                    "TRAINER_CLASS_HIKER",
                    "TRAINER_CLASS_RUIN_MANIAC",
                    "TRAINER_CLASS_SAILOR",
                    # "TRAINER_CLASS_GUITARIST",
                    # "TRAINER_CLASS_KINDLER",
                    "TRAINER_CLASS_NINJA_BOY",
                    "TRAINER_CLASS_PKMN_RANGER",
                    "TRAINER_CLASS_TRIATHLETE",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Poison":
                for trainer_class in [
                    "TRAINER_CLASS_HEX_MANIAC",
                    "TRAINER_CLASS_GUITARIST",
                    "TRAINER_CLASS_KINDLER",
                    # "TRAINER_CLASS_CAMPER",
                    # "TRAINER_CLASS_PICNICKER",
                    "TRAINER_CLASS_BATTLE_GIRL",
                    "TRAINER_CLASS_BLACK_BELT",
                    "TRAINER_CLASS_DRAGON_TAMER",
                    "TRAINER_CLASS_NINJA_BOY",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Ground":
                for trainer_class in [
                    "TRAINER_CLASS_RUIN_MANIAC",
                    "TRAINER_CLASS_HIKER",
                    # "TRAINER_CLASS_EXPERT",
                    "TRAINER_CLASS_BATTLE_GIRL",
                    "TRAINER_CLASS_BLACK_BELT",
                    "TRAINER_CLASS_TRIATHLETE",
                    "TRAINER_CLASS_POKEMANIAC",
                    "TRAINER_CLASS_GUITARIST",
                    "TRAINER_CLASS_KINDLER",
                    # "TRAINER_CLASS_NINJA_BOY",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Rock":
                for trainer_class in [
                    "TRAINER_CLASS_RUIN_MANIAC",
                    "TRAINER_CLASS_HIKER",
                    "TRAINER_CLASS_EXPERT",
                    "TRAINER_CLASS_BATTLE_GIRL",
                    "TRAINER_CLASS_BLACK_BELT",
                    # "TRAINER_CLASS_POKEMANIAC",
                    "TRAINER_CLASS_GUITARIST",
                    # "TRAINER_CLASS_KINDLER",
                    "TRAINER_CLASS_NINJA_BOY",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Bug":
                for trainer_class in [
                    # "TRAINER_CLASS_PKMN_RANGER",
                    "TRAINER_CLASS_CAMPER",
                    "TRAINER_CLASS_PICNICKER",
                    "TRAINER_CLASS_BUG_CATCHER",
                    "TRAINER_CLASS_BUG_MANIAC",
                    "TRAINER_CLASS_FISHERMAN",
                    "TRAINER_CLASS_SCHOOL_KID",
                    # "TRAINER_CLASS_LASS",
                    "TRAINER_CLASS_YOUNGSTER",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Ghost":
                for trainer_class in [
                    "TRAINER_CLASS_PSYCHIC",
                    "TRAINER_CLASS_HEX_MANIAC",
                    # "TRAINER_CLASS_EXPERT",
                    "TRAINER_CLASS_GUITARIST",
                    "TRAINER_CLASS_KINDLER",
                    "TRAINER_CLASS_RUIN_MANIAC",
                    "TRAINER_CLASS_DRAGON_TAMER",
                    "TRAINER_CLASS_NINJA_BOY",
                    # "TRAINER_CLASS_YOUNGSTER",
                    "TRAINER_CLASS_GENTLEMAN",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Steel":
                for trainer_class in [
                    "TRAINER_CLASS_COOLTRAINER",
                    # "TRAINER_CLASS_COOLTRAINER_2",
                    "TRAINER_CLASS_GENTLEMAN",
                    "TRAINER_CLASS_EXPERT",
                    "TRAINER_CLASS_BATTLE_GIRL",
                    "TRAINER_CLASS_BLACK_BELT",
                    "TRAINER_CLASS_HIKER",
                    "TRAINER_CLASS_RUIN_MANIAC",
                    "TRAINER_CLASS_GUITARIST",
                    "TRAINER_CLASS_DRAGON_TAMER",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Psychic":
                for trainer_class in [
                    "TRAINER_CLASS_BEAUTY",
                    "TRAINER_CLASS_PARASOL_LADY",
                    "TRAINER_CLASS_AROMA_LADY",
                    "TRAINER_CLASS_HEX_MANIAC",
                    "TRAINER_CLASS_EXPERT",
                    "TRAINER_CLASS_GENTLEMAN",
                    "TRAINER_CLASS_COOLTRAINER",
                    "TRAINER_CLASS_RICH_BOY",
                    "TRAINER_CLASS_LADY",
                    "TRAINER_CLASS_KINDLER",
                    "TRAINER_CLASS_PSYCHIC",
                    "TRAINER_CLASS_SCHOOL_KID",
                    "TRAINER_CLASS_BUG_CATCHER",
                    "TRAINER_CLASS_BUG_MANIAC",
                    "TRAINER_CLASS_TUBER_M",
                    "TRAINER_CLASS_SWIMMER_M",
                    "TRAINER_CLASS_FISHERMAN",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Ice":
                for trainer_class in [
                    "TRAINER_CLASS_POKEMANIAC",
                    "TRAINER_CLASS_BEAUTY",
                    "TRAINER_CLASS_PARASOL_LADY",
                    "TRAINER_CLASS_TUBER_M",
                    "TRAINER_CLASS_TUBER_F",
                    "TRAINER_CLASS_SWIMMER_M",
                    "TRAINER_CLASS_SWIMMER_F",
                    "TRAINER_CLASS_FISHERMAN",
                    "TRAINER_CLASS_TRIATHLETE",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Dark":
                for trainer_class in [
                    "TRAINER_CLASS_HEX_MANIAC",
                    # "TRAINER_CLASS_EXPERT",
                    "TRAINER_CLASS_GUITARIST",
                    "TRAINER_CLASS_KINDLER",
                    "TRAINER_CLASS_BATTLE_GIRL",
                    "TRAINER_CLASS_BLACK_BELT",
                    "TRAINER_CLASS_RUIN_MANIAC",
                    # "TRAINER_CLASS_DRAGON_TAMER",
                    "TRAINER_CLASS_PSYCHIC",
                    "TRAINER_CLASS_NINJA_BOY",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            elif type == "Fairy":
                for trainer_class in [
                    "TRAINER_CLASS_POKEFAN",
                    "TRAINER_CLASS_BEAUTY",
                    "TRAINER_CLASS_PARASOL_LADY",
                    "TRAINER_CLASS_AROMA_LADY",
                    "TRAINER_CLASS_TRIATHLETE",
                    "TRAINER_CLASS_RICH_BOY",
                    "TRAINER_CLASS_LADY",
                    "TRAINER_CLASS_POKEMANIAC",
                    "TRAINER_CLASS_LASS",
                    "TRAINER_CLASS_PSYCHIC",
                    "TRAINER_CLASS_TUBER_F",
                    "TRAINER_CLASS_SWIMMER_F",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1
            # Rarest Type
            elif type == "Dragon":
                for trainer_class in [
                    "TRAINER_CLASS_COOLTRAINER",
                    # "TRAINER_CLASS_COOLTRAINER_2",
                    "TRAINER_CLASS_GENTLEMAN",
                    "TRAINER_CLASS_EXPERT",
                    "TRAINER_CLASS_HIKER",
                    "TRAINER_CLASS_RUIN_MANIAC",
                    "TRAINER_CLASS_POKEMANIAC",
                    "TRAINER_CLASS_DRAGON_TAMER",
                    # "TRAINER_CLASS_NINJA_BOY",
                    "TRAINER_CLASS_BIRD_KEEPER",
                    "TRAINER_CLASS_COLLECTOR",
                    "TRAINER_CLASS_SAILOR",
                    "TRAINER_CLASS_TUBER_M",
                    "TRAINER_CLASS_TUBER_F",
                    "TRAINER_CLASS_SWIMMER_M",
                    "TRAINER_CLASS_SWIMMER_F",
                ]:
                    if SPLIT_MEGA == True and speciesId in megas:
                        classes_mega[trainer_class].append(speciesId)
                    if (
                        SPLIT_RESTRICTED == True
                        and speciesId in restricteds
                        or (
                            (
                                INCLUDE_BOX_LEGEND
                                and common.is_tagged(species, "Restricted Legendary")
                            )
                            or (
                                INCLUDE_MYTHICAL
                                and common.is_tagged(species, "Mythical")
                            )
                        )
                    ):
                        classes_restricted[trainer_class].append(speciesId)
                    else:
                        classes[trainer_class].append(speciesId)
                    coverage[speciesId] += 1

        # Special cases for specific trainer classes

        # Sub-Legendaries
        if common.is_tagged(speciesId, "Sub-Legendary"):
            for trainer_class in [
                "TRAINER_CLASS_EXPERT",
                "TRAINER_CLASS_COOLTRAINER",
                # "TRAINER_CLASS_COOLTRAINER_2",
                "TRAINER_CLASS_GENTLEMAN",
            ]:
                if SPLIT_MEGA == True and speciesId in megas:
                    classes_mega[trainer_class].append(speciesId)
                if (
                    SPLIT_RESTRICTED == True
                    and speciesId in restricteds
                    or (
                        (
                            INCLUDE_BOX_LEGEND
                            and common.is_tagged(species, "Restricted Legendary")
                        )
                        or (INCLUDE_MYTHICAL and common.is_tagged(species, "Mythical"))
                    )
                ):
                    classes_restricted[trainer_class].append(speciesId)
                else:
                    classes[trainer_class].append(speciesId)
                coverage[speciesId] += 1

        # Regirock / Regice / Registeel
        if speciesId in regis:
            for trainer_class in [
                "TRAINER_CLASS_RUIN_MANIAC",
                "TRAINER_CLASS_EXPERT",
                "TRAINER_CLASS_PSYCHIC",
            ]:
                if SPLIT_MEGA == True and speciesId in megas:
                    classes_mega[trainer_class].append(speciesId)
                if (
                    SPLIT_RESTRICTED == True
                    and speciesId in restricteds
                    or (
                        (
                            INCLUDE_BOX_LEGEND
                            and common.is_tagged(species, "Restricted Legendary")
                        )
                        or (INCLUDE_MYTHICAL and common.is_tagged(species, "Mythical"))
                    )
                ):
                    classes_restricted[trainer_class].append(speciesId)
                else:
                    classes[trainer_class].append(speciesId)
                coverage[speciesId] += 1

        # Eeveelutions
        if speciesId in eevees:
            for trainer_class in [
                "TRAINER_CLASS_LADY",
                "TRAINER_CLASS_RICH_BOY",
                "TRAINER_CLASS_BEAUTY",
            ]:
                if SPLIT_MEGA == True and speciesId in megas:
                    classes_mega[trainer_class].append(speciesId)
                if (
                    SPLIT_RESTRICTED == True
                    and speciesId in restricteds
                    or (
                        (
                            INCLUDE_BOX_LEGEND
                            and common.is_tagged(species, "Restricted Legendary")
                        )
                        or (INCLUDE_MYTHICAL and common.is_tagged(species, "Mythical"))
                    )
                ):
                    classes_restricted[trainer_class].append(speciesId)
                else:
                    classes[trainer_class].append(speciesId)
                coverage[speciesId] += 1

        # Levitating
        if "Levitate" in species["abilities"].values():
            for trainer_class in [
                "TRAINER_CLASS_EXPERT",
                "TRAINER_CLASS_GENTLEMAN",
                "TRAINER_CLASS_COOLTRAINER",
                "TRAINER_CLASS_RUIN_MANIAC",
                "TRAINER_CLASS_EXPERT",
                "TRAINER_CLASS_PSYCHIC",
                "TRAINER_CLASS_BIRD_KEEPER",
            ]:
                if SPLIT_MEGA == True and speciesId in megas:
                    classes_mega[trainer_class].append(speciesId)
                if (
                    SPLIT_RESTRICTED == True
                    and speciesId in restricteds
                    or (
                        (
                            INCLUDE_BOX_LEGEND
                            and common.is_tagged(species, "Restricted Legendary")
                        )
                        or (INCLUDE_MYTHICAL and common.is_tagged(species, "Mythical"))
                    )
                ):
                    classes_restricted[trainer_class].append(speciesId)
                else:
                    classes[trainer_class].append(speciesId)
                coverage[speciesId] += 1

        # Hisuian Formes
        if common.is_forme(species, "Hisui"):
            for trainer_class in [
                "TRAINER_CLASS_RUIN_MANIAC",
            ]:
                if SPLIT_MEGA == True and speciesId in megas:
                    classes_mega[trainer_class].append(speciesId)
                if (
                    SPLIT_RESTRICTED == True
                    and speciesId in restricteds
                    or (
                        (
                            INCLUDE_BOX_LEGEND
                            and common.is_tagged(species, "Restricted Legendary")
                        )
                        or (INCLUDE_MYTHICAL and common.is_tagged(species, "Mythical"))
                    )
                ):
                    classes_restricted[trainer_class].append(speciesId)
                else:
                    classes[trainer_class].append(speciesId)
                coverage[speciesId] += 1

        # Paradox Pokemon
        if common.is_tagged(species, "Paradox"):
            for trainer_class in [
                "TRAINER_CLASS_EXPERT",
                "TRAINER_CLASS_COOLTRAINER",
                # "TRAINER_CLASS_COOLTRAINER_2",
                "TRAINER_CLASS_RUIN_MANIAC",
                "TRAINER_CLASS_GENTLEMAN",
            ]:
                if SPLIT_MEGA == True and speciesId in megas:
                    classes_mega[trainer_class].append(speciesId)
                if (
                    SPLIT_RESTRICTED == True
                    and speciesId in restricteds
                    or (
                        (
                            INCLUDE_BOX_LEGEND
                            and common.is_tagged(species, "Restricted Legendary")
                        )
                        or (INCLUDE_MYTHICAL and common.is_tagged(species, "Mythical"))
                    )
                ):
                    classes_restricted[trainer_class].append(speciesId)
                else:
                    classes[trainer_class].append(speciesId)
                coverage[speciesId] += 1

    # Create output content
    output = [
        "// File Auto-Generated By tools/bfg_helpers/get_trainer_class_mons.py",
        f"// Last updated: {common.get_timestamp()}",
        "",
    ]

    # Add Trainer Class Lists

    # Loop over the trainer classes
    for trainer_class in trainer_classes:

        # Sort species list, remove duplicates
        class_list = sorted(list(set(classes[trainer_class])))

        # Trainer Class Constant
        class_constant = f"SPECIES_LIST_{trainer_class}_COUNT"

        # Create standard table (#define, contents)
        output.append(f"#define {class_constant} {len(class_list)}")
        output.append(
            f"const u16 {classes_lookup[trainer_class]}[{class_constant}] = " + "{"
        )
        for speciesId in class_list:
            species = POKEMON[speciesId]
            constant = common.get_species_constant(species["name"])
            output.append(f"\t{constant},")
        output.append("};\n")

        # Seperate mega table
        if SPLIT_MEGA == True:
            # Sort megas list, remove duplicates
            mega_list = sorted(list(set(classes_mega[trainer_class])))

            # Trainer Class Megas Constant
            mega_constant = f"SPECIES_LIST_{trainer_class}_MEGA_COUNT"

            # Create mega table (#define, contents)
            output.append(f"#define {mega_constant} {len(mega_list)}")
            output.append(
                f"const u16 {classes_lookup[trainer_class]}Mega[{mega_constant}] = "
                + "{"
            )
            for speciesId in mega_list:
                species = POKEMON[speciesId]
                constant = common.get_species_constant(species["name"])
                output.append(f"\t{constant},")
            output.append("};\n")

        # Seperate restricted table
        if SPLIT_RESTRICTED == True:
            # Sort restricted list, remove duplicates
            restricted_list = sorted(list(set(classes_restricted[trainer_class])))

            # Trainer Class Restricted Constant
            restricted_constant = f"SPECIES_LIST_{trainer_class}_RESTRICTED_COUNT"

            # Create restricted table (#define, contents)
            output.append(f"#define {restricted_constant} {len(restricted_list)}")
            output.append(
                f"const u16 {classes_lookup[trainer_class]}Restricted[{restricted_constant}] = "
                + "{"
            )
            for speciesId in restricted_list:
                species = POKEMON[speciesId]
                constant = common.get_species_constant(species["name"])
                output.append(f"\t{constant},")
            output.append("};\n")

    os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)
    outpath = os.path.join(OUTPUT_DIRECTORY, OUTPUT_FILENAME)

    with open(outpath, "w+", encoding="utf8") as f:
        f.write("\n".join(output))
