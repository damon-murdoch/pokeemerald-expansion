#ifndef GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H

// *** GENERAL ***
#define BFG_FLAG_FRONTIER_GENERATOR FLAG_UNUSED_0x020 // Flag to enable or disable random generator

#define BFG_TEST_SET_GENERATION     TRUE    // Test set generation
#define BFG_TEST_MON_SELECTION      TRUE    // Test mon selection

#define BFG_TEST_PRINT_MOVES        FALSE   // Test print move selection
#define BFG_TEST_PRINT_RESULTS      TRUE    // Print test results

#define BFG_FLAG_FRONTIER_ALLOW_MEGA    0   // Flag to enable or disable Mega Evolution
#define BFG_FLAG_FRONTIER_ALLOW_GMAX    0   // Flag to enable or disable Gigantamax
#define BFG_FLAG_FRONTIER_ALLOW_ZMOVE   0   // Flag to enable or disable Z Moves

#define BFG_TEAM_GENERATION_METHOD      BFG_TEAM_GENERATOR_FILTERED_RANKING
#define BFG_VAR_TEAM_GENERATION_METHOD  0   // Used if BFG_TEAM_GENERATION_METHOD is set to 'BFG_TEAM_GENERATOR_VARIABLE'

#define BFG_TEAM_RESTRICTED_COUNT BFG_OPEN_RULES_RESTRICTED_2
#define BFG_VAR_TEAM_RESTRICTED_COUNT  0   // Used to set how many restricteds should be allowed

// If this variable is set, a random seed will be generated
// and saved for generating consistent battle factory sets
// randomly. If this is not set, the challenge number + 
// trainer ID will be combined to create the seed which
// *may* fail to produce sufficiently randomised results.
#define BFG_VAR_FACTORY_GENERATOR_SEED 0

#define BFG_FLAG_FRONTIER_FIXED_IV 0 // Flag to enable or disable fixed IVs

// *** Python Scripts ***
#define BFG_PY_LOG_ERRORS   FALSE  // Enable logging for python scripts

// Move Ratings
#define BFG_GENERATE_MOVE_RATINGS   TRUE    // Generate data/battle_frontier/battle_frontier_generator_move_ratings.h

// *** Trainer Mons ***
#define BFG_GENERATE_TRAINER_MONS    TRUE // Generate battle_frontier_generator_trainer_class_mons.h

#define BFG_TM_INCLUDE_MYTHICAL TRUE   // Allow mythical pokemon to be selected
#define BFG_TM_CHECK_RECURSIVE  TRUE   // Check recursively for regional formes

#define BFG_TM_OPTIONS_STANDARD_MIN     6   // Min. Number of mons required before fallback is used
#define BFG_TM_OPTIONS_RESTRICTED_MIN   6   // Min. Number of restricteds required before fallback is used

// Mono-Type Teams
#define BFG_TM_MONOTYPE_MIN_IV  0       // Min. IVs before monotype teams are allowed
#define BFG_TM_MONOTYPE_OPEN    FALSE   // Allow Monotype teams in open rules (Restricteds)
#define BFG_TM_MONOTYPE_CHANCE  8       // Chance for monotype teams to be selected by any trainer

// Special Teams (Limited)
#define BFG_TM_SPECIAL_FORCE            FALSE   // Special mon set force-enabled (for testing)
#define BFG_TM_SPECIAL_MIN_IV           31      // Min. IVs before special mon sets are allowed
#define BFG_TM_SPECIAL_OPEN             FALSE   // Allow special teams in open rules (Restricteds)
#define BFG_TM_SPECIAL_INCLUDE_PREVO    FALSE   // Include pre-evolutions in the selectable mon sets

// General Rule: Selection Chance = 7 * (Number of Classes which can pull this set)

#define BFG_TM_CHANCE_FUTURE_PARADOX    7       // Chance for Future Paradox team to be selected
#define BFG_TM_CHANCE_PAST_PARADOX      7       // Chance for Past Paradox team to be selected
#define BFG_TM_CHANCE_PSEUDO_LEGEND     28      // Chance for Pseudo-legend team to be selected
#define BFG_TM_CHANCE_EEVEELUTION       14      // Chance for Eeveelution team to be selected
#define BFG_TM_CHANCE_FOSSIL            7       // Chance for Fossil teams to be selected
#define BFG_TM_CHANCE_ULTRA_BEAST       7       // Chance for Ultra Beast team to be selected
#define BFG_TM_CHANCE_STARTER           28      // Chance for Starter team to be selected
#define BFG_TM_CHANCE_ALOLA             28      // Chance for Alolan team to be selected
#define BFG_TM_CHANCE_GALAR             14      // Chance for Galarian team to be selected
#define BFG_TM_CHANCE_HISUI             7       // Chance for Hisuian team to be selected


#define BFG_TM_DUMP_TRAINER_DATA   FALSE   // Set to true if you want ingame frontier trainer mon data


// *** Trainers ***

// Comment out if unused

// #define BFG_RANDOM_RANGE_FIXED FALSE    // Fixed value for RANDOM_RANGE()
// #define BFG_RANDOM_CHANCE_FIXED FALSE   // Fixed value for RANDOM_CHANCE()
// #define BFG_RANDOM_BOOL_FIXED FALSE     // Fixed value for RANDOM_BOOL()

#define BFG_RANDOM_STAB_TERA_CHANCE 2   // 1/2 chance for stab tera
#define BFG_RANDOM_TERA_CHANCE 4        // 1/4 chance for non-stab tera

#define BFG_RANDOM_GIGANTAMAX_CHANCE 1  // 1/x Chance for a Pokemon to Gigantamax
#define BFG_RANDOM_DYNAMAX_CHANCE 4     // 1/x Chance for a Pokemon to Dynamax

#define BFG_RANDOM_OFFSET_MIN 0         // Min. Value for RANDOM_OFFSET()
#define BFG_RANDOM_OFFSET_MAX 30        // Max. Value for RANDOM_OFFSET()

// ** Levels **

#define BFG_IV_LVL_TENT 0

// (Optional Fixed BST Ranges for Lvl.50 / Open Level Facilities)
// If you do not wish to use these values, please comment them out :)

// #define BFG_IV_LVL_50 x
// #define BFG_IV_LVL_OPEN 31

#define BFG_BST_LVL_TENT_MIN 200
#define BFG_BST_LVL_TENT_MAX 500

// (Optional Fixed BST Ranges for Lvl.50 / Open Level Facilities)
// Please note, restricted Pokemon do not respect the following values
// If you do not wish to use these values, please comment them out :)

// #define BFG_BST_LVL_50_MIN BFG_BST_MIN
// #define BFG_BST_LVL_50_MAX BFG_BST_MAX

#define BFG_BST_LVL_OPEN_MIN 495
#define BFG_BST_LVL_OPEN_MAX 720

#define BFG_BST_TENT_ALLOW_MEGA FALSE
#define BFG_BST_TENT_ALLOW_GMAX FALSE
#define BFG_BST_TENT_ALLOW_ZMOVE FALSE

#define BFG_FACTORY_EXPERT_CHALLENGE_NUM 7

// *** BASE STATS ***

#define BFG_IV_FIXED 31 // Fixed IVs when 'FLAG_BATTLE_FRONTIER_FIXED_IV' is set

#define BFG_IV_MIN_BST_0 BFG_BST_MIN
#define BFG_IV_MIN_BST_3 180
#define BFG_IV_MIN_BST_6 225
#define BFG_IV_MIN_BST_9 270
#define BFG_IV_MIN_BST_12 315
#define BFG_IV_MIN_BST_15 360
#define BFG_IV_MIN_BST_18 405
#define BFG_IV_MIN_BST_21 450
#define BFG_IV_MIN_BST_MAX 495

#define BFG_IV_MAX_BST_0 BFG_BST_MAX
#define BFG_IV_MAX_BST_3 405
#define BFG_IV_MAX_BST_6 450
#define BFG_IV_MAX_BST_9 495
#define BFG_IV_MAX_BST_12 540
#define BFG_IV_MAX_BST_15 585
#define BFG_IV_MAX_BST_18 630
#define BFG_IV_MAX_BST_21 675
#define BFG_IV_MAX_BST_MAX 720

// Attack Power Scaling

#define BFG_IV_MIN_ATK_0 BFG_ATK_MIN
#define BFG_IV_MIN_ATK_3 5
#define BFG_IV_MIN_ATK_6 10
#define BFG_IV_MIN_ATK_9 15
#define BFG_IV_MIN_ATK_12 20
#define BFG_IV_MIN_ATK_15 30
#define BFG_IV_MIN_ATK_18 40
#define BFG_IV_MIN_ATK_21 50
#define BFG_IV_MIN_ATK_MAX 60

#define BFG_IV_MAX_ATK_0 60
#define BFG_IV_MAX_ATK_3 85
#define BFG_IV_MAX_ATK_6 110
#define BFG_IV_MAX_ATK_9 135
#define BFG_IV_MAX_ATK_12 160
#define BFG_IV_MAX_ATK_15 185
#define BFG_IV_MAX_ATK_18 210
#define BFG_IV_MAX_ATK_21 235
#define BFG_IV_MAX_ATK_MAX 255

// Hidden Ability Scaling

#define BFG_IV_HA_CHANCE_0 32 // 1/32% Chance
#define BFG_IV_HA_CHANCE_3 28 // 1/28
#define BFG_IV_HA_CHANCE_6 24 // 1/24
#define BFG_IV_HA_CHANCE_9 20 // 1/20
#define BFG_IV_HA_CHANCE_12 16 // 1/16
#define BFG_IV_HA_CHANCE_15 12 // 1/12
#define BFG_IV_HA_CHANCE_18 8 // 1/8
#define BFG_IV_HA_CHANCE_21 4 // 1/4
#define BFG_IV_HA_CHANCE_MAX 2 // 1/2

// Always select abilities above iv 'iv' (set to 32 to disable)

#define BFG_IV_ABILITY_ALWAYS_SELECT_ENABLED TRUE

#define BFG_IV_ABILITY_ALWAYS_SELECT_TERRAIN 21
#define BFG_IV_ABILITY_ALWAYS_SELECT_WEATHER 21

#define BFG_IV_ABILITY_ALWAYS_SELECT_WEATHER_BONUS 32 // Disabled

// Custom list of abilities to auto-select
#define BFG_IV_ABILITY_ALWAYS_SELECT_CUSTOM 31
#define BFG_IV_ABILITY_ALWAYS_SELECT_CUSTOM_LIST \
    ABILITY_NEUTRALIZING_GAS, \
    ABILITY_INTIMIDATE, \
    ABILITY_IMPOSTER

// *** SPECIES ***

#define BFG_TEAM_GENERATOR_MON_SELECT_SET_FAILURE_LIMIT 10  // Number of times mon selection can fail consecutively before loosening restrictions
#define BFG_TEAM_GENERATOR_MON_SELECT_STRICT_FAILURE_LIMIT 20  // Number of times mon selection can fail consecutively before loosening restrictions

#define BFG_LVL_50_ALLOW_BANNED_SPECIES FALSE   // Allow banned species (e.g. Kyogre,Groudon) in Frontier Lvl. 50 Mode
#define BFG_LVL_OPEN_ALLOW_BANNED_SPECIES TRUE  // Allow banned species (e.g. Kyogre,Groudon) in Frontier Open Level Mode
#define BFG_LVL_TENT_ALLOW_BANNED_SPECIES FALSE // Allow banned species (e.g. Kyogre,Groudon) in Battle Tent

#define BFG_FORME_CHANCE_PIKACHU 3
#define BFG_FORME_CHANCE_PICHU 2
#define BFG_FORME_CHANCE_TAUROS_PALDEA 2
#define BFG_FORME_CHANCE_UNOWN 2
#define BFG_FORME_CHANCE_CASTFORM 2
#define BFG_FORME_CHANCE_DEOXYS 2
#define BFG_FORME_CHANCE_BURMY_WORMADAM 2
#define BFG_FORME_CHANCE_SHELLOS_GASTRODON 2
#define BFG_FORME_CHANCE_ROTOM 1
#define BFG_FORME_CHANCE_DIALGA 2
#define BFG_FORME_CHANCE_PALKIA 2
#define BFG_FORME_CHANCE_GIRATINA 2
#define BFG_FORME_CHANCE_SHAYMIN 2
#define BFG_FORME_CHANCE_ARCEUS 2
#define BFG_FORME_CHANCE_BASCULIN 2
#define BFG_FORME_CHANCE_DEERLING_SAWSBUCK 2
#define BFG_FORME_CHANCE_TORNADUS_THERIAN 2
#define BFG_FORME_CHANCE_THUNDURUS_THERIAN 2
#define BFG_FORME_CHANCE_LANDORUS_THERIAN 2
#define BFG_FORME_CHANCE_ENAMORUS_THERIAN 2
#define BFG_FORME_CHANCE_KELDEO 2
#define BFG_FORME_CHANCE_GENESECT 2
#define BFG_FORME_CHANCE_GRENINJA 2
#define BFG_FORME_CHANCE_VIVILLON 2
#define BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES 2
#define BFG_FORME_CHANCE_FURFROU 2
#define BFG_FORME_CHANCE_MEOWSTIC 2
#define BFG_FORME_CHANCE_PUMPKABOO_GOURGEIST 2
#define BFG_FORME_CHANCE_ZYGARDE 2
#define BFG_FORME_CHANCE_HOOPA 2
#define BFG_FORME_CHANCE_ORICORIO 2
#define BFG_FORME_CHANCE_ROCKRUFF_LYCANROC 2
#define BFG_FORME_CHANCE_SILVALLY 2
#define BFG_FORME_CHANCE_MINIOR 2
#define BFG_FORME_CHANCE_MAGEARNA 2
#define BFG_FORME_CHANCE_ALCREMIE 2
#define BFG_FORME_CHANCE_INDEEDEE 2
#define BFG_FORME_CHANCE_URSHIFU 2
#define BFG_FORME_CHANCE_BASCULEGION 2
#define BFG_FORME_CHANCE_OINKOLOGNE 2
#define BFG_FORME_CHANCE_MAUSHOLD 2
#define BFG_FORME_CHANCE_SQUAWKABILLY 2
#define BFG_FORME_CHANCE_TATSUGIRI 2
#define BFG_FORME_CHANCE_DUDUNSPARCE 2
#define BFG_FORME_CHANCE_GIMMIGHOUL 2
#define BFG_FORME_CHANCE_OGERPON 2
#define BFG_FORME_CHANCE_URSALUNA 2

#define BFG_FORME_CHANCE_PRIMAL 2
#define BFG_FORME_CHANCE_MEGA 2

#define BFG_FUSION_CHANCE_KYUREM 2
#define BFG_FUSION_CHANCE_NECROZMA 2
#define BFG_FUSION_CHANCE_CALYREX 2

#define BFG_ZMOVE_CHANCE_PIKANIUM_Z 4
#define BFG_ZMOVE_CHANCE_EEVIUM_Z 2
#define BFG_ZMOVE_CHANCE_SNORLIUM_Z 2
#define BFG_ZMOVE_CHANCE_MEWNIUM_Z 2
#define BFG_ZMOVE_CHANCE_DECIDIUM_Z 2
#define BFG_ZMOVE_CHANCE_INCINIUM_Z 2
#define BFG_ZMOVE_CHANCE_PRIMARIUM_Z 2
#define BFG_ZMOVE_CHANCE_LYCANIUM_Z 2
#define BFG_ZMOVE_CHANCE_MIMIKIUM_Z 2
#define BFG_ZMOVE_CHANCE_KOMMONIUM_Z 2
#define BFG_ZMOVE_CHANCE_TAPUNIUM_Z 2
#define BFG_ZMOVE_CHANCE_SOLGANIUM_Z 2
#define BFG_ZMOVE_CHANCE_LUNALIUM_Z 2
#define BFG_ZMOVE_CHANCE_MARSHADIUM_Z 2
#define BFG_ZMOVE_CHANCE_ALORAICHIUM_Z 2
#define BFG_ZMOVE_CHANCE_PIKASHUNIUM_Z 4
#define BFG_ZMOVE_CHANCE_ULTRANECROZIUM_Z 2

#define BFG_ZMOVE_CHANCE_ARCEUS 2   // Use Z-Crystal instead of Plate
#define BFG_ZMOVE_CHANCE_SILVALLY 2 // Use Z-Crystal instead of Memory
#define BFG_ZMOVE_CHANCE_NECROZMA 2 // Use Solganium/Lunalium on Necrozma formes

// Allow custom species banlists
#define BFG_USE_CUSTOM_BANNED_SPECIES TRUE
#if BFG_USE_CUSTOM_BANNED_SPECIES == TRUE
// Custom list of common banned species
#define BFG_COMMON_CUSTOM_BANNED_SPECIES \
    SPECIES_WOBBUFFET, \
    SPECIES_SHEDINJA, \
    SPECIES_SMEARGLE, \
    SPECIES_WYNAUT, \
    SPECIES_UNOWN, \
    SPECIES_NONE,

// Custom list of frontier lvl. 50 banned species
#define BFG_LVL_50_CUSTOM_BANNED_SPECIES \
    BFG_COMMON_CUSTOM_BANNED_SPECIES

// Custom list of frontier open lvl. banned species
#define BFG_LVL_OPEN_CUSTOM_BANNED_SPECIES \
    BFG_COMMON_CUSTOM_BANNED_SPECIES

// Custom list of battle tent banned species
#define BFG_LVL_TENT_CUSTOM_BANNED_SPECIES \
    BFG_COMMON_CUSTOM_BANNED_SPECIES
#endif

// *** STATS ***
#define BFG_STAT_SELECT_RANDOM FALSE
#if BFG_STAT_SELECT_RANDOM == FALSE

#define BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD     FALSE   // Prioritise atk/spatk attack over def/spdef
#define BFG_PRIORITISE_ATK_SPA_OVER_SPE         TRUE    // Prioritise atk/spatk over speed

#define BFG_NATURE_NEG_SPE_BASE     50  // Any mons below this base speed stat will be given 0spe, reducing natures (set to 0 to ignore this value)

#define BFG_EV_METHOD_SIMPLE        0   // Invest in nature-boosted stat, then hp (if def avg. is higher) or speed (if speed is higher than def avg.)
#define BFG_EV_METHOD_HIGHEST_FIRST 1   // Loop over each stat, investing in the highest base stats first (including nature-boosted stat)
#define BFG_EV_METHOD               BFG_EV_METHOD_SIMPLE

#define BFG_EV_HP_OFFSET 13   //  HP selection chance is multiplied by (n * mod) / 10;
                                //  e.g. (80 * 13) / 10 = 104

#define BFG_EV_INVEST_NO_STATS      0   // No EVs at all
#define BFG_EV_INVEST_TWO_STATS     2   // 255/255 will be invested in 2 stats
#define BFG_EV_INVEST_THREE_STATS   3   // 252/252/4 will be invested across 3 stats
#define BFG_EV_INVEST_FIVE_STATS    5   // 252/244/4/4/4 will be invested across 5 stats (wip)

#define BFG_EV_INVEST_NUM_STATS     BFG_EV_INVEST_FIVE_STATS

#define BFG_OPTIMIZE_IVS    TRUE    // If set to true, ivs will be optimised
                                    // i.e. attack and speed ivs will be set
                                    // to 0 if a reducing nature is used

                                    #define BFG_OPTIMISE_IVS_NO_ATTACKS TRUE    // If set to true, the attack stat will
                                            // be set to 0 if the mon does not have
                                            // any physical attacks (and has not 
                                            // previously been set to 0.)

#endif

// *** MOVES *** 

// Number of times 'random' move selection can fail
#define BFG_TEAM_GENERATOR_RANDOM_FAILURE_LIMIT 20

// Number of times 'filtered' move selection can fail
#define BFG_TEAM_GENERATOR_FILTERED_FAILURE_LIMIT 4

#define BFG_TEAM_GENERATOR_MIN_MOVES 1       // Minumum number of moves allowed

#define BFG_MOVE_RATING_LIST_SIZE_ATTACK 64
#define BFG_MOVE_RATING_LIST_SIZE_STATUS 64

#define BFG_MOVE_ALLOW_LEVEL_UP  TRUE   // Allow level-up moves to be used
#define BFG_MOVE_ALLOW_TEACHABLE TRUE   // Allow teachable moves to be used
#define BFG_MOVE_ALLOW_EGG_MOVES TRUE   // Allow egg moves to be used

#define BFG_MOVE_IGNORE_TYPE_COUNT FALSE    // Ignore 1-per-type limit for moves
#define BFG_MOVE_DEFAULT_RATING     60      // Default rating for moves which do not have one
#define BFG_MOVE_QUICK_REPLACE      FALSE
// If this is set to true, the move lookup table
// 'gBattleFrontierMoveStatusAllowSelect' will be used
#define BFG_MOVE_USE_STATUS_ALLOW_LIST TRUE

#define BFG_MOVE_RATING_DEFAULT 0    // Default Rating
#define BFG_MOVE_STAB_MODIFIER 60    // +x to rating for same-type-attack-bonus
#define BFG_MOVE_ABILITY_MODIFIER 60 // +x to rating for ability synergy moves
#define BFG_MOVE_DOUBLES_MODIFIER 30 // +x to rating for spread moves in doubles

// Special Cases for other moves
// Please note, the following special cases bypass the 'Attacks Only' modes.

// Speed Control
#define BFG_MOVE_TRICK_ROOM_SELECTION_CHANCE    4   // Trick Room Selection Chance (Normal)
#define BFG_MOVE_TAILWIND_SELECTION_CHANCE      4   // Tailwind Selection Chance (Normal)

// Unique Attacks / Other
#define BFG_MOVE_SPECIAL_PROTECT_SELECTION_CHANCE   1   // Protect Selection Chance (Speed Boost / Moody)
#define BFG_MOVE_PROTECT_SELECTION_CHANCE           0   // Protect Selection Chance (Speed Boost / Moody)
#define BFG_MOVE_RECOVER_SELECTION_CHANCE           4   // Recovery Selection Chance (Per-Move)
#define BFG_MOVE_WEATHER_BALL_SELECTION_CHANCE      4   // Weather Ball Selection Chance (Weather abilities)
#define BFG_MOVE_FOUL_PLAY_SELECTION_CHANCE         4   // Foul Play Selection Chance (Non-Physical Set)
#define BFG_MOVE_WEATHER_SELECTION_CHANCE           1   // Weather Selection Chance (for relevant ability mons)
#define BFG_MOVE_EXPLODE_SELECTION_CHANCE           28  // Explosion Selection Chance (Per-Move)
#define BFG_MOVE_OHKO_SELECTION_CHANCE              28  // OHKO Move Selection Chance (Bulky mons)

// *** ITEMS ***

// Set any of these values to 32 or above to disable them entirely

#define BFG_ITEM_IV_ALLOW_MEGA      21  // Min. IVs required for Mega Evolution
#define BFG_ITEM_IV_ALLOW_ZMOVE     21  // Min. IVs required for Z-Moves
#define BFG_ITEM_IV_ALLOW_GMAX      21  // Min. IVs required for Gigantamax

// Allow items in different Battle Facilities
// Please note, Megas/Zmoves/Gmax ignore these flags
#define BFG_FACTORY_ALLOW_ITEM TRUE
#define BFG_TENT_ALLOW_ITEM FALSE

#define BFG_NO_ITEM_SELECTION_CHANCE FALSE
#if BFG_NO_ITEM_SELECTION_CHANCE != 1

// Moves required for certain items to be eligible
#define BFG_ITEM_WEAKNESS_POLICY_OFFENSIVE_MOVES_REQUIRED   3
#define BFG_ITEM_MIRROR_HERB_OFFENSIVE_MOVES_REQUIRED       3
#define BFG_ITEM_LIFE_ORB_OFFENSIVE_MOVES_REQUIRED          3
#define BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED            4
#define BFG_ITEM_TOXIC_ORB_MOVES_REQUIRED                   3
#define BFG_ITEM_FLAME_ORB_MOVES_REQUIRED                   3

// Common Items
#define BFG_ITEM_WEAKNESS_POLICY_SELECTION_CHANCE   4
#define BFG_ITEM_SAFETY_GOGGLES_SELECTION_CHANCE    4
#define BFG_ITEM_ASSAULT_VEST_SELECTION_CHANCE      4
#define BFG_ITEM_ROCKY_HELMET_SELECTION_CHANCE      4
#define BFG_ITEM_CLEAR_AMULET_SELECTION_CHANCE      4
#define BFG_ITEM_COVERT_CLOAK_SELECTION_CHANCE      4
#define BFG_ITEM_FOCUS_SASH_SELECTION_CHANCE        4
#define BFG_ITEM_LIFE_ORB_SELECTION_CHANCE          4
#define BFG_ITEM_EVIOLITE_SELECTION_CHANCE          1

// Choice Items
#define BFG_ITEM_CHOICE_SPECS_SELECTION_CHANCE      8
#define BFG_ITEM_CHOICE_SCARF_SELECTION_CHANCE      8
#define BFG_ITEM_CHOICE_BAND_SELECTION_CHANCE       8

// Ability-Specific Items
#define BFG_ITEM_TERRAIN_EXTENDER_SELECTION_CHANCE  16
#define BFG_ITEM_WEATHER_EXTENDER_SELECTION_CHANCE  16
#define BFG_ITEM_ADRENALINE_ORB_SELECTION_CHANCE    8
#define BFG_ITEM_BOOSTER_ENERGY_SELECTION_CHANCE    4
#define BFG_ITEM_FLAME_ORB_SELECTION_CHANCE         1
#define BFG_ITEM_TOXIC_ORB_SELECTION_CHANCE         1

// Move-Specific Items

#define BFG_ITEM_BLUNDER_POLICY_SELECTION_CHANCE    16  // numInaccurate
#define BFG_ITEM_PUNCHING_GLOVE_SELECTION_CHANCE    16  // numPunch
#define BFG_ITEM_ROOM_SERVICE_SELECTION_CHANCE      8   // hasTrickRoom
#define  BFG_ITEM_CHESTO_BERRY_SELECTION_CHANCE      1   // hasRest
#define BFG_ITEM_THROAT_SPRAY_SELECTION_CHANCE      4   // numSound
#define BFG_ITEM_LOADED_DICE_SELECTION_CHANCE       4   // numMultiHit
#define BFG_ITEM_LIGHT_CLAY_SELECTION_CHANCE        4   // numScreens
#define BFG_ITEM_SCOPE_LENS_SELECTION_CHANCE        8   // numCritModifier
#define BFG_ITEM_RAZOR_CLAW_SELECTION_CHANCE        8   // numCritModifier
#define BFG_ITEM_MENTAL_HERB_SELECTION_CHANCE       8   // numStatus
#define BFG_ITEM_MIRROR_HERB_SELECTION_CHANCE       8   // hasFlatter & hasSwagger
#define BFG_ITEM_WHITE_HERB_SELECTION_CHANCE        8   // numStatDrop
#define BFG_ITEM_EJECT_PACK_SELECTION_CHANCE        8   // numStatDrop
#define BFG_ITEM_RAZOR_FANG_SELECTION_CHANCE        1   // hasFling
#define BFG_ITEM_KINGS_ROCK_SELECTION_CHANCE        1   // hasFling
#define BFG_ITEM_POWER_HERB_SELECTION_CHANCE        1   // hasMultiTurn
#define BFG_ITEM_WIDE_LENS_SELECTION_CHANCE         16  // numInaccurate
#define BFG_ITEM_IRON_BALL_SELECTION_CHANCE         16  // hasTrickRoom

#define BFG_ITEM_PROTECTIVE_PADS_SELECTION_CHANCE   32  // numContact

// Species-specific items
#define BFG_ITEM_LIGHT_BALL_SELECTION_CHANCE        1       // Pikachu
#define BFG_ITEM_LEEK_SELECTION_CHANCE              1       // Farfetcd/Galar/Sirfetchd
#define BFG_ITEM_THICK_CLUB_SELECTION_CHANCE        1       // Marowak/Alola
#define BFG_ITEM_LUCKY_PUNCH_SELECTION_CHANCE       FALSE   // Chansey
#define BFG_ITEM_DITTO_POWDER_SELECTION_CHANCE      FALSE   // Ditto
#define BFG_ITEM_DEEP_SEA_SCALE_SELECTION_CHANCE    FALSE   // Gorebyss
#define BFG_ITEM_DEEP_SEA_TOOTH_SELECTION_CHANCE    FALSE   // Huntail
#define BFG_ITEM_SOUL_DEW_SELECTION_CHANCE          8       // Latias/Latios

// Other Items
#define BFG_ITEM_AIR_BALLOON_4X_SELECTION_CHANCE    4
#define BFG_ITEM_AIR_BALLOON_2X_SELECTION_CHANCE    8
#define BFG_ITEM_BLACK_SLUDGE_SELECTION_CHANCE      8

#define BFG_ITEM_ABILITY_SHIELD_SELECTION_CHANCE    8
#define BFG_ITEM_EJECT_BUTTON_SELECTION_CHANCE      16
#define BFG_ITEM_RED_CARD_SELECTION_CHANCE          16

// Type-Specific Items
#define BFG_ITEM_STAB_GEM_SELECTION_CHANCE      8
#define BFG_ITEM_GEM_SELECTION_CHANCE           0

#define BFG_ITEM_STAB_TYPE_SELECTION_CHANCE     8
#define BFG_ITEM_TYPE_SELECTION_CHANCE          0

#define BFG_ITEM_STAB_ZMOVE_SELECTION_CHANCE    8 // Excludes signature Z-Moves
#define BFG_ITEM_ZMOVE_SELECTION_CHANCE         0 // Excludes signature Z-Moves

// Common Berries
#define BFG_ITEM_SITRUS_BERRY_SELECTION_CHANCE          4
#define BFG_ITEM_LUM_BERRY_SELECTION_CHANCE             8
#define BFG_ITEM_LUM_BERRY_PHYSICAL_SELECTION_CHANCE    8   // Physical Attacker (Per Physical Move)
#define BFG_ITEM_RAWST_BERRY_PHYSICAL_SELECTION_CHANCE  8   // Physical Attacker (Per Physical Move)

// Resist / Weakness Berries
#define BFG_ITEM_RESIST_BERRY_4X_SELECTION_CHANCE   4
#define BFG_ITEM_RESIST_BERRY_2X_SELECTION_CHANCE   16

#define BFG_ITEM_STAT_BOOST_BERRY_SELECTION_CHANCE  16
#define BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE       8

// Custom list of items which can be selected, in
// the event that the pokemon has the move 'recycle'.
// A random item from this list will be selected, if
// none of the above berry flags are checked.
#define BFG_RECYCLE_ITEMS_LIST \
    ITEM_MARANGA_BERRY, \
    ITEM_EJECT_BUTTON, \
    ITEM_CUSTAP_BERRY, \
    ITEM_JABOCA_BERRY, \
    ITEM_LANSAT_BERRY, \
    ITEM_STARF_BERRY, \
    ITEM_MICLE_BERRY, \
    ITEM_ROWAP_BERRY, \
    ITEM_CHILAN_BERRY, \
    ITEM_SITRUS_BERRY, \
    ITEM_LUM_BERRY, \
    ITEM_KEE_BERRY, \
    ITEM_RED_CARD

// Custom list of items which can be selected, in 
// addition to the flags set above. A random item 
// from this list will be chosen if none of the 
// above flags are matched.
#define BFG_CUSTOM_ITEMS_LIST \
    BFG_RECYCLE_ITEMS_LIST, \
    ITEM_ABILITY_SHIELD, \
    ITEM_BRIGHT_POWDER, \
    ITEM_ROCKY_HELMET, \
    ITEM_CLEAR_AMULET, \
    ITEM_COVERT_CLOAK, \
    ITEM_FOCUS_BAND, \
    ITEM_QUICK_CLAW, \
    ITEM_KINGS_ROCK, \
    ITEM_SHELL_BELL, \
    ITEM_LEFTOVERS

#endif // BFG_NO_ITEM_SELECTION_CHANCE != 1
#endif // GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
