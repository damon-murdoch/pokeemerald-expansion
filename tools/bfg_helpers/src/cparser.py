# #define regular expression
RE_DEFINE = r"\s+"

import re


def parse_defines(content):
    # Output data
    data = {}

    # Loop over the lines
    for line in content:
        clean = line.strip()

        # Non-empty string
        if len(clean) > 0:
            # #define at start of line
            if clean.startswith("#define"):
                # Remove the '#define' from the start
                define = clean.replace("#define ", "")

                # Remove any comments from line
                define = define.split("//")[0].strip()

                # Split line into parts
                parts = re.split(RE_DEFINE, define, maxsplit=1)

                # Key only
                if len(parts) == 1:
                    # Add key, no value to table
                    data[parts[0]] = None

                # Key/Value pair
                elif len(parts) == 2:
                    k, v = parts

                    # Value is int
                    if v.isdigit():
                        # Convert
                        v = int(v)

                    # Value is boolean
                    elif v == "TRUE":
                        v = True
                    elif v == "FALSE":
                        v = False

                    # Add to table
                    data[k] = v

    return data


def parse_level_up_learnsets(content):
    # Output data
    data = {}

    # Per-species data
    species = None
    moves = []

    # Loop over the lines
    for line in content:
        clean = line.strip()

        # Non-empty string
        if len(clean) > 0:
            # Learnset array declaration
            if clean.startswith("static const struct LevelUpMove s"):
                # Species is defined
                if species != None:
                    # Add species to data
                    data[species] = moves

                    # Clear moves list
                    moves = []

                # Isolate the species name from the declaration
                species = clean.split("LevelUpMove s")[1].split("LevelUp")[0]

            # Line contains a move
            if clean.startswith("LEVEL_UP_MOVE("):

                # Parse the move name from the level-up move data
                move = (
                    clean.replace("LEVEL_UP_MOVE(", "")
                    .split(",")[1]
                    .replace(")", "")
                    .strip()
                )

                # Parse name, level from the string
                tokens = clean.replace("LEVEL_UP_MOVE(", "").replace(")", "").replace(",","").strip().split(" ")

                move = {
                    "name": tokens[1], 
                    "level": int(tokens[0])
                }

                # Add sanitised move to the list
                moves.append(move)

    return data

def parse_learnsets(content, type="Teachable"):
    # Output data
    data = {}

    # Per-species data
    species = None
    moves = []

    # Loop over the lines
    for line in content:
        clean = line.strip()

        # Non-empty string
        if len(clean) > 0:
            # Learnset array declaration
            if clean.startswith("static const u16 s"):
                # Species is defined
                if species != None:
                    # Add species to data
                    data[species] = moves

                    # Clear moves list
                    moves = []

                # Isolate the species name from the declaration
                species = clean.split("u16 s")[1].split(type)[0]

            # Line contains a move
            if clean.startswith("MOVE_"):
                # Add sanitised move to the list
                moves.append(clean.replace(",", ""))

    return data

def parse_species_info(content):

    print(content)