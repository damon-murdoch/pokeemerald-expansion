# Give-Mon String Generator
import src.givemon as givemon

# Common Library
import src.common as common

# Showdown Format Parsing Library
import src.parser as parser

# Built-in Libraries
import os, json

# Input File Folders
# .set files will be treated as individual sets
# .team files will be treated as an entire team
INPUT_FOLDER = "tools/bfg_helpers/sample"

# Output Directory
OUTPUT_DIRECTORY = "tools/bfg_helpers/select"

# Output File Names
SETS_OUTFILE = "sample_sets.json"
TEAMS_OUTFILE = "sample_teams.json"

# Create a folder in the 'sets' shop,
# which allows you to purchase the
# individual Pokemon from the teams
# shop with the provided name
# To ignore this, set to None

# Ignore duplicate sets
ALLOW_DUPLICATES = False

# Goto Purchase Jump Scripts
SETS_GOTO = "goto(Common_EventScript_Sample_Sets_CheckPurchase)"
TEAMS_GOTO = "goto(Common_EventScript_Sample_Team_CheckPurchase)"

if __name__ == "__main__":

    # Sets dict
    sample_sets = []

    # Teams dict
    sample_teams = []

    # Auto-Formatted Sets
    formatted_sets = []

    # Get list of input files
    files = os.listdir(INPUT_FOLDER)

    # Loop over the files
    for file_name in files:

        # File Name Format:
        # [folder]_[subfolder]_[name].[team/set]
        # e.g.
        # standard_mega_gardevoir.team

        # Split filename, extension from file info
        no_extension, extension = file_name.rsplit(".", 1)

        # Combine the file path for the input file
        file_path = os.path.join(INPUT_FOLDER, file_name)

        # Open the file contents
        with open(file_path, "r") as file:
            try:
                # Read the raw file
                raw = file.read()

                # Parse the showdown data
                sets = parser.parse_sets(raw)

                # Split the names on the under score
                names = no_extension.split("_")

                # Add species to names
                full_names = list(names)

                # Treat as entire team
                if extension == "team":
                    # Givemon string array
                    givemon_list = []

                    # Loop over the sets
                    for set in sets:
                        # Generate the givemon string and add it to the list
                        givemon_list.append(givemon.get_givemon_str(set))

                    # Combine the givemon string (Including team goto jump)
                    givemon_str = f"{';'.join(givemon_list)};{TEAMS_GOTO}"

                    # Add the sample team to the table
                    common.insert_data(sample_teams, names, givemon_str)

                # Treat as sample sets
                elif extension == "sets":
                    # Loop over the sets
                    for set in sets:
                        # Add set to simple sets (For post-processing)
                        formatted_sets.append({"set": set, "path": names})

                else:  # Unhandled extension
                    raise Exception(
                        f"Unhandled file extension {extension}! Accepted: .sets, .team ..."
                    )

            except Exception as e:
                print(f"Failed for file {file_name}! Error: {str(e)}")

    # Duplicate Sets
    duplicates = []

    # Auto-formatted sets
    for fs in formatted_sets:

        set = fs["set"]
        path = fs["path"]

        # Get the species name
        name = set["species"]

        # Check species for name property
        if "name" in set["other"]:
            # Override default name
            name = set["other"]["name"]

        # Get the set/species spread
        spread = common.get_set_spread(set)

        # Check species for note
        if "note" in set["other"]:
            # Add note to the spread
            spread = f"{spread} ({set['other']['note']})"

        # Create names list
        names = path + [name, spread]

        # Allow duplicates is disabled
        if ALLOW_DUPLICATES == False:
            # Key for checking duplicates
            key = f"{name}@{spread}"

            # Set already exists
            if key in duplicates:

                # Skip the set
                continue

            # Add the key to the list
            duplicates.append(key)

        # Generate the givemon string (Including sets goto jump)
        givemon_str = f"{givemon.get_givemon_str(set)};{SETS_GOTO}"

        # Add the sample sets to the table
        common.insert_data(sample_sets, names, givemon_str)

    # Create output directory (if not exists)
    os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)

    # Create Teams Outfile
    teams_out = os.path.join(OUTPUT_DIRECTORY, TEAMS_OUTFILE)

    # Dump sample teams to file
    with open(teams_out, "w+", encoding="utf8") as f:
        # Dump sample teams to file
        json.dump(sample_teams, f, indent=2)

    # Create Sets Outfile
    sets_out = os.path.join(OUTPUT_DIRECTORY, SETS_OUTFILE)

    # Dump sample sets to file
    with open(sets_out, "w+", encoding="utf8") as f:
        # Dump sample sets to file
        json.dump(sample_sets, f, indent=2)
