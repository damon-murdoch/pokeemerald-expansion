import sys,os

INPUT_FOLDER = "tools/bfg_helpers/sample"

def sort_sample_sets(filepath): 

    # Placeholders
    content = None
    content_sorted = None

    # Open file with read/write access
    with open(filepath, "r") as file:

        # Read the file contents
        content = file.read().strip()

        # Split on double newline
        tokens = content.split("\n\n")

        # Sort A-Z
        tokens.sort()

        # Re-join and clean up contents (w/ newline added)
        content_sorted = "\n\n".join(tokens).strip() + "\n"

    # Contents updated
    if content_sorted != content:
        # Open the file with 'write' access
        with open(filepath, "w") as file:
            # Update the file contents
            file.write(content_sorted)

if __name__ == '__main__':

    # Loop over the files in the input folder
    for file in os.listdir(INPUT_FOLDER):

        # File is a 'sets' file
        if file.endswith('.sets'):

            # Get the normalised path to the file
            filepath = os.path.normpath(os.path.join(INPUT_FOLDER, file))

            # Sort the sample sets alphabetically
            sort_sample_sets(filepath)