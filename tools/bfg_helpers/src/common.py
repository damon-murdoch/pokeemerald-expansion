from datetime import datetime

CONFIG_FILE = "./include/config/battle_frontier_generator.h"

def get_timestamp(time = datetime.now()):
    return time.strftime("%d-%m-%y %H:%M:%S")

def convert_const_to_camel(const):
    parts = const.split("_")
    return parts[0].lower() + "".join(word.capitalize() for word in parts[1:])

def get_constant(string):

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

def get_species_constant(species_name):
    
    # Convert to generic constant
    constant = get_constant(species_name)

    # Update characers / constants
    constant = (
        constant.replace("É", "E")
    )

    return f"SPECIES_{constant}"

def get_species_id(species_name):

    # Convert species name to lower case
    constant = species_name.lower()

    # Update formatting
    return constant.replace(" ", "").replace("-", "").replace("'", "").replace(":", "").replace("_","")

def parse_gender(gender_string):
    gender = gender_string.lower()
    if gender == "m" or gender == "n": # Male
        return 0
    elif gender == "f": # Female
        return 1

def is_tagged(species, tag):
    return "tags" in species and tag in species["tags"]


def is_forme(species, forme):
    return "forme" in species and species["forme"] == forme
