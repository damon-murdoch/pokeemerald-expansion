# Common Library
import src.common as common

# Built-in Libraries
import os, math, json

# Modify text before printing
# Allowed options: 'upper', 'lower', None
TEXT_MODIFIER = "upper"

# Input File Folder
INPUT_FOLDER = "tools/bfg_helpers/select"

# Output Directory
# Please note, any auto-generated scripts
# will need to be added to 'event_scripts.s' manually!
# Otherwise, the .inc file will not be compiled or used.
OUTPUT_DIRECTORY = "data/scripts"

# This is used as a suffix, filename is used to start
# e.g. 'example.json' = 'example_multi_select_from_json.pory'
OUTPUT_FILENAME = "options.pory"

# Set to '0' if you do not want
# a 'Go Back' option to be included
INCLUDE_GO_BACK = 1
TEXT_GO_BACK = "Go Back"

# Number of items per page
ITEMS_PER_PAGE = 6 - INCLUDE_GO_BACK

MENU_X = 0  # X-Coordinate
MENU_Y = 0  # Y-Coordinate

# Controls
CONTROLS = 'msgbox("L: Previous Page                    R: Next Page\\nA: Confirm                               B: Go Back")'

# Argument Prefixes
PREFIX = "Auto"  # Auto-Generated Prefix


def get_multi_select(
    name: str,
    items: list,
    subtitle: str = "",
    parent: str = "",
    page: int = 1,
    page_count: int = 0,
):

    prefix = common.pory_format(f"{name}")

    suffix = common.pory_format(f"{subtitle}")

    # Current script name
    script_name = f"{prefix}_EventScript_{suffix}"

    text_name = f"{prefix}_Text_{suffix}"

    # No parent
    if parent == "":
        # Set parent to 'end' script
        parent = f"{prefix}_EventScript_{suffix}_End"

    # No last page
    if page_count == 0:
        # Set last page to current page count
        page_count = math.ceil(len(items) / ITEMS_PER_PAGE)

    # Multi-Choice EventScript
    multi_eventscript = [
        f"script {script_name}_Page{str(page)}",
        "{",
        f"    multichoice2({MENU_X},{MENU_Y},{text_name}_Page{str(page)})",
        "    switch(var(VAR_RESULT))",
        "    {",
    ]

    # Multi-Choice Text
    multi_text = [f"text {text_name}_Page{str(page)}", "{"]

    # Array for sub-menus
    # These will be processed after
    submenus = []

    # First page items only
    current_page = items[:ITEMS_PER_PAGE]

    # number used for case x:
    case_number = 0
    # Loop over the current page items
    for item in current_page:
        item_name = item["name"]
        item_action = item["action"]

        # Apply text modifier
        if TEXT_MODIFIER == "upper":
            item_name = item_name.upper()
        elif TEXT_MODIFIER == "lower":
            item_name = item_name.lower()

        item_str = f"{script_name}_{common.pory_format(item_name)}_Page1"

        multi_eventscript.append(f"        case {case_number}: # {item_name}")
        multi_text.append(f'    "{item_name}$"')

        # Item action is string (single script)
        if type(item_action) is str:
            # Split the 'line' on the semicolons
            for line in item_action.split(";"):
                multi_eventscript.append(f"            {line}")
        # Item action is list (sub-menu)
        elif type(item_action) is list:
            submenus.append(item)  # Add to post-processing

            multi_eventscript.append(f"            goto({item_str})")

        # Increment case number
        case_number += 1

    # Default page numbers
    next_page = 1
    prev_page = 1

    # More than one page
    if page_count > 1:
        # First Page
        if page == 1:
            prev_page = page_count
            next_page = 2
        # Last Page
        elif page == page_count:
            prev_page = page_count - 1
            next_page = 1
        else:  # Other
            prev_page = page - 1
            next_page = page + 1

    # Add Multi-Page Left/Right Options
    multi_eventscript.append("        case MULTI_L_PRESSED:")  # Left Bumper
    multi_eventscript.append(
        f"            goto({prefix}_EventScript_{suffix}_Page{str(prev_page)})"
    )

    multi_eventscript.append("        case MULTI_R_PRESSED:")  # Right Bumper
    multi_eventscript.append(
        f"            goto({prefix}_EventScript_{suffix}_Page{str(next_page)})"
    )

    # Add 'Default' Option
    multi_eventscript.append("        default:")
    multi_eventscript.append(f"            goto({parent})")

    # Include 'Go Back' Option
    if INCLUDE_GO_BACK:
        multi_text.append(f'    "{TEXT_GO_BACK}$"')

    # Add eventscript closing brackets
    multi_eventscript.append("    }")
    multi_eventscript.append("}")

    # Add text closing brackets
    multi_text.append('    ""')
    multi_text.append("}")

    # All left-over pages
    leftovers = items[ITEMS_PER_PAGE:]

    # Leftover options
    if len(leftovers):

        next_eventscript, next_text = get_multi_select(
            name, leftovers, subtitle, parent, (page + 1), page_count
        )

        multi_eventscript.append("")  # Add blank line
        multi_eventscript += next_eventscript  # Add next page

        multi_text.append("")  # Add blank line
        multi_text += next_text  # Add next page

    # Loop over the sub menus
    for submenu in submenus:

        submenu_eventscript, submenu_text = get_multi_select(
            name,
            submenu["action"],
            f"{suffix}_{submenu['name']}",
            f"{script_name}_Page{str(page)}",
        )

        multi_eventscript.append("")  # Add blank line
        multi_eventscript += submenu_eventscript  # Add next page

        multi_text.append("")  # Add blank line
        multi_text += submenu_text  # Add next page

    return multi_eventscript, multi_text


if __name__ == "__main__":

    # Get list of input files
    files = os.listdir(INPUT_FOLDER)

    # Loop over the files
    for file_name in files:

        # File is a json file
        if file_name.endswith(".json"):

            # Output String Contents
            output = [
                "# File Auto-Generated By ebr-helpers (multi_select.py)",
                "",
            ]

            # Remove the extension from the filename
            no_extension = file_name.split(".")[0]

            # Combine the file path for the input file
            file_path = os.path.join(INPUT_FOLDER, file_name)

            with open(file_path, "r") as file:
                content = json.load(file)

                pory_prefix = common.pory_format(PREFIX)
                pory_name = common.pory_format(no_extension)

                # Generate the multi-select content
                event, text = get_multi_select(pory_prefix, content, pory_name)

                prompt = [
                    f"script {pory_prefix}_EventScript_{pory_name}_Controls",
                    "{",
                    f"    {CONTROLS}",  # Do not consume \n
                    f"    goto({pory_prefix}_EventScript_{pory_name}_Page1)",  # Entrypoint
                    "}",
                ]

                # Control Prompt
                for p in prompt:
                    output.append(p)

                # Add seperator
                output.append("")

                # Event Scripts
                for e in event:
                    output.append(e)

                # Add seperator
                output.append("")

                # Text Content
                for t in text:
                    output.append(t)

            os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)
            outpath = os.path.join(
                OUTPUT_DIRECTORY, f"{no_extension}_{OUTPUT_FILENAME}"
            )

            with open(outpath, "w+", encoding="utf8") as f:
                f.write("\n".join(output))

        # Ignore non-json files
