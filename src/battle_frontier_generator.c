#include "global.h"
#include "battle.h"
#include "random.h"
#include "pokemon.h"
#include "daycare.h"
#include "event_data.h"
#include "battle_tent.h"
#include "battle_util.h"
#include "battle_tower.h"
#include "battle_factory.h"
#include "battle_factory_screen.h"
#include "frontier_util.h"
#include "battle_ai_util.h"
#include "battle_frontier_generator.h"

#include "constants/battle_frontier_generator.h"
#include "constants/battle_move_effects.h"
#include "constants/form_change_types.h"
#include "constants/battle_frontier.h"
#include "constants/battle_tent.h"
#include "constants/abilities.h"

#include "constants/pokemon.h"
#include "constants/battle.h"
#include "constants/moves.h"
#include "constants/items.h"

#include "data/pokemon/natures.h"
#include "data/battle_frontier/battle_frontier_generator.h"
#include "data/battle_frontier/battle_frontier_generator_move_ratings.h"

#include "battle_frontier_generator_species.h"

#include "test/test.h"
#include "item.h"

u16 GetGeneratorSpeciesOrRestricted(u8 index, u8 attempts, u8 lvlMode, struct GeneratorSpecies * species, struct GeneratorProperties * properties);
bool8 GetStrictSpeciesChecks(u16 speciesId, struct GeneratorProperties * properties);

// *** STATS ***
#define CHECK_EVS(evs,stat) ((evs) & (stat))

// *** MOVES ***

#define CATEGORY(m) (gMovesInfo[SanitizeMoveId(m)].category)
#define POWER(m) (gMovesInfo[SanitizeMoveId(m)].power)
#define TYPE(m) (gMovesInfo[SanitizeMoveId(m)].type)
#define HITS(m) (gMovesInfo[SanitizeMoveId(m)].strikeCount)

#define IS_STAB(s,t) (((gSpeciesInfo[s].types[0]) == (t)) || ((gSpeciesInfo[s].types[1]) == (t)))

#define IS_DYNAMIC_ATTACK(x) (((x) == MOVE_TERA_BLAST) || ((x) == MOVE_PHOTON_GEYSER))
#define IS_PROTECTING_MOVE(x) (((x) == MOVE_BANEFUL_BUNKER) || ((x) == MOVE_BURNING_BULWARK) || ((x) == MOVE_DETECT) || ((x) == MOVE_KINGS_SHIELD) || ((x) == MOVE_OBSTRUCT) || ((x) == MOVE_PROTECT) || ((x) == MOVE_SILK_TRAP))
#define IS_RECOVERY_MOVE(x) (((x) == MOVE_AQUA_RING) || ((x) == MOVE_FLORAL_HEALING) || ((x) == MOVE_HEAL_PULSE) || ((x) == MOVE_HEALING_WISH) || ((x) == MOVE_INGRAIN) || ((x) == MOVE_JUNGLE_HEALING) || ((x) == MOVE_LEECH_SEED) || ((x) == MOVE_LIFE_DEW) || ((x) == MOVE_LUNAR_BLESSING) || ((x) == MOVE_LUNAR_DANCE) || ((x) == MOVE_PAIN_SPLIT) || ((x) == MOVE_POLLEN_PUFF) || ((x) == MOVE_REVIVAL_BLESSING) || ((x) == MOVE_WISH) || ((x) == MOVE_HEAL_ORDER) || ((x) == MOVE_MILK_DRINK) || ((x) == MOVE_MOONLIGHT) || ((x) == MOVE_MORNING_SUN) || ((x) == MOVE_PURIFY) || ((x) == MOVE_RECOVER) || ((x) == MOVE_REST) || ((x) == MOVE_ROOST) || ((x) == MOVE_SHORE_UP) || ((x) == MOVE_SLACK_OFF) || ((x) == MOVE_SOFT_BOILED) || ((x) == MOVE_STRENGTH_SAP) || ((x) == MOVE_SYNTHESIS))

#define IS_SUN_EFFECT(e) ((e == EFFECT_SUNNY_DAY))
#define IS_RAIN_EFFECT(e) ((e == EFFECT_RAIN_DANCE))
#define IS_SAND_EFFECT(e) ((e == EFFECT_SANDSTORM))
#define IS_HAIL_EFFECT(e) ((e == EFFECT_HAIL) || (e == EFFECT_SNOWSCAPE))

#define IS_TERRAIN_EFFECT(e) ((e == EFFECT_MISTY_TERRAIN) || (e == EFFECT_GRASSY_TERRAIN) || (e == EFFECT_PSYCHIC_TERRAIN) || (e == EFFECT_ELECTRIC_TERRAIN))

#define IS_SUN_BONUS_ABILITY(a) ((a == ABILITY_CHLOROPHYLL) || (a == ABILITY_FLOWER_GIFT) || (a == ABILITY_HARVEST) || (a == ABILITY_LEAF_GUARD) || (a == ABILITY_PROTOSYNTHESIS) || (a == ABILITY_SOLAR_POWER))
#define IS_SUN_ABILITY(a) ((a == ABILITY_DROUGHT) || (a == ABILITY_DESOLATE_LAND) || (a == ABILITY_ORICHALCUM_PULSE))

#define IS_RAIN_BONUS_ABILITY(a) ((a == ABILITY_DRY_SKIN) || (a == ABILITY_HYDRATION) || (a == ABILITY_RAIN_DISH) || (a == ABILITY_SWIFT_SWIM))
#define IS_RAIN_ABILITY(a) ((a == ABILITY_DRIZZLE) || (a == ABILITY_PRIMORDIAL_SEA))

#define IS_SAND_BONUS_ABILITY(a) ((a == ABILITY_SAND_FORCE) || (a == ABILITY_SAND_RUSH) || (a == ABILITY_SAND_VEIL))
#define IS_SAND_ABILITY(a) ((a == ABILITY_SAND_STREAM) || (a == ABILITY_SAND_SPIT))

#define IS_HAIL_BONUS_ABILITY(a) ((a == ABILITY_ICE_BODY) || (a == ABILITY_ICE_FACE) || (a == ABILITY_SLUSH_RUSH) || (a == ABILITY_SNOW_CLOAK))
#define IS_HAIL_ABILITY(a) ((a == ABILITY_SNOW_WARNING))

#define IS_WEATHER_ABILITY(a) (IS_SUN_ABILITY(a) || IS_RAIN_ABILITY(a) || IS_SAND_ABILITY(a) || IS_HAIL_ABILITY(a))
#define IS_WEATHER_BONUS_ABILITY(a) (IS_SUN_BONUS_ABILITY(a) || IS_RAIN_BONUS_ABILITY(a) || IS_SAND_BONUS_ABILITY(a) || IS_HAIL_BONUS_ABILITY(a))

#define IS_MISTY_ABILITY(a) (a == ABILITY_MISTY_SURGE)
#define IS_GRASSY_ABILITY(a) ((a == ABILITY_GRASSY_SURGE) || (a == ABILITY_SEED_SOWER))
#define IS_PSYCHIC_ABILITY(a) (a == ABILITY_PSYCHIC_SURGE)
#define IS_ELECTRIC_ABILITY(a) ((a == ABILITY_ELECTRIC_SURGE) || (a == ABILITY_HADRON_ENGINE))

#define IS_TERRAIN_ABILITY(a) (IS_MISTY_ABILITY(a) || IS_GRASSY_ABILITY(a) || IS_PSYCHIC_ABILITY(a) || IS_ELECTRIC_ABILITY(a))


#define IS_STAT_DROP_ABILITY(a) (((a) == ABILITY_DEFIANT) || ((a) == ABILITY_COMPETITIVE))
#define IS_END_OF_TURN_ABILITY(a) (((a) == ABILITY_MOODY) || ((a) == ABILITY_POISON_HEAL) || ((a) == ABILITY_SPEED_BOOST))
#define IS_INTIMIDATE_IMMUNE_ABILITY(a) (((a) == ABILITY_OBLIVIOUS) || ((a) == ABILITY_OWN_TEMPO) || ((a) == ABILITY_INNER_FOCUS) || ((a) == ABILITY_SCRAPPY))

#define HAS_HIDDEN_ABILITY(species) (species->abilities[2] != ABILITY_NONE)

#define IS_SPEED_CONTROL_EFFECT(e) (((e) == EFFECT_TRICK_ROOM) || ((e) == EFFECT_TAILWIND))
#define IS_STAT_REDUCING_EFFECT(e) (((e) == MOVE_EFFECT_ATK_MINUS_1) || ((e) == MOVE_EFFECT_DEF_MINUS_1) || ((e) == MOVE_EFFECT_SPD_MINUS_1) ||  ((e) == MOVE_EFFECT_SP_ATK_MINUS_1) || ((e) == MOVE_EFFECT_SP_ATK_MINUS_2) || ((e) == MOVE_EFFECT_V_CREATE) || ((e) == MOVE_EFFECT_ATK_DEF_DOWN) || ((e) == MOVE_EFFECT_DEF_SPDEF_DOWN) || ((e) == MOVE_EFFECT_SP_DEF_MINUS_1) || ((e) == MOVE_EFFECT_SP_DEF_MINUS_2))

#define IS_SLEEP_IMMUNE(ability) ((ability == ABILITY_INSOMNIA) || (ability == ABILITY_VITAL_SPIRIT) || IS_ELECTRIC_ABILITY(ability) || IS_MISTY_ABILITY(ability))

// *** TYPE ***
#define IS_TYPE(species,type)((species->types[0] == type) || (species->types[1] == type))

#define GET_TYPE_EFFECTIVENESS(attacking,defending) (sTypeEffectivenessTable[attacking][defending])

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

#ifdef P_SILVALLY_TYPE_CHANGE_Z_CRYSTAL
#define CHECK_SILVALLY_ZMOVE ((P_SILVALLY_TYPE_CHANGE_Z_CRYSTAL) && ((properties->fixedIV) >= BFG_ITEM_IV_ALLOW_ZMOVE) && (properties->allowZMove == TRUE) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_SILVALLY))
#else
#define CHECK_SILVALLY_ZMOVE FALSE
#endif

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

u16 GetFixedSeed(u8 challengeNum) {
    u16 fixedSeed;

    #if BFG_VAR_FACTORY_GENERATOR_SEED != 0
    fixedSeed = VarGet(BFG_VAR_FACTORY_GENERATOR_SEED);
    #else
    fixedSeed = (GET_TRAINER_ID() + challengeNum);
    #endif

    DebugPrintf("Fixed Seed: '%d'", fixedSeed);

    return fixedSeed;
}

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

static u8 GetTeamRestrictedCount() 
{
    u8 count = BFG_TEAM_RESTRICTED_COUNT;

    #if BFG_VAR_TEAM_RESTRICTED_COUNT != 0
    if (method == BFG_OPEN_RULES_RESTRICTED_VARIABLE)
        method = VarGet(BFG_VAR_TEAM_RESTRICTED_COUNT);
    #endif

    return count;
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

static u8 GetSpeciesNature(u16 speciesId, struct GeneratorProperties * properties) 
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

            u8 negStat = 0;

            u8 posStat = 0;
            u8 posStatValue = 0;

            u16 temp1 = (RANDOM_OFFSET(species->baseAttack));
            u16 temp2 = (RANDOM_OFFSET(species->baseSpAttack));

            // If the mon's base speed is below the target
            if (species->baseSpeed < BFG_NATURE_NEG_SPE_BASE) {
                negStat = STAT_SPEED;
            }
            else // The team is NOT a trick room team
            {
                // If both attack and special attack stats match
                if (temp1 == temp2)
                {
                    // prioritise special attack
                    if (RANDOM_BOOL())
                    {
                        negStat = STAT_ATK;
                    }
                    else // Prioritise attack
                    {
                        negStat = STAT_SPATK;
                    }
                }
                else if (temp1 > temp2) 
                {
                    negStat = STAT_SPATK;
                }
                else // Special attack is greater than attack
                {
                    negStat = STAT_ATK;
                }
            }

            // Loop over the stats (pick best stat)
            for(i = STAT_ATK; i < NUM_STATS; i++){
                if (i == negStat)
                    continue; 

                temp1 = RANDOM_OFFSET(posStatValue);

                switch(i) 
                {
                    case STAT_ATK: {
                        temp2 = RANDOM_OFFSET(species->baseAttack);
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
                        temp2 = RANDOM_OFFSET(species->baseDefense);
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
                        temp2 = RANDOM_OFFSET(species->baseSpAttack);
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
                        temp2 = RANDOM_OFFSET(species->baseSpDefense);
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
                        temp2 = RANDOM_OFFSET(species->baseSpeed);
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

#if BFG_EV_INVEST_NUM_STATS != BFG_EV_INVEST_NO_STATS
#define EVS_NONE 0xFF

#define GetHPOffset(n) ((n * BFG_EV_HP_OFFSET) / 10)

static void SetMonEVs(struct Pokemon * mon, struct GeneratorProperties * properties) {
                
    u8 i, j, k;

    u8 stats[BFG_EV_INVEST_NUM_STATS] = {};
    u8 vals[BFG_EV_INVEST_NUM_STATS] = {};

    for(i=0; i<BFG_EV_INVEST_NUM_STATS; i++) {
        stats[i] = EVS_NONE;
        vals[i] = 0;
    }

    u16 speciesId = GetMonData(mon, MON_DATA_SPECIES);
    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);

    u8 natureId = GetNature(mon);
    const struct Nature * nature = &(gNatureInfo[natureId]);

    bool8 repeat;

    // ValT: Temp (Current Stat)
    // ValR: Random (Current Stat + Random Offset)
    // Val0: Offset (For prev. entry being checked)
    u16 valT, valR, valO; 

    // Simplifies the selection of the main 2 stats
    #if BFG_EV_METHOD == BFG_EV_METHOD_SIMPLE
    #define INVEST_SPEED(species) ((RANDOM_OFFSET(species->baseHP) + RANDOM_OFFSET(species->baseDefense) + RANDOM_OFFSET(species->baseSpDefense)) < (RANDOM_OFFSET(species->baseSpeed) * 3))
    #define INVEST_OFFENSE(species) (RANDOM_OFFSET(MAX(species->baseAttack, species->baseSpAttack)) >= RANDOM_OFFSET(MAX(species->baseDefense, species->baseSpDefense)))

    // Always invest in posStat
    stats[0] = nature->posStat;

    // If pos. stat is not speed, and speed is higher than bulk
    if (nature->posStat != STAT_SPEED && INVEST_SPEED(species))
        stats[1] = STAT_SPEED; // Invest in speed

    // If pos. stat is not atk/spatk, and highest one is higher than highest bulk stat
    else if ((!((nature->posStat == STAT_ATK) || (nature->posStat == STAT_SPATK))) && INVEST_OFFENSE(species)) {
        // Switch on reduced stat
        switch(nature->negStat) {
            // -atk
            case STAT_ATK: 
                stats[1] = STAT_SPATK;
            break;
            // -spatk
            case STAT_SPATK:
                stats[1] = STAT_ATK; 
            break;
            // -spe
            default:
                // Precalculate offsets for both values
                valT = RANDOM_OFFSET(species->baseAttack);
                valO = RANDOM_OFFSET(species->baseSpAttack);

                // Atk is higher, or both match (and 50% chance)
                if ((valT > valO) || ((valT == valO) && RANDOM_BOOL()))
                    stats[1] = STAT_ATK; // Invest in Atk
                else
                    stats[1] = STAT_SPATK; // Invest in SpA
            break;
        }
    }
    else // Boosted stat must be either Def/SpD, and species is not offensive
        stats[1] = STAT_HP; // Invest in HP
    // Can skip the first 2 stats
    for(i=2; i<BFG_EV_INVEST_NUM_STATS; i++) {
    #else
    // Pick the top stats
    for(i=0; i<BFG_EV_INVEST_NUM_STATS; i++) {
    #endif
        // Loop over each stat
        for(j=STAT_HP; j<NUM_STATS; j++) {
            // Skip if reducing nature
            if (j == nature->negStat)
                continue;

            // Check for repeats
            repeat = FALSE;
            for(k=0; k<i; k++)
                if (stats[k] == j)
                    repeat = TRUE;
            // Skip repeats
            if (repeat) 
                continue;

            switch(j) 
            {
                case STAT_HP:
                    valT = GetHPOffset(species->baseHP);
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
            valR = RANDOM_OFFSET(valT);
            valO = RANDOM_OFFSET(vals[i]);

            // Series of conditions:
            // Current stat is undefined, 
            // New stat is the nature-boosted stat, 
            // New stat is higher than the current stat, 
            // New stat is the same as the current stat, with a 50% chance
            if (
                (stats[i] == EVS_NONE) || 
                (j == nature->posStat) || 
                (valR > valO) || 
                ((valR == valO) && RANDOM_BOOL())
            ) {
                stats[i] = j;
                vals[i] = valT;
            }
        }
    }

    // Last stat EVs
    u8 evsLast = 0;

    // Loop over the stats to invest into
    for(i=0; i<BFG_EV_INVEST_NUM_STATS; i++) {
        // Mon data field index
        u8 field = stats[i] + 33;

        // EVs to apply
        u8 evs = 0;

        // Switch on stat
        switch(i) 
        {
            case 0: // First stat
                #if BFG_EV_INVEST_NUM_STATS == BFG_EV_INVEST_TWO_STATS
                evs = 255; // Suboptimal investment
                #elif BFG_EV_INVEST_NUM_STATS == BFG_EV_INVEST_THREE_STATS
                evs = 252; // Full investment
                #else // Five stats
                // This stat is speed, or second stat is not speed
                if (stats[0] == STAT_SPEED || stats[1] != STAT_SPEED)
                evs = 252; // Full investment
                else
                evs = 244; // Secondary investment
                #endif
            break;
            case 1: // Second stat
                #if BFG_EV_INVEST_NUM_STATS == BFG_EV_INVEST_TWO_STATS
                evs = 255; // Suboptimal investment
                #elif BFG_EV_INVEST_NUM_STATS == BFG_EV_INVEST_THREE_STATS
                evs = 252; // Full investment
                #else // Five stats
                if (evsLast == 252)
                    evs = 244; // Secondary investment
                else
                    evs = 252; // Full investment
                #endif
            break;
            default: // Leftover stats (3-5 based on config)
                evs = 4; // Leftover investment
            break;
        }

        // Update mon evs
        SetMonData(mon, field, &evs);

        // Update last evs
        evsLast = evs;
    }
}
#endif

static u8 GetSpreadType(struct Pokemon * mon) {

    u8 nature = GetNature(mon);
    u8 atk = GetMonData(mon, MON_DATA_ATK_EV);
    u8 spa = GetMonData(mon, MON_DATA_SPATK_EV);

    // Conditions (Any)
    // 1. Atk or SpA EVs
    // 2. Nature-Boosted Atk
    // 3. Nature-Boosted SpA
    if (
        ((atk >= 244) || (spa >= 244)) || 
        ((gNatureInfo[nature].posStat == STAT_ATK) || 
        (gNatureInfo[nature].posStat == STAT_SPATK))
    ) {
        // Offensively-invested spread
        return BFG_SPREAD_TYPE_OFFENSIVE;
    }

    // Defensively-invested spread
    return BFG_SPREAD_TYPE_DEFENSIVE;
}

static u8 GetSpreadCategory(struct Pokemon * mon) {

    u8 nature = GetNature(mon);

    // Conditions (any of below):
    // 1. Mon has 244 Attack EVs
    // 2. Nature-boosted stat is attack
    // 3. Nature-reduced stat is sp.atk
    if (
        (GetMonData(mon, MON_DATA_ATK_EV) >= 244) || 
        (gNatureInfo[nature].posStat == STAT_ATK) || 
        (gNatureInfo[nature].negStat == STAT_SPATK)
    )
        return BFG_SPREAD_CATEGORY_PHYSICAL;

    // Conditions (any of below):
    // 1. Mon has 244 SpA EVs
    // 2. Nature-boosted stat is sp.atk
    // 3. Nature-reduced stat is attack
    if (
        (GetMonData(mon, MON_DATA_SPATK_EV) >= 244) || 
        (gNatureInfo[nature].posStat == STAT_SPATK) || 
        (gNatureInfo[nature].negStat == STAT_ATK)
    )
        return BFG_SPREAD_CATEGORY_SPECIAL;

    u16 atk = GetMonData(mon, MON_DATA_ATK);
    u16 spa = GetMonData(mon,MON_DATA_SPATK);

    // Last resort: return highest of atk, spatk stats
    return (atk == spa) ? (RANDOM_BOOL()) : atk < spa;
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
        return IN_INCLUSIVE_RANGE(fixedIVMinAtkLookup[properties->fixedIV], fixedIVMaxAtkLookup[properties->fixedIV], power);
    }

    return TRUE; // In range
}

static u8 GetFrontierMoveType(struct Pokemon * mon, u16 moveId)
{
    u8 type = TYPE(moveId);

    // Ivy Cudgel Type Change
    if (moveId == MOVE_IVY_CUDGEL) {
        
        u16 species = GetMonData(mon, MON_DATA_SPECIES);

        switch(species) {
            case SPECIES_OGERPON_CORNERSTONE:
                type = TYPE_ROCK;
            break;
            case SPECIES_OGERPON_HEARTHFLAME:
                type = TYPE_FIRE;
            break;
            case SPECIES_OGERPON_WELLSPRING:
                type = TYPE_WATER;
            break;
        }
    }

    u16 abilityId = GetMonAbility(mon);

    // General Case: Abilities
    switch(abilityId)
    {
        case ABILITY_NORMALIZE: 
            return TYPE_NORMAL;
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
            if ((gMovesInfo[SanitizeMoveId(moveId)].soundMove) == TRUE) 
                type = TYPE_WATER;
            break;
    }

    return type;
}

static u16 GetAttackRating(u16 speciesId, u32 moveId, u16 abilityId, u8 type)
{    
    const struct MoveInfo* move = &(gMovesInfo[SanitizeMoveId(moveId)]);

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

static bool8 CheckMoveRecovery(struct GeneratorMoves * options) {
    u8 i;
    for(i=0; i < (options->moveCount); i++) {
        if (IS_RECOVERY_MOVE(options->moves[i]))
            return TRUE;
    }
    return FALSE;
}

static bool8 CheckMoveProtect(struct GeneratorMoves * options) {
    u8 i;
    for(i=0; i < (options->moveCount); i++) {
        if (IS_PROTECTING_MOVE(options->moves[i]))
            return TRUE;
    }
    return FALSE;
}

static bool8 CheckMoveDuplicate(u16 moveId, struct GeneratorMoves * options) {
    u8 i;
    for(i=0; i < (options->moveCount); i++) {
        if (moveId == (options->moves[i]))
            return TRUE;
    }
    return FALSE;
}

static bool8 TryUpdateMove(struct Pokemon * mon, u16 moveId, struct GeneratorMoves * options, u8 index) {

    #if BFG_TEST_PRINT_MOVES == TRUE
    DebugPrintf("Add: %S\n", GetMoveName(moveId));
    for(u8 i=0; i<MAX_MON_MOVES; i++)
        DebugPrintf("%d. %S\n", i, GetMoveName((options->moves[i])));
    #endif

    // Move has not already been selected
    if (!(CheckMoveDuplicate(moveId, options))) {

        // Prev. Move Type
        u8 oldType = TYPE_NONE;

        // Moveslot is empty
        if ((options->moves)[index] == MOVE_NONE)
            (options->moveCount)++;
        else
            oldType = GetFrontierMoveType(mon, (options->moves)[index]);

        // Add to moves list
        (options->moves)[index] = moveId;

        // If the move is not a status move, and is also not an 'ignore type count' move
        if ((CATEGORY(moveId) != DAMAGE_CATEGORY_STATUS) && (!(IsIgnoreTypeCountMove(moveId)))) {
            // Get the accurate type for the move
            u8 type = GetFrontierMoveType(mon, moveId);

            // Update new type index
            (options->types)[type] = index;

            // Update old type index
            if (type != oldType)
                (options->types)[oldType] = BFG_MOVE_TYPE_NONE;
        }

        // Move added
        return TRUE;
    }

    // Not added
    return FALSE;
}

static bool8 TryAddMove(struct Pokemon * mon, u16 moveId, struct GeneratorMoves * options) {
    return TryUpdateMove(mon, moveId, options, (options->moveCount));
}

static bool8 HandleMove(struct Pokemon * mon, u16 moveId, struct GeneratorProperties * properties, struct GeneratorMoves * options)
{
    // Always-select move
    if (IsAlwaysSelectMove(moveId))
    {
        // Update move without other checks
        return TryAddMove(mon, moveId, options);
    }
    else // Not always-select
    {
        switch(moveId) {
            // Trick Room
            case MOVE_TRICK_ROOM: {
                u8 nature = GetNature(mon);
                u8 spe = GetMonData(mon, MON_DATA_SPEED_EV);

                // If the mon *low* speed evs, and a non-boosted speed nature
                if ((spe <= 4) && (gNatureInfo[nature].posStat != STAT_SPEED)) {
                    
                    // Mon meets any of the following conditions:
                    // 1. Negative speed nature
                    // 2. Random Chance (1/BFG_MOVE_TRICK_ROOM_SELECTION_CHANCE)
                    if ((gNatureInfo[nature].negStat == STAT_SPEED) || RANDOM_CHANCE(BFG_MOVE_TRICK_ROOM_SELECTION_CHANCE))
                        return TryAddMove(mon, moveId, options);
                }
            }; break;
            // Tailwind
            case MOVE_TAILWIND: {
                u8 nature = GetNature(mon);
                u8 spe = GetMonData(mon, MON_DATA_SPEED_EV);
                u16 ability = GetMonAbility(mon);

                // Mon meets any of the following conditions:
                // 1. Positive Speed Nature
                // 2. 252 Speed EVs
                // 3. Gale Wings or Prankster abilities
                // 4. Random Chance (1/BFG_MOVE_TAILWIND_SELECTION_CHANCE)
                if (
                    (gNatureInfo[nature].posStat == STAT_SPEED) || (spe == 252) || 
                    (ability == ABILITY_GALE_WINGS) || (ability == ABILITY_PRANKSTER) || 
                    RANDOM_CHANCE(BFG_MOVE_TAILWIND_SELECTION_CHANCE)
                )
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Aurora Veil
            case MOVE_AURORA_VEIL: {
                u16 ability = GetMonAbility(mon);

                // Mon has a hail ability
                if (IS_HAIL_ABILITY(ability))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Final Gambit
            case MOVE_FINAL_GAMBIT: {
                u8 hp = GetMonData(mon, MON_DATA_HP_EV);
                u8 spe = GetMonData(mon, MON_DATA_SPEED_EV);

                // Max speed, almost max. HP
                if ((hp >= 244 && spe == 252))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Body Press
            case MOVE_BODY_PRESS: {
                u8 nature = GetNature(mon);
                u8 def = GetMonData(mon, MON_DATA_DEF_EV);

                // Defense-boosting nature, or almost max. defense
                if ((gNatureInfo[nature].posStat == STAT_DEF) || (def >= 244))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Foul Play
            case MOVE_FOUL_PLAY: {
                u8 nature = GetNature(mon);
                u8 atk = GetMonData(mon, MON_DATA_ATK_EV);

                // Non-attack boosting nature, and no attack evs
                if ((gNatureInfo[nature].posStat != STAT_ATK) && (atk == 0))
                {
                    u16 species = GetMonData(mon, MON_DATA_SPECIES);

                    // Species is a dark type, or the foul play random selection chance is met
                    if (IS_STAB(species, TYPE_DARK) || (RANDOM_CHANCE(BFG_MOVE_FOUL_PLAY_SELECTION_CHANCE)))
                        return TryAddMove(mon, moveId, options);
                }
            }; break;
            // Protect / Detect
            case MOVE_DETECT: 
            case MOVE_PROTECT: {
                u16 ability = GetMonAbility(mon);
                // If the mon has an end-of-turn ability, or the random selection chance is met
                if (IS_END_OF_TURN_ABILITY(ability) || RANDOM_CHANCE(BFG_MOVE_PROTECT_SELECTION_CHANCE)) {
                    // Mon does not already have protect
                    if (!(CheckMoveProtect(options)))
                        return TryAddMove(mon, moveId, options);
                }
            }; break;
            // Sunny Day
            case MOVE_SUNNY_DAY: {
                u16 ability = GetMonAbility(mon);
                if (IS_SUN_BONUS_ABILITY(ability) && RANDOM_CHANCE(BFG_MOVE_WEATHER_SELECTION_CHANCE))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Rain Dance
            case MOVE_RAIN_DANCE: {
                u16 ability = GetMonAbility(mon);
                if (IS_RAIN_BONUS_ABILITY(ability) && RANDOM_CHANCE(BFG_MOVE_WEATHER_SELECTION_CHANCE))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Sandstorm
            case MOVE_SANDSTORM: {
                u16 ability = GetMonAbility(mon);
                if (IS_SAND_BONUS_ABILITY(ability) && RANDOM_CHANCE(BFG_MOVE_WEATHER_SELECTION_CHANCE))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Hail / etc.
            case MOVE_HAIL:
            case MOVE_SNOWSCAPE:
            case MOVE_CHILLY_RECEPTION: {
                u16 ability = GetMonAbility(mon);
                if (IS_HAIL_BONUS_ABILITY(ability) && RANDOM_CHANCE(BFG_MOVE_WEATHER_SELECTION_CHANCE))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Doubles-Specific Recovery Moves
            ALLOWED_RECOVERY_MOVES_DOUBLES {
                // Break if not doubles
                if (!(IS_DOUBLES()))
                    break;
                // Continue to general case
            }; 
            // Recovery Moves
            ALLOWED_RECOVERY_MOVES {
                u16 ability = GetMonAbility(mon);
                // If the move is 'Rest', and the mon cannot sleep
                if ((moveId == MOVE_REST) && IS_SLEEP_IMMUNE(ability))
                    break;

                // Mon has a defensive spread, (near) max hp evs, and does not already have a recovery move
                if (((GetSpreadType(mon) == BFG_SPREAD_TYPE_DEFENSIVE) || (GetMonData(mon, MON_DATA_HP_EV) >= 244)) && (!(CheckMoveRecovery(options))) && RANDOM_CHANCE(BFG_MOVE_RECOVER_SELECTION_CHANCE))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Weather-Reliant Moves
            case MOVE_WEATHER_BALL: {
                u16 ability = GetMonAbility(mon);

                // Get spread Physical / Special focus
                u8 spreadCategory = GetSpreadCategory(mon);

                // If the mon has a weather (or weather bonus) ability, the spread category is special, and the weather ball selection chance is met
                if ((IS_WEATHER_ABILITY(ability) || IS_WEATHER_BONUS_ABILITY(ability)) && (spreadCategory == BFG_SPREAD_CATEGORY_SPECIAL) && RANDOM_CHANCE(BFG_MOVE_WEATHER_BALL_SELECTION_CHANCE))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // Setup Moves (Special)

            // Setup Moves (Physical)

            // Self-Destructing Moves
            case MOVE_MISTY_EXPLOSION: {
                u16 ability = GetMonAbility(mon);

                // Get spread Physical / Special focus
                u8 spreadCategory = GetSpreadCategory(mon);

                // Mon has misty surge, spread is special and random selection check passes
                if ((ability == ABILITY_MISTY_SURGE) && (spreadCategory == BFG_SPREAD_CATEGORY_SPECIAL) && RANDOM_CHANCE(BFG_MOVE_EXPLODE_SELECTION_CHANCE))
                    return TryAddMove(mon, moveId, options);
            }; break;
            case MOVE_SELF_DESTRUCT:
            case MOVE_EXPLOSION: {
                // Get spread Physical / Special focus
                u8 spreadCategory = GetSpreadCategory(mon);

                // Spread is physical and random selection check passes
                if ((spreadCategory == BFG_SPREAD_CATEGORY_PHYSICAL) && RANDOM_CHANCE(BFG_MOVE_EXPLODE_SELECTION_CHANCE))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // OHKO Moves
            case MOVE_GUILLOTINE:
            case MOVE_HORN_DRILL:
            case MOVE_SHEER_COLD:
            case MOVE_FISSURE: {
                // Get spread offensive / defensive focus
                u8 type = GetSpreadType(mon);

                // Spread is defensive, and the ohko random selection check passed
                if ((type == BFG_SPREAD_TYPE_DEFENSIVE) && (RANDOM_CHANCE(BFG_MOVE_OHKO_SELECTION_CHANCE)))
                    return TryAddMove(mon, moveId, options);
            }; break;
            // General Case
            default: {
                // Move is not a never-select move, and meets move power requirements
                if ((!IsNeverSelectMove(moveId)) && (CheckMovePower(moveId, properties))) {

                    // Status Move
                    if (CATEGORY(moveId) == DAMAGE_CATEGORY_STATUS) {

                        // Team Generation Method
                        u8 method = GetTeamGenerationMethod(); 

                        // Conditions:
                        // 1. Max. number of status moves has not been reached
                        // 2. Method is NOT FILTERED_ATTACKS_ONLY, or FILTERED_RANKING_ATTACKS_ONLY
                        // 3. The status move is in the allowed list (if the allow list is enabled)
                        if (
                            ((options->numAllowedStatusMoves) < BFG_MOVE_RATING_LIST_SIZE_STATUS) && 
                            (method != BFG_TEAM_GENERATOR_FILTERED_ATTACKS_ONLY) && 
                            (method != BFG_TEAM_GENERATOR_FILTERED_RANKING_ATTACKS_ONLY) && 
                            IsAllowedStatusMove(moveId)
                        )
                            (options->allowedStatusMoves)[(options->numAllowedStatusMoves)++] = moveId;
                    } 
                    else // Non-status move
                    {
                        // Get spread Physical / Special focus
                        u8 spreadCategory = GetSpreadCategory(mon);

                        // Conditions:
                        // 1. Max. number of attacks has not been reached
                        // 2. Mon has a physical set, and the move is physical
                        // OR Mon has a special set, and the move is special
                        if (
                            ((options->numAllowedAttackingMoves) < BFG_MOVE_RATING_LIST_SIZE_ATTACK) && 
                            (
                                (CATEGORY(moveId) == DAMAGE_CATEGORY_PHYSICAL && spreadCategory == BFG_SPREAD_CATEGORY_PHYSICAL) || 
                                (CATEGORY(moveId) == DAMAGE_CATEGORY_SPECIAL && spreadCategory == BFG_SPREAD_CATEGORY_SPECIAL)
                            )
                        )
                            (options->allowedAttackingMoves)[(options->numAllowedAttackingMoves)++] = moveId;
                    }
                }
            }; break;
        }
    }

    // Not added
    return FALSE;
}

static u8 GetSpeciesMoves(struct Pokemon * mon, u16 speciesId, u16 requiredMove, struct GeneratorProperties * properties) 
{
    u16 i, j, moveIndex;

    // List of moves

    const struct LevelUpMove* levelUpLearnset;
    const u16 * teachableLearnset, * eggMoveLearnset;

    u8 levelUpMoves = 0;
    u8 teachableMoves = 0;
    u8 eggMoves = 0;

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

    #if BFG_MOVE_ALLOW_EGG_MOVES == TRUE
    u16 eggSpecies = GetEggSpecies(speciesId);
    eggMoveLearnset = GetSpeciesEggMoves(eggSpecies);
    while(eggMoveLearnset[eggMoves] != MOVE_UNAVAILABLE)
        eggMoves++;
    #endif

    // Pre-egg Moves, and total number of moves
    u8 preEggMoves = levelUpMoves + teachableMoves;
    u8 totalMoves = preEggMoves + eggMoves;

    DebugPrintf("%d level up moves, %d teachable moves, %d egg moves (%d total) ...", levelUpMoves, teachableMoves, eggMoves, totalMoves);

    // Number of moves learnt
    u8 moveCount = 0;

    // At least the min. number of moves found
    if (totalMoves >= BFG_TEAM_GENERATOR_MIN_MOVES) {

        // Duplicate move tracker
        u16 failures = 0;

        // Friendship level
        // This is changed for Frustration
        u8 friendship = FRIENDSHIP_MAX;

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
                            moveIndex = Random2() % (teachableMoves + levelUpMoves);

                            if (moveIndex >= levelUpMoves) {
                                // Move is in the teachable learnset
                                moveId = teachableLearnset[moveIndex % levelUpMoves];
                            } else if (moveIndex >= preEggMoves) {
                                // Move is in the egg-move learnset
                                moveId = eggMoveLearnset[moveIndex % preEggMoves];
                            } else {
                                // Move is in the level-up learnset
                                moveId = levelUpLearnset[moveIndex].move;
                            }

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

                // Move Type Placeholder
                u8 newType;

                // Get species ability            
                u16 abilityId = GetMonAbility(mon);

                // Get offensive/defensive & physical/special split
                u8 spreadType = GetSpreadType(mon);

                // Generator Move Options Struct
                struct GeneratorMoves options;
                InitGeneratorMoves(&options);

                // Attempt to add the required move
                if ((requiredMove != MOVE_NONE))
                    TryAddMove(mon, requiredMove, &options);
                
                // STAGE 1: Add always-select moves and build lists

                // Check level-up moves
                for(i=0; i < levelUpMoves; i++)
                    HandleMove(mon, levelUpLearnset[i].move, properties, &options);

                // Check teachable moves
                for(i=0; i<teachableMoves; i++)
                    HandleMove(mon, teachableLearnset[i], properties, &options);

                // Check egg moves
                for(i=0; i<eggMoves; i++)
                    HandleMove(mon, eggMoveLearnset[i], properties, &options);

                // *** STAGE 2: ADD OTHER MOVES ***

                // Remaining move slots
                u8 remainder = MAX_MON_MOVES - (options.moveCount);

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
                            attackCount = MIN(remainder, RANDOM_RANGE(2,4));
                    }

                    // Select moves via ranking
                    if ((method == BFG_TEAM_GENERATOR_FILTERED_RANKING) || (method == BFG_TEAM_GENERATOR_FILTERED_RANKING_ATTACKS_ONLY))
                    {
                        // Attack move indexes
                        u8 start = (options.moveCount);
                        u8 end = (options.moveCount) + attackCount;

                        // Move Rating Table
                        u16 rating[MAX_MON_MOVES] = {
                            0, 0, 0, 0
                        };

                        u16 attackRating; // Current move

                        // Loop over allowed attacking moves
                        for(i=0; i<(options.numAllowedAttackingMoves); i++) {
                            moveId = options.allowedAttackingMoves[i];
                            
                            // Get move type, accounted for ability
                            newType = GetFrontierMoveType(mon, moveId);
                            attackRating = RANDOM_OFFSET(GetAttackRating(speciesId, moveId, abilityId, newType));

                            // Index of same-typed move
                            moveIndex = (options.types)[newType];
                            if ((options.moves)[moveIndex] == moveId)
                                continue; // Skip duplicate move

                            // If this is not the first move of type, and move is not an ignore type count move
                            if ((moveIndex != BFG_MOVE_TYPE_NONE) && (!(IsIgnoreTypeCountMove(moveId))))
                            {
                                // Existing move has no rating
                                if (rating[moveIndex] == 0)
                                    continue; // Cannot be replaced

                                // Rating is greater, or equal/worse and selection chance is met - Attempt to update move
                                if ((rating[moveIndex] < attackRating) || ((rating[moveIndex] == attackRating) && RANDOM_BOOL()))
                                    if (TryUpdateMove(mon, moveId, &options, moveIndex))
                                        rating[moveIndex] = attackRating;
                            }
                            else // No same-typed moves
                            {
                                // Replace first worst move
                                #if BFG_MOVE_QUICK_REPLACE == TRUE
                                // Loop over move indexes
                                for(j=start; j<end; j++) {
                                    // Rating is greater, or equal/worse and selection chance is met
                                    if (
                                        (rating[j] < attackRating) || 
                                        ((rating[j] == attackRating) && RANDOM_BOOL())
                                    ) {
                                        // Attempt to update move
                                        if (TryUpdateMove(mon, moveId, &options, j)) {
                                            rating[j] = attackRating;
                                            break;
                                        }
                                    }
                                }
                                #else // Pick-Worst Replace
                                u8 worst = start;

                                // Find worst move rating
                                for(j=(start+1); j<end; j++) {
                                    if (rating[worst] == 0)
                                        break;
                                    if ((rating[j] < rating[worst]) || ((rating[j] == rating[worst]) && RANDOM_BOOL()))
                                        worst = j;
                                }

                                // Try to replace worst move
                                if ((rating[worst] < attackRating) || ((rating[worst] == attackRating) && RANDOM_BOOL()))
                                    if (TryUpdateMove(mon, moveId, &options, worst))
                                        rating[worst] = attackRating;
                                #endif
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
                                moveIndex = Random2() % (options.numAllowedAttackingMoves);
                                moveId = options.allowedAttackingMoves[moveIndex];

                                // Attempt to add the required move
                                if (!(TryAddMove(mon, moveId, &options)))
                                    failures++; 
                            }
                        }
                    }

                    // Reset failure limit
                    failures = 0;

                    // Calculate number of required status moves
                    u8 statusCount = MAX_MON_MOVES - (options.moveCount);

                    // Add status moves
                    for(i=0; i < statusCount; i++)
                    {
                        // Reset moveId
                        moveId = MOVE_NONE; 

                        // While no move found, and failure limit has not been reached
                        while((moveId == MOVE_NONE) && (failures < BFG_TEAM_GENERATOR_FILTERED_FAILURE_LIMIT)) 
                        {
                            // Sample a random status move from the list
                            moveIndex = Random2() % (options.numAllowedStatusMoves);
                            moveId = options.allowedStatusMoves[moveIndex];

                            // Attempt to add the required move
                            if (!(TryAddMove(mon, moveId, &options))) {
                                // Clear moves, failures
                                moveId = MOVE_NONE;
                                failures++;
                            }
                        }
                    }
                }

                // Fill the moveslots for the species
                moveCount = SetMonMoves(mon, (options.moves));
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

    }

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

u16 GetSpeciesItem(struct Pokemon * mon, u16 * items, u8 itemCount) {

    u16 speciesId = GetMonData(mon, MON_DATA_SPECIES);
    u16 abilityId = GetMonAbility(mon);
    u8 natureId = GetNature(mon);

    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);
    const struct Nature * nature = &(gNatureInfo[natureId]);
    const struct MoveInfo * move;

    u16 i;
    u16 itemId, moveId;
    
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
    u8 numContact = 0;
    u8 numPunch = 0;
    u8 numSound = 0;

    // Weather effect placeholder
    u16 hasWeather = MOVE_NONE;

    // Check for species evolutions
    const struct Evolution * evolutions = GetSpeciesEvolutions(speciesId);
    if (evolutions != NULL)
        hasEvolution = TRUE;

    u8 moveTypeCount[NUMBER_OF_MON_TYPES];

    // Weaknesses for resist berries
    u8 typeModifier[NUMBER_OF_MON_TYPES];
    uq4_12_t temp;

    // Loop over all of the (attacking) types
    for(i = 0; i < NUMBER_OF_MON_TYPES; i++) {
        // Initialise move counter
        moveTypeCount[i] = 0;

        // Apply primary type modifier
        temp = gTypeEffectivenessTable[i][species->types[0]];

        // If the species is not a mono-type Pokemon
        if ((species->types[0]) != (species->types[1]))
            temp = uq4_12_multiply(temp, gTypeEffectivenessTable[i][species->types[1]]);

        // Convert to int
        typeModifier[i] = UQ_4_12_TO_INT(temp);
    }

    // Loop over the species moves
    for (i = 0; i < MAX_MON_MOVES; i++) {
        moveId = GetMonData(mon, (MON_DATA_MOVE1 + i));
        move = &(gMovesInfo[SanitizeMoveId(moveId)]);

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

        // Common move effects
        switch(move->effect) {
            case EFFECT_MULTI_HIT:
                numMultiHit++;
            break;
            case EFFECT_TWO_TURNS_ATTACK: 
            case EFFECT_SEMI_INVULNERABLE:
                hasTwoTurn = TRUE;
            break;
            case EFFECT_LIGHT_SCREEN:
            case EFFECT_REFLECT:
            case EFFECT_AURORA_VEIL:
                numScreens++;
            break;
            case EFFECT_FOCUS_ENERGY:
                numCritModifier++;
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
        } 
        else // Non-Status Move
        {
            // Stat-dropping moves
            if (IS_STAT_REDUCING_EFFECT(move->effect))
                numStatDrop++;

            // Punching moves
            if (move->punchingMove == TRUE)
                numPunch++;

            // Contact moves
            if (move->makesContact == TRUE)
                numContact++;

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

    // Start with more obscure items, then common items at the bottom
    // This *should* result in better variance between item choices :)

    // *** Items required for specific strategies ***

    #if BFG_ITEM_RAZOR_FANG_SELECTION_CHANCE || BFG_ITEM_KINGS_ROCK_SELECTION_CHANCE
    if (hasFling)
    {
        if (RANDOM_CHANCE(BFG_ITEM_RAZOR_FANG_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_RAZOR_FANG);
        if (RANDOM_CHANCE(BFG_ITEM_KINGS_ROCK_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_KINGS_ROCK);
    }
    #endif

    #if BFG_ITEM_POWER_HERB_SELECTION_CHANCE
    if (hasTwoTurn && RANDOM_CHANCE(BFG_ITEM_POWER_HERB_SELECTION_CHANCE))
        RETURN_IF_UNIQUE(ITEM_POWER_HERB);
    #endif

    #if BFG_ITEM_CHESTO_BERRY_SELECTION_CHANCE
    if (hasRest) 
    {
        if (RANDOM_CHANCE(BFG_ITEM_CHESTO_BERRY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_CHESTO_BERRY);
        if (RANDOM_CHANCE(BFG_ITEM_CHESTO_BERRY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_LUM_BERRY);
    }
    #endif

    // *** Niche items with specific use cases ***

    // Non-recyclable items
    if (hasRecycle == FALSE)
    {
        #if BFG_ITEM_FLAME_ORB_SELECTION_CHANCE
        if (((abilityId == ABILITY_GUTS && (numPhysical + numDynamic) >= BFG_ITEM_FLAME_ORB_MOVES_REQUIRED) || (abilityId == ABILITY_FLARE_BOOST && (numSpecial + numDynamic) >= BFG_ITEM_FLAME_ORB_MOVES_REQUIRED)) && RANDOM_CHANCE(BFG_ITEM_FLAME_ORB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_FLAME_ORB);
        #endif

        #if BFG_ITEM_TOXIC_ORB_SELECTION_CHANCE
        if (((abilityId == ABILITY_TOXIC_BOOST && (numPhysical + numDynamic) >= BFG_ITEM_TOXIC_ORB_MOVES_REQUIRED) || abilityId == ABILITY_POISON_HEAL) && RANDOM_CHANCE(BFG_ITEM_TOXIC_ORB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_TOXIC_ORB);
        #endif

        #if BFG_ITEM_MIRROR_HERB_SELECTION_CHANCE
        if ((((hasFlatter == TRUE) && (numSpecial >= BFG_ITEM_MIRROR_HERB_OFFENSIVE_MOVES_REQUIRED)) || ((hasSwagger == TRUE) && ((numPhysical + numDynamic) >= BFG_ITEM_MIRROR_HERB_OFFENSIVE_MOVES_REQUIRED))) && RANDOM_CHANCE(BFG_ITEM_MIRROR_HERB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_MIRROR_HERB);
        #endif

        #if BFG_ITEM_LOADED_DICE_SELECTION_CHANCE
        for(i=0; i < numMultiHit; i++)
            if (RANDOM_CHANCE(BFG_ITEM_LOADED_DICE_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_LOADED_DICE);
        #endif

        #if BFG_ITEM_LIGHT_CLAY_SELECTION_CHANCE
        for(i=0; i < numScreens; i++)
            if (RANDOM_CHANCE(BFG_ITEM_LIGHT_CLAY_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_LIGHT_CLAY);
        #endif

        #if BFG_ITEM_WIDE_LENS_SELECTION_CHANCE
        for(i=0; i < numInaccurate; i++)
            if ((hasRecycle == FALSE) && (RANDOM_CHANCE(BFG_ITEM_WIDE_LENS_SELECTION_CHANCE)))
                RETURN_IF_UNIQUE(ITEM_WIDE_LENS);
        #endif

        #if BFG_ITEM_SCOPE_LENS_SELECTION_CHANCE || BFG_ITEM_RAZOR_CLAW_SELECTION_CHANCE
        for(i=0; i < numCritModifier; i++)
        {
            if (RANDOM_CHANCE(BFG_ITEM_SCOPE_LENS_SELECTION_CHANCE)) {
                RETURN_IF_UNIQUE(ITEM_SCOPE_LENS);
            } else if (RANDOM_CHANCE(BFG_ITEM_RAZOR_CLAW_SELECTION_CHANCE)) {
                RETURN_IF_UNIQUE(ITEM_RAZOR_CLAW);
            }
        }
        #endif
        
        #if BFG_ITEM_PROTECTIVE_PADS_SELECTION_CHANCE
        // Ensure ability does not affect contact moves
        if ((abilityId != ABILITY_UNSEEN_FIST) && (abilityId != ABILITY_LONG_REACH) && (abilityId != ABILITY_TOUGH_CLAWS))
            for(i=0; i<numContact; i++)
                if (RANDOM_CHANCE(BFG_ITEM_PROTECTIVE_PADS_SELECTION_CHANCE))
                    RETURN_IF_UNIQUE(ITEM_PROTECTIVE_PADS)
        #endif

        #if BFG_ITEM_PUNCHING_GLOVE_SELECTION_CHANCE
        for(i=0; i < numPunch; i++)
            if (RANDOM_CHANCE(BFG_ITEM_PUNCHING_GLOVE_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_PUNCHING_GLOVE);
        #endif

        #if BFG_ITEM_IRON_BALL_SELECTION_CHANCE
        if (hasTrickRoom && RANDOM_CHANCE(BFG_ITEM_IRON_BALL_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_IRON_BALL);
        #endif

        #if BFG_ITEM_BLACK_SLUDGE_SELECTION_CHANCE
        if (IS_TYPE(species, TYPE_POISON) && RANDOM_CHANCE(BFG_ITEM_BLACK_SLUDGE_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_BLACK_SLUDGE);
        #endif

        #if BFG_ITEM_TERRAIN_EXTENDER_SELECTION_CHANCE
        if ((hasTerrain == TRUE || IS_TERRAIN_ABILITY(abilityId)) && RANDOM_CHANCE(BFG_ITEM_TERRAIN_EXTENDER_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_TERRAIN_EXTENDER);
        #endif

        #if BFG_ITEM_WEATHER_EXTENDER_SELECTION_CHANCE
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
        #endif
    }

    // Recyleable items

    #if BFG_ITEM_ADRENALINE_ORB_SELECTION_CHANCE
    if (IS_STAT_DROP_ABILITY(abilityId) && RANDOM_CHANCE(BFG_ITEM_ADRENALINE_ORB_SELECTION_CHANCE))
        RETURN_IF_UNIQUE(ITEM_ADRENALINE_ORB);
    #endif

    #if BFG_ITEM_ROOM_SERVICE_SELECTION_CHANCE
    if (hasTrickRoom && RANDOM_CHANCE(BFG_ITEM_ROOM_SERVICE_SELECTION_CHANCE))
        RETURN_IF_UNIQUE(ITEM_ROOM_SERVICE);
    #endif

    #if BFG_ITEM_BLUNDER_POLICY_SELECTION_CHANCE
    for(i=0; i < numInaccurate; i++)
        if ((hasRecycle == FALSE) && (RANDOM_CHANCE(BFG_ITEM_BLUNDER_POLICY_SELECTION_CHANCE)))
            RETURN_IF_UNIQUE(ITEM_BLUNDER_POLICY);
    #endif

    #if BFG_ITEM_WHITE_HERB_SELECTION_CHANCE || BFG_ITEM_EJECT_PACK_SELECTION_CHANCE
    for(i=0; i < numStatDrop; i++)
    {
        if (RANDOM_CHANCE(BFG_ITEM_WHITE_HERB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_WHITE_HERB);
        if (RANDOM_CHANCE(BFG_ITEM_EJECT_PACK_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_EJECT_PACK);
    }
    #endif

    #if BFG_ITEM_THROAT_SPRAY_SELECTION_CHANCE
    for(i=0; i < numSound; i++)
        if (RANDOM_CHANCE(BFG_ITEM_THROAT_SPRAY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_THROAT_SPRAY);
    #endif

    #if BFG_ITEM_MENTAL_HERB_SELECTION_CHANCE
    for(i=0; i < numStatus; i++)
        if (RANDOM_CHANCE(BFG_ITEM_MENTAL_HERB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_MENTAL_HERB);
    #endif

    // *** Type-Specific Items ***
    #if BFG_ITEM_STAB_GEM_SELECTION_CHANCE || BFG_ITEM_GEM_SELECTION_CHANCE || BFG_ITEM_STAB_TYPE_SELECTION_CHANCE || BFG_ITEM_TYPE_SELECTION_CHANCE || BFG_ITEM_STAB_ZMOVE_SELECTION_CHANCE || BFG_ITEM_ZMOVE_SELECTION_CHANCE
    u8 spreadType = GetSpreadType(mon);
    
    // If the mon has an 'offensive' spread type
    if (spreadType == BFG_SPREAD_TYPE_OFFENSIVE) {
        // Loop over the types
        for(i = 0; i < NUMBER_OF_MON_TYPES; i++) 
        {
            // At least one move of this type
            if (moveTypeCount[i] > 0) 
            {
                // Check if the move is the same type
                bool8 isStabType = IS_TYPE(species, i);

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
    }
    #endif
    
    // *** Resist Berries *** 
    #if BFG_ITEM_RESIST_BERRY_2X_SELECTION_CHANCE || BFG_ITEM_RESIST_BERRY_4X_SELECTION_CHANCE
    // Placeholders
    currentType = TYPE_NONE;
    u8 currentValue = 1;

    // Loop over the types
    for(i = 0; i < NUMBER_OF_MON_TYPES; i++) 
    {
        // Switch on type modifier
        switch(typeModifier[i])
        {
            case 2: // 2x Weakness
                // Skip if we have already found a 4x weakness
                if ((currentValue != 4) && (RANDOM_CHANCE(BFG_ITEM_RESIST_BERRY_2X_SELECTION_CHANCE)))
                {
                    // Update selected type, value
                    currentValue = typeModifier[i];
                    currentType = i;
                }
            break;
            case 4: // 4x Weakness
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
        case TYPE_FIGHTING: itemId = ITEM_CHOPLE_BERRY; break;
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
    #endif

    #if BFG_ITEM_STAT_BOOST_BERRY_SELECTION_CHANCE
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
    #endif

    // *** Competitive items with specific use cases ***

    #if BFG_ITEM_BOOSTER_ENERGY_SELECTION_CHANCE
    if (((abilityId == ABILITY_PROTOSYNTHESIS) && (abilityId == ABILITY_QUARK_DRIVE)) && RANDOM_CHANCE(BFG_ITEM_BOOSTER_ENERGY_SELECTION_CHANCE))
        RETURN_IF_UNIQUE(ITEM_BOOSTER_ENERGY);
    #endif

    #if BFG_ITEM_LUM_BERRY_SELECTION_CHANCE
    if (RANDOM_CHANCE(BFG_ITEM_LUM_BERRY_SELECTION_CHANCE))
        RETURN_IF_UNIQUE(ITEM_LUM_BERRY);
    #endif

    #if BFG_ITEM_AIR_BALLOON_2X_SELECTION_CHANCE || BFG_ITEM_AIR_BALLOON_4X_SELECTION_CHANCE
    if ((abilityId != ABILITY_LEVITATE) &&
        // Different odds for both 2x and 4x ground weaknesses, exclude levitating Pokemon
        ((typeModifier[TYPE_GROUND] == 2 && (RANDOM_CHANCE(BFG_ITEM_AIR_BALLOON_2X_SELECTION_CHANCE))) || 
        (typeModifier[TYPE_GROUND] == 4 && (RANDOM_CHANCE(BFG_ITEM_AIR_BALLOON_4X_SELECTION_CHANCE)))))
        RETURN_IF_UNIQUE(ITEM_AIR_BALLOON);
    #endif

    #if BFG_ITEM_ABILITY_SHIELD_SELECTION_CHANCE
    if (RANDOM_CHANCE(BFG_ITEM_ABILITY_SHIELD_SELECTION_CHANCE))
        RETURN_IF_UNIQUE(ITEM_ABILITY_SHIELD);
    #endif

    #if BFG_ITEM_EJECT_BUTTON_SELECTION_CHANCE
    if (RANDOM_CHANCE(BFG_ITEM_EJECT_BUTTON_SELECTION_CHANCE))
        RETURN_IF_UNIQUE(ITEM_EJECT_BUTTON);
    #endif

    #if BFG_ITEM_RED_CARD_SELECTION_CHANCE
    if (RANDOM_CHANCE(BFG_ITEM_RED_CARD_SELECTION_CHANCE))
        RETURN_IF_UNIQUE(ITEM_RED_CARD);
    #endif

    // *** Competitive items for bulky Pokemon ***

    // If Pokemon has *at least* 244 invested in HP
    if (GetMonData(mon, MON_DATA_HP_IV) >= 244) {

        // Non-recycleable items
        if (hasRecycle == FALSE) {
            #if BFG_ITEM_EVIOLITE_SELECTION_CHANCE
            if (hasEvolution && RANDOM_CHANCE(BFG_ITEM_EVIOLITE_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_EVIOLITE);
            #endif

            #if BFG_ITEM_ASSAULT_VEST_SELECTION_CHANCE
            if ((numOffensive == 4) && RANDOM_CHANCE(BFG_ITEM_ASSAULT_VEST_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_ASSAULT_VEST);
            #endif

            #if BFG_ITEM_ROCKY_HELMET_SELECTION_CHANCE
            if (RANDOM_CHANCE(BFG_ITEM_ROCKY_HELMET_SELECTION_CHANCE))
                RETURN_IF_UNIQUE(ITEM_ROCKY_HELMET);
            #endif
        }

        #if BFG_ITEM_WEAKNESS_POLICY_SELECTION_CHANCE
        if ((numOffensive >= BFG_ITEM_WEAKNESS_POLICY_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_WEAKNESS_POLICY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_WEAKNESS_POLICY);
        #endif

        #if BFG_ITEM_SITRUS_BERRY_SELECTION_CHANCE
        if (RANDOM_CHANCE(BFG_ITEM_SITRUS_BERRY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_SITRUS_BERRY);
        #endif

        #if BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE
        if (RANDOM_CHANCE(BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(gFiwamConfuseLookup[nature->negStat]);
        #endif
    }

    // *** Competitive items with generic use cases ***

    // Non-recycleable items
    if (hasRecycle == FALSE) {
        #if BFG_ITEM_SAFETY_GOGGLES_SELECTION_CHANCE
        if (!((IS_TYPE(species, TYPE_GRASS)) || (IS_SLEEP_IMMUNE(abilityId)) || (abilityId == ABILITY_OVERCOAT) || (abilityId == ABILITY_SWEET_VEIL)) && RANDOM_CHANCE(BFG_ITEM_SAFETY_GOGGLES_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_SAFETY_GOGGLES);
        #endif
            
        #if BFG_ITEM_LIFE_ORB_SELECTION_CHANCE
        if ((numOffensive >= BFG_ITEM_LIFE_ORB_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_LIFE_ORB_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_LIFE_ORB);
        #endif

        #if BFG_ITEM_CLEAR_AMULET_SELECTION_CHANCE
        // If the mon is a physical attacker, and does not have an ability that benefits from stat drops (i.e. Defiant, Guard Dog, etc.)
        if ((numPhysical > 0) && (abilityId != ABILITY_GUARD_DOG) && (!(IS_STAT_DROP_ABILITY(abilityId))) && (!(IS_INTIMIDATE_IMMUNE_ABILITY(abilityId))) && RANDOM_CHANCE(BFG_ITEM_CLEAR_AMULET_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_CLEAR_AMULET);
        #endif

        #if BFG_ITEM_COVERT_CLOAK_SELECTION_CHANCE
        // If the mon is not a ghost type, or otherwise already immune to flinching (Fake Out)
        if ((!(IS_TYPE(species, TYPE_GHOST))) && (abilityId != ABILITY_INNER_FOCUS) && (abilityId != ABILITY_SHIELD_DUST) && (abilityId != ABILITY_STEADFAST) && RANDOM_CHANCE(BFG_ITEM_COVERT_CLOAK_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_COVERT_CLOAK);
        #endif

        // Choice Items

        #if BFG_ITEM_CHOICE_BAND_SELECTION_CHANCE
        if ((hasSingleUseMove == FALSE) && (hasRecycle == FALSE) && ((numPhysical + numDynamic) >= BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_CHOICE_BAND_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_CHOICE_BAND);
        #endif

        #if BFG_ITEM_CHOICE_SPECS_SELECTION_CHANCE
        if ((hasSingleUseMove == FALSE) && (hasRecycle == FALSE) && ((numSpecial + numDynamic) >= BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_CHOICE_SPECS_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_CHOICE_SPECS);
        #endif

        #if BFG_ITEM_CHOICE_SCARF_SELECTION_CHANCE
        if ((hasSingleUseMove == FALSE) && (hasRecycle == FALSE) && (numOffensive >= BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_CHOICE_SCARF_SELECTION_CHANCE))
            RETURN_IF_UNIQUE(ITEM_CHOICE_SCARF);
        #endif
    }

    #if BFG_ITEM_FOCUS_SASH_SELECTION_CHANCE
    // Focus Sash (No investment in HP/Def/SpDef)
    if ((GetMonData(mon, MON_DATA_HP_EV) <= 4) && (GetMonData(mon, MON_DATA_DEF_EV) <= 4) && (GetMonData(mon, MON_DATA_SPDEF_EV) <= 4) && RANDOM_CHANCE(BFG_ITEM_FOCUS_SASH_SELECTION_CHANCE))
        RETURN_IF_UNIQUE(ITEM_FOCUS_SASH);
    #endif

    // *** Fallback (Custom Items List) ***

    if (hasRecycle) // Use recyclable list if has recycle is true
        itemId = recycleItemsList[Random2() % recycleItemsLength];
    else // Otherwise use normal custom items list
        itemId = customItemsList[Random2() % customItemsLength];

    // Return if not duplicate
    RETURN_IF_UNIQUE(itemId);

    // Otherwise, no item found
    return ITEM_NONE;
}

bool8 HasPhysicalMove(struct Pokemon * mon) 
{
    // Check for physical moves
    u16 currentMove = MOVE_NONE; 

    // Loop over the moves
    for(u8 i=0; i<MAX_MON_MOVES; i++) {
        // Get the current move data
        currentMove = GetMonMoveSlot(mon, i);

        // If the current move category is physical, return TRUE
        if ((currentMove != MOVE_NONE) && (CATEGORY(currentMove) == DAMAGE_CATEGORY_PHYSICAL)) {
            return TRUE; 
        }
    }

    // No physical moves
    return FALSE;
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
    nature = GetSpeciesNature(formeId, properties);

    // No EVs, calculated later
    evs = 0;

    // Place the chosen pokemon into the trainer's party
    CreateMonWithEVSpreadNatureOTID(
        mon, speciesId, (properties->level), 
        nature, (properties->fixedIV), evs, (properties->otID)
    );

    #if BFG_OPTIMIZE_IVS == TRUE
    u8 iv = 0; 
    // Switch on nature-reduced stat
    switch(gNatureInfo[nature].negStat) {
        case STAT_SPEED: {
            SetMonData(mon, MON_DATA_SPEED_IV, &iv);
        }; break;
        case STAT_ATK: {
            SetMonData(mon, MON_DATA_ATK_IV, &iv);
        }; break;
    }
    #endif

    #if BFG_EV_INVEST_NUM_STATS != BFG_EV_INVEST_NO_STATS
    SetMonEVs(mon, properties); // Generate ev spread
    #endif

    // Species has hidden ability, and random selection chance is triggered
    if (HAS_HIDDEN_ABILITY(species) && RANDOM_CHANCE(fixedIVHiddenAbilityLookup[properties->fixedIV])) {
        abilityNum = 2; // Hidden ability index
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
    moveCount = GetSpeciesMoves(mon, formeId, move, properties);
    
    DebugPrintf("Moves found: %d ...", moveCount);

    #if BFG_OPTIMIZE_IVS && BFG_OPTIMISE_IVS_NO_ATTACKS
    // If the atk iv for the mon is greater than 0, and it has no physical moves
    if ((GetMonData(mon, MON_DATA_ATK_IV) > 0) && (!HasPhysicalMove(mon))) {
        // Set the atk iv for the mon to 0
        SetMonData(mon, MON_DATA_ATK_IV, &iv);
        
        // This section may be faster without the check? 

        // Mon has any attack investment
        if (GetMonData(mon, MON_DATA_ATK_EV) > 0) {
            // Set the attack investment to 0
            SetMonData(mon, MON_DATA_ATK_EV, &iv);
        }
    }
    #endif

    // Meets the minimum number of moves to accept
    if (moveCount >= BFG_TEAM_GENERATOR_MIN_MOVES) 
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
    
    // If forme changes allowed
    if (properties->allowForme) {
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
                        speciesId = RANDOM_RANGE(SPECIES_TAUROS_PALDEA_COMBAT,SPECIES_WOOPER_PALDEA);
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
                        speciesId = RANDOM_RANGE(SPECIES_DEOXYS_ATTACK, SPECIES_BURMY_SANDY);
                }; break;
                case SPECIES_BURMY: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_BURMY_WORMADAM))
                        speciesId = RANDOM_RANGE(SPECIES_BURMY_SANDY, SPECIES_WORMADAM_SANDY);
                }; break;
                case SPECIES_WORMADAM: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_BURMY_WORMADAM))
                        speciesId = RANDOM_RANGE(SPECIES_WORMADAM_SANDY, SPECIES_CHERRIM_SUNSHINE);
                }; break;
                case SPECIES_SHELLOS: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_SHELLOS_GASTRODON))
                        speciesId = SPECIES_SHELLOS_EAST;
                }; break;
                case SPECIES_GASTRODON: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_SHELLOS_GASTRODON))
                        speciesId = SPECIES_GASTRODON_EAST;
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
                        speciesId = RANDOM_RANGE(SPECIES_BASCULIN_BLUE_STRIPED, SPECIES_DARMANITAN_ZEN);
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
                        speciesId = RANDOM_RANGE(SPECIES_GENESECT_DOUSE, SPECIES_GRENINJA_BATTLE_BOND);
                        switch(speciesId) 
                        {
                            case SPECIES_GENESECT_DOUSE: item = ITEM_DOUSE_DRIVE; break;
                            case SPECIES_GENESECT_SHOCK: item = ITEM_SHOCK_DRIVE; break;
                            case SPECIES_GENESECT_BURN: item = ITEM_BURN_DRIVE; break;
                            case SPECIES_GENESECT_CHILL: item = ITEM_CHILL_DRIVE; break;
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
                        speciesId = RANDOM_RANGE(SPECIES_VIVILLON_POLAR, SPECIES_FLABEBE_YELLOW);
                }; break;
                case SPECIES_FLABEBE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES))
                        speciesId = RANDOM_RANGE(SPECIES_FLABEBE_YELLOW, SPECIES_FLOETTE_YELLOW);
                }; break;
                case SPECIES_FLOETTE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES))
                        speciesId = RANDOM_RANGE(SPECIES_FLOETTE_YELLOW, SPECIES_FLORGES_YELLOW);
                }; break;
                case SPECIES_FLORGES: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES))
                        speciesId = RANDOM_RANGE(SPECIES_FLORGES_YELLOW, SPECIES_FURFROU_HEART);
                }; break;
                case SPECIES_FURFROU: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_FURFROU))
                        speciesId = RANDOM_RANGE(SPECIES_FURFROU_HEART, SPECIES_MEOWSTIC_F);
                }; break;
                case SPECIES_MEOWSTIC: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_MEOWSTIC))
                        speciesId = SPECIES_MEOWSTIC_F;
                    else 
                        speciesId = SPECIES_MEOWSTIC_M;
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
                        speciesId = SPECIES_MAGEARNA_ORIGINAL;
                }; break;
                case SPECIES_ALCREMIE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_ALCREMIE))
                        speciesId = RANDOM_RANGE(SPECIES_ALCREMIE_RUBY_CREAM, SPECIES_EISCUE_NOICE);
                }; break;
                case SPECIES_INDEEDEE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_INDEEDEE))
                        speciesId = SPECIES_INDEEDEE_F;
                    else
                        speciesId = SPECIES_INDEEDEE_M;
                }; break;
                case SPECIES_ZACIAN: {
                    if ((700 <= (properties->maxBST))) 
                    {
                        speciesId = SPECIES_ZACIAN_CROWNED;
                        item = ITEM_RUSTED_SWORD;
                        move = MOVE_BEHEMOTH_BLADE;
                    }
                }; break;
                case SPECIES_ZAMAZENTA: {
                    if ((700 <= (properties->maxBST))) 
                    {
                        speciesId = SPECIES_ZAMAZENTA_CROWNED;
                        item = ITEM_RUSTED_SHIELD;
                        move = MOVE_BEHEMOTH_BASH;
                    }
                }; break;
                case SPECIES_URSHIFU: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_URSHIFU))
                        speciesId = SPECIES_URSHIFU_RAPID_STRIKE;
                }; break;
                case SPECIES_BASCULEGION: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_BASCULEGION))
                        speciesId = SPECIES_BASCULEGION_F;
                    else 
                        speciesId = SPECIES_BASCULEGION_M;
                }; break;
                case SPECIES_OINKOLOGNE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_OINKOLOGNE))
                        speciesId = SPECIES_OINKOLOGNE_F;
                    else 
                        speciesId = SPECIES_OINKOLOGNE_M;
                }; break;
                case SPECIES_MAUSHOLD: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_MAUSHOLD))
                        speciesId = SPECIES_MAUSHOLD_FOUR;
                }; break;
                case SPECIES_SQUAWKABILLY: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_SQUAWKABILLY))
                        speciesId = RANDOM_RANGE(SPECIES_SQUAWKABILLY_BLUE, SPECIES_NACLI);
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
                        speciesId = RANDOM_RANGE(SPECIES_OGERPON_WELLSPRING, SPECIES_OGERPON_TEAL_TERA);
                        // Required hold item
                        switch(speciesId) 
                        {
                            case SPECIES_OGERPON_WELLSPRING: item = ITEM_WELLSPRING_MASK; break;
                            case SPECIES_OGERPON_HEARTHFLAME: item = ITEM_HEARTHFLAME_MASK; break;
                            case SPECIES_OGERPON_CORNERSTONE: item = ITEM_CORNERSTONE_MASK; break;
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
                case SPECIES_FARFETCHD_GALAR:
                case SPECIES_SIRFETCHD: 
                    if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_LEEK_SELECTION_CHANCE))
                        item = ITEM_LEEK;
                break;
                case SPECIES_MAROWAK:
                case SPECIES_MAROWAK_ALOLA:
                case SPECIES_MAROWAK_ALOLA_TOTEM:
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
                case SPECIES_RAICHU_ALOLA: 
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
                        speciesId = RANDOM_RANGE(SPECIES_CALYREX_ICE, SPECIES_CALYREX_SHADOW);
                        switch(speciesId) 
                        {
                            // Signature Moves
                            case SPECIES_CALYREX_ICE: {
                                move = MOVE_GLACIAL_LANCE;
                            }; break;
                            case SPECIES_CALYREX_SHADOW: {
                                move = MOVE_ASTRAL_BARRAGE;
                            }; break;
                        }
                    }
                }; break;
                default:
                    DebugPrintf("No form changes/fusions for speciesId %S ...", GetSpeciesName(speciesId));
                break;
            }
        }
    }

    // If the pokemon was successfully added to the trainer's party, move on to the next party slot.
    return GenerateTrainerPokemon(mon, speciesId, forme, move, item, properties);
}

#define GetAbilityName(abilityId) (gAbilitiesInfo[abilityId].name)
#define GetNatureName(nature) (gNatureNamePointers[nature])

void DebugPrintMonData(struct Pokemon * mon) 
{
    u8 i;

    // Species Data
    u16 speciesId = GetMonData(mon, MON_DATA_SPECIES);
    u8 abilityNum = GetMonData(mon,MON_DATA_ABILITY_NUM);
    u16 abilityId = gSpeciesInfo[speciesId].abilities[abilityNum];

    u16 itemId = GetMonData(mon,MON_DATA_HELD_ITEM);

    DebugPrintf("%S @ %S", GetSpeciesName(speciesId), GetItemName(itemId));
    DebugPrintf("Ability: %d (%S)", abilityNum, GetAbilityName(abilityId));
    DebugPrintf("%S nature", GetNatureName(GetNature(mon)));
    DebugPrintf("IVs: %d HP / %d Atk / %d Def / %d SpA / %d SpD / %d Spe", GetMonData(mon,MON_DATA_HP_IV),GetMonData(mon,MON_DATA_ATK_IV), GetMonData(mon,MON_DATA_DEF_IV), GetMonData(mon,MON_DATA_SPATK_IV), GetMonData(mon,MON_DATA_SPDEF_IV), GetMonData(mon,MON_DATA_SPEED_IV));
    DebugPrintf("EVs: %d HP / %d Atk / %d Def / %d SpA / %d SpD / %d Spe", GetMonData(mon,MON_DATA_HP_EV),GetMonData(mon,MON_DATA_ATK_EV), GetMonData(mon,MON_DATA_DEF_EV), GetMonData(mon,MON_DATA_SPATK_EV), GetMonData(mon,MON_DATA_SPDEF_EV), GetMonData(mon,MON_DATA_SPEED_EV));
    for(i=0; i<MAX_MON_MOVES; i++) {
        DebugPrintf("- %S", GetMoveName(GetMonData(mon, MON_DATA_MOVE1 + i)));
    }
}

void InitGeneratorMoves(struct GeneratorMoves * moves) 
{  
    u8 i=0;
    moves->moveCount = 0;

    // Initialise moves array
    for(i=0; i<MAX_MON_MOVES; i++)
        moves->moves[i] = MOVE_NONE;

    // Initialise types array
    for(i=0; i<NUMBER_OF_MON_TYPES; i++)
        moves->types[i] = BFG_MOVE_TYPE_NONE;

    // Initialise move counters
    moves->numAllowedStatusMoves = 0;
    moves->numAllowedAttackingMoves = 0;
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
    properties->allowForme = TRUE;
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

u16 GetGeneratorSpeciesOrRestricted(u8 index, u8 attempts, u8 lvlMode, struct GeneratorSpecies * species, struct GeneratorProperties * properties) {

    // Get the number of team restricteds
    u8 count = GetTeamRestrictedCount();

    // If banned species are allowed, and we have less than the maximum number of restricteds (or all restricteds are set)
    if (((BFG_LVL_50_ALLOW_BANNED_SPECIES && lvlMode == FRONTIER_LVL_50) || (BFG_LVL_OPEN_ALLOW_BANNED_SPECIES && lvlMode == FRONTIER_LVL_OPEN) || (BFG_LVL_TENT_ALLOW_BANNED_SPECIES && lvlMode == FRONTIER_LVL_TENT)) && ((count == BFG_OPEN_RULES_RESTRICTED_ALL) || (index < count)))
    {
        DebugPrintf("Selecting restricted Pokemon ...");

        // Ignore Max. BST
        properties->maxBST = BFG_BST_MAX;

        // If attempts have exceeded 'set' failure limit, use default set
        if (attempts < BFG_TEAM_GENERATOR_MON_SELECT_SET_FAILURE_LIMIT) 
            return GetGeneratorRestricted(species);
        else
            return GetDefaultRestricted();
    }
    else // Standard species
    {
        DebugPrintf("Selecting standard Pokemon ...");

        // If attempts have exceeded 'set' failure limit, use default set
        if (attempts < BFG_TEAM_GENERATOR_MON_SELECT_SET_FAILURE_LIMIT)
            return GetGeneratorSpecies(species);
        else
            return GetDefaultSpecies();
    }
}

bool8 GetStrictSpeciesChecks(u16 speciesId, struct GeneratorProperties * properties) {
    DebugPrintf("Checking species '%S' ...", GetSpeciesName(speciesId));

    // If species has a mega evolution (or rotom forme change)
    if ((HAS_MEGA_EVOLUTION(speciesId) && (properties->allowMega)) || ((speciesId == SPECIES_ROTOM) && (BFG_FORME_CHANCE_ROTOM != 0)))
        properties->minBST = BFG_BST_MIN; // Ignore Min. BST

    DebugPrintf("Checking min (%d) / max (%d) bst requirements ...", properties->minBST, properties->maxBST);

    u16 bst = GetTotalBaseStat(speciesId);

    // Check BST limits
    if ((bst < (properties->minBST)) || (bst > (properties->maxBST)))
        return FALSE; // Checks failed

    DebugPrintf("Checking species validity for frontier level ...");

    // Species is not allowed for this format
    if (!(SpeciesValidForFrontierLevel(speciesId)))
        return FALSE; // Checks failed

    // Checks passed
    return TRUE;
}

void ShuffleTrainerParty(u8 firstMonId, u8 monCount) {
    u8 i, j;
    struct Pokemon temp;

    // Shuffle team slots
    for(i = (monCount - 1); i > 0; i--)
    {
        // Select random index
        j = Random2() % (i + 1);

        // Non-matching
        if (i != j) {
            DebugPrintf("Swapping team index %d to %d ...", i, j);

            // Copy 'i' ptr to 'temp'
            temp = gEnemyParty[(firstMonId + i)];

            // Copy 'j' ptr to 'i'
            gEnemyParty[(firstMonId + i)] = gEnemyParty[(firstMonId + j)];

            // Copy 'temp' ptr to 'j'
            gEnemyParty[(firstMonId + j)] = temp;
        }
    }
}

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level)
{
    u16 speciesId;
    u8 i,j,attempts;

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

    // Species selection method
    struct GeneratorSpecies species;
    InitGeneratorSpeciesForTrainerClass(&species, trainerClass);

    // If there are not enough species for the type, the current values will be used

    // Special mon set tracker
    bool8 specialMons = FALSE;

    // If special teams are allowed for this lvl mode, and  min. IVs for monotype teams is reached, and the random monotype chance is met
    if (((lvlMode != FRONTIER_LVL_OPEN) || BFG_TM_MONOTYPE_OPEN) && (properties.fixedIV >= BFG_TM_MONOTYPE_MIN_IV) && RANDOM_CHANCE(BFG_TM_MONOTYPE_CHANCE))
        InitGeneratorMonotype(&species);
    // If special teams are allowed for this lvl mode, and min. IVs for special teams is reached, check special mon set
    else if (((lvlMode != FRONTIER_LVL_OPEN) || BFG_TM_SPECIAL_OPEN) && (properties.fixedIV >= BFG_TM_SPECIAL_MIN_IV))
        specialMons = InitGeneratorSpecialForTrainerClass(&species, trainerClass, BFG_TM_SPECIAL_FORCE);

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
    attempts = 0;
    while(i != monCount)
    {        
        attempts++;

        DebugPrintf("Generating mon number %d ... (attempt: %d)", i, attempts);

        // Special mons switch set
        if (specialMons) {
            // Ignore min/max. requirements
            properties.minBST = BFG_BST_MIN;
            properties.maxBST = BFG_BST_MAX;
        } 
        else // Standard mon set
        {
            // Get min/max bst value from lookup table
            properties.minBST = fixedIVMinBSTLookup[properties.fixedIV];
            properties.maxBST = fixedIVMaxBSTLookup[properties.fixedIV];
        }

        // Update generator mode (handle fixed values)
        UpdateGeneratorForLvlMode(&properties, lvlMode);

        // Sample a species or restricted Pokemon depending on index, attempts, etc.
        speciesId = GetGeneratorSpeciesOrRestricted(i, attempts, lvlMode, &species, &properties);

        // If we are below the failure limit, and the strict species check failed, skip to next species
        if ((attempts < BFG_TEAM_GENERATOR_MON_SELECT_STRICT_FAILURE_LIMIT) && (GetStrictSpeciesChecks(speciesId, &properties) == FALSE))
            continue;

        // Ignore BST checks if limit reached
        
        DebugPrintf("Checking for duplicate species ...");

        for (j = 0; j < i + firstMonId; j++)
            if (GET_BASE_SPECIES_ID(GetMonData(&gEnemyParty[j], MON_DATA_SPECIES, NULL)) == GET_BASE_SPECIES_ID(speciesId))
                break;
        if (j != i + firstMonId)
            continue;

        DebugPrintf("Generating set for species %S ...", GetSpeciesName(speciesId));

        // Generate Trainer Pokemon
        if (GenerateTrainerPokemonHandleForme(&gEnemyParty[i + firstMonId], speciesId, &properties))
        {
            // Add Pokemon item to items list
            items[i] = GetMonData(&gEnemyParty[i + firstMonId], MON_DATA_HELD_ITEM);
            DebugPrintMonData(&gEnemyParty[i + firstMonId]);
            attempts = 0;
            i++;
        }
    }

    // If items are allowed
    if (!(lvlMode == FRONTIER_LVL_TENT && BFG_TENT_ALLOW_ITEM == FALSE)) {

        DebugPrintf("Allocating remaining items ...");

        // Allocate remaining items
        for(i=0; i < monCount; i++)
        {
            if (((items[i]) == ITEM_NONE) && (!(RANDOM_CHANCE(BFG_NO_ITEM_SELECTION_CHANCE))))
            {
                items[i] = GetSpeciesItem(&gEnemyParty[i + firstMonId], items, PARTY_SIZE);
                SetMonData(&gEnemyParty[i + firstMonId], MON_DATA_HELD_ITEM, &(items[i]));
            }
        }
    }

    // Shuffle trainer party members
    ShuffleTrainerParty(firstMonId, monCount);

    DebugPrintf("Done.");
}

void GenerateFacilityInitialRentalMons(u8 firstMonId, u8 challengeNum, u8 rentalRank)
{
    u8 i, j, attempts;
    u16 speciesId; 

    struct GeneratorProperties properties;
    InitGeneratorProperties(&properties, 0, 0);

    DebugPrintf("Generating facility initial rental mons ...");

    u8 lvlMode = GET_LVL_MODE();
    InitGeneratorForLvlMode(&properties, lvlMode);

    struct GeneratorSpecies species;
    InitGeneratorSpeciesDefault(&species); 

    // Battle Tent
    if (lvlMode == FRONTIER_LVL_TENT)
    {
        properties.allowMega = BFG_BST_TENT_ALLOW_MEGA;
        properties.allowGmax = BFG_BST_TENT_ALLOW_GMAX;
        properties.allowZMove = BFG_BST_TENT_ALLOW_ZMOVE;
    }

    i = 0; 
    attempts = 0;
    while(i != PARTY_SIZE)
    {
        attempts++;

        DebugPrintf("Generating mon number %d ... (attempt: %d)", i, attempts);

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

        // Sample a species or restricted Pokemon depending on index, attempts, etc.
        speciesId = GetGeneratorSpeciesOrRestricted(i, attempts, lvlMode, &species, &properties);

        // If we are below the failure limit, and the strict species check failed, skip to next species
        if ((attempts < BFG_TEAM_GENERATOR_MON_SELECT_STRICT_FAILURE_LIMIT) && (GetStrictSpeciesChecks(speciesId, &properties) == FALSE))
            continue;

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
    u8 i, j, attempts;
    u16 speciesId;

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

    struct GeneratorSpecies species;
    InitGeneratorSpeciesForTrainerClass(&species, trainerClass);

    i = 0;
    attempts = 0;
    while (i != FRONTIER_PARTY_SIZE)
    {
        attempts++;

        DebugPrintf("Generating mon number %d ... (attempt: %d)", i, attempts);

        // Update generator mode (handle fixed values)
        UpdateGeneratorForLvlMode(&properties, lvlMode);

        // Sample a species or restricted Pokemon depending on index, attempts, etc.
        speciesId = GetGeneratorSpeciesOrRestricted(i, attempts, lvlMode, &species, &properties);

        // If we are below the failure limit, and the strict species check failed, skip to next species
        if ((attempts < BFG_TEAM_GENERATOR_MON_SELECT_STRICT_FAILURE_LIMIT) && (GetStrictSpeciesChecks(speciesId, &properties) == FALSE))
            continue;

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

        // Success, add species

        gFrontierTempParty[i] = speciesId;
        attempts = 0;
        i++;
    }

    DebugPrintf("Done.");
}

void SetFacilityPartyHeldItems(u8 challengeNum, struct Pokemon * party, u8 partySize)
{
    u8 i;
    u16 oldSeed = Random2();
    
    u16 fixedSeed = GetFixedSeed(challengeNum);

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
    SeedRng2(oldSeed); // Revert seed

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

    u16 fixedSeed = GetFixedSeed(GET_CHALLENGE_NUM(battleMode, lvlMode));

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
            SeedRng2(oldSeed); // Revert seed
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
                SeedRng2(oldSeed); // Revert seed
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
    
    u16 fixedSeed = GetFixedSeed(challengeNum);

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
        DebugPrintf("Generating set for species %S ...", GetSpeciesName(speciesId));

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

    SeedRng2(oldSeed); // Revert seed

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
