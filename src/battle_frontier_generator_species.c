#include "global.h"
#include "random.h"
#include "battle_frontier_generator_species.h"

#include "constants/trainers.h"
#include "constants/battle_frontier_generator.h"

#include "config/battle_frontier_generator.h"

#include "data/battle_frontier/battle_frontier_generator_trainer_class_mons.h"

u8 InitGeneratorMonotype(struct GeneratorSpecies * species) 
{
    // Pick random monotype from the generator's allowed species
    u8 type = (species->type)[Random() % (species->typeCount)];

    // If any checks are not met, existing set will be used instead

    // Switch on type
    switch(type)
    {
        case TYPE_NORMAL:
            #if SPECIES_LIST_NORMAL_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListNormalTypeStandard;
            species->speciesCount = SPECIES_LIST_NORMAL_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_NORMAL_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListNormalTypeRestricted;
            species->restrictedCount = SPECIES_LIST_NORMAL_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_WATER:
            #if SPECIES_LIST_WATER_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListWaterTypeStandard;
            species->speciesCount = SPECIES_LIST_WATER_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_WATER_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListWaterTypeRestricted;
            species->restrictedCount = SPECIES_LIST_WATER_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_FIRE:
            #if SPECIES_LIST_FIRE_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListFireTypeStandard;
            species->speciesCount = SPECIES_LIST_FIRE_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_FIRE_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListFireTypeRestricted;
            species->restrictedCount = SPECIES_LIST_FIRE_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_GRASS:
            #if SPECIES_LIST_GRASS_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListGrassTypeStandard;
            species->speciesCount = SPECIES_LIST_GRASS_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_GRASS_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListGrassTypeRestricted;
            species->restrictedCount = SPECIES_LIST_GRASS_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_ELECTRIC:
            #if SPECIES_LIST_ELECTRIC_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListElectricTypeStandard;
            species->speciesCount = SPECIES_LIST_ELECTRIC_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_ELECTRIC_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListElectricTypeRestricted;
            species->restrictedCount = SPECIES_LIST_ELECTRIC_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_FLYING:
            #if SPECIES_LIST_FLYING_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListFlyingTypeStandard;
            species->speciesCount = SPECIES_LIST_FLYING_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_FLYING_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListFlyingTypeRestricted;
            species->restrictedCount = SPECIES_LIST_FLYING_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_FIGHTING:
            #if SPECIES_LIST_FIGHTING_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListFightingTypeStandard;
            species->speciesCount = SPECIES_LIST_FIGHTING_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_FIGHTING_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListFightingTypeRestricted;
            species->restrictedCount = SPECIES_LIST_FIGHTING_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_POISON:
            #if SPECIES_LIST_POISON_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListPoisonTypeStandard;
            species->speciesCount = SPECIES_LIST_POISON_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_POISON_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListPoisonTypeRestricted;
            species->restrictedCount = SPECIES_LIST_POISON_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_GROUND:
            #if SPECIES_LIST_GROUND_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListGroundTypeStandard;
            species->speciesCount = SPECIES_LIST_GROUND_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_GROUND_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListGroundTypeRestricted;
            species->restrictedCount = SPECIES_LIST_GROUND_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_ROCK:
            #if SPECIES_LIST_ROCK_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListRockTypeStandard;
            species->speciesCount = SPECIES_LIST_ROCK_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_ROCK_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListRockTypeRestricted;
            species->restrictedCount = SPECIES_LIST_ROCK_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_BUG:
            #if SPECIES_LIST_BUG_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListBugTypeStandard;
            species->speciesCount = SPECIES_LIST_BUG_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_BUG_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListBugTypeRestricted;
            species->restrictedCount = SPECIES_LIST_ROCK_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_GHOST:
            #if SPECIES_LIST_GHOST_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListGhostTypeStandard;
            species->speciesCount = SPECIES_LIST_GHOST_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_GHOST_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListGhostTypeRestricted;
            species->restrictedCount = SPECIES_LIST_GHOST_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_STEEL:
            #if SPECIES_LIST_STEEL_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListSteelTypeStandard;
            species->speciesCount = SPECIES_LIST_STEEL_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_STEEL_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListSteelTypeRestricted;
            species->restrictedCount = SPECIES_LIST_STEEL_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_PSYCHIC:
            #if SPECIES_LIST_PSYCHIC_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListPsychicTypeStandard;
            species->speciesCount = SPECIES_LIST_PSYCHIC_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_PSYCHIC_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListPsychicTypeRestricted;
            species->restrictedCount = SPECIES_LIST_PSYCHIC_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_ICE:
            #if SPECIES_LIST_ICE_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListIceTypeStandard;
            species->speciesCount = SPECIES_LIST_ICE_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_ICE_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListIceTypeRestricted;
            species->restrictedCount = SPECIES_LIST_ICE_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_DARK:
            #if SPECIES_LIST_DARK_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListDarkTypeStandard;
            species->speciesCount = SPECIES_LIST_DARK_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_DARK_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListDarkTypeRestricted;
            species->restrictedCount = SPECIES_LIST_DARK_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_FAIRY:
            #if SPECIES_LIST_FAIRY_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListFairyTypeStandard;
            species->speciesCount = SPECIES_LIST_FAIRY_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_FAIRY_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListFairyTypeRestricted;
            species->restrictedCount = SPECIES_LIST_FAIRY_TYPE_RESTRICTED_COUNT;
            #endif
        break;
        case TYPE_DRAGON:
            #if SPECIES_LIST_DRAGON_TYPE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListDragonTypeStandard;
            species->speciesCount = SPECIES_LIST_DRAGON_TYPE_STANDARD_COUNT;
            #endif
            #if SPECIES_LIST_DRAGON_TYPE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListDragonTypeRestricted;
            species->restrictedCount = SPECIES_LIST_DRAGON_TYPE_RESTRICTED_COUNT;
            #endif
        break;
    }

    return type;
}

void InitGeneratorSpeciesDefault(struct GeneratorSpecies * species) 
{
    // Standard
    species->species = gSpeciesListTrainerClassDefaultStandard;
    species->speciesCount = SPECIES_LIST_TRAINER_CLASS_DEFAULT_STANDARD_COUNT;
    // Restricted
    species->restricted = gSpeciesListTrainerClassDefaultRestricted;
    species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_DEFAULT_RESTRICTED_COUNT;
    // Types
    species->type = gSpeciesListTrainerClassDefaultType;
    species->typeCount = TRAINER_CLASS_DEFAULT_TYPE_COUNT;
}

void InitGeneratorSpeciesForTrainerClass(struct GeneratorSpecies * species, u8 trainerClass)
{
    // Default values
    InitGeneratorSpeciesDefault(species);

    // Trainer Class
    switch(trainerClass) 
    {
        case TRAINER_CLASS_HIKER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_HIKER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassHikerStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_HIKER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_HIKER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassHikerRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_HIKER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassHikerType;
            species->typeCount = TRAINER_CLASS_HIKER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_PKMN_BREEDER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_PKMN_BREEDER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassPkmnBreederStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_PKMN_BREEDER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_PKMN_BREEDER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassPkmnBreederRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_PKMN_BREEDER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassPkmnBreederType;
            species->typeCount = TRAINER_CLASS_PKMN_BREEDER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_COOLTRAINER:
        case TRAINER_CLASS_COOLTRAINER_2:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_COOLTRAINER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassCooltrainerStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_COOLTRAINER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_COOLTRAINER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassCooltrainerRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_COOLTRAINER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassCooltrainerType;
            species->typeCount = TRAINER_CLASS_COOLTRAINER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_BIRD_KEEPER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_BIRD_KEEPER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassBirdKeeperStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_BIRD_KEEPER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_BIRD_KEEPER_STANDARD_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassBirdKeeperRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_BIRD_KEEPER_RESTRICTED_COUNT;
            #endif 
            // Types
            species->type = gSpeciesListTrainerClassBirdKeeperType;
            species->typeCount = TRAINER_CLASS_BIRD_KEEPER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_SWIMMER_M:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_SWIMMER_M_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassSwimmerMStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_SWIMMER_M_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_SWIMMER_M_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassSwimmerMRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_SWIMMER_M_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassSwimmerMType;
            species->typeCount = TRAINER_CLASS_SWIMMER_M_TYPE_COUNT;
        break;
        case TRAINER_CLASS_SWIMMER_F:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_SWIMMER_F_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassSwimmerFStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_SWIMMER_F_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_SWIMMER_F_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassSwimmerFRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_SWIMMER_F_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassSwimmerFType;
            species->typeCount = TRAINER_CLASS_SWIMMER_F_TYPE_COUNT;
        break;
        case TRAINER_CLASS_EXPERT:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_EXPERT_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassExpertStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_EXPERT_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_EXPERT_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassExpertRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_EXPERT_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassExpertType;
            species->typeCount = TRAINER_CLASS_EXPERT_TYPE_COUNT;
        break;
        case TRAINER_CLASS_BLACK_BELT:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_BLACK_BELT_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassBlackBeltStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_BLACK_BELT_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_BLACK_BELT_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassBlackBeltRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_BLACK_BELT_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassBlackBeltType;
            species->typeCount = TRAINER_CLASS_BLACK_BELT_TYPE_COUNT;
        break;
        case TRAINER_CLASS_HEX_MANIAC:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_HEX_MANIAC_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassHexManiacStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_HEX_MANIAC_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_HEX_MANIAC_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassHexManiacRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_HEX_MANIAC_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassHexManiacType;
            species->typeCount = TRAINER_CLASS_HEX_MANIAC_TYPE_COUNT;
        break;
        case TRAINER_CLASS_AROMA_LADY:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_AROMA_LADY_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassAromaLadyStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_AROMA_LADY_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_AROMA_LADY_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassAromaLadyRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_AROMA_LADY_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassAromaLadyType;
            species->typeCount = TRAINER_CLASS_AROMA_LADY_TYPE_COUNT;
        break;
        case TRAINER_CLASS_RUIN_MANIAC:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_RUIN_MANIAC_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassRuinManiacStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_RUIN_MANIAC_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_RUIN_MANIAC_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassRuinManiacRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_RUIN_MANIAC_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassRuinManiacType;
            species->typeCount = TRAINER_CLASS_RUIN_MANIAC_TYPE_COUNT;
        break;
        case TRAINER_CLASS_TUBER_M:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_TUBER_M_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassTuberMStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_TUBER_M_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_TUBER_M_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassTuberMRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_TUBER_M_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassTuberMType;
            species->typeCount = TRAINER_CLASS_TUBER_M_TYPE_COUNT;
        break;
        case TRAINER_CLASS_TUBER_F:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_TUBER_F_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassTuberFStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_TUBER_F_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_TUBER_F_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassTuberFRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_TUBER_F_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassTuberFType;
            species->typeCount = TRAINER_CLASS_TUBER_F_TYPE_COUNT;
        break;
        case TRAINER_CLASS_LADY:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_LADY_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassLadyStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_LADY_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_LADY_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassLadyRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_LADY_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassLadyType;
            species->typeCount = TRAINER_CLASS_LADY_TYPE_COUNT;
        break;
        case TRAINER_CLASS_BEAUTY:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_BEAUTY_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassBeautyStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_BEAUTY_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_BEAUTY_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassBeautyRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_BEAUTY_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassBeautyType;
            species->typeCount = TRAINER_CLASS_BEAUTY_TYPE_COUNT;
        break;
        case TRAINER_CLASS_RICH_BOY:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_RICH_BOY_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassRichBoyStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_RICH_BOY_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_RICH_BOY_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassRichBoyRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_RICH_BOY_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassRichBoyType;
            species->typeCount = TRAINER_CLASS_RICH_BOY_TYPE_COUNT;
        break;
        case TRAINER_CLASS_POKEMANIAC:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_POKEMANIAC_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassPokemaniacStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_POKEMANIAC_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_POKEMANIAC_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassPokemaniacRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_POKEMANIAC_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassPokemaniacType;
            species->typeCount = TRAINER_CLASS_POKEMANIAC_TYPE_COUNT;
        break;
        case TRAINER_CLASS_GUITARIST:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_GUITARIST_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassGuitaristStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_GUITARIST_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_GUITARIST_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassGuitaristRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_GUITARIST_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassGuitaristType;
            species->typeCount = TRAINER_CLASS_GUITARIST_TYPE_COUNT;
        break;
        case TRAINER_CLASS_KINDLER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_KINDLER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassKindlerStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_KINDLER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_KINDLER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassKindlerRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_KINDLER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassKindlerType;
            species->typeCount = TRAINER_CLASS_KINDLER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_CAMPER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_CAMPER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassCamperStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_CAMPER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_CAMPER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassCamperRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_CAMPER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassCamperType;
            species->typeCount = TRAINER_CLASS_CAMPER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_PICNICKER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_PICNICKER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassPicnickerStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_PICNICKER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_PICNICKER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassPicnickerRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_PICNICKER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassPicnickerType;
            species->typeCount = TRAINER_CLASS_PICNICKER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_BUG_MANIAC:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_BUG_MANIAC_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassBugManiacStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_BUG_MANIAC_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_BUG_MANIAC_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassBugManiacRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_BUG_MANIAC_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassBugManiacType;
            species->typeCount = TRAINER_CLASS_BUG_MANIAC_TYPE_COUNT;
        break;
        case TRAINER_CLASS_PSYCHIC:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_PSYCHIC_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassPsychicStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_PSYCHIC_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_PSYCHIC_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassPsychicRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_PSYCHIC_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassPsychicType;
            species->typeCount = TRAINER_CLASS_PSYCHIC_TYPE_COUNT;
        break;
        case TRAINER_CLASS_GENTLEMAN:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_GENTLEMAN_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassGentlemanStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_GENTLEMAN_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_GENTLEMAN_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassGentlemanRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_GENTLEMAN_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassGentlemanType;
            species->typeCount = TRAINER_CLASS_GENTLEMAN_TYPE_COUNT;
        break;
        case TRAINER_CLASS_SCHOOL_KID:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_SCHOOL_KID_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassSchoolKidStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_SCHOOL_KID_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_SCHOOL_KID_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassSchoolKidRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_SCHOOL_KID_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassSchoolKidType;
            species->typeCount = TRAINER_CLASS_SCHOOL_KID_TYPE_COUNT;
        break;
        case TRAINER_CLASS_POKEFAN:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_POKEFAN_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassPokefanStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_POKEFAN_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_POKEFAN_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassPokefanRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_POKEFAN_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassPokefanType;
            species->typeCount = TRAINER_CLASS_POKEFAN_TYPE_COUNT;
        break;
        case TRAINER_CLASS_YOUNGSTER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_YOUNGSTER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassYoungsterStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_YOUNGSTER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_YOUNGSTER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassYoungsterRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_YOUNGSTER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassYoungsterType;
            species->typeCount = TRAINER_CLASS_YOUNGSTER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_FISHERMAN:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_FISHERMAN_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassFishermanStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_FISHERMAN_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_FISHERMAN_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassFishermanRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_FISHERMAN_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassFishermanType;
            species->typeCount = TRAINER_CLASS_FISHERMAN_TYPE_COUNT;
        break;
        case TRAINER_CLASS_TRIATHLETE:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_TRIATHLETE_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassTriathleteStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_TRIATHLETE_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_TRIATHLETE_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassTriathleteRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_TRIATHLETE_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassTriathleteType;
            species->typeCount = TRAINER_CLASS_TRIATHLETE_TYPE_COUNT;
        break;
        case TRAINER_CLASS_DRAGON_TAMER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_DRAGON_TAMER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassDragonTamerStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_DRAGON_TAMER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_DRAGON_TAMER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassDragonTamerRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_DRAGON_TAMER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassDragonTamerType;
            species->typeCount = TRAINER_CLASS_DRAGON_TAMER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_NINJA_BOY:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_NINJA_BOY_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassNinjaBoyStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_NINJA_BOY_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_NINJA_BOY_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassNinjaBoyRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_NINJA_BOY_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassNinjaBoyType;
            species->typeCount = TRAINER_CLASS_NINJA_BOY_TYPE_COUNT;
        break;
        case TRAINER_CLASS_BATTLE_GIRL:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_BATTLE_GIRL_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassBattleGirlStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_BATTLE_GIRL_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_BATTLE_GIRL_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassBattleGirlRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_BATTLE_GIRL_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassBattleGirlType;
            species->typeCount = TRAINER_CLASS_BATTLE_GIRL_TYPE_COUNT;
        break;
        case TRAINER_CLASS_PARASOL_LADY:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_PARASOL_LADY_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassParasolLadyStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_PARASOL_LADY_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_PARASOL_LADY_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassParasolLadyRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_PARASOL_LADY_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassParasolLadyType;
            species->typeCount = TRAINER_CLASS_PARASOL_LADY_TYPE_COUNT;
        break;
        case TRAINER_CLASS_SAILOR:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_SAILOR_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassSailorStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_SAILOR_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_SAILOR_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassSailorRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_SAILOR_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassSailorType;
            species->typeCount = TRAINER_CLASS_SAILOR_TYPE_COUNT;
        break;
        case TRAINER_CLASS_BUG_CATCHER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_BUG_CATCHER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassBugCatcherStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_BUG_CATCHER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_BUG_CATCHER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassBugCatcherRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_BUG_CATCHER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassBugCatcherType;
            species->typeCount = TRAINER_CLASS_BUG_CATCHER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_PKMN_RANGER:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_PKMN_RANGER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassPkmnRangerStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_PKMN_RANGER_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_PKMN_RANGER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassPkmnRangerRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_PKMN_RANGER_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassPkmnRangerType;
            species->typeCount = TRAINER_CLASS_PKMN_RANGER_TYPE_COUNT;
        break;
        case TRAINER_CLASS_LASS:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_LASS_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassLassStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_LASS_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_LASS_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassLassRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_LASS_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassLassType;
            species->typeCount = TRAINER_CLASS_LASS_TYPE_COUNT;
        break;
        case TRAINER_CLASS_COLLECTOR:
            // Standard
            #if SPECIES_LIST_TRAINER_CLASS_COLLECTOR_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
            species->species = gSpeciesListTrainerClassCollectorStandard;
            species->speciesCount = SPECIES_LIST_TRAINER_CLASS_COLLECTOR_STANDARD_COUNT;
            #endif
            // Restricted
            #if SPECIES_LIST_TRAINER_CLASS_COLLECTOR_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
            species->restricted = gSpeciesListTrainerClassCollectorRestricted;
            species->restrictedCount = SPECIES_LIST_TRAINER_CLASS_COLLECTOR_RESTRICTED_COUNT;
            #endif
            // Types
            species->type = gSpeciesListTrainerClassCollectorType;
            species->typeCount = TRAINER_CLASS_COLLECTOR_TYPE_COUNT;
        break;
        default:
            DebugPrintf("Warning: Unhandled trainer class '%d' ...", trainerClass);
        case TRAINER_CLASS_DEFAULT: 
            // Use default generator species
        break;
    }
}

bool8 InitGeneratorSpecialForTrainerClass(struct GeneratorSpecies * species, u8 trainerClass, bool8 force)
{
    switch(trainerClass) {
        // No special cases

        // case TRAINER_CLASS_PARASOL_LADY:
        // case TRAINER_CLASS_AROMA_LADY:
        // case TRAINER_CLASS_DRAGON_TAMER:
        // case TRAINER_CLASS_KINDLER:
        // case TRAINER_CLASS_BIRD_KEEPER:
        // case TRAINER_CLASS_BLACK_BELT:
        // case TRAINER_CLASS_PICNICKER:
        // case TRAINER_CLASS_CAMPER:
        // case TRAINER_CLASS_BUG_MANIAC:
        // case TRAINER_CLASS_FISHERMAN:
        // case TRAINER_CLASS_TRIATHLETE:
        // case TRAINER_CLASS_NINJA_BOY:
        // case TRAINER_CLASS_BATTLE_GIRL:
        // case TRAINER_CLASS_BUG_CATCHER:
        // case TRAINER_CLASS_SAILOR:
        // case TRAINER_CLASS_HIKER:
        // case TRAINER_CLASS_GUITARIST:
        // case TRAINER_CLASS_HEX_MANIAC:
        // case TRAINER_CLASS_SCHOOL_KID:

        #if BFG_TM_CHANCE_PSEUDO_LEGEND != 0
        // Pseudo Legends
        case TRAINER_CLASS_COOLTRAINER:
        case TRAINER_CLASS_COOLTRAINER_2:
        case TRAINER_CLASS_GENTLEMAN:
        case TRAINER_CLASS_EXPERT:
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_PSEUDO_LEGEND)) {
                // Standard
                #if SPECIES_LIST_PSEUDO_LEGEND_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListPseudoLegendStandard;
                species->speciesCount = SPECIES_LIST_PSEUDO_LEGEND_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_PSEUDO_LEGEND_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListPseudoLegendRestricted;
                species->restrictedCount = SPECIES_LIST_PSEUDO_LEGEND_RESTRICTED_COUNT;
                #endif
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
        #if BFG_TM_CHANCE_ALOLA != 0
        // Alolan
        case TRAINER_CLASS_SWIMMER_M:
        case TRAINER_CLASS_SWIMMER_F:
        case TRAINER_CLASS_TUBER_M:
        case TRAINER_CLASS_TUBER_F:
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_ALOLA)) {
                // Standard
                #if SPECIES_LIST_ALOLA_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListAlolaStandard;
                species->speciesCount = SPECIES_LIST_ALOLA_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_ALOLA_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListAlolaRestricted;
                species->restrictedCount = SPECIES_LIST_ALOLA_RESTRICTED_COUNT;
                #endif
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
        #if BFG_TM_CHANCE_GALAR != 0
        // Galarian
        case TRAINER_CLASS_RICH_BOY:
        case TRAINER_CLASS_LADY:
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_GALAR)) {
                // Standard
                #if SPECIES_LIST_GALAR_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListGalarStandard;
                species->speciesCount = SPECIES_LIST_GALAR_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_GALAR_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListGalarRestricted;
                species->restrictedCount = SPECIES_LIST_GALAR_RESTRICTED_COUNT;
                #endif
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
        #if BFG_TM_CHANCE_HISUI != 0
        // Hisuian
        case TRAINER_CLASS_NINJA_BOY: 
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_HISUI)) {
                // Standard
                #if SPECIES_LIST_HISUI_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListHisuiStandard;
                species->speciesCount = SPECIES_LIST_HISUI_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_HISUI_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListHisuiRestricted;
                species->restrictedCount = SPECIES_LIST_HISUI_RESTRICTED_COUNT;
                #endif
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
        #if BFG_TM_CHANCE_ULTRA_BEAST != 0
        // Ultra Beast
        case TRAINER_CLASS_PSYCHIC:
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_ULTRA_BEAST)) {
                // Standard
                #if SPECIES_LIST_ULTRA_BEAST_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListUltraBeastStandard;
                species->speciesCount = SPECIES_LIST_ULTRA_BEAST_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_ULTRA_BEAST_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListUltraBeastRestricted;
                species->restrictedCount = SPECIES_LIST_ULTRA_BEAST_RESTRICTED_COUNT;
                #endif 
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
        #if BFG_TM_CHANCE_STARTER != 0
        // Starters
        case TRAINER_CLASS_PKMN_BREEDER:
        case TRAINER_CLASS_PKMN_RANGER:
        case TRAINER_CLASS_YOUNGSTER:
        case TRAINER_CLASS_LASS:
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_STARTER)) {
                // Standard
                #if SPECIES_LIST_STARTER_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListStarterStandard;
                species->speciesCount = SPECIES_LIST_STARTER_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_STARTER_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListStarterRestricted;
                species->restrictedCount = SPECIES_LIST_STARTER_RESTRICTED_COUNT;
                #endif 
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
        #if BFG_TM_CHANCE_EEVEELUTION != 0
        // Eeveelutions
        case TRAINER_CLASS_POKEFAN:
        case TRAINER_CLASS_BEAUTY:
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_EEVEELUTION)) {
                // Standard
                #if SPECIES_LIST_EEVEELUTION_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListEeveelutionStandard;
                species->speciesCount = SPECIES_LIST_EEVEELUTION_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_EEVEELUTION_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListEeveelutionRestricted;
                species->restrictedCount = SPECIES_LIST_EEVEELUTION_RESTRICTED_COUNT;
                #endif 
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
        #if BFG_TM_CHANCE_FUTURE_PARADOX != 0
        // Future Paradox
        case TRAINER_CLASS_COLLECTOR:
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_FUTURE_PARADOX)) {
                // Standard
                #if SPECIES_LIST_FUTURE_PARADOX_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListFutureParadoxStandard;
                species->speciesCount = SPECIES_LIST_FUTURE_PARADOX_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_FUTURE_PARADOX_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListFutureParadoxRestricted;
                species->restrictedCount = SPECIES_LIST_FUTURE_PARADOX_RESTRICTED_COUNT;
                #endif 
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
        #if BFG_TM_CHANCE_PAST_PARADOX != 0
        // Past Paradox
        case TRAINER_CLASS_POKEMANIAC:
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_PAST_PARADOX)) {
                // Standard
                #if SPECIES_LIST_PAST_PARADOX_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListPastParadoxStandard;
                species->speciesCount = SPECIES_LIST_PAST_PARADOX_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_PAST_PARADOX_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListPastParadoxRestricted;
                species->restrictedCount = SPECIES_LIST_PAST_PARADOX_RESTRICTED_COUNT;
                #endif 
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
        #if BFG_TM_CHANCE_FOSSIL != 0
        // Fossil
        case TRAINER_CLASS_RUIN_MANIAC:
            if (force || RANDOM_CHANCE(BFG_TM_CHANCE_FOSSIL)) {
                // Standard
                #if SPECIES_LIST_FOSSIL_STANDARD_COUNT >= BFG_TM_OPTIONS_STANDARD_MIN
                species->species = gSpeciesListFossilStandard;
                species->speciesCount = SPECIES_LIST_FOSSIL_STANDARD_COUNT;
                #endif
                // Restricted
                #if SPECIES_LIST_FOSSIL_RESTRICTED_COUNT >= BFG_TM_OPTIONS_RESTRICTED_MIN
                species->restricted = gSpeciesListFossilRestricted;
                species->restrictedCount = SPECIES_LIST_FOSSIL_RESTRICTED_COUNT;
                #endif
                // Changed
                return TRUE;
            }
            // Otherwise, leave as-is
        break;
        #endif
    }

    // Not changed
    return FALSE;
}

u16 GetGeneratorSpecies(struct GeneratorSpecies * species)
{
    // Switch on number of species
    switch(species->speciesCount)
    {
        case 0: // None found
            return SPECIES_NONE;
        case 1: // One found
            return (species->species[0]);
        default: // Other cases
            return (species->species[Random() % (species->speciesCount)]);
    }
}

u16 GetDefaultSpecies(void) 
{
    #if SPECIES_LIST_TRAINER_CLASS_DEFAULT_STANDARD_COUNT == 0
    return SPECIES_NONE;
    #elif SPECIES_LIST_TRAINER_CLASS_DEFAULT_STANDARD_COUNT == 1
    return gSpeciesListTrainerClassDefaultStandard[0];
    #else
    return gSpeciesListTrainerClassDefaultStandard[Random() % SPECIES_LIST_TRAINER_CLASS_DEFAULT_STANDARD_COUNT];
    #endif
}

u16 GetGeneratorRestricted(struct GeneratorSpecies * species)
{
    // Switch on number of restricteds
    switch(species->restrictedCount)
    {
        case 0: // None found
            return SPECIES_NONE;
        case 1: // One found
            return (species->restricted[0]);
        default: // Other cases
            return (species->restricted[Random() % (species->restrictedCount)]);
    }
}

u16 GetDefaultRestricted(void)
{
    #if SPECIES_LIST_TRAINER_CLASS_DEFAULT_RESTRICTED_COUNT == 0
    return SPECIES_NONE;
    #elif SPECIES_LIST_TRAINER_CLASS_DEFAULT_RESTRICTED_COUNT == 1
    return gSpeciesListTrainerClassDefaultRestricted[0];
    #else
    return gSpeciesListTrainerClassDefaultRestricted[Random() % SPECIES_LIST_TRAINER_CLASS_DEFAULT_RESTRICTED_COUNT];
    #endif
}
