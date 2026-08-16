#!/bin/bash

# Get the directory of the current script
SCRIPT_DIR="$(dirname "$(realpath "$0")")"

echo "Running ebr build scripts ... "

# Both BFG and EBR-Only Scripts
python3 "$SCRIPT_DIR/tools/bfg_helpers/move_ratings.py"
python3 "$SCRIPT_DIR/tools/bfg_helpers/trainer_mons.py"
python3 "$SCRIPT_DIR/tools/bfg_helpers/npc_builder.py"
python3 "$SCRIPT_DIR/tools/bfg_helpers/shop_builder.py"
python3 "$SCRIPT_DIR/tools/bfg_helpers/sample_builder.py"
python3 "$SCRIPT_DIR/tools/bfg_helpers/multi_select.py"

echo "Running makefile ... "

make
