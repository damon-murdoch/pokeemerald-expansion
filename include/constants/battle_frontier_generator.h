#ifndef GUARD_CONSTANTS_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONSTANTS_BATTLE_FRONTIER_GENERATOR_H

#define BFG_BST_MIN 0
#define BFG_BST_MAX 1530

#define BFG_ATK_MIN 0
#define BFG_ATK_MAX 255

#define BFG_MOVE_TYPE_NONE 0xFF

// Special moves with specific calculations
// e.g. a power value of '1' will be replaced with this
#define BFG_MOVE_POWER_SPECIAL 90

#define TRAINER_CLASS_DEFAULT TRAINER_CLASS_COUNT // Unhandled Trainer Class / Factory Rental Picks


// *** UTILITY ***

#define IN_INCLUSIVE_RANGE(a,b,n) (((n) >= (a)) && ((n) <= (b)))

#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define MAX(x,y) ((x) > (y) ? (x) : (y))

// *** RANDOM ***

// Random Boolean Value
#ifdef BFG_RANDOM_BOOL_FIXED
#define RANDOM_BOOL() (BFG_RANDOM_BOOL_FIXED)
#else
#define RANDOM_BOOL() ((bool8)(Random2() % 2))
#endif

// Random Chance (1/x)
#ifdef BFG_RANDOM_CHANCE_FIXED
#define RANDOM_CHANCE(x) ((x == 1) ? TRUE : (BFG_RANDOM_CHANCE_FIXED))
#else
#define RANDOM_CHANCE(x) (((x) != 0) && ((Random2() % (x)) == 0))
#endif

// Random Range (x-inclusive, y-exclusive)
#ifdef BFG_RANDOM_RANGE_FIXED
#define RANDOM_RANGE(x, y) ((x) + ((BFG_RANDOM_RANGE_FIXED) % ((y) - (x))))
#else
#define RANDOM_RANGE(x, y) ((x) + (Random2() % ((y) - (x))))
#endif

// Random Offset
#if BFG_RANDOM_OFFSET_MIN == BFG_RANDOM_OFFSET_MAX
#define RANDOM_OFFSET() (BFG_RANDOM_OFFSET_MIN)
#else
#define RANDOM_OFFSET(n) (n + (RANDOM_RANGE(BFG_RANDOM_OFFSET_MIN, BFG_RANDOM_OFFSET_MAX)))
#endif

#define GET_TRAINER_ID() (gSaveBlock2Ptr->playerTrainerId[0] + gSaveBlock2Ptr->playerTrainerId[1] + gSaveBlock2Ptr->playerTrainerId[2] + gSaveBlock2Ptr->playerTrainerId[3])

// *** FORMAT ***
#define IS_DOUBLES() (VarGet(VAR_FRONTIER_BATTLE_MODE) == FRONTIER_MODE_DOUBLES)
#define GET_LVL_MODE() (gSaveBlock2Ptr->frontier.lvlMode)

#define GET_CHALLENGE_NUM(battleMode, lvlMode) ((gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode]) / FRONTIER_STAGES_PER_CHALLENGE)

enum {
    BFG_SPREAD_TYPE_OFFENSIVE,
    BFG_SPREAD_TYPE_DEFENSIVE,
};

enum {
    BFG_SPREAD_CATEGORY_PHYSICAL,
    BFG_SPREAD_CATEGORY_SPECIAL,
};

enum {
    BFG_TEAM_GENERATOR_DEFAULT,
    BFG_TEAM_GENERATOR_RANDOM,
    BFG_TEAM_GENERATOR_FILTERED,
    BFG_TEAM_GENERATOR_FILTERED_ATTACKS_ONLY,
    BFG_TEAM_GENERATOR_FILTERED_RANKING,
    BFG_TEAM_GENERATOR_FILTERED_RANKING_ATTACKS_ONLY,
    BFG_TEAM_GENERATOR_VARIABLE,
};

enum {
    BFG_OPEN_RULES_RESTRICTED_NONE,
    BFG_OPEN_RULES_RESTRICTED_1,
    BFG_OPEN_RULES_RESTRICTED_2,
    BFG_OPEN_RULES_RESTRICTED_ALL,
    BFG_OPEN_RULES_RESTRICTED_VARIABLE,
};

enum {
    BFG_MOVE_TRY_REPLACE_SLOT_1,
    BFG_MOVE_TRY_REPLACE_SLOT_2,
    BFG_MOVE_TRY_REPLACE_SLOT_3,
    BFG_MOVE_TRY_REPLACE_SLOT_4,
    BFG_MOVE_TRY_REPLACE_FAILED,
};

#endif // GUARD_CONSTANTS_BATTLE_FRONTIER_GENERATOR_H
