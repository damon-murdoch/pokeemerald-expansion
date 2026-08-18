echo "Updating move ratings ..."

python3 tools/bfg_helpers/move_ratings.py

echo "Updating trainer mons ..."

python3 tools/bfg_helpers/trainer_mons.py

echo "Running generator tests ..."

make check TESTS="Generate Random"
