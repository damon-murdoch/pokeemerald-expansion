#include "global.h"
#include "pokemon.h"
#include "event_data.h"

#include "constants/battle_frontier.h"

#include "test/test.h"
#include "test/battle.h"

#include "config/battle_frontier_generator.h"

#include "battle_frontier_generator_species.h"
#include "battle_frontier_generator.h"

// 

// Battle Frontier Generator is configured
#if BFG_FLAG_FRONTIER_GENERATOR != 0
#if BFG_TEST_MON_SELECTION == TRUE
bool8 TestFrontierGeneratorSpecies(u8 trainerClass, u8 count, bool8 restricted, bool8 monotype, bool8 special)
{
    struct GeneratorSpecies species;
    InitGeneratorSpeciesForTrainerClass(&species, trainerClass);

    DebugPrintf("Generating %d species for trainer class '%d' ...", count, trainerClass);
    if (restricted)
        DebugPrintf("Restricted: Yes");
    else
        DebugPrintf("Restricted: No");
    
    // Special cases

    if (monotype) {
        // Monotype switch set
        InitGeneratorMonotype(&species);
    } else if (special) {
        // Special switch set
        InitGeneratorSpecialForTrainerClass(&species, trainerClass, TRUE);
    }

    u8 i;
    for(i=0; i<count; i++) {
        // If 'restricted' switch is set, select restricted mon - Otherwise, select standard species
        u16 speciesId = (restricted) ? GetGeneratorRestricted(&species) : GetGeneratorSpecies(&species);
        DebugPrintf("%d: %S", i, GetSpeciesName(speciesId));
    }

    return TRUE;
}

#define BFG_FrontierGeneratorSpecies_Test(text,t,c,r,m,s) TEST(text){TestFrontierGeneratorSpecies(t,c,r,m,s);}

// Backup Existing Config Value

// No Monotype
BFG_FrontierGeneratorSpecies_Test("Generate Random Fisherman Pokemon (3x)", TRAINER_CLASS_FISHERMAN, 4, FALSE, FALSE, FALSE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Fisherman Pokemon (3x, Restricted)", TRAINER_CLASS_FISHERMAN, 4, TRUE, FALSE, FALSE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Bug Catcher Pokemon (3x)", TRAINER_CLASS_BUG_CATCHER, 4, FALSE, FALSE, FALSE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Bug Catcher Pokemon (3x, Restricted)", TRAINER_CLASS_BUG_CATCHER, 4, TRUE, FALSE, FALSE);

// Monotype
BFG_FrontierGeneratorSpecies_Test("Generate Random Fisherman Pokemon (3x, Monotype)", TRAINER_CLASS_FISHERMAN, 4, FALSE, TRUE, FALSE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Fisherman Pokemon (3x, Monotype, Restricted)", TRAINER_CLASS_FISHERMAN, 4, TRUE, TRUE, FALSE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Bug Catcher Pokemon (3x, Monotype)", TRAINER_CLASS_BUG_CATCHER, 4, FALSE, TRUE, FALSE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Bug Catcher Pokemon (3x, Monotype, Restricted)", TRAINER_CLASS_BUG_CATCHER, 4, TRUE, TRUE, FALSE);

// Special
BFG_FrontierGeneratorSpecies_Test("Generate Random Cool Trainer Pokemon (3x, Special)", TRAINER_CLASS_COOLTRAINER, 4, FALSE, FALSE, TRUE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Swimmer (M) Pokemon (3x, Special)", TRAINER_CLASS_SWIMMER_M, 4, FALSE, FALSE, TRUE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Rich Boy Pokemon (3x, Special)", TRAINER_CLASS_RICH_BOY, 4, FALSE, FALSE, TRUE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Ninja Boy Pokemon (3x, Special)", TRAINER_CLASS_NINJA_BOY, 4, FALSE, FALSE, TRUE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Psychic Pokemon (3x, Special)", TRAINER_CLASS_PSYCHIC, 4, FALSE, FALSE, TRUE);
BFG_FrontierGeneratorSpecies_Test("Generate Random PKMN Breeder Pokemon (3x, Special)", TRAINER_CLASS_PKMN_BREEDER, 4, FALSE, FALSE, TRUE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Pokefan Pokemon (3x, Special)", TRAINER_CLASS_POKEFAN, 4, FALSE, FALSE, TRUE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Collector Pokemon (3x, Special)", TRAINER_CLASS_COLLECTOR, 4, FALSE, FALSE, TRUE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Pokemaniac Pokemon (3x, Special)", TRAINER_CLASS_POKEMANIAC, 4, FALSE, FALSE, TRUE);
BFG_FrontierGeneratorSpecies_Test("Generate Random Ruin Maniac Pokemon (3x, Special)", TRAINER_CLASS_RUIN_MANIAC, 4, FALSE, FALSE, TRUE);

#endif
#if BFG_TEST_SET_GENERATION == TRUE
bool8 TestRandomPokemonGenerator(struct Pokemon * mon, u16 speciesId, u8 level, u8 lvlMode, u8 fixedIV, bool8 allowForme, u8 battleMode)
{
    // Store original battle mode
    u8 oldBattleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

    // Use provided battle mode
    VarSet(VAR_FRONTIER_BATTLE_MODE, battleMode);

    DebugPrintf("Battle Mode: %d", battleMode);

    struct GeneratorProperties properties;
    InitGeneratorProperties(&properties, level, fixedIV);
    InitGeneratorForLvlMode(&properties, lvlMode);

    properties.allowForme = allowForme;

    // Generate thee trainer Pokemon with the test species, properties
    bool8 success = GenerateTrainerPokemonHandleForme(mon, speciesId, &properties);
    EXPECT_EQ(success,TRUE);

    if (success)
    {
        // Get the held item
        u16 items[] = {GetMonData(mon, MON_DATA_HELD_ITEM)};

        // No held item
        if (items[0] == ITEM_NONE) {
            // Get new held item
            items[0]  = GetSpeciesItem(mon, items, 1);

            // Update the held item
            SetMonData(mon, MON_DATA_HELD_ITEM, &(items[0]));
        }

        #if BFG_TEST_PRINT_RESULTS
        DebugPrintMonData(mon);
        #endif

        // Level should match provided
        EXPECT_EQ(GetMonData(mon, MON_DATA_LEVEL), level);

        // HP, Def, SpDtk, SpDef EVs should match 'fixedIV'
        EXPECT_EQ(GetMonData(mon, MON_DATA_HP_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_DEF_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPATK_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPDEF_IV), fixedIV);

        #if BFG_OPTIMIZE_IVS
        // Optimised IVs
        u8 nature = GetNature(mon);
        // Attack stat should be 0, if reducing
        if ((gNatureInfo[nature].negStat == STAT_ATK) || (!HasPhysicalMove(mon)))
            EXPECT_EQ(GetMonData(mon, MON_DATA_ATK_IV), 0);
        else 
            EXPECT_EQ(GetMonData(mon, MON_DATA_ATK_IV), fixedIV);
        
        // Speed stat should be 0, if reducing
        if (gNatureInfo[nature].negStat == STAT_SPEED)
            EXPECT_EQ(GetMonData(mon, MON_DATA_SPEED_IV), 0);
        else
            EXPECT_EQ(GetMonData(mon, MON_DATA_SPEED_IV), fixedIV);
        #else 
        // Standard IVs
        EXPECT_EQ(GetMonData(mon, MON_DATA_ATK_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPEED_IV), fixedIV);
        #endif
    }

    // Reset to original battle mode
    VarSet(VAR_FRONTIER_BATTLE_MODE, oldBattleMode);

    return success;
}

// Worker Macro
#define BFG_RandomPokemonGenerator_Test(text,s,l,m,i,f,t,c) TEST(text){struct Pokemon mon; for(u8 n=0; n<c; n++){TestRandomPokemonGenerator(&mon,s,l,m,i,f,t);}}

// Standard

BFG_RandomPokemonGenerator_Test("Generate Random Incineroar (D,LVL50,31IV)",SPECIES_INCINEROAR, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Amoonguss (D,LVL50,31IV)",SPECIES_AMOONGUSS, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Clefairy (D,LVL50,31IV)",SPECIES_CLEFAIRY, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Omastar (D,LVL50,31IV)",SPECIES_OMASTAR, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);

// Legendaries

BFG_RandomPokemonGenerator_Test("Generate Random Cresselia (D,LVL50,31IV)",SPECIES_CRESSELIA, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Chien-Pao (D,LVL50,31IV)",SPECIES_CHIEN_PAO, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Ogerpon (D,LVL50,31IV)",SPECIES_OGERPON, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Nihilego (D,LVL50,31IV)",SPECIES_NIHILEGO, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);

// Forme Changes

BFG_RandomPokemonGenerator_Test("Generate Random Zamazenta (D,LVL50,31IV)",SPECIES_ZAMAZENTA, 50, FRONTIER_LVL_50, 31, TRUE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Zacian (D,LVL50,31IV)",SPECIES_ZACIAN, 50, FRONTIER_LVL_50, 31, TRUE, FRONTIER_MODE_DOUBLES,1);

BFG_RandomPokemonGenerator_Test("Generate Random Ogerpon (Any) (D,LVL50,31IV)",SPECIES_OGERPON, 50, FRONTIER_LVL_50, 31, TRUE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Ludicolo (Any) (D,LVL50,31IV)",SPECIES_LUDICOLO, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Flutter Mane (Any) (D,LVL50,31IV)",SPECIES_FLUTTER_MANE, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Iron Hands (Any) (D,LVL50,31IV)",SPECIES_IRON_HANDS, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Chi-Yu (Any) (D,LVL50,31IV)",SPECIES_CHI_YU, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
BFG_RandomPokemonGenerator_Test("Generate Random Landorus-Therian (Any) (D,LVL50,31IV)",SPECIES_LANDORUS_THERIAN, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES,1);
#endif // BFG_TEST_SET_GENERATION == TRUE
#endif // BFG_FLAG_FRONTIER_GENERATOR != 0