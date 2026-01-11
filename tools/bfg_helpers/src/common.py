import unicodedata

from datetime import datetime
import re, unicodedata

import src.config as config
import src.data as data

# Species filename, for retrieving species constants
SPECIES_FILE = "./include/constants/species.h"

# Moves to ignore, effectively a banlist for moves
# used for both move_ratings.py and move_options.py
MOVE_EXCLUSIONS = []


def get_set_spread(set):

    # Spread string
    # Will be joined later
    spread_str = []

    # Nature lookup table key
    key = set["nature"].upper()

    # Get set nature
    nature = None
    if key in data.NATURES:
        nature = data.NATURES[key]
    else:
        nature = data.NATURES["QUIRKY"]

    # Spread evs
    spread = set["evs"]

    # Loop over the spread items (in-order)
    for key in ["hp", "atk", "def", "spa", "spd", "spe"]:

        # Convert num to string
        string = str(spread[key])

        # Add '+' if boosted
        if nature["pos"] == key:
            string = f"{string}+"

        # Add '-' if reduced
        elif nature["neg"] == key:
            string = f"{string}-"

        # Add string to spread
        spread_str.append(string)

    # Return joined string
    return "/".join(spread_str)


def get_set_name(set, use_custom_name=False):

    # Get the species name
    name = set["species"]

    # Use custom name
    if use_custom_name:
        # Check species for name property
        if "name" in set["other"]:
            # Override default name
            name = set["other"]["name"]

        # Check species for note property
        if "note" in set["other"]:
            # Add note to the name
            name = f"{name} ({set['other']['note']})"

    # Return set name
    return name


def get_species_constants():

    # List of species
    species = []

    # Open the species list filename
    with open(SPECIES_FILE) as f:
        lines = f.readlines()

        # Loop over the lines
        for line in lines:
            if line.startswith("#define"):
                contents = line[8:].split(" ")

                # Key (e.g. SPECIES_BULBASAUR)
                key = contents[0].strip()

                # Add species to list
                species.append(key)

    # Return species table
    return species


def remove_accented_chars(text):
    normalized_text = unicodedata.normalize("NFKD", text)
    ascii_text = normalized_text.encode("ascii", "ignore").decode("utf-8")
    return ascii_text


def get_timestamp(time=datetime.now()):
    return time.strftime("%d-%m-%y %H:%M:%S")


def pory_format(string, delim="_"):

    # Update formatting
    pory_str = string.replace("_", " ").replace("-", " ")
    pory_str = pory_str.replace("'", " ").replace(":", " ")

    # Remove Brackets
    pory_str = pory_str.replace("(", "").replace(")", "")
    pory_str = pory_str.replace("[", "").replace("]", "")
    pory_str = pory_str.replace("{", "").replace("}", "")

    # Remove accented characters
    pory_str = remove_accented_chars(pory_str)

    # Split the string on the spaces
    split = pory_str.split(" ")

    # Convert strings to upper case
    for i in range(len(split)):
        split[i] = split[i].capitalize()

        # Special Case: 'EventScript'
        if split[i] == "Eventscript":
            split[i] = "EventScript"

    # Return rejoined string
    return delim.join(split)


def convert_str_to_capital_case(string):
    list = []
    tokens = string.split(" ")
    for t in tokens:
        a = t[:1]
        b = t[1:]

        list.append(f"{a.upper()}{b}")

    return " ".join(list)


def convert_const_to_camel_case(const):
    parts = const.split("_")
    return parts[0].lower() + "".join(word.capitalize() for word in parts[1:])


def convert_const_to_move_id(const):
    return const.lower().replace("_", "").replace("move", "", 1)


def convert_string_to_const(string):
    # Convert to upper case
    constant = string.upper()

    # Update formatting
    constant = constant.replace(" ", "_").replace("-", "_")
    constant = constant.replace("'", "").replace(":", "")

    # Replace Special Characters
    constant = constant.replace("’", "").replace(":", "")
    constant = constant.replace("%", "").replace(".", "")

    # Remove accented characters
    constant = remove_accented_chars(constant)

    # If the constant has a replacement
    if constant in data.REPLACE_CONSTANT:
        return data.REPLACE_CONSTANT[constant]

    # Return as-is
    return constant


def convert_const_to_species_id(const):
    if const.startswith("SPECIES_"):
        const = const[len("SPECIES_") :]
    parts = const.split("_")
    return "".join(part.capitalize() for part in parts)


def convert_species_name_to_const(species_name):
    # Convert to generic constant
    constant = convert_string_to_const(species_name)

    # Update characers / constants
    constant = constant.replace("É", "E")

    return f"SPECIES_{constant}"


def convert_species_name_to_species_id(species_name):
    # Convert non-ascii characters to their ascii equivalent
    normalised = (
        unicodedata.normalize("NFKD", species_name.lower())
        .encode("ASCII", "ignore")
        .decode()
    )

    # Strip illegal characters from normalised string
    return re.sub(r"[ \-':_.]", "", normalised)


def parse_gender(gender_string):
    gender = gender_string.lower()
    if gender == "m" or gender == "n":  # Male
        return 0
    elif gender == "f":  # Female
        return 1


def is_tagged(species, tag):
    return "tags" in species and tag in species["tags"]


def is_forme(species, forme):
    return "forme" in species and species["forme"] == forme


def insert_data(data, path, value):

    # Depth not reached
    if len(path) > 0:

        # Get the first item from the path
        key = path.pop(0)

        # Key is found
        has_key = False

        # Loop over the data items
        for i in range(len(data)):

            # Matching key found
            if data[i]["name"] == key:

                # Get the type of the action
                action_type = type(data[i]["action"])

                # Further nesting, and action is list
                if action_type == list and len(path) > 0:
                    insert_data(data[i]["action"], path, value)

                # No further nesting, and data is string
                elif action_type == str and len(path) == 0:
                    data[i]["action"] = value  # Update the value

                else:  # Data type mismatch
                    raise TypeError(
                        f"Data type mismatch: {str(action_type)} at key '{key}'"
                    )

                has_key = True
                break  # Break the loop

        # Key is not found
        if has_key == False:

            # Key type
            action_type = str
            if len(path) > 0:
                action_type = list

            # Insertion index
            index = -1  # Back of list

            # Loop over all of the keys
            for i in range(len(data)):

                # Get the action type for the index
                index_type = type(data[i]["action"])

                # Current action is a list (and the other is not), or earlier in alphabet
                if (action_type == list and action_type != index_type) or (
                    action_type == index_type and key < data[i]["name"]
                ):

                    # Update index
                    index = i
                    break

            # Max. Depth not reached
            if action_type == list:

                template = {"name": key, "action": []}

                # Index found
                if index >= 0:
                    data.insert(index, template)
                else:  # Insert key and continue
                    data.append(template)

                insert_data(data[index]["action"], path, value)

            else:  # Max. Depth reached

                template = {"name": key, "action": str(value)}

                # Index found
                if index >= 0:
                    data.insert(index, template)
                else:  # Insert key and continue
                    data.append(template)


def log_error(message):
    if config.check_config("BFG_PY_LOG_ERRORS") == True:
        print(message)
