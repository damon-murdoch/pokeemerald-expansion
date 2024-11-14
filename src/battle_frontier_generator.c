#include "global.h"
#include "battle.h"
#include "random.h"
#include "pokemon.h"
#include "event_data.h"
#include "battle_tent.h"
#include "battle_util.h"
#include "battle_tower.h"
#include "battle_factory.h"
#include "battle_factory_screen.h"
#include "frontier_util.h"
#include "battle_ai_util.h"
#include "battle_frontier_generator.h"
#include "config/battle_frontier_generator.h"

#include "constants/battle_frontier_generator.h"
#include "constants/battle_move_effects.h"
#include "constants/form_change_types.h"
#include "constants/battle_frontier.h"
#include "constants/battle_tent.h"
#include "constants/abilities.h"
#include "constants/trainers.h"
#include "constants/pokemon.h"
#include "constants/battle.h"
#include "constants/moves.h"
#include "constants/items.h"

#include "data/battle_frontier/battle_frontier_generator.h"

#include "data/battle_frontier/battle_frontier_generator_trainer_class_mons.h"
#include "data/battle_frontier/battle_frontier_generator_move_ratings.h"

#include "test/test.h"
#include "item.h"

// *** STATS ***
#define CHECK_EVS(evs,stat) ((evs) & (stat))

// *** MOVES ***

#define CATEGORY(m) (gMovesInfo[m].category)
#define POWER(m) (gMovesInfo[m].power)
#define TYPE(m) (gMovesInfo[m].type)
#define HITS(m) (gMovesInfo[m].strikeCount)

#define HAS_SPEED(n,e) ((gNatureInfo[n].posStat == STAT_SPEED) || (CHECK_EVS(e,F_EV_SPREAD_SPEED)))
#define IS_STAB(s,t) (((gSpeciesInfo[s].types[0]) == (t)) || ((gSpeciesInfo[s].types[1]) == (t)))

#define IS_DYNAMIC_ATTACK(x) (((x) == MOVE_TERA_BLAST) || ((x) == MOVE_PHOTON_GEYSER))

#define IS_SUN_EFFECT(e) ((e == EFFECT_SUNNY_DAY))
#define IS_RAIN_EFFECT(e) ((e == EFFECT_RAIN_DANCE))
#define IS_SAND_EFFECT(e) ((e == EFFECT_SANDSTORM))
#define IS_HAIL_EFFECT(e) ((e == EFFECT_HAIL) || (e == EFFECT_SNOWSCAPE))

#define IS_WEATHER_EFFECT(e) (IS_SUN_EFFECT(e) || IS_RAIN_EFFECT(e) || IS_SAND_EFFECT(e) || IS_HAIL_EFFECT(e))
#define IS_TERRAIN_EFFECT(e) ((e == EFFECT_MISTY_TERRAIN) || (e == EFFECT_GRASSY_TERRAIN) || (e == EFFECT_PSYCHIC_TERRAIN) || (e == EFFECT_ELECTRIC_TERRAIN))

#define IS_SUN_ABILITY(a) ((a == ABILITY_DROUGHT) || (a == ABILITY_DESOLATE_LAND) || (a == ABILITY_ORICHALCUM_PULSE))
#define IS_RAIN_ABILITY(a) ((a == ABILITY_DRIZZLE) || (a == ABILITY_PRIMORDIAL_SEA))
#define IS_SAND_ABILITY(a) ((a == ABILITY_SAND_STREAM) || (a == ABILITY_SAND_SPIT))
#define IS_HAIL_ABILITY(a) ((a == ABILITY_SNOW_WARNING) || (a == ABILITY_DESOLATE_LAND) || (a == ABILITY_ORICHALCUM_PULSE))

#define IS_WEATHER_ABILITY(a) (IS_SUN_ABILITY(a) || IS_RAIN_ABILITY(a) || IS_SAND_ABILITY(a) || IS_HAIL_ABILITY(a))

#define IS_MISTY_ABILITY(a) (a == ABILITY_MISTY_SURGE)
#define IS_GRASSY_ABILITY(a) ((a == ABILITY_GRASSY_SURGE) || (a == ABILITY_SEED_SOWER))
#define IS_PSYCHIC_ABILITY(a) (a == ABILITY_PSYCHIC_SURGE)
#define IS_ELECTRIC_ABILITY(a) (a == ABILITY_ELECTRIC_SURGE)

#define IS_TERRAIN_ABILITY(a) (IS_MISTY_ABILITY(a) || IS_GRASSY_ABILITY(a) || IS_PSYCHIC_ABILITY(a) || IS_ELECTRIC_ABILITY(a))

// Abilities which trigger at the end of each turn
#define IS_END_OF_TURN_ABILITY(a) ((a == ABILITY_MOODY) || (a == ABILITY_POISON_HEAL) || (a == ABILITY_SPEED_BOOST))

#define IS_SPEED_CONTROL_EFFECT(e) (((e) == EFFECT_TRICK_ROOM) || ((e) == EFFECT_TAILWIND))
#define IS_STAT_REDUCING_EFFECT(e) (((e) == MOVE_EFFECT_ATK_MINUS_1) || ((e) == MOVE_EFFECT_DEF_MINUS_1) || ((e) == MOVE_EFFECT_SPD_MINUS_1) ||  ((e) == MOVE_EFFECT_SP_ATK_MINUS_1) || ((e) == MOVE_EFFECT_SP_ATK_MINUS_2) || ((e) == MOVE_EFFECT_V_CREATE) || ((e) == MOVE_EFFECT_ATK_DEF_DOWN) || ((e) == MOVE_EFFECT_DEF_SPDEF_DOWN) || ((e) == MOVE_EFFECT_SP_DEF_MINUS_1) || ((e) == MOVE_EFFECT_SP_DEF_MINUS_2))

// *** TYPE ***
#define IS_TYPE(x,y,type) ((x) == (type) || (y) == (type))
#define IS_FWG(x,y) (IS_TYPE((x),(y),TYPE_FIRE) || IS_TYPE((x),(y),TYPE_WATER) || IS_TYPE((x),(y),TYPE_GRASS))
#define IS_FDS(x,y) (IS_TYPE((x),(y),TYPE_FAIRY) || IS_TYPE((x),(y),TYPE_DRAGON) || IS_TYPE((x),(y),TYPE_STEEL))
#define IS_PGD(x,y) (IS_TYPE((x),(y),TYPE_PSYCHIC) || IS_TYPE((x),(y),TYPE_GHOST) || IS_TYPE((x),(y),TYPE_DARK))

#define GET_TYPE_EFFECTIVENESS(attacking,defending) (sTypeEffectivenessTable[attacking][defending])

// *** ABILITY ***
#define HAS_ABILITY(x,y,ability) ((x) == (ability) || (y) == (ability))
#define IS_ABILITY(x,y,ability) ((x) == (ability) && (y) == ABILITY_NONE)

#define IS_FLYING_OR_LEVITATE(t1,t2,a1,a2) (IS_TYPE((t1),(t2),TYPE_FLYING) || IS_ABILITY((a1),(a2), ABILITY_LEVITATE))

// *** SPECIES ***
#define IS_BASE_SPECIES(x) ((x) == GET_BASE_SPECIES_ID(x))
#define IS_REGIONAL_FORME(s) (((s)->isAlolanForm == TRUE) || ((s)->isGalarianForm == TRUE) || ((s)->isHisuianForm == TRUE) || ((s)->isPaldeanForm))
#define IS_EEVEE(s) ((s) == SPECIES_EEVEE || (s) == SPECIES_VAPOREON || (s) == SPECIES_JOLTEON || (s) == SPECIES_FLAREON || (s) == SPECIES_ESPEON || (s) == SPECIES_UMBREON || (s) == SPECIES_LEAFEON || (s) == SPECIES_GLACEON || (s) == SPECIES_SYLVEON)
#define IS_REGI(s) ((s) == SPECIES_REGIROCK || (s) == SPECIES_REGICE || (s) == SPECIES_REGISTEEL || (s) == SPECIES_REGIDRAGO || (s) == SPECIES_REGIELEKI || (s) == SPECIES_REGIGIGAS)
#define IS_STARTER(s) ( \
    ((s) >= SPECIES_BULBASAUR && (s) <= SPECIES_BLASTOISE) || \
    ((s) >= SPECIES_CHIKORITA && (s) <= SPECIES_FERALIGATR) || \
    ((s) >= SPECIES_TREECKO && (s) <= SPECIES_SWAMPERT) || \
    ((s) >= SPECIES_TURTWIG && (s) <= SPECIES_EMPOLEON) || \
    ((s) >= SPECIES_SNIVY && (s) <= SPECIES_SAMUROTT) || \
    ((s) >= SPECIES_CHESPIN && (s) <= SPECIES_GRENINJA) || \
    ((s) >= SPECIES_ROWLET && (s) <= SPECIES_PRIMARINA) || \
    ((s) >= SPECIES_GROOKEY && (s) <= SPECIES_INTELEON) || \
    ((s) >= SPECIES_SPRIGATITO && (s) <= SPECIES_QUAQUAVAL))

#define HAS_MEGA_EVOLUTION(x) ((x == SPECIES_VENUSAUR) || (x == SPECIES_CHARIZARD) || (x == SPECIES_BLASTOISE) || \
    (x == SPECIES_BEEDRILL) || (x == SPECIES_PIDGEOT) || (x == SPECIES_ALAKAZAM) || (x == SPECIES_SLOWBRO) || \
    (x == SPECIES_GENGAR) || (x == SPECIES_KANGASKHAN) || (x == SPECIES_PINSIR) || (x == SPECIES_GYARADOS) || \
    (x == SPECIES_AERODACTYL) || (x == SPECIES_MEWTWO) || (x == SPECIES_AMPHAROS) || (x == SPECIES_STEELIX) || \
    (x == SPECIES_SCIZOR) || (x == SPECIES_HERACROSS) || (x == SPECIES_HOUNDOOM) || (x == SPECIES_TYRANITAR) || \
    (x == SPECIES_SCEPTILE) || (x == SPECIES_BLAZIKEN) || (x == SPECIES_SWAMPERT) || (x == SPECIES_GARDEVOIR) || \
    (x == SPECIES_SABLEYE) || (x == SPECIES_MAWILE) || (x == SPECIES_AGGRON) || (x == SPECIES_MEDICHAM) || \
    (x == SPECIES_MANECTRIC) || (x == SPECIES_SHARPEDO) || (x == SPECIES_CAMERUPT) || (x == SPECIES_ALTARIA) || \
    (x == SPECIES_BANETTE) || (x == SPECIES_ABSOL) || (x == SPECIES_GLALIE) || (x == SPECIES_SALAMENCE) || \
    (x == SPECIES_METAGROSS) || (x == SPECIES_LATIAS) || (x == SPECIES_LATIOS) || (x == SPECIES_GARCHOMP) || \
    (x == SPECIES_LUCARIO) || (x == SPECIES_ABOMASNOW) || (x == SPECIES_GALLADE) || (x == SPECIES_AUDINO) || \
    (x == SPECIES_DIANCIE) || (x == SPECIES_RAYQUAZA))

#define CHECK_ARCEUS_ZMOVE (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && (properties->allowZMove == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_ARCEUS))
#define CHECK_SILVALLY_ZMOVE ((P_SILVALLY_TYPE_CHANGE_Z_CRYSTAL) && ((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && (properties->allowZMove == TRUE) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_SILVALLY))

// *** ITEM ***
const u16 customItemsList[] = {
    BFG_CUSTOM_ITEMS_LIST, 
    ITEM_NONE // End of list
}; 

const u16 recycleItemsList[] = {
    BFG_RECYCLE_ITEMS_LIST, 
    ITEM_NONE // End of list
};

// *** CONSTANTS ***
#define SPECIES_END 0xFFFF
#define FORME_DEFAULT 0xFF

const u16 fixedIVHiddenAbilityLookup[] = {
    [0] = BFG_IV_HA_CHANCE_0,
    [3] = BFG_IV_HA_CHANCE_3,
    [6] = BFG_IV_HA_CHANCE_6,
    [9] = BFG_IV_HA_CHANCE_9,
    [12] = BFG_IV_HA_CHANCE_12,
    [15] = BFG_IV_HA_CHANCE_15,
    [18] = BFG_IV_HA_CHANCE_18,
    [21] = BFG_IV_HA_CHANCE_21,
    [MAX_PER_STAT_IVS] = BFG_IV_HA_CHANCE_MAX,
};

const u16 fixedIVMinAtkLookup[] = {
    [0] = BFG_IV_MIN_ATK_0,
    [3] = BFG_IV_MIN_ATK_3,
    [6] = BFG_IV_MIN_ATK_6,
    [9] = BFG_IV_MIN_ATK_9,
    [12] = BFG_IV_MIN_ATK_12,
    [15] = BFG_IV_MIN_ATK_15,
    [18] = BFG_IV_MIN_ATK_18,
    [21] = BFG_IV_MIN_ATK_21,
    [MAX_PER_STAT_IVS] = BFG_IV_MIN_ATK_MAX,
};

const u16 fixedIVMaxAtkLookup[] = {
    [0] = BFG_IV_MAX_ATK_0,
    [3] = BFG_IV_MAX_ATK_3,
    [6] = BFG_IV_MAX_ATK_6,
    [9] = BFG_IV_MAX_ATK_9,
    [12] = BFG_IV_MAX_ATK_12,
    [15] = BFG_IV_MAX_ATK_15,
    [18] = BFG_IV_MAX_ATK_18,
    [21] = BFG_IV_MAX_ATK_21,
    [MAX_PER_STAT_IVS] = BFG_IV_MAX_ATK_MAX,
};

const u16 fixedIVMinBSTLookup[] = {
    [0] = BFG_IV_MIN_BST_0,
    [3] = BFG_IV_MIN_BST_3,
    [6] = BFG_IV_MIN_BST_6,
    [9] = BFG_IV_MIN_BST_9,
    [12] = BFG_IV_MIN_BST_12,
    [15] = BFG_IV_MIN_BST_15,
    [18] = BFG_IV_MIN_BST_18,
    [21] = BFG_IV_MIN_BST_21,
    [MAX_PER_STAT_IVS] = BFG_IV_MIN_BST_MAX,
};

const u16 fixedIVMaxBSTLookup [] = {
    [0] = BFG_IV_MAX_BST_0,
    [3] = BFG_IV_MAX_BST_3,
    [6] = BFG_IV_MAX_BST_6,
    [9] = BFG_IV_MAX_BST_9,
    [12] = BFG_IV_MAX_BST_12,
    [15] = BFG_IV_MAX_BST_15,
    [18] = BFG_IV_MAX_BST_18,
    [21] = BFG_IV_MAX_BST_21,
    [MAX_PER_STAT_IVS] = BFG_IV_MAX_BST_MAX,
};

// *** FUNCTIONS ***

// Allow custom species banlists
#if BFG_USE_CUSTOM_BANNED_SPECIES == TRUE

const u16 customBannedSpeciesLvl50[] = {
    BFG_LVL_50_CUSTOM_BANNED_SPECIES
};

const u16 customBannedSpeciesLvlOpen[] = {
    BFG_LVL_OPEN_CUSTOM_BANNED_SPECIES
};

const u16 customBannedSpeciesLvlTent[] = {
    BFG_LVL_TENT_CUSTOM_BANNED_SPECIES
};

#endif

static u8 GetTeamGenerationMethod()
{
    // Get the method for selecting the moves
    u8 method = BFG_TEAM_GENERATION_METHOD;

    #if BFG_VAR_TEAM_GENERATION_METHOD != 0
    if (method == BFG_TEAM_GENERATOR_VARIABLE) 
        method = VarGet(BFG_VAR_TEAM_GENERATION_METHOD);
    #endif

    return method;
}

static bool8 SpeciesValidForFrontierLevel(u16 speciesId) 
{
    u16 i;

    // Get the level mode for the frontier
    u8 lvlMode = GET_LVL_MODE();

    // Switch on level mode
    switch(lvlMode) 
    {
        case FRONTIER_LVL_50: {
            #if BFG_LVL_50_ALLOW_BANNED_SPECIES == FALSE
            if (gSpeciesInfo[speciesId].isFrontierBanned == TRUE)
            {
                return FALSE; // Species banned
            }
            #endif
            #if BFG_USE_CUSTOM_BANNED_SPECIES
            for(i=0; customBannedSpeciesLvl50[i] != SPECIES_NONE; i++)
                if (customBannedSpeciesLvl50[i] == speciesId)
                    return FALSE; // Species banned
            #endif
        }; break;
        case FRONTIER_LVL_OPEN: {
            #if BFG_LVL_OPEN_ALLOW_BANNED_SPECIES == FALSE
            if (gSpeciesInfo[speciesId].isFrontierBanned == TRUE)
            {
                return FALSE; // Species banned
            }
            #endif
            #if BFG_USE_CUSTOM_BANNED_SPECIES
            for(i=0; customBannedSpeciesLvlOpen[i] != SPECIES_NONE; i++)
                if (customBannedSpeciesLvlOpen[i] == speciesId)
                    return FALSE; // Species banned
            #endif
        }; break;
        case FRONTIER_LVL_TENT: {
            #if BFG_LVL_TENT_ALLOW_BANNED_SPECIES == FALSE
            if (gSpeciesInfo[speciesId].isFrontierBanned == TRUE)
            {
                return FALSE; // Species banned
            }
            #endif
            #if BFG_USE_CUSTOM_BANNED_SPECIES
            for(i=0; customBannedSpeciesLvlTent[i] != SPECIES_NONE; i++)
                if (customBannedSpeciesLvlTent[i] == speciesId)
                    return FALSE; // Species banned
            #endif
        }; break;
    }

    return TRUE;
}

u16 GetTrainerClassSpecies(u16 trainerClass)
{
    switch(trainerClass)
    {
        case TRAINER_CLASS_HIKER:
            return gSpeciesListTrainerClassHiker[Random() % SPECIES_LIST_TRAINER_CLASS_HIKER_COUNT];
        case TRAINER_CLASS_PKMN_BREEDER:
            return gSpeciesListTrainerClassPkmnBreeder[Random() % SPECIES_LIST_TRAINER_CLASS_PKMN_BREEDER_COUNT];
        case TRAINER_CLASS_COOLTRAINER:
        case TRAINER_CLASS_COOLTRAINER_2:
            return gSpeciesListTrainerClassCooltrainer[Random() % SPECIES_LIST_TRAINER_CLASS_COOLTRAINER_COUNT];
        case TRAINER_CLASS_BIRD_KEEPER:
            return gSpeciesListTrainerClassBirdKeeper[Random() % SPECIES_LIST_TRAINER_CLASS_BIRD_KEEPER_COUNT];
        case TRAINER_CLASS_SWIMMER_M:
            return gSpeciesListTrainerClassSwimmerM[Random() % SPECIES_LIST_TRAINER_CLASS_SWIMMER_M_COUNT];
        case TRAINER_CLASS_SWIMMER_F:
            return gSpeciesListTrainerClassSwimmerF[Random() % SPECIES_LIST_TRAINER_CLASS_SWIMMER_F_COUNT];
        case TRAINER_CLASS_EXPERT:
            return gSpeciesListTrainerClassExpert[Random() % SPECIES_LIST_TRAINER_CLASS_EXPERT_COUNT];
        case TRAINER_CLASS_BLACK_BELT:
            return gSpeciesListTrainerClassBlackBelt[Random() % SPECIES_LIST_TRAINER_CLASS_BLACK_BELT_COUNT];
        case TRAINER_CLASS_HEX_MANIAC:
            return gSpeciesListTrainerClassHexManiac[Random() % SPECIES_LIST_TRAINER_CLASS_HEX_MANIAC_COUNT];
        case TRAINER_CLASS_AROMA_LADY:
            return gSpeciesListTrainerClassAromaLady[Random() % SPECIES_LIST_TRAINER_CLASS_AROMA_LADY_COUNT];
        case TRAINER_CLASS_RUIN_MANIAC:
            return gSpeciesListTrainerClassRuinManiac[Random() % SPECIES_LIST_TRAINER_CLASS_RUIN_MANIAC_COUNT];
        case TRAINER_CLASS_TUBER_M:
            return gSpeciesListTrainerClassTuberM[Random() % SPECIES_LIST_TRAINER_CLASS_TUBER_M_COUNT];
        case TRAINER_CLASS_TUBER_F:
            return gSpeciesListTrainerClassTuberF[Random() % SPECIES_LIST_TRAINER_CLASS_TUBER_F_COUNT];
        case TRAINER_CLASS_LADY:
            return gSpeciesListTrainerClassLady[Random() % SPECIES_LIST_TRAINER_CLASS_LADY_COUNT];
        case TRAINER_CLASS_BEAUTY:
            return gSpeciesListTrainerClassBeauty[Random() % SPECIES_LIST_TRAINER_CLASS_BEAUTY_COUNT];
        case TRAINER_CLASS_RICH_BOY:
            return gSpeciesListTrainerClassRichBoy[Random() % SPECIES_LIST_TRAINER_CLASS_RICH_BOY_COUNT];
        case TRAINER_CLASS_POKEMANIAC:
            return gSpeciesListTrainerClassPokemaniac[Random() % SPECIES_LIST_TRAINER_CLASS_POKEMANIAC_COUNT];
        case TRAINER_CLASS_GUITARIST:
            return gSpeciesListTrainerClassGuitarist[Random() % SPECIES_LIST_TRAINER_CLASS_GUITARIST_COUNT];
        case TRAINER_CLASS_KINDLER:
            return gSpeciesListTrainerClassKindler[Random() % SPECIES_LIST_TRAINER_CLASS_KINDLER_COUNT];
        case TRAINER_CLASS_CAMPER:
            return gSpeciesListTrainerClassCamper[Random() % SPECIES_LIST_TRAINER_CLASS_CAMPER_COUNT];
        case TRAINER_CLASS_PICNICKER:
            return gSpeciesListTrainerClassPicnicker[Random() % SPECIES_LIST_TRAINER_CLASS_PICNICKER_COUNT];
        case TRAINER_CLASS_BUG_MANIAC:
            return gSpeciesListTrainerClassBugManiac[Random() % SPECIES_LIST_TRAINER_CLASS_BUG_MANIAC_COUNT];
        case TRAINER_CLASS_PSYCHIC:
            return gSpeciesListTrainerClassPsychic[Random() % SPECIES_LIST_TRAINER_CLASS_PSYCHIC_COUNT];
        case TRAINER_CLASS_GENTLEMAN:
            return gSpeciesListTrainerClassGentleman[Random() % SPECIES_LIST_TRAINER_CLASS_GENTLEMAN_COUNT];
        case TRAINER_CLASS_SCHOOL_KID:
            return gSpeciesListTrainerClassSchoolKid[Random() % SPECIES_LIST_TRAINER_CLASS_SCHOOL_KID_COUNT];
        case TRAINER_CLASS_POKEFAN:
            return gSpeciesListTrainerClassPokefan[Random() % SPECIES_LIST_TRAINER_CLASS_POKEFAN_COUNT];
        case TRAINER_CLASS_YOUNGSTER:
            return gSpeciesListTrainerClassYoungster[Random() % SPECIES_LIST_TRAINER_CLASS_YOUNGSTER_COUNT];
        case TRAINER_CLASS_FISHERMAN:
            return gSpeciesListTrainerClassFisherman[Random() % SPECIES_LIST_TRAINER_CLASS_FISHERMAN_COUNT];
        case TRAINER_CLASS_TRIATHLETE:
            return gSpeciesListTrainerClassTriathlete[Random() % SPECIES_LIST_TRAINER_CLASS_TRIATHLETE_COUNT];
        case TRAINER_CLASS_DRAGON_TAMER:
            return gSpeciesListTrainerClassDragonTamer[Random() % SPECIES_LIST_TRAINER_CLASS_DRAGON_TAMER_COUNT];
        case TRAINER_CLASS_NINJA_BOY:
            return gSpeciesListTrainerClassNinjaBoy[Random() % SPECIES_LIST_TRAINER_CLASS_NINJA_BOY_COUNT];
        case TRAINER_CLASS_BATTLE_GIRL:
            return gSpeciesListTrainerClassBattleGirl[Random() % SPECIES_LIST_TRAINER_CLASS_BATTLE_GIRL_COUNT];
        case TRAINER_CLASS_PARASOL_LADY:
            return gSpeciesListTrainerClassParasolLady[Random() % SPECIES_LIST_TRAINER_CLASS_PARASOL_LADY_COUNT];
        case TRAINER_CLASS_SAILOR:
            return gSpeciesListTrainerClassSailor[Random() % SPECIES_LIST_TRAINER_CLASS_SAILOR_COUNT];
        case TRAINER_CLASS_BUG_CATCHER:
            return gSpeciesListTrainerClassBugCatcher[Random() % SPECIES_LIST_TRAINER_CLASS_BUG_CATCHER_COUNT];
        case TRAINER_CLASS_PKMN_RANGER:
            return gSpeciesListTrainerClassPkmnRanger[Random() % SPECIES_LIST_TRAINER_CLASS_PKMN_RANGER_COUNT];
        case TRAINER_CLASS_LASS:
            return gSpeciesListTrainerClassLass[Random() % SPECIES_LIST_TRAINER_CLASS_LASS_COUNT];
        case TRAINER_CLASS_COLLECTOR:
            return gSpeciesListTrainerClassCollector[Random() % SPECIES_LIST_TRAINER_CLASS_COLLECTOR_COUNT];
        default:
            DebugPrintf("Warning: Unhandled trainer class '%d' ...", trainerClass);
        case TRAINER_CLASS_DEFAULT: 
            return gSpeciesListTrainerClassDefault[Random() % SPECIES_LIST_TRAINER_CLASS_DEFAULT_COUNT];
    }
}

u16 GetTrainerClassMega(u16 trainerClass)
{
    switch(trainerClass)
    {
        case TRAINER_CLASS_HIKER:
            return gSpeciesListTrainerClassHikerMega[Random() % SPECIES_LIST_TRAINER_CLASS_HIKER_MEGA_COUNT];
        case TRAINER_CLASS_PKMN_BREEDER:
            return gSpeciesListTrainerClassPkmnBreederMega[Random() % SPECIES_LIST_TRAINER_CLASS_PKMN_BREEDER_MEGA_COUNT];
        case TRAINER_CLASS_COOLTRAINER:
        case TRAINER_CLASS_COOLTRAINER_2:
            return gSpeciesListTrainerClassCooltrainerMega[Random() % SPECIES_LIST_TRAINER_CLASS_COOLTRAINER_MEGA_COUNT];
        case TRAINER_CLASS_BIRD_KEEPER:
            return gSpeciesListTrainerClassBirdKeeperMega[Random() % SPECIES_LIST_TRAINER_CLASS_BIRD_KEEPER_MEGA_COUNT];
        case TRAINER_CLASS_SWIMMER_M:
            return gSpeciesListTrainerClassSwimmerMMega[Random() % SPECIES_LIST_TRAINER_CLASS_SWIMMER_M_MEGA_COUNT];
        case TRAINER_CLASS_SWIMMER_F:
            return gSpeciesListTrainerClassSwimmerFMega[Random() % SPECIES_LIST_TRAINER_CLASS_SWIMMER_F_MEGA_COUNT];
        case TRAINER_CLASS_EXPERT:
            return gSpeciesListTrainerClassExpertMega[Random() % SPECIES_LIST_TRAINER_CLASS_EXPERT_MEGA_COUNT];
        case TRAINER_CLASS_BLACK_BELT:
            return gSpeciesListTrainerClassBlackBeltMega[Random() % SPECIES_LIST_TRAINER_CLASS_BLACK_BELT_MEGA_COUNT];
        case TRAINER_CLASS_HEX_MANIAC:
            return gSpeciesListTrainerClassHexManiacMega[Random() % SPECIES_LIST_TRAINER_CLASS_HEX_MANIAC_MEGA_COUNT];
        case TRAINER_CLASS_AROMA_LADY:
            return gSpeciesListTrainerClassAromaLadyMega[Random() % SPECIES_LIST_TRAINER_CLASS_AROMA_LADY_MEGA_COUNT];
        case TRAINER_CLASS_RUIN_MANIAC:
            return gSpeciesListTrainerClassRuinManiacMega[Random() % SPECIES_LIST_TRAINER_CLASS_RUIN_MANIAC_MEGA_COUNT];
        case TRAINER_CLASS_TUBER_M:
            return gSpeciesListTrainerClassTuberMMega[Random() % SPECIES_LIST_TRAINER_CLASS_TUBER_M_MEGA_COUNT];
        case TRAINER_CLASS_TUBER_F:
            return gSpeciesListTrainerClassTuberFMega[Random() % SPECIES_LIST_TRAINER_CLASS_TUBER_F_MEGA_COUNT];
        case TRAINER_CLASS_LADY:
            return gSpeciesListTrainerClassLadyMega[Random() % SPECIES_LIST_TRAINER_CLASS_LADY_MEGA_COUNT];
        case TRAINER_CLASS_BEAUTY:
            return gSpeciesListTrainerClassBeautyMega[Random() % SPECIES_LIST_TRAINER_CLASS_BEAUTY_MEGA_COUNT];
        case TRAINER_CLASS_RICH_BOY:
            return gSpeciesListTrainerClassRichBoyMega[Random() % SPECIES_LIST_TRAINER_CLASS_RICH_BOY_MEGA_COUNT];
        case TRAINER_CLASS_POKEMANIAC:
            return gSpeciesListTrainerClassPokemaniacMega[Random() % SPECIES_LIST_TRAINER_CLASS_POKEMANIAC_MEGA_COUNT];
        case TRAINER_CLASS_GUITARIST:
            return gSpeciesListTrainerClassGuitaristMega[Random() % SPECIES_LIST_TRAINER_CLASS_GUITARIST_MEGA_COUNT];
        case TRAINER_CLASS_KINDLER:
            return gSpeciesListTrainerClassKindlerMega[Random() % SPECIES_LIST_TRAINER_CLASS_KINDLER_MEGA_COUNT];
        case TRAINER_CLASS_CAMPER:
            return gSpeciesListTrainerClassCamperMega[Random() % SPECIES_LIST_TRAINER_CLASS_CAMPER_MEGA_COUNT];
        case TRAINER_CLASS_PICNICKER:
            return gSpeciesListTrainerClassPicnickerMega[Random() % SPECIES_LIST_TRAINER_CLASS_PICNICKER_MEGA_COUNT];
        case TRAINER_CLASS_BUG_MANIAC:
            return gSpeciesListTrainerClassBugManiacMega[Random() % SPECIES_LIST_TRAINER_CLASS_BUG_MANIAC_MEGA_COUNT];
        case TRAINER_CLASS_PSYCHIC:
            return gSpeciesListTrainerClassPsychicMega[Random() % SPECIES_LIST_TRAINER_CLASS_PSYCHIC_MEGA_COUNT];
        case TRAINER_CLASS_GENTLEMAN:
            return gSpeciesListTrainerClassGentlemanMega[Random() % SPECIES_LIST_TRAINER_CLASS_GENTLEMAN_MEGA_COUNT];
        case TRAINER_CLASS_SCHOOL_KID:
            return gSpeciesListTrainerClassSchoolKidMega[Random() % SPECIES_LIST_TRAINER_CLASS_SCHOOL_KID_MEGA_COUNT];
        case TRAINER_CLASS_POKEFAN:
            return gSpeciesListTrainerClassPokefanMega[Random() % SPECIES_LIST_TRAINER_CLASS_POKEFAN_MEGA_COUNT];
        case TRAINER_CLASS_YOUNGSTER:
            return gSpeciesListTrainerClassYoungsterMega[Random() % SPECIES_LIST_TRAINER_CLASS_YOUNGSTER_MEGA_COUNT];
        case TRAINER_CLASS_FISHERMAN:
            return gSpeciesListTrainerClassFishermanMega[Random() % SPECIES_LIST_TRAINER_CLASS_FISHERMAN_MEGA_COUNT];
        case TRAINER_CLASS_TRIATHLETE:
            return gSpeciesListTrainerClassTriathleteMega[Random() % SPECIES_LIST_TRAINER_CLASS_TRIATHLETE_MEGA_COUNT];
        case TRAINER_CLASS_DRAGON_TAMER:
            return gSpeciesListTrainerClassDragonTamerMega[Random() % SPECIES_LIST_TRAINER_CLASS_DRAGON_TAMER_MEGA_COUNT];
        case TRAINER_CLASS_NINJA_BOY:
            return gSpeciesListTrainerClassNinjaBoyMega[Random() % SPECIES_LIST_TRAINER_CLASS_NINJA_BOY_MEGA_COUNT];
        case TRAINER_CLASS_BATTLE_GIRL:
            return gSpeciesListTrainerClassBattleGirlMega[Random() % SPECIES_LIST_TRAINER_CLASS_BATTLE_GIRL_MEGA_COUNT];
        case TRAINER_CLASS_PARASOL_LADY:
            return gSpeciesListTrainerClassParasolLadyMega[Random() % SPECIES_LIST_TRAINER_CLASS_PARASOL_LADY_MEGA_COUNT];
        case TRAINER_CLASS_SAILOR:
            return gSpeciesListTrainerClassSailorMega[Random() % SPECIES_LIST_TRAINER_CLASS_SAILOR_MEGA_COUNT];
        case TRAINER_CLASS_BUG_CATCHER:
            return gSpeciesListTrainerClassBugCatcherMega[Random() % SPECIES_LIST_TRAINER_CLASS_BUG_CATCHER_MEGA_COUNT];
        case TRAINER_CLASS_PKMN_RANGER:
            return gSpeciesListTrainerClassPkmnRangerMega[Random() % SPECIES_LIST_TRAINER_CLASS_PKMN_RANGER_MEGA_COUNT];
        case TRAINER_CLASS_LASS:
            return gSpeciesListTrainerClassLassMega[Random() % SPECIES_LIST_TRAINER_CLASS_LASS_MEGA_COUNT];
        case TRAINER_CLASS_COLLECTOR:
            return gSpeciesListTrainerClassCollectorMega[Random() % SPECIES_LIST_TRAINER_CLASS_COLLECTOR_MEGA_COUNT];
        default:
            DebugPrintf("Warning: Unhandled trainer class '%d' ...", trainerClass);
        case TRAINER_CLASS_DEFAULT: 
            return gSpeciesListTrainerClassDefaultMega[Random() % SPECIES_LIST_TRAINER_CLASS_DEFAULT_MEGA_COUNT];
    }
}

u16 GetTrainerClassRestricted(u16 trainerClass)
{
    switch(trainerClass)
    {
        case TRAINER_CLASS_HIKER:
            return gSpeciesListTrainerClassHikerRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_HIKER_RESTRICTED_COUNT];
        case TRAINER_CLASS_PKMN_BREEDER:
            return gSpeciesListTrainerClassPkmnBreederRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_PKMN_BREEDER_RESTRICTED_COUNT];
        case TRAINER_CLASS_COOLTRAINER:
        case TRAINER_CLASS_COOLTRAINER_2:
            return gSpeciesListTrainerClassCooltrainerRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_COOLTRAINER_RESTRICTED_COUNT];
        case TRAINER_CLASS_BIRD_KEEPER:
            return gSpeciesListTrainerClassBirdKeeperRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_BIRD_KEEPER_RESTRICTED_COUNT];
        case TRAINER_CLASS_SWIMMER_M:
            return gSpeciesListTrainerClassSwimmerMRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_SWIMMER_M_RESTRICTED_COUNT];
        case TRAINER_CLASS_SWIMMER_F:
            return gSpeciesListTrainerClassSwimmerFRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_SWIMMER_F_RESTRICTED_COUNT];
        case TRAINER_CLASS_EXPERT:
            return gSpeciesListTrainerClassExpertRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_EXPERT_RESTRICTED_COUNT];
        case TRAINER_CLASS_BLACK_BELT:
            return gSpeciesListTrainerClassBlackBeltRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_BLACK_BELT_RESTRICTED_COUNT];
        case TRAINER_CLASS_HEX_MANIAC:
            return gSpeciesListTrainerClassHexManiacRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_HEX_MANIAC_RESTRICTED_COUNT];
        case TRAINER_CLASS_AROMA_LADY:
            return gSpeciesListTrainerClassAromaLadyRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_AROMA_LADY_RESTRICTED_COUNT];
        case TRAINER_CLASS_RUIN_MANIAC:
            return gSpeciesListTrainerClassRuinManiacRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_RUIN_MANIAC_RESTRICTED_COUNT];
        case TRAINER_CLASS_TUBER_M:
            return gSpeciesListTrainerClassTuberMRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_TUBER_M_RESTRICTED_COUNT];
        case TRAINER_CLASS_TUBER_F:
            return gSpeciesListTrainerClassTuberFRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_TUBER_F_RESTRICTED_COUNT];
        case TRAINER_CLASS_LADY:
            return gSpeciesListTrainerClassLadyRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_LADY_RESTRICTED_COUNT];
        case TRAINER_CLASS_BEAUTY:
            return gSpeciesListTrainerClassBeautyRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_BEAUTY_RESTRICTED_COUNT];
        case TRAINER_CLASS_RICH_BOY:
            return gSpeciesListTrainerClassRichBoyRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_RICH_BOY_RESTRICTED_COUNT];
        case TRAINER_CLASS_POKEMANIAC:
            return gSpeciesListTrainerClassPokemaniacRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_POKEMANIAC_RESTRICTED_COUNT];
        case TRAINER_CLASS_GUITARIST:
            return gSpeciesListTrainerClassGuitaristRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_GUITARIST_RESTRICTED_COUNT];
        case TRAINER_CLASS_KINDLER:
            return gSpeciesListTrainerClassKindlerRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_KINDLER_RESTRICTED_COUNT];
        case TRAINER_CLASS_CAMPER:
            return gSpeciesListTrainerClassCamperRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_CAMPER_RESTRICTED_COUNT];
        case TRAINER_CLASS_PICNICKER:
            return gSpeciesListTrainerClassPicnickerRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_PICNICKER_RESTRICTED_COUNT];
        case TRAINER_CLASS_BUG_MANIAC:
            return gSpeciesListTrainerClassBugManiacRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_BUG_MANIAC_RESTRICTED_COUNT];
        case TRAINER_CLASS_PSYCHIC:
            return gSpeciesListTrainerClassPsychicRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_PSYCHIC_RESTRICTED_COUNT];
        case TRAINER_CLASS_GENTLEMAN:
            return gSpeciesListTrainerClassGentlemanRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_GENTLEMAN_RESTRICTED_COUNT];
        case TRAINER_CLASS_SCHOOL_KID:
            return gSpeciesListTrainerClassSchoolKidRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_SCHOOL_KID_RESTRICTED_COUNT];
        case TRAINER_CLASS_POKEFAN:
            return gSpeciesListTrainerClassPokefanRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_POKEFAN_RESTRICTED_COUNT];
        case TRAINER_CLASS_YOUNGSTER:
            return gSpeciesListTrainerClassYoungsterRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_YOUNGSTER_RESTRICTED_COUNT];
        case TRAINER_CLASS_FISHERMAN:
            return gSpeciesListTrainerClassFishermanRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_FISHERMAN_RESTRICTED_COUNT];
        case TRAINER_CLASS_TRIATHLETE:
            return gSpeciesListTrainerClassTriathleteRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_TRIATHLETE_RESTRICTED_COUNT];
        case TRAINER_CLASS_DRAGON_TAMER:
            return gSpeciesListTrainerClassDragonTamerRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_DRAGON_TAMER_RESTRICTED_COUNT];
        case TRAINER_CLASS_NINJA_BOY:
            return gSpeciesListTrainerClassNinjaBoyRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_NINJA_BOY_RESTRICTED_COUNT];
        case TRAINER_CLASS_BATTLE_GIRL:
            return gSpeciesListTrainerClassBattleGirlRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_BATTLE_GIRL_RESTRICTED_COUNT];
        case TRAINER_CLASS_PARASOL_LADY:
            return gSpeciesListTrainerClassParasolLadyRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_PARASOL_LADY_RESTRICTED_COUNT];
        case TRAINER_CLASS_SAILOR:
            return gSpeciesListTrainerClassSailorRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_SAILOR_RESTRICTED_COUNT];
        case TRAINER_CLASS_BUG_CATCHER:
            return gSpeciesListTrainerClassBugCatcherRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_BUG_CATCHER_RESTRICTED_COUNT];
        case TRAINER_CLASS_PKMN_RANGER:
            return gSpeciesListTrainerClassPkmnRangerRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_PKMN_RANGER_RESTRICTED_COUNT];
        case TRAINER_CLASS_LASS:
            return gSpeciesListTrainerClassLassRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_LASS_RESTRICTED_COUNT];
        case TRAINER_CLASS_COLLECTOR:
            return gSpeciesListTrainerClassCollectorRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_COLLECTOR_RESTRICTED_COUNT];
        default:
            DebugPrintf("Warning: Unhandled trainer class '%d' ...", trainerClass);
        case TRAINER_CLASS_DEFAULT: 
            return gSpeciesListTrainerClassDefaultRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_DEFAULT_RESTRICTED_COUNT];
    }
}

static u8 GetNatureFromStats(u8 posStat, u8 negStat) 
{
    u8 i;
    // Loop over the natures
    for(i=0; i<NUM_NATURES; i++) 
    { 
        // Return matching nature (if found)
        if ((gNatureInfo[i].posStat == posStat) && 
        (gNatureInfo[i].negStat == negStat))
            return i;
    }
    // Default (neutral)
    return NATURE_HARDY;
}

static u8 GetSpeciesNature(u16 speciesId) 
{
    // Get the method for selecting the moves
    u8 method = GetTeamGenerationMethod();
    
    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);

    // Switch on team generation method
    switch(method)
    {
        // Filtered Generation Methods
        case BFG_TEAM_GENERATOR_FILTERED:
        case BFG_TEAM_GENERATOR_FILTERED_ATTACKS_ONLY:
        case BFG_TEAM_GENERATOR_FILTERED_RANKING:
        case BFG_TEAM_GENERATOR_FILTERED_RANKING_ATTACKS_ONLY: {

            u8 i; 

            u8 posStat = 0;
            u8 posStatValue = 0;

            u8 negStat = 0;
            u8 negStatValue = 0;

            u16 temp1 = ((species->baseAttack) + RANDOM_OFFSET());
            u16 temp2 = ((species->baseSpAttack) + RANDOM_OFFSET());

            // If both attack and special attack stats match
            if (temp1 == temp2)
            {
                // prioritise special attack
                if (RANDOM_BOOL())
                {
                    negStat = STAT_ATK;
                    negStatValue = species->baseAttack;
                }
                else // Prioritise attack
                {
                    negStat = STAT_SPATK;
                    negStatValue = species->baseSpAttack;
                }
            }
            else if (temp1 > temp2) 
            {
                negStat = STAT_SPATK;
                negStatValue = species->baseSpAttack;
            }
            else // Special attack is greater than attack
            {
                negStat = STAT_ATK;
                negStatValue = species->baseAttack; 
            }

            // If negative speed natures are allowed
            if (BFG_PRIORITISE_ATK_SPA_OVER_SPE && negStatValue > species->baseSpeed) 
            {
                negStat = STAT_SPEED;
                negStatValue = species->baseSpeed;
            }

            // Loop over the stats (pick best stat)
            for(i = STAT_ATK; i < NUM_STATS; i++){
                if (i == negStat)
                    continue; 

                temp1 = (posStatValue + RANDOM_OFFSET());

                switch(i) 
                {
                    case STAT_ATK: {
                        temp2 = ((species->baseAttack) + RANDOM_OFFSET());
                        if ((temp2 > temp1) || ((temp2 == temp1) && (
                            ((posStat == STAT_DEF || posStat == STAT_SPDEF) && BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD) || 
                            (posStat == STAT_SPEED && BFG_PRIORITISE_ATK_SPA_OVER_SPE)
                        ))) 
                        {
                            posStat = STAT_ATK;
                            posStatValue = species->baseAttack;
                        }
                    }; break;
                    case STAT_DEF: {
                        temp2 = ((species->baseDefense) + RANDOM_OFFSET());
                        if ((temp2 > temp1) || ((temp2 == temp1) && (
                            (((posStat == STAT_ATK || posStat == STAT_SPATK) && (BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD == FALSE)) || 
                            (posStat == STAT_SPDEF && RANDOM_BOOL()))
                        ))) 
                        {
                            posStat = STAT_DEF;
                            posStatValue = species->baseDefense;
                        }
                    }; break;
                    case STAT_SPATK: {
                        temp2 = ((species->baseSpAttack) + RANDOM_OFFSET());
                        if ((temp2 > temp1) || ((temp2 == temp1) && (
                            ((posStat == STAT_DEF || posStat == STAT_SPDEF) && BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD) || 
                            (posStat == STAT_SPEED && BFG_PRIORITISE_ATK_SPA_OVER_SPE)
                        ))) 
                        {
                            posStat = STAT_SPATK;
                            posStatValue = species->baseSpAttack;
                        }
                    }; break;
                    case STAT_SPDEF: {
                        temp2 = ((species->baseSpDefense) + RANDOM_OFFSET());
                        if ((temp2 > temp1) || ((temp2 == temp1) && (
                            (((posStat == STAT_ATK || posStat == STAT_SPATK) && (BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD == FALSE)) || 
                            (posStat == STAT_DEF && RANDOM_BOOL()))
                        ))) 
                        {
                            posStat = STAT_SPDEF;
                            posStatValue = species->baseSpDefense;
                        }
                    }; break;
                    case STAT_SPEED: {
                        temp2 = ((species->baseSpeed) + RANDOM_OFFSET());
                        if ((temp2 > temp1) || ((temp2 == temp1) && (
                            ((posStat == STAT_ATK || posStat == STAT_SPATK) && (BFG_PRIORITISE_ATK_SPA_OVER_SPE == FALSE)) || 
                            (posStat == STAT_DEF || posStat == STAT_SPDEF)
                        )))
                        {
                            posStat = STAT_SPEED;
                            posStatValue = species->baseSpeed;
                        }
                    }; break;
                }
            }

            // Return the nature matching that stats (if any)
            // If no matching nature is found, will return 'HARDY'
            return GetNatureFromStats(posStat, negStat);
        }; break;
        // Random / Generic Generation Methods
        default:
            DebugPrintf("Unhandled team generation method: %d, falling back to default method ...", method);
        case BFG_TEAM_GENERATOR_DEFAULT:
        case BFG_TEAM_GENERATOR_RANDOM: {
            return NATURE_HARDY; // Neutral nature
        }; break;
    }
}

static u8 GetSpeciesEVs(u16 speciesId, u8 natureId) 
{

    u8 evs = 0;
    u8 stat1, stat2;

    // Get the method for selecting the moves
    u8 method = GetTeamGenerationMethod();
    
    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);

    switch(method){
        case BFG_TEAM_GENERATOR_FILTERED:
        case BFG_TEAM_GENERATOR_FILTERED_ATTACKS_ONLY:
        case BFG_TEAM_GENERATOR_FILTERED_RANKING:
        case BFG_TEAM_GENERATOR_FILTERED_RANKING_ATTACKS_ONLY: {

            u8 i;
            u16 val1 = 0; 
            u16 val2 = 0; 
            u16 valT, valR;

            const struct Nature * nature = &(gNatureInfo[natureId]);

            // Default Values
            stat1 = 0xFF;
            stat2 = 0xFF;

            for(i = STAT_HP; i < NUM_STATS; i++)
            {
                if (i == nature->negStat)
                    continue;
                switch(i)
                {
                    case STAT_HP:
                        valT = (species->baseHP) + BFG_EV_HP_OFFSET;
                        break;
                    case STAT_ATK:
                        valT = species->baseAttack;
                        break;
                    case STAT_DEF:
                        valT = species->baseDefense;
                        break;
                    case STAT_SPATK:
                        valT = species->baseSpAttack;
                        break;
                    case STAT_SPDEF:
                        valT = species->baseSpDefense;
                        break;
                    case STAT_SPEED:
                        valT = species->baseSpeed;
                        break;
                }

                // For calculating with offset
                valR = (valT + RANDOM_OFFSET());

                // If stat 1 is undefined, or new stat is greater
                if (stat1 == 0xFF || ((val2 > val1) && (valR > (val1 + RANDOM_OFFSET())))) 
                {
                    stat1 = i; 
                    val1 = valT;
                }
                // If stat 2 is undefined, or new stat is greater
                else if (stat2 == 0xFF || ((val2 < val1) && (valR > (val2 + RANDOM_OFFSET())))) 
                {
                    stat2 = i; 
                    val2 = valT;
                }
                // Both stat 1 and stat 2 match
                else if ((val2 == val1) && (valR > (val2 + RANDOM_OFFSET()))) 
                {
                    // Replace stat1
                    if (RANDOM_BOOL()) 
                    {
                        stat1 = i; 
                        val1 = valT;
                    }
                    else // Replace stat2
                    {
                        stat2 = i; 
                        val2 = valT;
                    }
                }
            }
        }; break;
        default: 
            DebugPrintf("Unhandled team generation method: %d, falling back to default method ...", method);
        case BFG_TEAM_GENERATOR_DEFAULT:
        case BFG_TEAM_GENERATOR_RANDOM: {
           stat1 = STAT_HP;
           stat2 = RANDOM_BOOL() ? STAT_DEF : STAT_SPDEF;
        }; break;
    }

    // Apply stat bitmasks to evs
    if (stat1 == STAT_HP || stat2 == STAT_HP)
        evs |= F_EV_SPREAD_HP;
    if (stat1 == STAT_ATK || stat2 == STAT_ATK)
        evs |= F_EV_SPREAD_ATTACK;
    if (stat1 == STAT_DEF || stat2 == STAT_DEF)
        evs |= F_EV_SPREAD_DEFENSE;
    if (stat1 == STAT_SPATK || stat2 == STAT_SPATK)
        evs |= F_EV_SPREAD_SP_ATTACK;
    if (stat1 == STAT_SPDEF || stat2 == STAT_SPDEF)
        evs |= F_EV_SPREAD_SP_DEFENSE;
    if (stat1 == STAT_SPEED || stat2 == STAT_SPEED)
        evs |= F_EV_SPREAD_SPEED;

    return evs;
}

static u8 GetSpreadType(u8 natureId, u8 evs){
    // Spread investment counters
    u8 offensive=0,defensive=0;

    // hp/spe can be used for either, 
    // irrelevant for this calc

    // Check offensive ev stats
    if (CHECK_EVS(evs,F_EV_SPREAD_ATTACK))
        offensive++;
    if (CHECK_EVS(evs,F_EV_SPREAD_SP_ATTACK))
        offensive++;

    // Check defensive ev stats
    if (CHECK_EVS(evs,F_EV_SPREAD_DEFENSE))
        defensive++;
    if (CHECK_EVS(evs,F_EV_SPREAD_SP_DEFENSE))
        defensive++;

    // Compare offensive / defensive evs
    if (offensive > defensive)
        return BFG_SPREAD_TYPE_OFFENSIVE;
    else if (offensive < defensive)
        return BFG_SPREAD_TYPE_DEFENSIVE;

    // Both values match

    // Compare offensive / defensive nature
    if ((gNatureInfo[natureId].posStat == STAT_ATK) || (gNatureInfo[natureId].posStat == STAT_SPATK))
        return BFG_SPREAD_TYPE_OFFENSIVE;
    else if ((gNatureInfo[natureId].posStat == STAT_DEF) || (gNatureInfo[natureId].posStat == STAT_SPDEF))
        return BFG_SPREAD_TYPE_DEFENSIVE;

    // Comparison failed
    return RANDOM_BOOL(); // Coinflip
}

static u8 GetSpreadCategory(u8 natureId, u8 evs){
    // Spread category counters
    u8 physical=0,special=0;

    // Check offensive ev stats
    if (CHECK_EVS(evs,F_EV_SPREAD_ATTACK))
        physical++;
    if (CHECK_EVS(evs,F_EV_SPREAD_SP_ATTACK))
        special++;

    // Compare physical / special evs
    if (physical > special)
        return BFG_SPREAD_CATEGORY_PHYSICAL;
    else if (physical < special)
        return BFG_SPREAD_CATEGORY_SPECIAL;

    // Physical attack nature-boosted, or special is nature-reduced
    if ((gNatureInfo[natureId].posStat == STAT_ATK) || (gNatureInfo[natureId].negStat == STAT_SPATK))
        return BFG_SPREAD_CATEGORY_PHYSICAL;

    // Special attack nature-boosted, or physical is nature-reduced
    if ((gNatureInfo[natureId].posStat == STAT_SPATK) || (gNatureInfo[natureId].negStat == STAT_ATK))
        return BFG_SPREAD_CATEGORY_SPECIAL;

    // Comparison failed
    return BFG_SPREAD_CATEGORY_MIXED; // Mixed nature
}

static void ResetMonMoves(struct Pokemon * mon)
{
    u8 i;
    for(i=0; i<MAX_MON_MOVES; i++)
        SetMonMoveSlot(mon, MOVE_NONE, i);
}

static u8 SetMonMoves(struct Pokemon * mon, u16 moves[MAX_MON_MOVES])
{
    u8 i;
    u8 moveCount = 0;

    ResetMonMoves(mon);

    // Loop over moves list
    for(i=0; i<MAX_MON_MOVES; i++)
        if (moves[i] != MOVE_NONE) // Populate & increment counter if not none
            SetMonMoveSlot(mon, moves[i], moveCount++);

    return moveCount;
}

static bool32 IsAlwaysSelectMove(u32 moveId) 
{
    if (IS_DOUBLES())
        return gBattleFrontierMoveAlwaysSelectDoubles[moveId];
    else // Not doubles
        return gBattleFrontierMoveAlwaysSelectSingles[moveId];
}

static bool32 IsNeverSelectMove(u32 moveId) 
{
    if (IS_DOUBLES())
        return gBattleFrontierMoveNeverSelectDoubles[moveId];
    else // Not doubles
        return gBattleFrontierMoveNeverSelectSingles[moveId];
}

static bool32 IsAllowedStatusMove(u32 moveId)
{
    // Status move allow list enabled
    if (BFG_MOVE_USE_STATUS_ALLOW_LIST)
        return gBattleFrontierMoveStatusAllowSelect[moveId];
    else
        return TRUE; // Assume allowed
}

static bool32 IsIgnoreTypeCountMove(u32 moveId)
{
    if (BFG_MOVE_IGNORE_TYPE_COUNT)
        return TRUE; // Ignore all type limits
    if (CATEGORY(moveId) != DAMAGE_CATEGORY_STATUS)
        return gBattleFrontierMoveIgnoreTypeCount[moveId];
    else
        return TRUE; // Attacks only
}

static bool32 CheckMovePower(u32 moveId, struct GeneratorProperties * properties)
{
    // Move is not a status move
    if (CATEGORY(moveId) != DAMAGE_CATEGORY_STATUS)
    {
        // Get the move power
        u8 power = POWER(moveId);
        if (power == 1)
            power = BFG_MOVE_POWER_SPECIAL;

        // Multi-hit moves
        u8 hits = HITS(moveId);
        if (hits > 1)
            power *= hits; // Apply for each hit

        // If power is NOT in range
        if (!(IN_INCLUSIVE_RANGE(
            fixedIVMinAtkLookup[properties->fixedIV],
            fixedIVMaxAtkLookup[properties->fixedIV],
            power
        )))
            return FALSE; // Out of range
    }

    return TRUE; // In range
}

static u8 GetFrontierMoveType(u32 moveId, u16 abilityId)
{
    // Get the move type
    u8 type = TYPE(moveId);
    switch(abilityId)
    {
        case ABILITY_NORMALIZE: 
            type = TYPE_NORMAL;
            break;
        case ABILITY_AERILATE: 
            if (type == TYPE_NORMAL) 
                type = TYPE_FLYING;
            break;
        case ABILITY_PIXILATE: 
            if (type == TYPE_NORMAL)  
                type = TYPE_FAIRY;
            break;
        case ABILITY_REFRIGERATE: 
            if (type == TYPE_NORMAL) 
                type = TYPE_ICE;
            break;
        case ABILITY_GALVANIZE: 
            if (type == TYPE_NORMAL) 
                type = TYPE_ELECTRIC;
            break;
        case ABILITY_LIQUID_VOICE: 
            if ((gMovesInfo[moveId].soundMove) == TRUE) 
                type = TYPE_WATER;
            break;
    }
    return type;
}

static u16 GetAttackRating(u16 speciesId, u32 moveId, u16 abilityId, u8 type)
{    
    const struct MoveInfo* move = &(gMovesInfo[moveId]);

    // Baseline move rating
    u16 rating = gBattleFrontierAttackRatings[moveId];

    // No rating for move
    if (rating == 0)
    {
        DebugPrintf("Warning: No rating for attack %d ...", moveId);
        rating = BFG_MOVE_DEFAULT_RATING;
    }

    bool8 isStab = IS_STAB(speciesId, type);

    // Abilities
    switch(abilityId)
    {
        case ABILITY_GUTS:
        case ABILITY_TOXIC_BOOST:
            if (moveId == MOVE_FACADE)
                rating += BFG_MOVE_ABILITY_MODIFIER; // Boosted attack when burned/etc.
            break;
        case ABILITY_SNIPER:
        case ABILITY_SUPER_LUCK:
            if ((move->criticalHitStage > 0) || (move->effect == EFFECT_FOCUS_ENERGY))
                rating += BFG_MOVE_ABILITY_MODIFIER; // Natural high crit chance, or focus energy
            break;
        case ABILITY_PUNK_ROCK:
        case ABILITY_LIQUID_VOICE:
            if (move->soundMove == TRUE)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_STEELWORKER:
            if (type == TYPE_STEEL)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_STRONG_JAW: 
            if (move->bitingMove == TRUE)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_MEGA_LAUNCHER: 
            if (move->ballisticMove == TRUE)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_TOUGH_CLAWS: 
            if (move->makesContact == TRUE)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_TECHNICIAN: 
            if ((move->power) <= 60)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_IRON_FIST: 
            if (move->punchingMove == TRUE)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_HUGE_POWER: 
            if ((move->category) == DAMAGE_CATEGORY_PHYSICAL)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_WATER_BUBBLE: 
            if (type == TYPE_WATER)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_PROTEAN: 
        case ABILITY_LIBERO:
            if (!isStab)
                rating += BFG_MOVE_ABILITY_MODIFIER;
            break;
        case ABILITY_AERILATE:
        case ABILITY_PIXILATE:
        case ABILITY_REFRIGERATE:
        case ABILITY_GALVANIZE:
            if (move->type == TYPE_NORMAL)
                rating += BFG_MOVE_ABILITY_MODIFIER;
        break;
    }

    // Move Target
    switch(move->target)
    {
        // Doubles Positive Bonuses
        case MOVE_TARGET_ALL_BATTLERS:
        case MOVE_TARGET_ALLY:
        case MOVE_TARGET_BOTH:
        case MOVE_TARGET_FOES_AND_ALLY:
        case MOVE_TARGET_OPPONENTS_FIELD:
            // Add doubles rating modifier
            rating += BFG_MOVE_DOUBLES_MODIFIER;
        break;
        // Doubles Negative Bonuses
        case MOVE_TARGET_RANDOM: 
            // Subtract doubles rating modifier
            rating -= BFG_MOVE_DOUBLES_MODIFIER;
        break;
    }

    if (isStab)
        // Apply stab boost modifier
        rating += BFG_MOVE_STAB_MODIFIER;

    return rating;
}

#define MACRO_ALWAYS_SELECT \
    isDuplicate = FALSE; \
    for(j = 0; j < moveCount; j++) { \
        if (moves[j] == moveId) { isDuplicate = TRUE; break; } \
    } \
    if (!isDuplicate) { \
        moves[moveCount] = moveId; \
        if ((types[TYPE(moveId)] == BFG_MOVE_TYPE_NONE) && (!(IsIgnoreTypeCountMove(moveId)))) \
            types[TYPE(moveId)] = moveCount; \
        moveCount++; \
        if (moveCount == MAX_MON_MOVES) \
            return SetMonMoves(mon, moves); \
    }

#define MACRO_MOVE_SWITCH \
    switch(moveId) { \
        case MOVE_TRICK_ROOM: { \
            if (IS_DOUBLES() && (!(HAS_SPEED(nature,evs))) && RANDOM_CHANCE(BFG_MOVE_SPECIAL_TRICK_ROOM_DOUBLES_SELECTION_CHANCE)) { \
                MACRO_ALWAYS_SELECT \
            } \
        }; break; \
        case MOVE_TAILWIND: { \
            if (IS_DOUBLES() && HAS_SPEED(nature,evs) && RANDOM_CHANCE(BFG_MOVE_SPECIAL_TAILWIND_DOUBLES_SELECTION_CHANCE)) { \
                MACRO_ALWAYS_SELECT \
            } \
        }; break; \
        case MOVE_ICY_WIND: { \
            if (IS_DOUBLES() && (spreadCategory != BFG_SPREAD_CATEGORY_PHYSICAL) && RANDOM_CHANCE(BFG_MOVE_SPECIAL_ICY_WIND_DOUBLES_SELECTION_CHANCE)) { \
                MACRO_ALWAYS_SELECT \
            } \
        }; break; \
        case MOVE_AURORA_VEIL: { \
            if (IS_HAIL_ABILITY(abilityId) && RANDOM_CHANCE(BFG_MOVE_SPECIAL_AURORA_VEIL_SELECTION_CHANCE)) { \
                MACRO_ALWAYS_SELECT \
            } \
        }; break; \
        case MOVE_FINAL_GAMBIT: { \
            if (CHECK_EVS(evs,F_EV_SPREAD_HP) && RANDOM_CHANCE(BFG_MOVE_SPECIAL_FINAL_GAMBIT_SELECTION_CHANCE)) { \
                MACRO_ALWAYS_SELECT \
            } \
        }; break; \
        case MOVE_BODY_PRESS: { \
            if (CHECK_EVS(evs,F_EV_SPREAD_DEFENSE) && (gNatureInfo[nature].posStat == STAT_DEF) && RANDOM_CHANCE(BFG_MOVE_SPECIAL_BODY_PRESS_SELECTION_CHANCE)) { \
                MACRO_ALWAYS_SELECT \
            } \
        }; break; \
        case MOVE_FOUL_PLAY: { \
            if ((spreadCategory == BFG_SPREAD_CATEGORY_SPECIAL) && RANDOM_CHANCE(BFG_MOVE_SPECIAL_FOUL_PLAY_SELECTION_CHANCE)) { \
                MACRO_ALWAYS_SELECT \
            } \
        }; break; \
        case MOVE_PROTECT: { \
            if (IS_END_OF_TURN_ABILITY(abilityId) && RANDOM_CHANCE(BFG_MOVE_SPECIAL_PROTECT_SELECTION_CHANCE)) { \
                MACRO_ALWAYS_SELECT \
            } \
        }; break; \
        default: { \
            if (IsNeverSelectMove(moveId) || (!(CheckMovePower(moveId, properties)))) continue; \
            if (CATEGORY(moveId) == DAMAGE_CATEGORY_STATUS) { if ((numAllowedStatusMoves < BFG_MOVE_RATING_LIST_SIZE_STATUS) && ((method != BFG_TEAM_GENERATOR_FILTERED_ATTACKS_ONLY) && IsAllowedStatusMove(moveId))) allowedStatusMoves[numAllowedStatusMoves++] = moveId; } \
            else { if ((numAllowedAttackMoves < BFG_MOVE_RATING_LIST_SIZE_ATTACK) && ((spreadCategory == BFG_SPREAD_CATEGORY_MIXED) || (CATEGORY(moveId) == DAMAGE_CATEGORY_PHYSICAL && spreadCategory == BFG_SPREAD_CATEGORY_PHYSICAL) || (CATEGORY(moveId) == DAMAGE_CATEGORY_SPECIAL && spreadCategory == BFG_SPREAD_CATEGORY_SPECIAL))) allowedAttackMoves[numAllowedAttackMoves++] = moveId; } \
        }; break; \
    }

static u8 GetSpeciesMoves(struct Pokemon * mon, u16 speciesId, u8 nature, u8 evs, u8 abilityNum, u16 requiredMove, struct GeneratorProperties * properties) 
{
    u16 i, j, moveIndex;

    // List of moves
    u16 moves[MAX_MON_MOVES] = {
        MOVE_NONE,
        MOVE_NONE,
        MOVE_NONE,
        MOVE_NONE,
    };

    const struct LevelUpMove* levelUpLearnset;
    const u16 * teachableLearnset;

    u16 levelUpMoves = 0;
    u16 teachableMoves = 0;

    #if BFG_MOVE_ALLOW_LEVEL_UP == TRUE
    levelUpLearnset = GetSpeciesLevelUpLearnset(speciesId);
    while(levelUpLearnset[levelUpMoves].move != LEVEL_UP_MOVE_END)
        levelUpMoves++;
    #endif

    #if BFG_MOVE_ALLOW_TEACHABLE == TRUE
    teachableLearnset = GetSpeciesTeachableLearnset(speciesId);
    while(teachableLearnset[teachableMoves] != MOVE_UNAVAILABLE)
        teachableMoves++;
    #endif

    DebugPrintf("%d level up moves, %d teachable moves ...", levelUpMoves, teachableMoves);

    // Duplicate move tracker
    u16 failures = 0;

    // Friendship level
    // This is changed for Frustration
    u8 friendship = FRIENDSHIP_MAX;

    // Number of moves learnt
    u8 moveCount = 0;

    // Current move
    u32 moveId;

    // Get the method for selecting the moves
    u8 method = GetTeamGenerationMethod(); 

    // Switch on selection method
    switch(method) 
    {
        // Random (Fast) Selection
        case BFG_TEAM_GENERATOR_RANDOM: {
            for (i = 0; i < MAX_MON_MOVES; i++)
            {
                DebugPrintf("Selecting move %d ...", i);

                moveId = MOVE_NONE;

                // First move index, and required move is set
                if (i == 0 && requiredMove != MOVE_NONE) 
                    moveId = requiredMove;
                else  // General case
                {
                    // While no move found, and failure limit has not been reached
                    while((moveId == MOVE_NONE) && (failures < BFG_TEAM_GENERATOR_RANDOM_FAILURE_LIMIT)) 
                    {
                        // Sample random move index
                        moveIndex = Random() % (teachableMoves + levelUpMoves);

                        // Teachable learnset
                        if (moveIndex >= levelUpMoves) 
                        {
                            moveIndex %= levelUpMoves;

                            moveId = teachableLearnset[moveIndex];
                        }
                        else // Level-up learnset
                            moveId = levelUpLearnset[moveIndex].move;

                        // Skip banned or over/under-levelled moves
                        if (IsNeverSelectMove(moveId) || (!(CheckMovePower(moveId, properties))))
                        {
                            moveId = MOVE_NONE;
                            failures++;
                            break;
                        }
                        
                        // Check previous moves
                        for(j = 0; j < i; j++) 
                        {
                            if (GetMonData(mon, MON_DATA_MOVE1 + j) == moveId)
                            {
                                moveId = MOVE_NONE;
                                failures++;
                                break;
                            }
                        }

                        // Due to the nature of this algorithm, 
                        // moveAlwaysSelectList is not checked

                        // Move found
                        if (moveId != MOVE_NONE)
                            moveCount++;
                    }
                }

                // Otherwise, left as MOVE_NONE
                
                // Set the move slot data
                SetMonMoveSlot(mon, moveId, i);

                // Frustration is more powerful the
                // lower the pokemon's friendship is.
                if (moveId == MOVE_FRUSTRATION)
                    friendship = 0;
            }
        }; break;
        // Filtered Selection
        case BFG_TEAM_GENERATOR_FILTERED:
        case BFG_TEAM_GENERATOR_FILTERED_ATTACKS_ONLY:
        case BFG_TEAM_GENERATOR_FILTERED_RANKING:
        case BFG_TEAM_GENERATOR_FILTERED_RANKING_ATTACKS_ONLY: {

            // Index of offensive move for each type - Limited to 1 move per 
            // type (excl. moves in 'gBattleFrontierMoveIgnoreTypeCount').
            // Value '0xFF' (BFG_MOVE_TYPE_NONE) indicates no move of type
            u8 types[NUMBER_OF_MON_TYPES] = {
                0xFF,0xFF,0xFF,0xFF,0xFF,
                0xFF,0xFF,0xFF,0xFF,0xFF,
                0xFF,0xFF,0xFF,0xFF,0xFF,
                0xFF,0xFF,0xFF,0xFF,
            };
                
            // Get species ability            
            u16 abilityId = gSpeciesInfo[speciesId].abilities[abilityNum];

            // Get offensive/defensive & physical/special split
            u8 spreadType = GetSpreadType(nature, evs);
            u8 spreadCategory = GetSpreadCategory(nature, evs);

            // Shortlist for allowed attacking moves
            u16 allowedAttackMoves[BFG_MOVE_RATING_LIST_SIZE_ATTACK];
            s32 numAllowedAttackMoves = 0;

            // Shortlist for allowed status moves
            u16 allowedStatusMoves[BFG_MOVE_RATING_LIST_SIZE_STATUS];
            s32 numAllowedStatusMoves = 0;

            // Ensure no double-up moves
            bool8 isDuplicate = FALSE;

            if ((requiredMove != MOVE_NONE))
            {
                moves[moveCount] = requiredMove;
                if ((types[TYPE(requiredMove)] == BFG_MOVE_TYPE_NONE) && (!(IsIgnoreTypeCountMove(requiredMove))))
                    types[TYPE(requiredMove)] = moveCount; // Set type index
                moveCount++;
            }
            
            // STAGE 1: Add always-select moves and build lists

            // Check level-up moves
            for(i=0; i < levelUpMoves; i++)
            {
                moveId = levelUpLearnset[i].move;
                if (IsAlwaysSelectMove(moveId))
                {
                    MACRO_ALWAYS_SELECT
                }
                else // Not always-select
                {
                    MACRO_MOVE_SWITCH
                }
            }

            // Check teachable moves
            for(i=0; i<teachableMoves; i++)
            {
                moveId = teachableLearnset[i];
                if (IsAlwaysSelectMove(moveId))
                {
                    MACRO_ALWAYS_SELECT
                }
                else // Not always-select
                {
                    MACRO_MOVE_SWITCH
                }
            }

            // *** STAGE 2: ADD OTHER MOVES ***

            // Remaining move slots
            u8 remainder = MAX_MON_MOVES - moveCount;

            // At least one remaining slot
            if (remainder > 0)
            {
                u8 attackCount = remainder;
                
                // Reduce number of required attacks, if necessary
                if ((method == BFG_TEAM_GENERATOR_FILTERED) || (method == BFG_TEAM_GENERATOR_FILTERED_RANKING))
                {
                    if (spreadType == BFG_SPREAD_TYPE_OFFENSIVE)
                        attackCount = MIN(remainder, RANDOM_RANGE(3,5));
                    else
                        attackCount = MIN(remainder, RANDOM_RANGE(1,3));
                }

                // Select moves via ranking
                if ((method == BFG_TEAM_GENERATOR_FILTERED_RANKING) || (method == BFG_TEAM_GENERATOR_FILTERED_RANKING_ATTACKS_ONLY))
                {
                    // Attack move indexes
                    u8 start = moveCount;
                    u8 end = moveCount + attackCount;

                    // Move Rating Table
                    u16 rating[MAX_MON_MOVES] = {
                        0, 0, 0, 0
                    };

                    u8 oldType, newType; // Attack type
                    u16 attackRating; // Current move

                    // Loop over allowed attacking moves
                    for(i=0; i<numAllowedAttackMoves; i++)
                    {
                        moveId = allowedAttackMoves[i];
                        
                        // Get move type, accounted for ability
                        newType = GetFrontierMoveType(moveId, abilityId);
                        attackRating = GetAttackRating(speciesId, moveId, abilityId, newType);

                        // Index of same-typed move
                        moveIndex = types[newType];
                        if (moves[moveIndex] == moveId)
                            continue; // Skip duplicate move

                        // If this is not the first move of type, and move is not an ignore type count move
                        if ((moveIndex != BFG_MOVE_TYPE_NONE) && (!(IsIgnoreTypeCountMove(moveId))))
                        {
                            // Existing move has no rating
                            if (rating[moveIndex] == 0)
                                continue; // Cannot be replaced

                            // Rating is greater, or equal/worse and selection chance is met
                            if ((rating[moveIndex] < attackRating) || ((rating[moveIndex] == attackRating) && RANDOM_CHANCE(BFG_MOVE_ACCEPT_EQUAL_MOVE_CHANCE)) || ((rating[moveIndex] > attackRating) && RANDOM_CHANCE(BFG_MOVE_ACCEPT_WORSE_MOVE_CHANCE)))
                            {
                                // Update move, rating
                                moves[moveIndex] = moveId;
                                rating[moveIndex] = attackRating;
                                types[newType] = moveIndex; // Move index
                            }
                        }
                        else // No same-typed moves
                        {
                            // Loop over move indexes
                            for(j=start; j<end; j++)
                            {
                                // Rating is greater, or equal/worse and selection chance is met
                                if ((rating[j] < attackRating) || ((rating[j] == attackRating) && RANDOM_CHANCE(BFG_MOVE_ACCEPT_EQUAL_MOVE_CHANCE)) || ((rating[j] > attackRating) && RANDOM_CHANCE(BFG_MOVE_ACCEPT_WORSE_MOVE_CHANCE)))
                                {
                                    // Replacing existing move
                                    if (moves[j] != MOVE_NONE)
                                    {
                                        oldType = GetFrontierMoveType(moves[j], abilityId);

                                        // Update old type
                                        if (newType != oldType)
                                            types[oldType] = BFG_MOVE_TYPE_NONE;
                                    }
                                    else // Adding new move
                                        moveCount++;

                                    // Update move, rating
                                    moves[j] = moveId;
                                    rating[j] = attackRating;
                                    types[newType] = j; // Move index
                                    break; // Break the loop
                                }
                            }
                        }
                    }
                }
                else // Select moves randomly
                {
                    // Add attacking moves
                    for(i=0; i < attackCount; i++)
                    {
                        // Reset moveId
                        moveId = MOVE_NONE; 

                        // While no move found, and failure limit has not been reached
                        while((moveId == MOVE_NONE) && (failures < BFG_TEAM_GENERATOR_FILTERED_FAILURE_LIMIT)) 
                        {
                            // Sample a random attacking move from the list
                            moveIndex = Random() % numAllowedAttackMoves;
                            moveId = allowedAttackMoves[moveIndex];

                            // Check for previous moves of the same type (Or if move ignores type count)
                            if ((types[TYPE(moveId)] != BFG_MOVE_TYPE_NONE) && (!(IsIgnoreTypeCountMove(moveId))))
                            {
                                moveId = MOVE_NONE;
                                failures++;
                            }
                            else // Does not match previous move
                            {
                                // Check previous moves
                                for(j = 0; j < moveCount; j++)
                                {
                                    // Break if duplicate
                                    if (moves[j] == moveId)
                                    {
                                        moveId = MOVE_NONE;
                                        failures++;
                                        break;
                                    }
                                }
                            }

                            // Move found
                            if (moveId != MOVE_NONE)
                            {
                                moves[moveCount] = moveId;
                                if (!(IsIgnoreTypeCountMove(moveId)))
                                    types[TYPE(moveId)] = moveCount; // Set type index
                                moveCount++;
                            }
                        }
                    }
                }

                // Reset failure limit
                failures = 0;

                // Calculate number of required status moves
                u8 statusCount = moveCount - MAX_MON_MOVES;

                // Add status moves
                for(i=0; i < statusCount; i++)
                {
                    // Reset moveId
                    moveId = MOVE_NONE; 

                    // While no move found, and failure limit has not been reached
                    while((moveId == MOVE_NONE) && (failures < BFG_TEAM_GENERATOR_FILTERED_FAILURE_LIMIT)) 
                    {
                        // Sample a random status move from the list
                        moveIndex = Random() % numAllowedStatusMoves;
                        moveId = allowedStatusMoves[moveIndex];

                        // Check previous moves
                        for(j = 0; j < moveCount; j++)
                        {
                            if (moves[j] == moveId)
                            {
                                moveId = MOVE_NONE;
                                failures++;
                                break;
                            }
                        }

                        // Move found
                        if (moveId != MOVE_NONE)
                            moves[moveCount++] = moveId;
                    }
                }
            }

            // Fill the moveslots for the species
            moveCount = SetMonMoves(mon, moves);
        }; break;
        // Default (Level-Up / Required Move Only)
        default: 
            DebugPrintf("Unhandled team generation method: %d, falling back to default method ...", method);
        case BFG_TEAM_GENERATOR_DEFAULT: {
            // Keeps track of if move slot '0' will be replaced by
            // the required move for the species, if set.
            bool8 needRequiredMove = (requiredMove != MOVE_NONE);
            
            // Loop over all of the moves
            for(i=0; i<MAX_MON_MOVES; i++)
            {
                // Get the currently-selected move for the species
                moveId = GetMonData(mon, MON_DATA_MOVE1 + i);

                // Need required move is true, and current move matches
                if (needRequiredMove && requiredMove == moveId) 
                    needRequiredMove = FALSE; // Move already present

                // Move not none
                if (moveId != MOVE_NONE) 
                {
                    moveCount++; // Increment move count

                    // Special case for frustration
                    if (moveId == MOVE_FRUSTRATION)
                        friendship = 0;
                }
            }

            // Set first index to required move
            if (needRequiredMove)
                SetMonMoveSlot(mon, requiredMove, 0);
        }; break;
    }

    // Update friendship
    SetMonData(mon, MON_DATA_FRIENDSHIP, &friendship);

    return moveCount;
}


bool32 GetSpeciesItemCheckUnique(u16 itemId, u16 * items, u8 itemCount) 
{
    u8 i;
    for(i=0; i < itemCount; i++)
        if (items[i] == itemId)
            return FALSE; // Duplicate itemId
    return TRUE; // Unique itemId
}

#define RETURN_IF_UNIQUE(itemId) \
    if ((itemId != ITEM_NONE) && GetSpeciesItemCheckUnique(itemId, items, itemCount)) \
        return itemId; \


u16 GetSpeciesItem(struct Pokemon * mon, u16 * items, u8 itemCount)
{
    u16 speciesId = GetMonData(mon, MON_DATA_SPECIES);

    u8 abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM);
    u8 natureId = GetNature(mon);

    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);
    const struct Nature * nature = &(gNatureInfo[natureId]);
    const struct MoveInfo * move; 

    u16 i, f;
    u16 itemId, moveId, abilityId;
    
    u8 numPhysical = 0;
    u8 numDynamic = 0;
    u8 numSpecial = 0; 
    u8 numStatus = 0; 
    
    u8 numOffensive, currentType;

    // Move flags
    bool8 hasTrickRoom = FALSE;
    bool8 hasEvolution = FALSE;
    bool8 hasTerrain = FALSE;
    bool8 hasTwoTurn = FALSE; 
    bool8 hasRecycle = FALSE;
    bool8 hasSwagger = FALSE;
    bool8 hasFlatter = FALSE;
    bool8 hasSingleUseMove = FALSE;
    bool8 hasFling = FALSE;
    bool8 hasRest = FALSE;

    // Move Counters
    u8 numCritModifier = 0;
    u8 numInaccurate = 0;
    u8 numMultiHit = 0;
    u8 numStatDrop = 0;
    u8 numScreens = 0;
    u8 numPunch = 0;
    u8 numSound = 0;

    // Weather effect placeholder
    u16 hasWeather = MOVE_NONE;

    // Check for species evolutions
    const struct Evolution * evolutions = GetSpeciesEvolutions(speciesId);
    if (evolutions != NULL)
        hasEvolution = TRUE;

    u8 moveTypeCount[NUMBER_OF_MON_TYPES];

    // Pokemon Weaknesses for use with resist berries
    uq4_12_t typeModifier[NUMBER_OF_MON_TYPES];

    // Loop over all of the (attacking) types
    for(i = 0; i < NUMBER_OF_MON_TYPES; i++) 
    {
        // Initialise move counter
        moveTypeCount[i] = 0;

        // Apply primary type modifier
        typeModifier[i] = uq4_12_multiply(UQ_4_12(1.0), GetTypeModifier(i, species->types[0]));

        // If the species is not a mono-type Pokemon
        if ((species->types[0]) != (species->types[1]))
            typeModifier[i] = uq4_12_multiply(typeModifier[i], GetTypeModifier(i, species->types[1]));
    }

    // Loop over the species moves
    for (i = 0; i < MAX_MON_MOVES; i++) 
    {
        moveId = GetMonData(mon, (MON_DATA_MOVE1 + i));
        move = &(gMovesInfo[moveId]);

        // Set move flags (offensive and status)

        // Move accuracy
        if (move->accuracy != 0 && move->accuracy < 100)
            numInaccurate++;

        // Move forces a switch (no choice items)
        if (moveId == MOVE_FAKE_OUT || moveId == MOVE_FIRST_IMPRESSION || moveId == MOVE_LAST_RESORT)
            hasSingleUseMove = TRUE;
            
        // Sound-based moves
        if (move->soundMove == TRUE)
            numSound++;

        // Status Move
        if (move->category == DAMAGE_CATEGORY_STATUS) 
        {
            // Increment status counter
            numStatus++; 

            // Weather effects
            if IS_RAIN_EFFECT(move->effect)
                hasWeather = MOVE_RAIN_DANCE;
            else if IS_SUN_EFFECT(move->effect)
                hasWeather = MOVE_SUNNY_DAY;
            else if IS_SAND_EFFECT(move->effect)
                hasWeather = MOVE_SANDSTORM;
            else if IS_HAIL_EFFECT(move->effect)
                hasWeather = MOVE_HAIL;
            // Terrain
            else if (IS_TERRAIN_EFFECT(move->effect))
                hasTerrain = TRUE; 

            else // Other cases
            {

                // Other Effects
                switch(move->effect)
                {
                    case EFFECT_LIGHT_SCREEN:
                    case EFFECT_REFLECT:
                    case EFFECT_AURORA_VEIL:
                        numScreens++;
                    break;
                    case EFFECT_FOCUS_ENERGY:
                        numCritModifier++;
                    break;
                    case EFFECT_TWO_TURNS_ATTACK: 
                    case EFFECT_SEMI_INVULNERABLE:
                        hasTwoTurn = TRUE;
                    break;
                    case EFFECT_TRICK_ROOM:
                        hasTrickRoom = TRUE;
                    break;
                    case EFFECT_RECYCLE:
                        hasRecycle = TRUE;
                    break;
                    case EFFECT_FLATTER:
                        hasFlatter = TRUE;
                    break;
                    case EFFECT_SWAGGER:
                        hasSwagger = TRUE;
                    break;
                    case EFFECT_REST:
                        hasRest = TRUE;
                    break;
                }
            }
        } 
        else // Non-Status Move
        {
            // Multi-hit moves
            if (move->effect == EFFECT_MULTI_HIT)
                numMultiHit++;

            // Stat-dropping moves
            if (IS_STAT_REDUCING_EFFECT(move->effect))
                numStatDrop++;

            // Punching moves
            if (move->punchingMove == TRUE)
                numPunch++;

            // High-crit ratio moves
            if (move->criticalHitStage > 0)
                numCritModifier++; 

            // Offensive split-changing attacks
            if (IS_DYNAMIC_ATTACK(moveId))
                numDynamic++; // Increment dynamic counter
            else // General Case
            {
                // Physical move
                if (move->category == DAMAGE_CATEGORY_PHYSICAL)
                {
                    numPhysical++; // Increment physical counter
                }
                else // move->category == DAMAGE_CATEGORY_SPECIAL
                {
                    numSpecial++; // Increment special counter
                }
            }

            // Increment type counter
            moveTypeCount[move->type]++;
        }
    }

    // Get total number of offensive moves
    numOffensive = numPhysical + numSpecial + numDynamic;

    // Get the ability id for the species
    abilityId = species->abilities[abilityNum];

    // No weather moves found
    if (hasWeather != MOVE_NONE)
    {
        // Check weather ability
        if (IS_RAIN_ABILITY(abilityId))
            hasWeather = MOVE_RAIN_DANCE;
        else if (IS_SUN_ABILITY(abilityId))
            hasWeather = MOVE_SUNNY_DAY;
        else if (IS_SAND_ABILITY(abilityId))
            hasWeather = MOVE_SANDSTORM;
        else if (IS_HAIL_ABILITY(abilityId))
            hasWeather = MOVE_HAIL;
    }

    // Loop over the custom items list
    for(i=0; customItemsList[i] != ITEM_NONE; i++)
        ;

    // Length of custom items
    u16 customItemsLength = i;

    // Loop over the recycle items list
    for(i=0; recycleItemsList[i] != ITEM_NONE; i++)
        ;

    // Length of recycle items
    u16 recycleItemsLength = i;

    // Loop until failure limit is reached (or item found)
    for(f=0; f < BFG_ITEM_SELECT_FAILURE_LIMIT; f++) 
    {
        // *** Competitive items with specific use cases ***

        // Power Herb (Multi-turn moves)
        if (hasTwoTurn && RANDOM_CHANCE(BFG_ITEM_POWER_HERB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_POWER_HERB);

        // Eviolite (Non-Fully-Evolved)
        if ((hasRecycle == FALSE) && hasEvolution == TRUE && RANDOM_CHANCE(BFG_ITEM_EVIOLITE_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_EVIOLITE);

        // Booster Energy
        if (((abilityId == ABILITY_PROTOSYNTHESIS) && (abilityId == ABILITY_QUARK_DRIVE)) && RANDOM_CHANCE(BFG_ITEM_BOOSTER_ENERGY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_BOOSTER_ENERGY);

        // Chesto Berry (Has rest)
        if ((hasRest == TRUE) && RANDOM_CHANCE(BFG_ITEM_CHESTO_BERRY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_CHESTO_BERRY);

        // Throat Spray (Sound-based moves)
        for(i=0; (i < numSound); i++)
            if (RANDOM_CHANCE(BFG_ITEM_THROAT_SPRAY_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_THROAT_SPRAY);

        // Mental Herb (Has status moves)
        for(i=0; (i < numStatus); i++)
            if (RANDOM_CHANCE(BFG_ITEM_MENTAL_HERB_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_MENTAL_HERB);

        // Other non-recyclable items
        if (hasRecycle == FALSE)
        {
            // Loaded Dice (Multi-hit moves)
            for(i=0; (i < numMultiHit); i++)
                if (RANDOM_CHANCE(BFG_ITEM_LOADED_DICE_SELECTION_CHANCE))
                    RETURN_IF_UNIQUE(ITEM_LOADED_DICE);

            // Flame Orb (Guts, with at least one Physical attack)
            if (((abilityId == ABILITY_GUTS && (numPhysical + numDynamic) >= BFG_ITEM_FLAME_ORB_MOVES_REQUIRED) || (abilityId == ABILITY_FLARE_BOOST && (numSpecial + numDynamic) >= BFG_ITEM_FLAME_ORB_MOVES_REQUIRED)) && RANDOM_CHANCE(BFG_ITEM_FLAME_ORB_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_FLAME_ORB);

            // Toxic Orb (Toxic Heal / Toxic Boost)
            if (((abilityId == ABILITY_TOXIC_BOOST && (numPhysical + numDynamic) >= BFG_ITEM_TOXIC_ORB_MOVES_REQUIRED) || abilityId == ABILITY_POISON_HEAL) && RANDOM_CHANCE(BFG_ITEM_TOXIC_ORB_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_TOXIC_ORB);

            // Light Clay (Has screens)
            for(i=0; ((i < numScreens)); i++)
                if (RANDOM_CHANCE(BFG_ITEM_LIGHT_CLAY_SELECTION_CHANCE))
                    RETURN_IF_UNIQUE(ITEM_LIGHT_CLAY);

            // Scope Lens (Modified Crit Ratio)
            for(i=0; ((i < numCritModifier)); i++)
            {
                if (RANDOM_CHANCE(BFG_ITEM_SCOPE_LENS_SELECTION_CHANCE)) {
                    RETURN_IF_UNIQUE(ITEM_SCOPE_LENS);
                } else if (RANDOM_CHANCE(BFG_ITEM_RAZOR_CLAW_SELECTION_CHANCE)) {
                    RETURN_IF_UNIQUE(ITEM_RAZOR_CLAW);
                }
            }
        }

        // *** Competitive items with generic use cases ***

        // Focus Sash (No investment in HP/Def/SpDef)
        if ((GetMonData(mon, MON_DATA_HP_EV) == 0) && (GetMonData(mon, MON_DATA_DEF_EV) == 0) && (GetMonData(mon, MON_DATA_SPDEF_EV) == 0) && RANDOM_CHANCE(BFG_ITEM_FOCUS_SASH_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_FOCUS_SASH);

        // Assault Vest (4 offensive moves)
        if ((hasRecycle == FALSE) && (numOffensive == 4) && RANDOM_CHANCE(BFG_ITEM_ASSAULT_VEST_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_ASSAULT_VEST);

        // Choice Items
        if ((hasSingleUseMove == FALSE) && (hasRecycle == FALSE) && ((numPhysical + numDynamic) >= BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_CHOICE_BAND_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_CHOICE_BAND);

        if ((hasSingleUseMove == FALSE) && (hasRecycle == FALSE) && ((numSpecial + numDynamic) >= BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_CHOICE_SPECS_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_CHOICE_SPECS);

        if ((hasSingleUseMove == FALSE) && (hasRecycle == FALSE) && (numOffensive >= BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_CHOICE_SCARF_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_CHOICE_SCARF);

        // Life Orb
        if ((hasRecycle == FALSE) && (numOffensive >= BFG_ITEM_LIFE_ORB_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_LIFE_ORB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_LIFE_ORB);

        // Weakness Policy
        if ((numOffensive >= BFG_ITEM_WEAKNESS_POLICY_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_WEAKNESS_POLICY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_WEAKNESS_POLICY);

        // *** Type-Specific Items ***

        // Loop over the types
        for(i = 0; i < NUMBER_OF_MON_TYPES; i++) 
        {
            // At least one move of this type
            if (moveTypeCount[i] > 0) 
            {
                // Check if move type is the same type as the species
                bool8 isStabType = IS_TYPE(species->types[0], species->types[1], i);

                // Does not have recycle
                if (hasRecycle == FALSE)
                {
                    // Type item (e.g. Silk Scarf, Charcoal)

                    // Is stab type and stab type chance passes, or is not stab type and non-stab type chance passes
                    if ((isStabType && RANDOM_CHANCE(BFG_ITEM_STAB_TYPE_SELECTION_CHANCE)) || (!isStabType && RANDOM_CHANCE(BFG_ITEM_TYPE_SELECTION_CHANCE))) 
                    {                       
                        // Default item id
                        itemId = ITEM_NONE;

                        // Switch on current type
                        switch(i)
                        {
                            case TYPE_NORMAL: itemId = ITEM_SILK_SCARF; break;
                            case TYPE_FIRE: itemId = ITEM_CHARCOAL; break;
                            case TYPE_WATER: itemId = ITEM_MYSTIC_WATER; break;
                            case TYPE_ELECTRIC: itemId = ITEM_MAGNET; break;
                            case TYPE_GRASS: itemId = ITEM_MIRACLE_SEED; break;
                            case TYPE_ICE: itemId = ITEM_NEVER_MELT_ICE; break;
                            case TYPE_FIGHTING: itemId = ITEM_BLACK_BELT; break;
                            case TYPE_POISON: itemId = ITEM_POISON_BARB; break;
                            case TYPE_GROUND: itemId = ITEM_SOFT_SAND; break;
                            case TYPE_FLYING: itemId = ITEM_SHARP_BEAK; break;
                            case TYPE_PSYCHIC: itemId = ITEM_TWISTED_SPOON; break;
                            case TYPE_BUG: itemId = ITEM_SILVER_POWDER; break;
                            case TYPE_ROCK: itemId = ITEM_HARD_STONE; break;
                            case TYPE_GHOST: itemId = ITEM_SPELL_TAG; break;
                            case TYPE_DRAGON: itemId = ITEM_DRAGON_FANG; break;
                            case TYPE_DARK: itemId = ITEM_BLACK_GLASSES; break;
                            case TYPE_STEEL: itemId = ITEM_METAL_COAT; break;
                            case TYPE_FAIRY: itemId = ITEM_FAIRY_FEATHER; break;
                        }
                        
                        // Return if not duplicate
                        RETURN_IF_UNIQUE(itemId);
                    }

                    // Z-move

                    // Z-moves are allowed, and stab type and stab type chance passes, or is not stab type and non-stab type chance passes
                    if (FrontierBattlerCanUseZMove() && ((isStabType && RANDOM_CHANCE(BFG_ITEM_STAB_ZMOVE_SELECTION_CHANCE)) || (!isStabType && RANDOM_CHANCE(BFG_ITEM_ZMOVE_SELECTION_CHANCE))))
                    {                       
                        // Default item id
                        itemId = ITEM_NONE;

                        // Switch on current type
                        switch(i)
                        {
                            case TYPE_NORMAL: itemId = ITEM_NORMALIUM_Z; break;
                            case TYPE_FIRE: itemId = ITEM_FIRIUM_Z; break;
                            case TYPE_WATER: itemId = ITEM_WATERIUM_Z; break;
                            case TYPE_ELECTRIC: itemId = ITEM_ELECTRIUM_Z; break;
                            case TYPE_GRASS: itemId = ITEM_GRASSIUM_Z; break;
                            case TYPE_ICE: itemId = ITEM_ICIUM_Z; break;
                            case TYPE_FIGHTING: itemId = ITEM_FIGHTINIUM_Z; break;
                            case TYPE_POISON: itemId = ITEM_POISONIUM_Z; break;
                            case TYPE_GROUND: itemId = ITEM_GROUNDIUM_Z; break;
                            case TYPE_FLYING: itemId = ITEM_FLYINIUM_Z; break;
                            case TYPE_PSYCHIC: itemId = ITEM_PSYCHIUM_Z; break;
                            case TYPE_BUG: itemId = ITEM_BUGINIUM_Z; break;
                            case TYPE_ROCK: itemId = ITEM_ROCKIUM_Z; break;
                            case TYPE_GHOST: itemId = ITEM_GHOSTIUM_Z; break;
                            case TYPE_DRAGON: itemId = ITEM_DRAGONIUM_Z; break;
                            case TYPE_DARK: itemId = ITEM_DARKINIUM_Z; break;
                            case TYPE_STEEL: itemId = ITEM_STEELIUM_Z; break;
                            case TYPE_FAIRY: itemId = ITEM_FAIRIUM_Z; break;
                        }

                        // Return if not duplicate
                        RETURN_IF_UNIQUE(itemId);
                    }
                }

                // Can be recycled

                // Gem (e.g. Fire Gem) Check
                if ((isStabType && RANDOM_CHANCE(BFG_ITEM_STAB_GEM_SELECTION_CHANCE)) || (!isStabType && RANDOM_CHANCE(BFG_ITEM_GEM_SELECTION_CHANCE)))
                {
                    // Default item id
                    itemId = ITEM_NONE;

                    // Switch on current type
                    switch(i)
                    {
                        case TYPE_NORMAL: itemId = ITEM_NORMAL_GEM; break;
                        case TYPE_FIRE: itemId = ITEM_FIRE_GEM; break;
                        case TYPE_WATER: itemId = ITEM_WATER_GEM; break;
                        case TYPE_ELECTRIC: itemId = ITEM_ELECTRIC_GEM; break;
                        case TYPE_GRASS: itemId = ITEM_GRASS_GEM; break;
                        case TYPE_ICE: itemId = ITEM_ICE_GEM; break;
                        case TYPE_FIGHTING: itemId = ITEM_FIGHTING_GEM; break;
                        case TYPE_POISON: itemId = ITEM_POISON_GEM; break;
                        case TYPE_GROUND: itemId = ITEM_GROUND_GEM; break;
                        case TYPE_FLYING: itemId = ITEM_FLYING_GEM; break;
                        case TYPE_PSYCHIC: itemId = ITEM_PSYCHIC_GEM; break;
                        case TYPE_BUG: itemId = ITEM_BUG_GEM; break;
                        case TYPE_ROCK: itemId = ITEM_ROCK_GEM; break;
                        case TYPE_GHOST: itemId = ITEM_GHOST_GEM; break;
                        case TYPE_DRAGON: itemId = ITEM_DRAGON_GEM; break;
                        case TYPE_DARK: itemId = ITEM_DARK_GEM; break;
                        case TYPE_STEEL: itemId = ITEM_STEEL_GEM; break;
                        case TYPE_FAIRY: itemId = ITEM_FAIRY_GEM; break;
                    }

                    // Return if not duplicate
                    RETURN_IF_UNIQUE(itemId);
                }
            }
        }

        // *** Common Berries ***

        // Lum Berry
        if (RANDOM_CHANCE(BFG_ITEM_LUM_BERRY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_LUM_BERRY);

        // Full bulk invested in at least one defensive stat
        if ((GetMonData(mon,MON_DATA_HP_EV) == 255) || (GetMonData(mon,MON_DATA_DEF_EV) == 255) || (GetMonData(mon,MON_DATA_SPDEF_EV) == 255))
        {
            // Sitrus Berry
            if (RANDOM_CHANCE(BFG_ITEM_SITRUS_BERRY_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_SITRUS_BERRY);

            // Fiwam Berries
            if (RANDOM_CHANCE(BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(gFiwamConfuseLookup[nature->negStat]);
        }

        // *** Resist Berries *** 

        // Random chance to use resist berry
        if (BFG_ITEM_RESIST_BERRY_2X_SELECTION_CHANCE || BFG_ITEM_RESIST_BERRY_4X_SELECTION_CHANCE) 
        {
            // Placeholders
            currentType = TYPE_NONE;
            uq4_12_t currentValue = UQ_4_12(1.0);

            // Loop over the types
            for(i = 0; i < NUMBER_OF_MON_TYPES; i++) 
            {
                // Switch on type modifier
                switch(typeModifier[i]) 
                {
                    case UQ_4_12(2.0): // 2x Weakness
                        // Skip if we have already found a 4x weakness
                        if ((currentValue != UQ_4_12(4.0)) && (RANDOM_CHANCE(BFG_ITEM_RESIST_BERRY_2X_SELECTION_CHANCE))) 
                        {
                            // Update selected type, value
                            currentValue = typeModifier[i];
                            currentType = i;
                        }
                    break;
                    case UQ_4_12(4.0): // 4x Weakness
                        if (RANDOM_CHANCE(BFG_ITEM_RESIST_BERRY_4X_SELECTION_CHANCE)) 
                        {
                            // Update selected type, value
                            currentValue = typeModifier[i];
                            currentType = i;
                        }
                    break;
                }
            }

            // Default item id
            itemId = ITEM_NONE;

            // Switch on type selected
            switch(currentType) 
            {
                case TYPE_NORMAL: itemId = ITEM_CHILAN_BERRY; break;
                case TYPE_FIRE: itemId = ITEM_OCCA_BERRY; break;
                case TYPE_WATER: itemId = ITEM_PASSHO_BERRY; break;
                case TYPE_ELECTRIC: itemId = ITEM_WACAN_BERRY; break;
                case TYPE_GRASS: itemId = ITEM_RINDO_BERRY; break;
                case TYPE_ICE: itemId = ITEM_YACHE_BERRY; break;
                case TYPE_FIGHTING: itemId = ITEM_COBA_BERRY; break;
                case TYPE_POISON: itemId = ITEM_KEBIA_BERRY; break;
                case TYPE_GROUND: itemId = ITEM_SHUCA_BERRY; break;
                case TYPE_FLYING: itemId = ITEM_COBA_BERRY; break;
                case TYPE_PSYCHIC: itemId = ITEM_PAYAPA_BERRY; break;
                case TYPE_BUG: itemId = ITEM_TANGA_BERRY; break;
                case TYPE_ROCK: itemId = ITEM_CHARTI_BERRY; break;
                case TYPE_GHOST: itemId = ITEM_KASIB_BERRY; break;
                case TYPE_DRAGON: itemId = ITEM_HABAN_BERRY; break;
                case TYPE_DARK: itemId = ITEM_COLBUR_BERRY; break;
                case TYPE_STEEL: itemId = ITEM_BABIRI_BERRY; break;
                case TYPE_FAIRY: itemId = ITEM_ROSELI_BERRY; break;
            }

            // Return if not duplicate
            RETURN_IF_UNIQUE(itemId);
        }

        // *** Obscure items with specific use cases ***

        // White Herb (Has stat dropping move)
        for(i=0; ((i < numStatDrop)); i++)
        {
            if (RANDOM_CHANCE(BFG_ITEM_WHITE_HERB_SELECTION_CHANCE)) {
                RETURN_IF_UNIQUE(ITEM_WHITE_HERB);
            }
            else if (RANDOM_CHANCE(BFG_ITEM_EJECT_PACK_SELECTION_CHANCE)) {
                RETURN_IF_UNIQUE(ITEM_EJECT_PACK);
            }
        }

        // Mirror Herb (Has Swagger / Flatter)
        if ((((hasFlatter == TRUE) && (numSpecial >= BFG_ITEM_MIRROR_HERB_OFFENSIVE_MOVES_REQUIRED)) || ((hasSwagger == TRUE) && (numPhysical >= BFG_ITEM_MIRROR_HERB_OFFENSIVE_MOVES_REQUIRED))) && RANDOM_CHANCE(BFG_ITEM_MIRROR_HERB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_MIRROR_HERB);

        // Razor Fang / King's Rock (Fling)
        if (hasFling)
        {
            if (RANDOM_CHANCE(BFG_ITEM_RAZOR_FANG_SELECTION_CHANCE)) {
                RETURN_IF_UNIQUE(ITEM_RAZOR_FANG);
            } else if (RANDOM_CHANCE(BFG_ITEM_KINGS_ROCK_SELECTION_CHANCE)) {
                RETURN_IF_UNIQUE(ITEM_KINGS_ROCK);
            }
        }

        // Wide Lens / Blunder Policy (Inaccurate moves)
        for(i=0; ((i < numInaccurate)); i++)
        {
            if ((hasRecycle == FALSE) && (RANDOM_CHANCE(BFG_ITEM_WIDE_LENS_SELECTION_CHANCE))) {
                RETURN_IF_UNIQUE(ITEM_WIDE_LENS);
            }
            else if (RANDOM_CHANCE(BFG_ITEM_BLUNDER_POLICY_SELECTION_CHANCE)) {
                RETURN_IF_UNIQUE(ITEM_BLUNDER_POLICY);
            }
        }

        // Non-recyclable misc. moves
        if (hasRecycle == FALSE) 
        {
            // Punching Glove (Punching Moves, increased chance with Iron Fist)
            for(i=0; ((i < numPunch)); i++)
                if (RANDOM_CHANCE(BFG_ITEM_PUNCHING_GLOVE_SELECTION_CHANCE))
                    RETURN_IF_UNIQUE(ITEM_PUNCHING_GLOVE);

            // Iron Ball (For trick room Pokemon)
            if (hasTrickRoom && RANDOM_CHANCE(BFG_ITEM_IRON_BALL_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_IRON_BALL);

            // Black Sludge (For poison types)
            if (IS_TYPE(species->types[0], species->types[1], TYPE_POISON) && RANDOM_CHANCE(BFG_ITEM_BLACK_SLUDGE_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_BLACK_SLUDGE);

            // Terrain Extender (Terrain Moves / Abilities)
            if ((hasTerrain == TRUE || IS_TERRAIN_ABILITY(abilityId)) && RANDOM_CHANCE(BFG_ITEM_TERRAIN_EXTENDER_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_TERRAIN_EXTENDER);

            // Weather Extending Items (Weather-Specific Moves/Abilities)
            if ((hasWeather != MOVE_NONE) && RANDOM_CHANCE(BFG_ITEM_WEATHER_EXTENDER_SELECTION_CHANCE)) 
            {
                // Default item id
                itemId = ITEM_NONE;

                switch(hasWeather)
                {
                    case MOVE_RAIN_DANCE:
                        itemId = ITEM_DAMP_ROCK; 
                    break; 
                    case MOVE_SUNNY_DAY:
                        itemId = ITEM_HEAT_ROCK;
                    break;
                    case MOVE_SANDSTORM:
                        itemId = ITEM_SMOOTH_ROCK;
                    break;
                    case MOVE_HAIL:
                        itemId = ITEM_ICY_ROCK;
                    break;
                }

                // Return if not duplicate
                RETURN_IF_UNIQUE(itemId);
            }
        }

        // Room Service (For trick room Pokemon)
        if (hasTrickRoom && RANDOM_CHANCE(BFG_ITEM_ROOM_SERVICE_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_ROOM_SERVICE);

        // Air Balloon
        if ((abilityId != ABILITY_LEVITATE) &&
            // Different odds for both 2x and 4x ground weaknesses, exclude levitating Pokemon
            ((typeModifier[TYPE_GROUND] == UQ_4_12(2.0) && (RANDOM_CHANCE(BFG_ITEM_AIR_BALLOON_2X_SELECTION_CHANCE))) || 
            (typeModifier[TYPE_GROUND] == UQ_4_12(4.0) && (RANDOM_CHANCE(BFG_ITEM_AIR_BALLOON_4X_SELECTION_CHANCE)))))
            RETURN_IF_UNIQUE(ITEM_AIR_BALLOON);

        // Adrenaline Orb (Defiant / Competitive)
        if (((abilityId == ABILITY_DEFIANT) || (abilityId == ABILITY_COMPETITIVE)) && RANDOM_CHANCE(BFG_ITEM_ADRENALINE_ORB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_ADRENALINE_ORB);

        // Stat Boosting Berries
        if ((itemId != ITEM_NONE) && RANDOM_CHANCE(BFG_ITEM_STAT_BOOST_BERRY_SELECTION_CHANCE)) 
        {
            // Default item id
            itemId = ITEM_NONE;

            // Get the stat boosting berry for the nature-boosted stat
            switch(nature->posStat) 
            {
                case STAT_ATK: 
                    itemId = ITEM_LIECHI_BERRY; 
                break;
                case STAT_DEF: 
                    itemId = ITEM_GANLON_BERRY;
                break;
                case STAT_SPATK:
                    itemId = ITEM_PETAYA_BERRY;
                break;
                case STAT_SPDEF: 
                    itemId = ITEM_APICOT_BERRY;
                break;
                case STAT_SPEED: 
                    itemId = ITEM_SALAC_BERRY;
                break;
            }

            // Return if not duplicate
            RETURN_IF_UNIQUE(itemId);
        }
    }

    // *** Fallback (Custom Items List) ***

    if (hasRecycle) // Use recyclable list if has recycle is true
        itemId = recycleItemsList[Random() % recycleItemsLength];
    else // Otherwise use normal custom items list
        itemId = customItemsList[Random() % customItemsLength];

    // Return if not duplicate
    RETURN_IF_UNIQUE(itemId);

    // Otherwise, no item found
    return ITEM_NONE;
}

bool32 GenerateTrainerPokemon(struct Pokemon * mon, u16 speciesId, u8 formeIndex, u16 move, u16 item, struct GeneratorProperties * properties)
{
    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);
    const struct FormChange * formChanges;

    // Gigantamax true/false
    bool8 gmaxFactor = FALSE;

    u8 evs, nature, abilityNum, moveCount;

    // Forme ID placeholder
    u16 formeId = speciesId;

    // Forme is not default
    if (formeIndex != FORME_DEFAULT) 
    {
        // Get the species form change table
        formChanges = GetSpeciesFormChanges(speciesId);

        // If the forme change is Gigantamax, set gigantamax flag to true
        if (formChanges[formeIndex].method == FORM_CHANGE_BATTLE_GIGANTAMAX)
            gmaxFactor = TRUE;

        // Get the forme change target species
        formeId = formChanges[formeIndex].targetSpecies;
    }

    // Calculate species nature, evs
    nature = GetSpeciesNature(formeId);
    evs = GetSpeciesEVs(formeId, nature);

    // Place the chosen pokemon into the trainer's party
    CreateMonWithEVSpreadNatureOTID(
        mon, speciesId, (properties->level), 
        nature, (properties->fixedIV), evs, (properties->otID)
    );

    // If this species has a hidden ability
    if (
        ((species->abilities[1] != ABILITY_NONE) && 
        (species->abilities[2] != ABILITY_NONE)) && 
        RANDOM_CHANCE(fixedIVHiddenAbilityLookup[properties->fixedIV])
    ) {
        abilityNum = 3; // Hidden ability index
        SetMonData(mon, MON_DATA_ABILITY_NUM, &abilityNum);
    }

    // No forme change
    if (formeId == speciesId) 
        abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM);
    else // Forme change
        abilityNum = 0;

    // Set held item to required item
    SetMonData(mon, MON_DATA_HELD_ITEM, &item);

    // Set the gigantamax flag
    SetMonData(mon, MON_DATA_GIGANTAMAX_FACTOR, &gmaxFactor);

    // Give the chosen pokemon its specified moves.
    // Returns FRIENDSHIP_MAX unless the moveset
    // contains 'FRUSTRATION'. 
    moveCount = GetSpeciesMoves(mon, formeId, nature, evs, abilityNum, move, properties);
    
    DebugPrintf("Moves found: %d ...", moveCount);

    // Meets the minimum number of moves to accept
    if (moveCount >= BFG_TEAM_GENERATOR_MINIMUM) 
        return TRUE;

    // Generation failed
    return FALSE;
}

bool32 GenerateTrainerPokemonHandleForme(struct Pokemon * mon, u16 speciesId, struct GeneratorProperties * properties)
{
    u8 i;

    // Alt. Forme (e.g. mega, ultra burst)
    u8 forme = FORME_DEFAULT; // Default

    // Move / item placeholder
    u16 move = MOVE_NONE;
    u16 item = ITEM_NONE;

    u16 bst = GetTotalBaseStat(speciesId);

    // Get species forme change table
    const struct FormChange * formChanges = GetSpeciesFormChanges(speciesId);
    if (formChanges != NULL) 
    {
        DebugPrintf("Checking for megas/z/other formes ...");
    
        // Switch on the species
        switch(speciesId) 
        {
            case SPECIES_PIKACHU: {
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_PIKANIUM_Z))
                {
                    properties->allowZMove = FALSE;
                    
                    move = MOVE_VOLT_TACKLE;
                    item = ITEM_PIKANIUM_Z;
                }
                else // Z-Move not selected
                {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_PIKACHU))
                        speciesId = RANDOM_RANGE(SPECIES_PIKACHU_COSPLAY, SPECIES_PICHU_SPIKY_EARED);

                    // Hat Pikachu-Exclusive Z-Move
                    if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE) && IN_INCLUSIVE_RANGE(SPECIES_PIKACHU_ORIGINAL,SPECIES_PIKACHU_WORLD,speciesId) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_PIKASHUNIUM_Z)) 
                    {
                        properties->allowZMove = FALSE;
                        
                        move = MOVE_THUNDERBOLT;
                        item = ITEM_PIKASHUNIUM_Z;
                    }
                    else if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_LIGHT_BALL_SELECTION_CHANCE))
                        item = ITEM_LIGHT_BALL; 
                }
            }; break;
            case SPECIES_PICHU: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_PICHU))
                    speciesId = SPECIES_PICHU_SPIKY_EARED;
            }; break;
            case SPECIES_TAUROS: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_TAUROS_PALDEA))
                    speciesId = RANDOM_RANGE(SPECIES_TAUROS_PALDEAN_COMBAT_BREED,SPECIES_WOOPER_PALDEAN);
            }; break;
            case SPECIES_UNOWN: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_UNOWN))
                    speciesId = RANDOM_RANGE(SPECIES_UNOWN_B, SPECIES_CASTFORM_SUNNY);
            }; break;
            case SPECIES_CASTFORM: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_CASTFORM))
                    speciesId = RANDOM_RANGE(SPECIES_CASTFORM_SUNNY,SPECIES_DEOXYS_ATTACK);
            }; break;
            case SPECIES_DEOXYS: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_DEOXYS))
                    speciesId = RANDOM_RANGE(SPECIES_DEOXYS_ATTACK, SPECIES_BURMY_SANDY_CLOAK);
            }; break;
            case SPECIES_BURMY: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_BURMY_WORMADAM))
                    speciesId = RANDOM_RANGE(SPECIES_BURMY_SANDY_CLOAK, SPECIES_WORMADAM_SANDY_CLOAK);
            }; break;
            case SPECIES_WORMADAM: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_BURMY_WORMADAM))
                    speciesId = RANDOM_RANGE(SPECIES_WORMADAM_SANDY_CLOAK, SPECIES_CHERRIM_SUNSHINE);
            }; break;
            case SPECIES_SHELLOS: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_SHELLOS_GASTRODON))
                    speciesId = SPECIES_SHELLOS_EAST_SEA;
            }; break;
            case SPECIES_GASTRODON: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_SHELLOS_GASTRODON))
                    speciesId = SPECIES_GASTRODON_EAST_SEA;
            }; break;
            case SPECIES_ROTOM: {
                if ((440 <= (properties->minBST)) || ((520 <= (properties->maxBST)) && RANDOM_CHANCE(BFG_FORME_CHANCE_ROTOM)))
                {
                    // Forced to select if 440 is less than Min. BST, random chance otherwise
                    speciesId = RANDOM_RANGE(SPECIES_ROTOM_HEAT, SPECIES_DIALGA_ORIGIN);
                    switch(speciesId) 
                    {
                        case SPECIES_ROTOM_HEAT: move = MOVE_OVERHEAT; break;
                        case SPECIES_ROTOM_WASH: move = MOVE_HYDRO_PUMP; break;
                        case SPECIES_ROTOM_FROST: move = MOVE_BLIZZARD; break;
                        case SPECIES_ROTOM_FAN: move = MOVE_AIR_SLASH; break;
                        case SPECIES_ROTOM_MOW: move = MOVE_LEAF_STORM; break;
                    }
                }
            }; break;
            case SPECIES_DIALGA: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_DIALGA))
                    speciesId = SPECIES_DIALGA_ORIGIN;
            }; break;
            case SPECIES_PALKIA: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_PALKIA))
                    speciesId = SPECIES_PALKIA_ORIGIN;
            }; break;
            case SPECIES_GIRATINA: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_GIRATINA))
                    speciesId = SPECIES_GIRATINA_ORIGIN;
            }; break;
            case SPECIES_SHAYMIN: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_SHAYMIN))
                    speciesId = SPECIES_SHAYMIN_SKY;
            }; break;
            case SPECIES_ARCEUS: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_ARCEUS)) 
                {
                    speciesId = RANDOM_RANGE(SPECIES_ARCEUS_FIGHTING, SPECIES_BASCULIN_BLUE_STRIPED);
                    switch(speciesId) 
                    {
                        case SPECIES_ARCEUS_FIGHTING: item = CHECK_ARCEUS_ZMOVE ? ITEM_FIGHTINIUM_Z : ITEM_FIST_PLATE; if (item == ITEM_FIGHTINIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_FLYING: item = CHECK_ARCEUS_ZMOVE ? ITEM_FLYINIUM_Z : ITEM_SKY_PLATE; if (item == ITEM_FLYINIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_POISON: item = CHECK_ARCEUS_ZMOVE ? ITEM_POISONIUM_Z : ITEM_TOXIC_PLATE; if (item == ITEM_POISONIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_GROUND: item = CHECK_ARCEUS_ZMOVE ? ITEM_GROUNDIUM_Z : ITEM_EARTH_PLATE; if (item == ITEM_GROUNDIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_ROCK: item = CHECK_ARCEUS_ZMOVE ? ITEM_ROCKIUM_Z : ITEM_STONE_PLATE; if (item == ITEM_ROCKIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_BUG: item = CHECK_ARCEUS_ZMOVE ? ITEM_BUGINIUM_Z : ITEM_INSECT_PLATE; if (item == ITEM_BUGINIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_GHOST: item = CHECK_ARCEUS_ZMOVE ? ITEM_GHOSTIUM_Z : ITEM_SPOOKY_PLATE; if (item == ITEM_GHOSTIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_STEEL: item = CHECK_ARCEUS_ZMOVE ? ITEM_STEELIUM_Z : ITEM_IRON_PLATE; if (item == ITEM_STEELIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_FIRE: item = CHECK_ARCEUS_ZMOVE ? ITEM_FIRIUM_Z : ITEM_FLAME_PLATE; if (item == ITEM_FIRIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_WATER: item = CHECK_ARCEUS_ZMOVE ? ITEM_WATERIUM_Z : ITEM_SPLASH_PLATE; if (item == ITEM_WATERIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_GRASS: item = CHECK_ARCEUS_ZMOVE ? ITEM_GRASSIUM_Z : ITEM_MEADOW_PLATE; if (item == ITEM_GRASSIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_ELECTRIC: item = CHECK_ARCEUS_ZMOVE ? ITEM_ELECTRIUM_Z : ITEM_ZAP_PLATE; if (item == ITEM_ELECTRIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_PSYCHIC: item = CHECK_ARCEUS_ZMOVE ? ITEM_PSYCHIUM_Z : ITEM_MIND_PLATE; if (item == ITEM_PSYCHIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_ICE: item = CHECK_ARCEUS_ZMOVE ? ITEM_ICIUM_Z : ITEM_ICICLE_PLATE; if (item == ITEM_ICIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_DRAGON: item = CHECK_ARCEUS_ZMOVE ? ITEM_DRAGONIUM_Z : ITEM_DRACO_PLATE; if (item == ITEM_DRAGONIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_DARK: item = CHECK_ARCEUS_ZMOVE ? ITEM_DARKINIUM_Z : ITEM_DREAD_PLATE; if (item == ITEM_DARKINIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_ARCEUS_FAIRY: item = CHECK_ARCEUS_ZMOVE ? ITEM_FAIRIUM_Z : ITEM_PIXIE_PLATE; if (item == ITEM_FAIRIUM_Z) properties->allowZMove = FALSE; break;
                    }
                    move = MOVE_JUDGMENT; // Changes type based on held item
                }
            }; break;
            case SPECIES_BASCULIN: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_BASCULIN))
                    speciesId = RANDOM_RANGE(SPECIES_BASCULIN_BLUE_STRIPED, SPECIES_DARMANITAN_ZEN_MODE);
            }; break;
            case SPECIES_DEERLING: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_DEERLING_SAWSBUCK))
                    speciesId = RANDOM_RANGE(SPECIES_DEERLING_SUMMER, SPECIES_SAWSBUCK_SUMMER);
            }; break;
            case SPECIES_SAWSBUCK: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_DEERLING_SAWSBUCK))
                    speciesId = RANDOM_RANGE(SPECIES_SAWSBUCK_SUMMER, SPECIES_TORNADUS_THERIAN);
            }; break;
            case SPECIES_TORNADUS: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_TORNADUS_THERIAN))
                    speciesId = SPECIES_TORNADUS_THERIAN;
            }; break;
            case SPECIES_THUNDURUS: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_THUNDURUS_THERIAN))
                    speciesId = SPECIES_THUNDURUS_THERIAN;
            }; break;
            case SPECIES_LANDORUS: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_LANDORUS_THERIAN))
                    speciesId = SPECIES_LANDORUS_THERIAN;
            }; break;
            case SPECIES_ENAMORUS: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_ENAMORUS_THERIAN))
                    speciesId = SPECIES_ENAMORUS_THERIAN;
            }; break;
            case SPECIES_KELDEO: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_KELDEO)) 
                {
                    speciesId = SPECIES_KELDEO_RESOLUTE;
                    move = MOVE_SECRET_SWORD;
                }
            }; break;
            case SPECIES_GENESECT: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_GENESECT)) 
                {
                    speciesId = RANDOM_RANGE(SPECIES_GENESECT_DOUSE_DRIVE, SPECIES_GRENINJA_BATTLE_BOND);
                    switch(speciesId) 
                    {
                        case SPECIES_GENESECT_DOUSE_DRIVE: item = ITEM_DOUSE_DRIVE; break;
                        case SPECIES_GENESECT_SHOCK_DRIVE: item = ITEM_SHOCK_DRIVE; break;
                        case SPECIES_GENESECT_BURN_DRIVE: item = ITEM_BURN_DRIVE; break;
                        case SPECIES_GENESECT_CHILL_DRIVE: item = ITEM_CHILL_DRIVE; break;
                    }
                }
            }; break;
            case SPECIES_GRENINJA: {
                if ((640 <= (properties->maxBST)) && RANDOM_CHANCE(BFG_FORME_CHANCE_GRENINJA)) 
                {
                    speciesId = SPECIES_GRENINJA_BATTLE_BOND;
                    move = MOVE_WATER_SHURIKEN;
                }
            }; break;
            case SPECIES_VIVILLON: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_VIVILLON))
                    speciesId = RANDOM_RANGE(SPECIES_VIVILLON_POLAR, SPECIES_FLABEBE_YELLOW_FLOWER);
            }; break;
            case SPECIES_FLABEBE: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES))
                    speciesId = RANDOM_RANGE(SPECIES_FLABEBE_YELLOW_FLOWER, SPECIES_FLOETTE_YELLOW_FLOWER);
            }; break;
            case SPECIES_FLOETTE: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES))
                    speciesId = RANDOM_RANGE(SPECIES_FLOETTE_YELLOW_FLOWER, SPECIES_FLORGES_YELLOW_FLOWER);
            }; break;
            case SPECIES_FLORGES: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES))
                    speciesId = RANDOM_RANGE(SPECIES_FLORGES_YELLOW_FLOWER, SPECIES_FURFROU_HEART_TRIM);
            }; break;
            case SPECIES_FURFROU: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_FURFROU))
                    speciesId = RANDOM_RANGE(SPECIES_FURFROU_HEART_TRIM, SPECIES_MEOWSTIC_FEMALE);
            }; break;
            case SPECIES_MEOWSTIC: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_MEOWSTIC))
                    speciesId = SPECIES_MEOWSTIC_FEMALE;
                else 
                    speciesId = SPECIES_MEOWSTIC_MALE;
            }; break;
            case SPECIES_PUMPKABOO: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_PUMPKABOO_GOURGEIST))
                    speciesId = RANDOM_RANGE(SPECIES_PUMPKABOO_SMALL, SPECIES_GOURGEIST_SMALL);
            }; break;
            case SPECIES_GOURGEIST: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_PUMPKABOO_GOURGEIST))
                    speciesId = RANDOM_RANGE(SPECIES_GOURGEIST_SMALL, SPECIES_XERNEAS_ACTIVE);
            }; break;
            case SPECIES_ZYGARDE: {
                // Switch between zygarde 10%/50%
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_ZYGARDE))
                    speciesId = SPECIES_ZYGARDE_10;
                // Change to power construct
                if (708 <= (properties->maxBST)) 
                {
                    switch(speciesId) 
                    {
                        case SPECIES_ZYGARDE_10: 
                            speciesId = SPECIES_ZYGARDE_10_POWER_CONSTRUCT;
                        break;
                        case SPECIES_ZYGARDE_50: 
                            speciesId = SPECIES_ZYGARDE_50_POWER_CONSTRUCT;
                        break;
                    }
                }
            }; break;
            case SPECIES_HOOPA: {
                if ((680 <= (properties->maxBST)) && RANDOM_CHANCE(BFG_FORME_CHANCE_HOOPA))
                    speciesId = SPECIES_HOOPA_UNBOUND;
            }; break;
            case SPECIES_ORICORIO: {
                // Signature move
                move = MOVE_REVELATION_DANCE;
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_ORICORIO))
                    speciesId = RANDOM_RANGE(SPECIES_ORICORIO_POM_POM, SPECIES_ROCKRUFF_OWN_TEMPO);
            }; break;
            case SPECIES_ROCKRUFF: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_ROCKRUFF_LYCANROC))
                    speciesId = SPECIES_ROCKRUFF_OWN_TEMPO;
            }; break;
            case SPECIES_LYCANROC: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_ROCKRUFF_LYCANROC))
                    speciesId = RANDOM_RANGE(SPECIES_LYCANROC_MIDNIGHT, SPECIES_WISHIWASHI_SCHOOL);
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_LYCANIUM_Z))
                {                            
                    properties->allowZMove = FALSE;

                    move = MOVE_STONE_EDGE;
                    item = ITEM_LYCANIUM_Z;
                }
            }; break;
            case SPECIES_SILVALLY: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_SILVALLY)) 
                {
                    speciesId = RANDOM_RANGE(SPECIES_SILVALLY_FIGHTING, SPECIES_MINIOR_METEOR_ORANGE);
                    switch(speciesId) 
                    {
                        case SPECIES_SILVALLY_FIGHTING: item = CHECK_SILVALLY_ZMOVE ? ITEM_FIGHTINIUM_Z : ITEM_FIGHTING_MEMORY; if (item == ITEM_FIGHTINIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_FLYING: item = CHECK_SILVALLY_ZMOVE ? ITEM_FLYINIUM_Z : ITEM_FLYING_MEMORY; if (item == ITEM_FLYINIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_POISON: item = CHECK_SILVALLY_ZMOVE ? ITEM_POISONIUM_Z : ITEM_POISON_MEMORY; if (item == ITEM_POISONIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_GROUND: item = CHECK_SILVALLY_ZMOVE ? ITEM_GROUNDIUM_Z : ITEM_GROUND_MEMORY; if (item == ITEM_GROUNDIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_ROCK: item = CHECK_SILVALLY_ZMOVE ? ITEM_ROCKIUM_Z : ITEM_ROCK_MEMORY; if (item == ITEM_ROCKIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_BUG: item = CHECK_SILVALLY_ZMOVE ? ITEM_BUGINIUM_Z : ITEM_BUG_MEMORY; if (item == ITEM_BUGINIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_GHOST: item = CHECK_SILVALLY_ZMOVE ? ITEM_GHOSTIUM_Z : ITEM_GHOST_MEMORY; if (item == ITEM_GHOSTIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_STEEL: item = CHECK_SILVALLY_ZMOVE ? ITEM_STEELIUM_Z : ITEM_STEEL_MEMORY; if (item == ITEM_STEELIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_FIRE: item = CHECK_SILVALLY_ZMOVE ? ITEM_FIRIUM_Z : ITEM_FIRE_MEMORY; if (item == ITEM_FIRIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_WATER: item = CHECK_SILVALLY_ZMOVE ? ITEM_WATERIUM_Z : ITEM_WATER_MEMORY; if (item == ITEM_WATERIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_GRASS: item = CHECK_SILVALLY_ZMOVE ? ITEM_GRASSIUM_Z : ITEM_GRASS_MEMORY; if (item == ITEM_GRASSIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_ELECTRIC: item = CHECK_SILVALLY_ZMOVE ? ITEM_ELECTRIUM_Z : ITEM_ELECTRIC_MEMORY; if (item == ITEM_ELECTRIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_PSYCHIC: item = CHECK_SILVALLY_ZMOVE ? ITEM_PSYCHIUM_Z : ITEM_PSYCHIC_MEMORY; if (item == ITEM_PSYCHIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_ICE: item = CHECK_SILVALLY_ZMOVE ? ITEM_ICIUM_Z :  ITEM_ICE_MEMORY; if (item == ITEM_ICIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_DRAGON: item = CHECK_SILVALLY_ZMOVE ? ITEM_DRAGONIUM_Z : ITEM_DRAGON_MEMORY; if (item == ITEM_DRAGONIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_DARK: item = CHECK_SILVALLY_ZMOVE ? ITEM_DARKINIUM_Z : ITEM_DARK_MEMORY; if (item == ITEM_DARKINIUM_Z) properties->allowZMove = FALSE; break;
                        case SPECIES_SILVALLY_FAIRY: item = CHECK_SILVALLY_ZMOVE ? ITEM_FAIRIUM_Z : ITEM_FAIRY_MEMORY; if (item == ITEM_FAIRIUM_Z) properties->allowZMove = FALSE; break;
                    }
                    move = MOVE_MULTI_ATTACK; // Changes type based on held item
                }
            }; break;
            case SPECIES_MINIOR: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_MINIOR))
                    speciesId = RANDOM_RANGE(SPECIES_MINIOR_METEOR_ORANGE, SPECIES_MINIOR_CORE_RED);
            }; break;
            case SPECIES_MAGEARNA: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_MAGEARNA))
                    speciesId = SPECIES_MAGEARNA_ORIGINAL_COLOR;
            }; break;
            case SPECIES_ALCREMIE: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_ALCREMIE))
                    speciesId = RANDOM_RANGE(SPECIES_ALCREMIE_RUBY_CREAM, SPECIES_EISCUE_NOICE_FACE);
            }; break;
            case SPECIES_INDEEDEE: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_INDEEDEE))
                    speciesId = SPECIES_INDEEDEE_FEMALE;
                else
                    speciesId = SPECIES_INDEEDEE_MALE;
            }; break;
            case SPECIES_ZACIAN: {
                if ((700 <= (properties->maxBST))) 
                {
                    speciesId = SPECIES_ZACIAN_CROWNED_SWORD;
                    item = ITEM_RUSTED_SWORD;
                    move = MOVE_BEHEMOTH_BLADE;
                }
            }; break;
            case SPECIES_ZAMAZENTA: {
                if ((700 <= (properties->maxBST))) 
                {
                    speciesId = SPECIES_ZAMAZENTA_CROWNED_SHIELD;
                    item = ITEM_RUSTED_SHIELD;
                    move = MOVE_BEHEMOTH_BASH;
                }
            }; break;
            case SPECIES_URSHIFU: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_URSHIFU))
                    speciesId = SPECIES_URSHIFU_RAPID_STRIKE_STYLE;
            }; break;
            case SPECIES_BASCULEGION: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_BASCULEGION))
                    speciesId = SPECIES_BASCULEGION_FEMALE;
                else 
                    speciesId = SPECIES_BASCULEGION_MALE;
            }; break;
            case SPECIES_OINKOLOGNE: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_OINKOLOGNE))
                    speciesId = SPECIES_OINKOLOGNE_FEMALE;
                else 
                    speciesId = SPECIES_OINKOLOGNE_MALE;
            }; break;
            case SPECIES_MAUSHOLD: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_MAUSHOLD))
                    speciesId = SPECIES_MAUSHOLD_FAMILY_OF_FOUR;
            }; break;
            case SPECIES_SQUAWKABILLY: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_SQUAWKABILLY))
                    speciesId = RANDOM_RANGE(SPECIES_SQUAWKABILLY_BLUE_PLUMAGE, SPECIES_NACLI);
            }; break;
            case SPECIES_TATSUGIRI: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_TATSUGIRI))
                    speciesId = RANDOM_RANGE(SPECIES_TATSUGIRI_DROOPY, SPECIES_ANNIHILAPE);
            }; break;
            case SPECIES_DUDUNSPARCE: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_DUDUNSPARCE))
                    speciesId = SPECIES_DUDUNSPARCE_THREE_SEGMENT;
            }; break;
            case SPECIES_GIMMIGHOUL: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_GIMMIGHOUL))
                    speciesId = SPECIES_GIMMIGHOUL_ROAMING;
            }; break;
            case SPECIES_OGERPON: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_OGERPON)) 
                {
                    speciesId = RANDOM_RANGE(SPECIES_OGERPON_WELLSPRING_MASK, SPECIES_OGERPON_TEAL_MASK_TERA);
                    // Required hold item
                    switch(speciesId) 
                    {
                        case SPECIES_OGERPON_WELLSPRING_MASK: item = ITEM_WELLSPRING_MASK; break;
                        case SPECIES_OGERPON_HEARTHFLAME_MASK: item = ITEM_HEARTHFLAME_MASK; break;
                        case SPECIES_OGERPON_CORNERSTONE_MASK: item = ITEM_CORNERSTONE_MASK; break;
                    }; 
                    // Signature move
                    move = MOVE_IVY_CUDGEL;
                }
            }; break;
            case SPECIES_URSALUNA: {
                if (RANDOM_CHANCE(BFG_FORME_CHANCE_URSALUNA))
                    speciesId = SPECIES_URSALUNA_BLOODMOON;
            }; break;
            // Species-specific items
            case SPECIES_FARFETCHD:
            case SPECIES_FARFETCHD_GALARIAN:
            case SPECIES_SIRFETCHD: 
                if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_LEEK_SELECTION_CHANCE))
                    item = ITEM_LEEK;
            break;
            case SPECIES_MAROWAK:
            case SPECIES_MAROWAK_ALOLAN:
            case SPECIES_MAROWAK_ALOLAN_TOTEM:
                if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_THICK_CLUB_SELECTION_CHANCE))
                    item = ITEM_THICK_CLUB;
            break; 
            case SPECIES_CHANSEY: 
                if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_LUCKY_PUNCH_SELECTION_CHANCE))
                    item = ITEM_LUCKY_PUNCH;
            break; 
            case SPECIES_DITTO: 
                if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_DITTO_POWDER_SELECTION_CHANCE)) 
                {
                    // Select ditto item
                    if (RANDOM_BOOL())
                        item = ITEM_METAL_POWDER;
                    else
                        item = ITEM_QUICK_POWDER;
                }
            break;
            case SPECIES_GOREBYSS: 
                if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_DEEP_SEA_SCALE_SELECTION_CHANCE))
                    item = ITEM_DEEP_SEA_SCALE; 
            break;
            case SPECIES_HUNTAIL: 
                if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_DEEP_SEA_TOOTH_SELECTION_CHANCE))
                    item = ITEM_DEEP_SEA_SCALE; 
            break;
            case SPECIES_LATIAS:
            case SPECIES_LATIOS:
                if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_SOUL_DEW_SELECTION_CHANCE))
                    item = ITEM_SOUL_DEW;
            break;
            // Signature Z-Moves
            case SPECIES_EEVEE:
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_EEVIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_LAST_RESORT;
                    item = ITEM_EEVIUM_Z;
                }
            break;
            case SPECIES_SNORLAX:
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_SNORLIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_GIGA_IMPACT;
                    item = ITEM_SNORLIUM_Z;
                }
            break;
            case SPECIES_MEW:
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_MEWNIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_PSYCHIC;
                    item = ITEM_MEWNIUM_Z;
                }
            break;
            case SPECIES_DECIDUEYE:
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_DECIDIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_SPIRIT_SHACKLE;
                    item = ITEM_DECIDIUM_Z;
                }
            break;
            case SPECIES_INCINEROAR:
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_INCINIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_DARKEST_LARIAT;
                    item = ITEM_INCINIUM_Z;
                }
            break;
            case SPECIES_PRIMARINA:
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_PRIMARIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_SPARKLING_ARIA;
                    item = ITEM_PRIMARIUM_Z;
                }
            break;
            case SPECIES_MIMIKYU:
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_MIMIKIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_PLAY_ROUGH;
                    item = ITEM_MIMIKIUM_Z;
                }
            break;
            case SPECIES_KOMMO_O: 
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_KOMMONIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_CLANGING_SCALES;
                    item = ITEM_KOMMONIUM_Z;
                }
            break;
            case SPECIES_TAPU_FINI: 
            case SPECIES_TAPU_BULU: 
            case SPECIES_TAPU_LELE: 
            case SPECIES_TAPU_KOKO: 
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_TAPUNIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_NATURES_MADNESS;
                    item = ITEM_TAPUNIUM_Z;
                }
            break;
            case SPECIES_SOLGALEO: 
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_SOLGANIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_SUNSTEEL_STRIKE;
                    item = ITEM_SOLGANIUM_Z;
                }
            break;
            case SPECIES_LUNALA: 
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_LUNALIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_MOONGEIST_BEAM;
                    item = ITEM_LUNALIUM_Z;
                }
            break;
            case SPECIES_MARSHADOW: 
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_MARSHADIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_SPECTRAL_THIEF;
                    item = ITEM_MARSHADIUM_Z;
                }
            break;
            case SPECIES_RAICHU_ALOLAN: 
                if (((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && ((properties->allowZMove) == TRUE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_ALORAICHIUM_Z)) 
                {
                    properties->allowZMove = FALSE;
                    move = MOVE_THUNDERBOLT;
                    item = ITEM_ALORAICHIUM_Z;
                }
            break;
        }

        // Check for Mega/Primal/Gigantamax
        for(i = 0; formChanges[i].method != FORM_CHANGE_TERMINATOR; i++) 
        {
            switch(formChanges[i].method) 
            {
                #if B_FLAG_DYNAMAX_BATTLE != 0
                case FORM_CHANGE_BATTLE_GIGANTAMAX: {
                    if (FlagGet(B_FLAG_DYNAMAX_BATTLE) && ((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_GMAX) && ((properties->allowGmax) == TRUE))
                        forme = i;
                }; break;
                #endif
                case FORM_CHANGE_BATTLE_PRIMAL_REVERSION: {
                    if ((item == ITEM_NONE) && ((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_MEGA) && ((bst + 100 <= (properties->maxBST))) && RANDOM_CHANCE(BFG_FORME_CHANCE_PRIMAL))
                    {
                        item = formChanges[i].param1; // ItemId
                        forme = i;
                    }
                }; break;
                case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE: {
                    if ((move == MOVE_NONE) && ((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_MEGA) && ((bst + 100 <= (properties->maxBST))) && ((properties->allowMega) == TRUE) && RANDOM_CHANCE(BFG_FORME_CHANCE_MEGA))
                    {
                        move = formChanges[i].param1; // MoveId
                        properties->allowMega = FALSE;
                        forme = i;
                    }
                }; break;
                case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM: {
                    if ((item == ITEM_NONE) && ((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_MEGA) && ((bst + 100 <= (properties->maxBST))) && ((properties->allowMega) == TRUE) && RANDOM_CHANCE(BFG_FORME_CHANCE_MEGA))
                    {
                        item = formChanges[i].param1; // ItemId
                        properties->allowMega = FALSE;
                        forme = i;
                    }
                }; break;
            }
            if (forme == i) 
            {
                DebugPrintf("Forme found: %d ...", forme);
                break; // Break if forme found
            }
        }
    }
    else // No forme change table
    {
        // Special case for fusion mons
        switch(speciesId)
        {
            case SPECIES_KYUREM: {
                if ((700 <= (properties->maxBST)) && RANDOM_CHANCE(BFG_FUSION_CHANCE_KYUREM))
                {
                    speciesId = RANDOM_RANGE(SPECIES_KYUREM_BLACK, SPECIES_KELDEO_RESOLUTE);
                    switch(speciesId) 
                    {
                        case SPECIES_KYUREM_BLACK: {
                            move = MOVE_FUSION_BOLT;
                        }; break;
                        case SPECIES_KYUREM_WHITE: {
                            move = MOVE_FUSION_FLARE;
                        }; break;
                    }
                }
            }; break;
            case SPECIES_NECROZMA: {
                if ((680 <= (properties->maxBST)) && RANDOM_CHANCE(BFG_FUSION_CHANCE_NECROZMA)) 
                {
                    speciesId = RANDOM_RANGE(SPECIES_NECROZMA_DUSK_MANE, SPECIES_NECROZMA_ULTRA);

                    // Z-Moves are allowed
                    if ((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) 
                    {
                        // Random chance to select ultra-burst
                        if ((754 <= (properties->maxBST)) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_ULTRANECROZIUM_Z)) 
                        {
                            move = MOVE_PHOTON_GEYSER;
                            item = ITEM_ULTRANECROZIUM_Z;
                            forme = 3; // SPECIES_NECROZMA_ULTRA

                            properties->allowZMove = FALSE;
                        }
                        else if (RANDOM_CHANCE(BFG_ZMOVE_CHANCE_NECROZMA)) // Use Solganium/Lunalium Z
                        {
                            // Select signature move
                            switch(speciesId) 
                            {
                                case SPECIES_NECROZMA_DAWN_WINGS:
                                    move = MOVE_SUNSTEEL_STRIKE;
                                    item = ITEM_SOLGANIUM_Z;
                                break;
                                case SPECIES_NECROZMA_DUSK_MANE:
                                    move = MOVE_MOONGEIST_BEAM;
                                    move = ITEM_LUNALIUM_Z;
                                break;
                            }
                            
                            properties->allowZMove = FALSE;
                        }
                    }
                }
            }; break;
            case SPECIES_CALYREX: {
                if ((680 <= (properties->maxBST)) && RANDOM_CHANCE(BFG_FUSION_CHANCE_CALYREX)) 
                {
                    speciesId = RANDOM_RANGE(SPECIES_CALYREX_ICE_RIDER, SPECIES_CALYREX_SHADOW_RIDER);
                    switch(speciesId) 
                    {
                        // Signature Moves
                        case SPECIES_CALYREX_ICE_RIDER: {
                            move = MOVE_GLACIAL_LANCE;
                        }; break;
                        case SPECIES_CALYREX_SHADOW_RIDER: {
                            move = MOVE_ASTRAL_BARRAGE;
                        }; break;
                    }
                }
            }; break;
            default:
                DebugPrintf("No form changes/fusions for speciesId %d ...", speciesId);
            break;
        }
    }

    // If the pokemon was successfully added to the trainer's party, move on to the next party slot.
    return GenerateTrainerPokemon(mon, speciesId, forme, move, item, properties);
}

void DebugPrintMonData(struct Pokemon * mon) 
{
    u8 i;

    // Species Data
    u16 speciesId = GetMonData(mon, MON_DATA_SPECIES);
    u8 abilityNum = GetMonData(mon,MON_DATA_ABILITY_NUM);
    u16 abilityId = gSpeciesInfo[speciesId].abilities[abilityNum];
    u16 itemId = GetMonData(mon,MON_DATA_HELD_ITEM);

    DebugPrintf("%d @ %d", speciesId, itemId);
    DebugPrintf("Ability: %d (%d)", abilityNum, abilityId);
    DebugPrintf("IVs: %d HP / %d Atk / %d Def / %d SpA / %d SpD / %d Spe", GetMonData(mon,MON_DATA_HP_IV),GetMonData(mon,MON_DATA_ATK_IV), GetMonData(mon,MON_DATA_DEF_IV), GetMonData(mon,MON_DATA_SPATK_IV), GetMonData(mon,MON_DATA_SPDEF_IV), GetMonData(mon,MON_DATA_SPEED_IV));
    DebugPrintf("EVs: %d HP / %d Atk / %d Def / %d SpA / %d SpD / %d Spe", GetMonData(mon,MON_DATA_HP_EV),GetMonData(mon,MON_DATA_ATK_EV), GetMonData(mon,MON_DATA_DEF_EV), GetMonData(mon,MON_DATA_SPATK_EV), GetMonData(mon,MON_DATA_SPDEF_EV), GetMonData(mon,MON_DATA_SPEED_EV));
    DebugPrintf("%d nature", GetNature(mon));
    for(i=0; i<MAX_MON_MOVES; i++)
        DebugPrintf("- %d", GetMonData(mon, MON_DATA_MOVE1 + i));
}

void InitGeneratorProperties(struct GeneratorProperties * properties, u8 level, u8 fixedIV)
{
    // Original Trainer ID
    properties->otID = Random32();

    // Battle Frontier Level / IVs
    properties->level = level;
    properties->fixedIV = fixedIV;

    // Min & Max. BSTs
    properties->minBST = BFG_BST_MIN;
    properties->maxBST = BFG_BST_MAX;

    // Allow Z Move / Gmax / Megas
    properties->allowZMove = TRUE;
    properties->allowGmax = TRUE;
    properties->allowMega = TRUE;
}

void InitGeneratorForLvlMode(struct GeneratorProperties * properties, u8 lvlMode)
{
    bool8 allowMega, allowGmax, allowZMove;

    // battle tent
    if (lvlMode == FRONTIER_LVL_TENT)
    {
        allowMega = BFG_BST_TENT_ALLOW_MEGA;
        allowGmax = BFG_BST_TENT_ALLOW_GMAX;
        allowZMove = BFG_BST_TENT_ALLOW_ZMOVE;
    }
    else // lvl 50 / lvl open
    {
        allowMega = (BFG_ITEM_IV_ALLOW_MEGA < BFG_ITEM_IV_BANNED);
        allowGmax = (BFG_ITEM_IV_ALLOW_GMAX < BFG_ITEM_IV_BANNED);
        allowZMove = (BFG_ITEM_IV_ALLOW_ZMOVE < BFG_ITEM_IV_BANNED);
    }

    // Update based on flags

    #if BFG_FLAG_FRONTIER_ALLOW_MEGA != 0
    allowMega = (FlagGet(BFG_FLAG_FRONTIER_ALLOW_MEGA) && allowMega);
    #endif

    #if BFG_FLAG_FRONTIER_ALLOW_GMAX != 0
    allowGmax = (FlagGet(BFG_FLAG_FRONTIER_ALLOW_GMAX) && allowGmax);
    #endif

    #if BFG_FLAG_FRONTIER_ALLOW_ZMOVE != 0
    allowZMove = (FlagGet(BFG_FLAG_FRONTIER_ALLOW_ZMOVE) && allowZMove);
    #endif

    // Update properties
    properties->allowMega = allowMega;
    properties->allowGmax = allowGmax;
    properties->allowZMove = allowZMove;
    
    // Configure fixedIv, minBST, maxBST
    UpdateGeneratorForLvlMode(properties, lvlMode);
}

void UpdateGeneratorForLvlMode(struct GeneratorProperties * properties, u8 lvlMode)
{
    switch(lvlMode)
    {
        case FRONTIER_LVL_TENT:
            // Fixed battle tent values
            properties->fixedIV = BFG_IV_LVL_TENT;
            properties->minBST = BFG_BST_LVL_TENT_MIN;
            properties->maxBST = BFG_BST_LVL_TENT_MAX; 
        break;
        case FRONTIER_LVL_50:
            #ifdef BFG_IV_LVL_50
            properties->fixedIV = BFG_IV_LVL_50;
            #endif
            #ifdef BFG_BST_LVL_50_MIN
            properties->minBST = BFG_BST_LVL_50_MIN;
            #endif
            #ifdef BFG_BST_LVL_50_MAX
            properties->maxBST = BFG_BST_LVL_50_MAX;
            #endif
        break;
        case FRONTIER_LVL_OPEN:
            #ifdef BFG_IV_LVL_OPEN
            properties->fixedIV = BFG_IV_LVL_OPEN;
            #endif
            #ifdef BFG_BST_LVL_OPEN_MIN
            properties->minBST = BFG_BST_LVL_OPEN_MIN;
            #endif
            #ifdef BFG_BST_LVL_OPEN_MAX
            properties->maxBST = BFG_BST_LVL_OPEN_MAX;
            #endif
        break;
    }
}

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level)
{
    u16 speciesId, bst;
    u8 i,j;

    struct GeneratorProperties properties;
    InitGeneratorProperties(&properties, level, 0);

    // If the fixed IVs flag is set
    #if BFG_FLAG_FRONTIER_FIXED_IV != 0
    if (FlagGet(BFG_FLAG_FRONTIER_FIXED_IV))
        properties.fixedIV = BFG_IV_FIXED;
    else // Default values
    #endif
        properties.fixedIV = GetFrontierTrainerFixedIvs(trainerId);

    // Setup fixed values for level mode
    u8 lvlMode = GET_LVL_MODE();

    InitGeneratorForLvlMode(&properties, lvlMode);

    DebugPrintf("Generating trainer party ...");

    // Dereference the battle frontier trainer data
    const struct BattleFrontierTrainer * trainer = &(gFacilityTrainers[trainerId]);
    const u8 trainerClass = gFacilityClassToTrainerClass[trainer->facilityClass];

    // Allocate team items
    u16 items [PARTY_SIZE] = {
        ITEM_NONE,
        ITEM_NONE,
        ITEM_NONE,
        ITEM_NONE,
        ITEM_NONE,
        ITEM_NONE,
    };

    // Regular battle frontier trainer.
    // Attempt to fill the trainer's party with random Pokemon until 3 have been
    // successfully chosen. The trainer's party may not have duplicate pokemon species
    // or duplicate held items.

    i = 0;
    while(i != monCount) 
    {
        DebugPrintf("Generating mon number %d ...", i);

        // Get min/max bst value from lookup table
        properties.minBST = fixedIVMinBSTLookup[properties.fixedIV];
        properties.maxBST = fixedIVMaxBSTLookup[properties.fixedIV];

        // Sample random species from the mon count
        if (((BFG_LVL_50_ALLOW_BANNED_SPECIES && GET_LVL_MODE() == FRONTIER_LVL_50) || (BFG_LVL_OPEN_ALLOW_BANNED_SPECIES && GET_LVL_MODE() == FRONTIER_LVL_OPEN) || (BFG_LVL_TENT_ALLOW_BANNED_SPECIES && GET_LVL_MODE() == FRONTIER_LVL_TENT)) && (i % 2 == 1))
        {
            // Restricted species
            speciesId = GetTrainerClassRestricted(trainerClass); // Pick restricteds when eligible on 2nd, 4th species
            properties.maxBST = BFG_BST_MAX; // Ignore Max. BST
        }
        else // Standard species
            speciesId = GetTrainerClassSpecies(trainerClass); // Pick normal species
        bst = GetTotalBaseStat(speciesId);

        DebugPrintf("Species selected: '%d' ...", speciesId);

        if ((HAS_MEGA_EVOLUTION(speciesId) && ((properties.fixedIV) >= BFG_ITEM_IV_ALLOW_MEGA)) || ((speciesId == SPECIES_ROTOM) && (BFG_FORME_CHANCE_ROTOM >= 1)))
            properties.minBST = BFG_BST_MIN; // Ignore Min. BST

        DebugPrintf("Checking min (%d) / max (%d) bst requirements ...", properties.minBST, properties.maxBST);

        // Check BST limits
        if ((bst < (properties.minBST)) || (bst > (properties.maxBST)))
            continue; // Next species

        DebugPrintf("Checking species validity for frontier level ...");

        // Species is not allowed for this format
        if (!(SpeciesValidForFrontierLevel(speciesId)))
            continue; // Next species

        DebugPrintf("Checking for duplicate species ...");

        // Ensure this pokemon species isn't a duplicate.
        for (j = 0; j < i + firstMonId; j++)
            if (GetMonData(&gEnemyParty[j], MON_DATA_SPECIES, NULL) == speciesId)
                break;
        if (j != i + firstMonId)
            continue;

        DebugPrintf("Generating set for species %d ...", speciesId);

        // Generate Trainer Pokemon
        if (GenerateTrainerPokemonHandleForme(&gEnemyParty[i + firstMonId], speciesId, &properties))
        {
            // Add Pokemon item to items list
            items[i] = GetMonData(&gEnemyParty[i + firstMonId], MON_DATA_HELD_ITEM);
            DebugPrintMonData(&gEnemyParty[i + firstMonId]);
            i++;
        }
    }

    if (lvlMode == FRONTIER_LVL_TENT && BFG_TENT_ALLOW_ITEM == FALSE)
        return; // Battle Tent items disabled
    else if (BFG_FACTORY_ALLOW_ITEM == FALSE)
        return; // Battle Frontier items disabled

    // Allocate remaining items
    for(i=0; i < monCount; i++)
    {
        if (((items[i]) == ITEM_NONE) && (!(RANDOM_CHANCE(BFG_NO_ITEM_SELECTION_CHANCE))))
        {
            items[i] = GetSpeciesItem(&gEnemyParty[i + firstMonId], items, PARTY_SIZE);
            SetMonData(&gEnemyParty[i + firstMonId], MON_DATA_HELD_ITEM, &(items[i]));
        }
    }
    
    DebugPrintf("Done.");
}

void GenerateFacilityInitialRentalMons(u8 firstMonId, u8 challengeNum, u8 rentalRank)
{
    u8 i, j;
    u16 speciesId, bst; 

    struct GeneratorProperties properties;
    InitGeneratorProperties(&properties, 0, 0);

    DebugPrintf("Generating facility initial rental mons ...");

    u8 lvlMode = GET_LVL_MODE();
    InitGeneratorForLvlMode(&properties, lvlMode);

    // Battle Tent
    if (lvlMode == FRONTIER_LVL_TENT)
    {
        properties.allowMega = BFG_BST_TENT_ALLOW_MEGA;
        properties.allowGmax = BFG_BST_TENT_ALLOW_GMAX;
        properties.allowZMove = BFG_BST_TENT_ALLOW_ZMOVE;
    }

    i = 0; 
    while(i != PARTY_SIZE)
    {
        DebugPrintf("Generating initial rental mon number %d ...", i);

        // Battle Factory
        if ((lvlMode != FRONTIER_LVL_TENT))
        {
            // High Challenge Num / Rental Rank
            if ((challengeNum >= BFG_FACTORY_EXPERT_CHALLENGE_NUM) || (i < rentalRank))
                properties.fixedIV = GetFactoryMonFixedIV(challengeNum + 1, FALSE);
            else // Basic Mode (Low BST)
                properties.fixedIV = GetFactoryMonFixedIV(challengeNum, FALSE);

            // Min/Max BST Value Lookup Table
            properties.minBST = fixedIVMinBSTLookup[properties.fixedIV];
            properties.maxBST = fixedIVMaxBSTLookup[properties.fixedIV];

            // Check fixed ivs for gmax / zmove / mega evolution
            properties.allowGmax = (properties.fixedIV >= BFG_ITEM_IV_ALLOW_GMAX);
            properties.allowZMove = (properties.fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE);
            properties.allowMega = (properties.fixedIV >= BFG_ITEM_IV_ALLOW_MEGA);

            // Override fixed frontier values (Specified in config)
            UpdateGeneratorForLvlMode(&properties, lvlMode);
        }

        // Sample random species from the mon count
        if (((BFG_LVL_50_ALLOW_BANNED_SPECIES && lvlMode == FRONTIER_LVL_50) || (BFG_LVL_OPEN_ALLOW_BANNED_SPECIES && lvlMode == FRONTIER_LVL_OPEN) || (BFG_LVL_TENT_ALLOW_BANNED_SPECIES && lvlMode == FRONTIER_LVL_TENT)) && (i % 2 == 1))
        {
            // Restricted species
            speciesId = GetTrainerClassRestricted(TRAINER_CLASS_DEFAULT); // Pick restricteds when eligible on 2nd, 4th species
            properties.maxBST = BFG_BST_MAX; // Ignore Max. BST
        }
        else // Standard species
            speciesId = GetTrainerClassSpecies(TRAINER_CLASS_DEFAULT); // Pick normal species
        bst = GetTotalBaseStat(speciesId);

        DebugPrintf("Species selected: '%d' ...", speciesId);

        if ((HAS_MEGA_EVOLUTION(speciesId) && (properties.allowMega)) || ((speciesId == SPECIES_ROTOM) && (BFG_FORME_CHANCE_ROTOM >= 1)))
            properties.minBST = BFG_BST_MIN; // Ignore Min. BST

        DebugPrintf("Checking min (%d) / max (%d) bst requirements ...", properties.minBST, properties.maxBST);

        // Check BST limits
        if ((bst < (properties.minBST)) || (bst > (properties.maxBST)))
            continue; // Next species

        DebugPrintf("Checking species validity for frontier level ...");

        // Species is not allowed for this format
        if (!(SpeciesValidForFrontierLevel(speciesId)))
            continue; // Next species

        DebugPrintf("Checking for duplicate species ...");

        // Cannot have two Pokémon of the same species.
        for (j = 0; j < firstMonId + i; j++)
            if (speciesId == (gSaveBlock2Ptr->frontier.rentalMons[j].monId))
                break; // Same species
        if (j != firstMonId + i)
            continue; // Skip duplicate

        DebugPrintf("Done.");

        gSaveBlock2Ptr->frontier.rentalMons[i].monId = speciesId;
        gSaveBlock2Ptr->frontier.rentalMons[i].ivs = properties.fixedIV;
        i++;
    }

    // (Optional) Generate random seed for factory mons

    #if BFG_VAR_FACTORY_GENERATOR_SEED != 0
    DebugPrintf("Generating random factory seed ...");
    VarSet(BFG_VAR_FACTORY_GENERATOR_SEED, Random2());
    #endif
}

void GenerateFacilityOpponentMons(u16 trainerId, u8 firstMonId, u8 challengeNum, u8 winStreak)
{
    u8 i, j;
    u16 speciesId, bst;

    struct GeneratorProperties properties;
    InitGeneratorProperties(&properties, 0, 0);

    u8 lvlMode = GET_LVL_MODE();
    
    DebugPrintf("Generating facility opponent mons ...");

    switch(lvlMode)
    {
        case FRONTIER_LVL_TENT:
            InitGeneratorForLvlMode(&properties, lvlMode);
        break;
        case FRONTIER_LVL_50:
        case FRONTIER_LVL_OPEN:
            // High Challenge Num
            if ((challengeNum >= BFG_FACTORY_EXPERT_CHALLENGE_NUM))
                properties.fixedIV = GetFactoryMonFixedIV(challengeNum + 1, FALSE);
            else // Basic Mode (Low BST)
                properties.fixedIV = GetFactoryMonFixedIV(challengeNum, FALSE);

            // Min/Max BST Value Lookup Table
            properties.minBST = fixedIVMinBSTLookup[properties.fixedIV];
            properties.maxBST = fixedIVMaxBSTLookup[properties.fixedIV];

            // Check fixed ivs for gmax / zmove / mega evolution
            properties.allowGmax = (properties.fixedIV >= BFG_ITEM_IV_ALLOW_GMAX);
            properties.allowZMove = (properties.fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE);
            properties.allowMega = (properties.fixedIV >= BFG_ITEM_IV_ALLOW_MEGA);

            // Override fixed frontier values (Specified in config)
            UpdateGeneratorForLvlMode(&properties, lvlMode);
        break;
    }

    // Dereference the battle frontier trainer data
    const struct BattleFrontierTrainer * trainer = &(gFacilityTrainers[trainerId]);
    const u8 trainerClass = gFacilityClassToTrainerClass[trainer->facilityClass];

    i = 0;
    while (i != FRONTIER_PARTY_SIZE)
    {
        DebugPrintf("Generating opponent rental mon number %d ...", i);

        // Sample random species from the mon count
        if (((BFG_LVL_50_ALLOW_BANNED_SPECIES && lvlMode == FRONTIER_LVL_50) || (BFG_LVL_OPEN_ALLOW_BANNED_SPECIES && lvlMode == FRONTIER_LVL_OPEN) || (BFG_LVL_TENT_ALLOW_BANNED_SPECIES && lvlMode == FRONTIER_LVL_TENT)) && (i % 2 == 1))
        {
            // Restricted species
            speciesId = GetTrainerClassRestricted(trainerClass); // Pick restricteds when eligible on 2nd, 4th species
            properties.maxBST = BFG_BST_MAX; // Ignore Max. BST
        }
        else // Standard species
            speciesId = GetTrainerClassSpecies(trainerClass); // Pick normal species
        bst = GetTotalBaseStat(speciesId);

        DebugPrintf("Species selected: '%d' ...", speciesId);

        if ((HAS_MEGA_EVOLUTION(speciesId) && (properties.allowMega)) || ((speciesId == SPECIES_ROTOM) && (BFG_FORME_CHANCE_ROTOM >= 1)))
            properties.minBST = BFG_BST_MIN; // Ignore Min. BST

        DebugPrintf("Checking min (%d) / max (%d) bst requirements ...", properties.minBST, properties.maxBST);

        // Check BST limits
        if ((bst < (properties.minBST)) || (bst > (properties.maxBST)))
            continue; // Next species

        DebugPrintf("Checking species validity for frontier level ...");

        // Species is not allowed for this format
        if (!(SpeciesValidForFrontierLevel(speciesId)))
            continue; // Next species

        DebugPrintf("Checking for duplicate species (player) ...");

        // Check not one of player's selectable mons
        for (j = 0; j < PARTY_SIZE; j++)
            if (speciesId == (gSaveBlock2Ptr->frontier.rentalMons[j].monId))
                break; // Same species
        if (j != PARTY_SIZE)
            continue; // Skip duplicate

        DebugPrintf("Checking for duplicate species (opponent) ...");

        // Ensure this species hasn't already been chosen for the opponent
        for (j = 0; j < firstMonId + i; j++)
        {
            if (gFrontierTempParty[j] == speciesId)
                break; // Same species
        }
        if (j != firstMonId + i)
            continue; // Skip duplicate

        gFrontierTempParty[i] = speciesId;
        i++;
    }

    DebugPrintf("Done.");
}

void SetFacilityPartyHeldItems(u8 challengeNum, struct Pokemon * party, u8 partySize)
{
    u8 i;
    u16 oldSeed = Random2();

    #if BFG_VAR_FACTORY_GENERATOR_SEED != 0
    u16 fixedSeed = VarGet(BFG_VAR_FACTORY_GENERATOR_SEED);
    #else
    u16 fixedSeed = (GET_TRAINER_ID() + challengeNum);
    #endif

    DebugPrintf("Setting facility party held items ...");

    #define SELECTED_ITEM_INDEX (FRONTIER_PARTY_SIZE + FRONTIER_PARTY_SIZE + i)
    #define SELECTED_ITEM items[SELECTED_ITEM_INDEX]

    // List of both players and opponents held items
    // Extra 'FRONTIER_PARTY_SIZE' spaces for newly selected items
    u16 items[FRONTIER_PARTY_SIZE + FRONTIER_PARTY_SIZE + FRONTIER_PARTY_SIZE];
    for(i=0; i<FRONTIER_PARTY_SIZE; i++)
    {
        items[i] = GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM);
        items[FRONTIER_PARTY_SIZE + i] = GetMonData(&gEnemyParty[i], MON_DATA_HELD_ITEM);
        SELECTED_ITEM = ITEM_NONE; // Assign item as 'none'
    }

    for(i=0; i<FRONTIER_PARTY_SIZE; i++)
    {
        DebugPrintf("Selecting item for Pokemon %d ...", i);

        // Get the currently held item for the Pokemon
        SELECTED_ITEM = GetMonData(&(party[i]), MON_DATA_HELD_ITEM);

        // Use fixed seed
        SeedRng2(fixedSeed);
        if ((SELECTED_ITEM == ITEM_NONE) && (!(RANDOM_CHANCE(BFG_NO_ITEM_SELECTION_CHANCE))))
        {
            SELECTED_ITEM = GetSpeciesItem(&(party[i]), items, SELECTED_ITEM_INDEX);
            SetMonData(&(party[i]), MON_DATA_HELD_ITEM, (&(SELECTED_ITEM)));
        }

        // Otherwise, leave as-is
    }
    SeedRng(oldSeed); // Revert seed

    #undef SELECTED_ITEM
    #undef SELECTED_ITEM_INDEX

    DebugPrintf("Done.");
}

void SetFacilityPlayerAndOpponentParties()
{
    s32 i;
    u16 level, ivs, speciesId;
    u16 oldSeed = Random2();

    // Get facility mon level
    u8 lvlMode = GET_LVL_MODE();
    switch(lvlMode)
    {
        case FRONTIER_LVL_TENT:
            level = TENT_MIN_LEVEL;
            break;
        case FRONTIER_LVL_50:
            level = FRONTIER_MAX_LEVEL_50;
            break;
        default: // FRONTIER_LVL_OPEN
            level = FRONTIER_MAX_LEVEL_OPEN;
            break;
    }

    u8 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u8 challengeNum = GET_CHALLENGE_NUM(battleMode, lvlMode);

    #if BFG_VAR_FACTORY_GENERATOR_SEED != 0
    u16 fixedSeed = VarGet(BFG_VAR_FACTORY_GENERATOR_SEED);
    #else
    u16 fixedSeed = (GET_TRAINER_ID() + challengeNum);
    #endif

    DebugPrintf("Restoring facility selected Pokemon ...");

    // Allocate items (both player and opponent)
    u16 items [FRONTIER_PARTY_SIZE + FRONTIER_PARTY_SIZE] = {
        ITEM_NONE,
        ITEM_NONE,
        ITEM_NONE,
        ITEM_NONE,
        ITEM_NONE,
        ITEM_NONE
    };

    struct GeneratorProperties properties;
    InitGeneratorProperties(&properties, level, 0);
    
    // Use original trainer id
    properties.otID = OT_ID_PLAYER_ID;

    // Handle player rental mons
    if (gSpecialVar_0x8005 < 2)
    {
        ZeroPlayerPartyMons();
        
        i=0; 
        while(i != FRONTIER_PARTY_SIZE)
        {
            // Get the saved monId (speciesId) from the rentals list
            speciesId = gSaveBlock2Ptr->frontier.rentalMons[i].monId;
            ivs = gSaveBlock2Ptr->frontier.rentalMons[i].ivs;

            // Update properties
            properties.fixedIV = ivs;

            // Use fixed seed
            SeedRng2(fixedSeed);
            if (GenerateTrainerPokemonHandleForme(&gPlayerParty[i], speciesId, &properties))
            {
                // Add Pokemon item to items list
                items[i] = GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM);
                DebugPrintMonData(&gPlayerParty[i]);
                i++;
            }
        }

        // If items are allowed (seperate checks for both battle tent and battle factory)
        if (!(((lvlMode == FRONTIER_LVL_TENT) && (BFG_TENT_ALLOW_ITEM == FALSE)) || (BFG_FACTORY_ALLOW_ITEM == FALSE)))
        {
            // Allocate remaining items
            for(i=0; i < FRONTIER_PARTY_SIZE; i++)
            {
                // Use fixed seed
                SeedRng2(fixedSeed);
                if ((items[i] == ITEM_NONE) && (!(RANDOM_CHANCE(BFG_NO_ITEM_SELECTION_CHANCE))))
                {
                    items[i] = GetSpeciesItem(&gPlayerParty[i], items, PARTY_SIZE);
                    SetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM, &(items[i]));
                }

                // Otherwise, leave as-is
            }
            SeedRng(oldSeed); // Revert seed
        }
    }

    // Handle opponent rental mons
    switch(gSpecialVar_0x8005)
    {
        case 0:
        case 2:
            i=0; 
            while(i != FRONTIER_PARTY_SIZE)
            {
                // Get the saved monId (speciesId) from the rentals list
                speciesId = gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].monId;
                ivs = gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].ivs;
                
                // Update properties
                properties.fixedIV = ivs;

                // Use fixed seed
                SeedRng2(fixedSeed);
                if (GenerateTrainerPokemonHandleForme(&gEnemyParty[i], speciesId, &properties))
                {
                    // Calculate mon stats
                    CalculateMonStats(&gEnemyParty[i]);

                    // Add Pokemon item to items list
                    items[i + FRONTIER_PARTY_SIZE] = GetMonData(&gEnemyParty[i], MON_DATA_HELD_ITEM);
                    DebugPrintMonData(&gEnemyParty[i]);
                    i++;
                }
            }

            // If items are allowed (seperate checks for both battle tent and battle factory)
            if (!(((lvlMode == FRONTIER_LVL_TENT) && (BFG_TENT_ALLOW_ITEM == FALSE)) || (BFG_FACTORY_ALLOW_ITEM == FALSE)))
            {
                // Allocate remaining items
                for(i=0; i < FRONTIER_PARTY_SIZE; i++)
                {
                    // Use fixed seed
                    SeedRng2(fixedSeed);
                    if ((items[i + FRONTIER_PARTY_SIZE] == ITEM_NONE) && (!(RANDOM_CHANCE(BFG_NO_ITEM_SELECTION_CHANCE))))
                    {
                        items[i + FRONTIER_PARTY_SIZE] = GetSpeciesItem(&gEnemyParty[i], items, PARTY_SIZE);
                        SetMonData(&gEnemyParty[i], MON_DATA_HELD_ITEM, &(items[i + FRONTIER_PARTY_SIZE]));
                    }

                    // Otherwise, leave as-is
                }
                SeedRng(oldSeed); // Revert seed
            }
            break;
    }

    SeedRng2(oldSeed); // Revert old seed
}

void SetRentalsToFacilityOpponentParty()
{
    u8 i;

    DebugPrintf("Setting rentals to facility opponent party ...");

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].monId = gFrontierTempParty[i];
        gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].ivs = GetBoxMonData(&gEnemyParty[i].box, MON_DATA_ATK_IV, NULL);
        gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].personality = GetMonData(&gEnemyParty[i], MON_DATA_PERSONALITY, NULL);
        gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].abilityNum = GetBoxMonData(&gEnemyParty[i].box, MON_DATA_ABILITY_NUM, NULL);
    }

    DebugPrintf("Updating rental opponent party items ...");

    u8 lvlMode = GET_LVL_MODE();
    if (lvlMode == FRONTIER_LVL_TENT && BFG_TENT_ALLOW_ITEM == FALSE)
        return; // Battle Tent items disabled
    else if (BFG_FACTORY_ALLOW_ITEM == FALSE)
        return; // Battle Frontier items disabled

    u8 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u8 challengeNum = GET_CHALLENGE_NUM(battleMode, lvlMode);

    SetFacilityPartyHeldItems(challengeNum, gEnemyParty, PARTY_SIZE);
    DebugPrintf("Done.");
}

void FillFacilityTrainerParty(u16 trainerId, u32 otID, u8 firstMonId, u8 challengeNum, u8 level, u8 fixedIV)
{
    u16 speciesId;
    u8 i; 

    struct GeneratorProperties properties;
    InitGeneratorProperties(&properties, level, fixedIV);

    u8 lvlMode = GET_LVL_MODE();

    // Backup original seed
    u16 oldSeed = Random2();

    #if BFG_VAR_FACTORY_GENERATOR_SEED != 0
    u16 fixedSeed = VarGet(BFG_VAR_FACTORY_GENERATOR_SEED);
    #else
    u16 fixedSeed = (GET_TRAINER_ID() + challengeNum);
    #endif

    switch(lvlMode)
    {
        case FRONTIER_LVL_TENT:
            properties.allowMega = BFG_BST_TENT_ALLOW_MEGA;
            properties.allowGmax = BFG_BST_TENT_ALLOW_GMAX;
            properties.allowZMove = BFG_BST_TENT_ALLOW_ZMOVE;
        break;
        case FRONTIER_LVL_50:
        case FRONTIER_LVL_OPEN:
            // Check fixed ivs for gmax / zmove / mega evolution
            properties.allowGmax = (properties.fixedIV >= BFG_ITEM_IV_ALLOW_GMAX);
            properties.allowZMove = (properties.fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE);
            properties.allowMega = (properties.fixedIV >= BFG_ITEM_IV_ALLOW_MEGA);
        break;
    }

    DebugPrintf("Filling facility trainer party ...");

    i=0; 
    while(i != FRONTIER_PARTY_SIZE)
    {
        speciesId = gFrontierTempParty[i];
        DebugPrintf("Generating set for species %d ...", speciesId);

        // Use challenge num as seed
        SeedRng2(fixedSeed);

        // Generate Trainer Pokemon
        if (GenerateTrainerPokemonHandleForme(&gEnemyParty[i + firstMonId], speciesId, &properties))
        {
            DebugPrintf("Done.");
            DebugPrintMonData(&gEnemyParty[i + firstMonId]);
            i++;
        }
    }

    SeedRng(oldSeed); // Revert seed

    if (lvlMode == FRONTIER_LVL_TENT && BFG_TENT_ALLOW_ITEM == FALSE)
        return; // Battle Tent items disabled
    else if (BFG_FACTORY_ALLOW_ITEM == FALSE)
        return; // Battle Frontier items disabled

    SetFacilityPartyHeldItems(challengeNum, gEnemyParty, PARTY_SIZE);
}

void RestoreFacilityPlayerPartyHeldItems(u8 challengeNum)
{
    DebugPrintf("Restoring facility player party held items ...");

    u8 lvlMode = GET_LVL_MODE();
    if (lvlMode == FRONTIER_LVL_TENT && BFG_TENT_ALLOW_ITEM == FALSE)
        return; // Battle Tent items disabled
    else if (BFG_FACTORY_ALLOW_ITEM == FALSE)
        return; // Battle Frontier items disabled

    SetFacilityPartyHeldItems(challengeNum, gPlayerParty, PARTY_SIZE);
}

bool8 FrontierBattlerCanMegaEvolve()
{
    #if BFG_FLAG_FRONTIER_ALLOW_MEGA != 0
    return FlagGet(BFG_FLAG_FRONTIER_ALLOW_MEGA);
    #else // Default
    return TRUE; 
    #endif
}

bool8 FrontierBattlerCanUseZMove()
{    
    #if BFG_FLAG_FRONTIER_ALLOW_ZMOVE != 0
    return FlagGet(BFG_FLAG_FRONTIER_ALLOW_ZMOVE);
    #else // Default
    return TRUE; 
    #endif
}

bool8 FrontierBattlerCanTerastalise()
{
    #if FLAG_BATTLE_FRONTIER_ALLOW_TERA != 0
    return FlagGet(FLAG_BATTLE_FRONTIER_ALLOW_TERA);
    #else // Default
    return TRUE; 
    #endif
}

bool8 FrontierBattlerShouldTerastal(struct Pokemon * mon)
{
    // Get the species for the Pokemon
    u16 species = GetMonData(mon, MON_DATA_SPECIES);
    u8 type = GetMonData(mon, MON_DATA_TERA_TYPE);

    // Same-type terastal
    if (IS_STAB(species, type))
        return RANDOM_CHANCE(BFG_RANDOM_STAB_TERA_CHANCE);
    else // Non-stab tera
        return RANDOM_CHANCE(BFG_RANDOM_TERA_CHANCE);
}

bool8 FrontierBattlerCanDynamax(struct Pokemon * mon)
{
    #if BFG_FLAG_FRONTIER_ALLOW_GMAX != 0
    return (FlagGet(BFG_FLAG_FRONTIER_ALLOW_GMAX) || (GetMonData(mon, MON_DATA_GIGANTAMAX_FACTOR) == FALSE));
    #else // Default
    return TRUE; 
    #endif
}

bool8 FrontierBattlerShouldDynamax(struct Pokemon * mon)
{
    // If the selected Pokemon has the gigantamax factor
    if (GetMonData(mon, MON_DATA_GIGANTAMAX_FACTOR) == TRUE)
        return RANDOM_CHANCE(BFG_RANDOM_GIGANTAMAX_CHANCE);
    else // No gigantamax factor
        return RANDOM_CHANCE(BFG_RANDOM_DYNAMAX_CHANCE);
}
