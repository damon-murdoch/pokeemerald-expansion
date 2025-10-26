#ifndef GUARD_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_BATTLE_FRONTIER_GENERATOR_H

#include "config/battle_frontier_generator.h"

// Species Generator Properties
struct GeneratorProperties {
    u32 otID;
    u8 level;
    u8 fixedIV;
    u16 minBST;
    u16 maxBST;
    // Rules
    bool8 allowZMove;
    bool8 allowGmax;
    bool8 allowMega;
    bool8 allowForme;
};

// Allowed Moves Struct
struct GeneratorMoves {
    // Selected move data
    u16 moves[MAX_MON_MOVES];
    u8 moveCount; 

    // Indexed array of move types
    u8 types[NUMBER_OF_MON_TYPES];

    // Allowed Status Moves
    u16 allowedStatusMoves[BFG_MOVE_RATING_LIST_SIZE_STATUS];
    u8 numAllowedStatusMoves;

    // Allowed Attacking Moves
    u16 allowedAttackingMoves[BFG_MOVE_RATING_LIST_SIZE_ATTACK];
    u8 numAllowedAttackingMoves;
};

// Forme / Gimmick not allowed
#define BFG_ITEM_IV_BANNED 32

u16 GetFixedSeed(u8 challengeNum);

bool8 HasPhysicalMove(struct Pokemon * mon);
bool32 GenerateTrainerPokemon(struct Pokemon * mon, u16 speciesId, u8 formeIndex, u16 move, u16 item, struct GeneratorProperties * properties);
bool32 GenerateTrainerPokemonHandleForme(struct Pokemon * mon, u16 speciesId, struct GeneratorProperties * properties);

bool32 GetSpeciesItemCheckUnique(u16 itemId, u16 * items, u8 itemCount);
u16 GetSpeciesItem(struct Pokemon * mon, u16 * items, u8 itemCount);

void DebugPrintMonData(struct Pokemon * mon);
void InitGeneratorMoves(struct GeneratorMoves * moves);
void InitGeneratorProperties(struct GeneratorProperties * properties, u8 level, u8 fixedIV);
void InitGeneratorForLvlMode(struct GeneratorProperties * properties, u8 lvlMode); 
void UpdateGeneratorForLvlMode(struct GeneratorProperties * properties, u8 lvlMode); 

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level);
void GenerateFacilityInitialRentalMons(u8 firstMonId, u8 challengeNum, u8 rentalRank);
void GenerateFacilityOpponentMons(u16 trainerId, u8 firstMonId, u8 challengeNum, u8 winStreak);

void FillFacilityTrainerParty(u16 trainerId, u32 otID, u8 firstMonId, u8 challengeNum, u8 level, u8 fixedIV);

void SetFacilityPlayerAndOpponentParties();
void SetRentalsToFacilityOpponentParty();

void RestoreFacilityPlayerPartyHeldItems(u8 challengeNum);

bool8 FrontierBattlerCanMegaEvolve();
bool8 FrontierBattlerCanUseZMove();

bool8 FrontierBattlerCanTerastalise();
bool8 FrontierBattlerShouldTerastal(struct Pokemon * mon);

bool8 FrontierBattlerCanDynamax(struct Pokemon * mon);
bool8 FrontierBattlerShouldDynamax(struct Pokemon * mon);

#endif // GUARD_BATTLE_FRONTIER_GENERATOR_H
