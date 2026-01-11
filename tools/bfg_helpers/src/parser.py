# Regular expressions library
import re

# Nickname (Species) (Gender) @ Item
# Key: Value
# EVs: x HP / x Atk / x Def / x SpA / x SpD / x Spe
# IVs: x HP / x Atk / x Def / x SpA / x SpD / x Spe
# Nature Nature
# - Move 1
# - Move 2
# - Move 3
# - Move 4


# stat_template(init: int): object
# Return a pokemon stat field template,
# with a default value in each field of 0
# or 'init' if specified
def stat_template(init=0):

    return {"hp": init, "atk": init, "def": init, "spa": init, "spd": init, "spe": init}


# set_template(void): object
# Return a pokemon set template
def set_template():

    return {
        "species": "",
        "nickname": "",
        "gender": "",
        "ability": "",
        "evs": stat_template(0),
        "ivs": stat_template(31),
        "nature": "",
        "item": "",
        "moves": [],
        "other": {},
    }


# parseStats(stats: object, str: string): object
# Given an existing stats object and a string containing stats,
# Parses the string and returns a new stats object containing the fields
def parse_stats(stats, str):

    # Split the string on the seperator
    s = str.split("/")

    # Loop over the stats
    for stat in s:

        # Split the stat on the space
        st = stat.strip().split(" ")

        # Switch on the stat
        match st[1].lower():

            case "hp":
                stats["hp"] = int(st[0])
            case "atk":
                stats["atk"] = int(st[0])
            case "def":
                stats["def"] = int(st[0])
            case "spa":
                stats["spa"] = int(st[0])
            case "spd":
                stats["spd"] = int(st[0])
            case "spe":
                stats["spe"] = int(st[0])

    # Return the updated object
    return stats


# parseSet(str: string): object
# Given a string sequence containing
# Pokemon showdown sets, returns a json
# list  of the sets converted to objects.
def parse_sets(str):

    # Empty array of sets
    sets = []

    # Get a new set template
    current = None

    line_no = 1
    # Loop over each line in the string (lowercase)
    for line in str.split("\n"):

        try:

            # If the line contains the 'ability:' text
            if current and "ability:" in line.lower():

                # Set the ability to the ability pulled from the text
                current["ability"] = line.split(":")[1].strip()

            # If the line  contains the 'evs:' text
            elif current and "evs:" in line.lower():

                # Parse the stats from the text, set it to the current
                current["evs"] = parse_stats(current["evs"], line.split(":")[1].strip())

            # If the line  contains the 'ivs:' text
            elif current and "ivs:" in line.lower():

                # Parse the stats from the text, set it to the current
                current["ivs"] = parse_stats(current["ivs"], line.split(":")[1].strip())

            # All other random arbitrary k/v pairs, add to the other property
            elif current and (":" in line):

                # Key: Value, i.e. Shiny: Yes, Ability: Intimidate, etc.

                # Split the line on the ':'
                li = line.strip().split(":")

                # Assign a 'key' in the 'other' property of the
                # current object to the 'value'
                current["other"][li[0].strip().lower()] = li[1].strip()

            # If the line starts with a '-', is a move
            elif current and (line.strip().startswith("-")):

                # Add the move text to the moves list  for the set
                current["moves"].append(line.replace("-", "").strip())

            # If the line contains the 'nature' text
            elif current and ("nature" in line.lower()):

                # Retrieve the nature from the string and add it to the object
                current["nature"] = line.split(" ")[0].strip()

            # Series of increasingly obscure cases
            # Check if this is the first line of the pokemon
            # Can be formatted a bunch of different ways
            # Case 1: No Item, Gender, Nickname: Species
            # Case 2: No Item, Gender: Nickname (Species)
            # Case 3: No Item: Nickname (Species) (Gender)
            # Case 4: Full: Nickname (Species) (Gender) @ Item

            elif (
                "@" in line
                or "(" in line
                or (line.strip() != "" and len(line.strip().split(" ")) == 1)
            ):

                # '@' in line: Will always trigger if item is specified
                # '(' in line: Will always trigger if gender / nn is specified
                # "line.strip() != '' && line.strip().split(' ').length == 1)": Will trigger if nothing is specified

                # If a set template has not been created yet, create one
                # If one already exists, add it to the list and create a new one
                if current != None:

                    # Add the current to the list
                    sets.append(current)

                # Create a new set object
                current = set_template()

                # If set is male
                if "(m)" in line.lower():

                    # Remove gender from the line
                    line = line.replace("(m)", "").replace("(M)", "")

                    # Set set gender to male
                    current["gender"] = "m"

                # If the set is female
                if "(f)" in line.lower():

                    # Remove gender from the line
                    line = line.replace("(f)", "").replace("(F)", "")

                    # Set set gender to male
                    current["gender"] = "f"

                # If line still contains any '()', must be a nickname
                if "(" in line:

                    # Split the string on any '(' or ')'
                    li = re.split(r"(\(|\))", line)

                    # Add the nickname to the object
                    current["nickname"] = li[0].strip()

                    # Remove the first two objects (nickname + '(')
                    li = li[2:]

                    # Add the species to the object
                    current["species"] = li[0].strip()

                    # Remove the first two objects (species + ')')
                    li = li[2:]

                    # Join the line back together
                    line = "".join(li)

                # If line contains a '@', must be an item after it
                if "@" in line:

                    # Split the string on the '@' token
                    li = line.strip().split("@")

                    # If the first index is not null
                    if li[0].strip() != "":

                        # Set the species to the value of the first index
                        current["species"] = li[0].strip()

                    # If the second index is not null
                    if li[1].strip() != "":

                        # Set the species to the value of the first index
                        current["item"] = li[1].strip()

                else:  # No '@'
                    # Species as whole line
                    current["species"] = line.strip()

        except Exception as e:
            raise Exception(f"Failed on line {line_no}: {e}")

        # Line number
        line_no += 1

        if not current["species"]:
            print(current)

    # Made it to the end, add the last set to the stack
    sets.append(current)

    # Return all of the parsed sets
    return sets
