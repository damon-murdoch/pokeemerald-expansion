from datetime import datetime
import re, unicodedata

import src.config as config

# Moves to ignore, effectively a banlist for moves
# used for both move_ratings.py and move_options.py
MOVE_EXCLUSIONS = []


def get_timestamp(time=datetime.now()):
    return time.strftime("%d-%m-%y %H:%M:%S")


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
    constant = (
        constant.replace("’", "").replace(":", "").replace("%", "").replace(".", "")
    )

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


def log_error(message):
    if config.check_config("BFG_PY_LOG_ERRORS") == True:
        print(message)
