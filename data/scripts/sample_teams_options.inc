Auto_EventScript_Sample_Teams_Controls::
# 5 "data/scripts/sample_teams_options.pory"
	msgbox Auto_EventScript_Sample_Teams_Controls_Text_0
# 6 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Page1::
# 11 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Page1
# 12 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 14 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Page1_2
# 16 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Page1_3
# 18 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Page1_4
# 21 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_End
	return

Auto_EventScript_Sample_Teams_Page1_2:
# 15 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Page1_3:
# 17 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Page1_4:
# 19 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Page1::
# 27 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Page1
# 28 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 30 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Page1_2
# 32 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Page1_3
# 38 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Page1_4
# 44 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Page1_5
# 50 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Page1_6
# 56 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Page1_7
# 58 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Page1_8
# 61 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_2:
# 31 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_3:
# 33 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INDEEDEE_F, 50, ITEM_PSYCHIC_SEED, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 212, 0, 0, 44, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_PSYCHIC, 2, FALSE, TYPE_DARK, 10
# 34 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HATTERENE, 50, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 2, 1, 212, 0, 108, 0, 188, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_DAZZLING_GLEAM, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_WATER, 10
# 35 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CAMERUPT, 50, ITEM_CAMERUPTITE, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 252, 0, 60, 0, 196, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, MOVE_ERUPTION, 2, FALSE, TYPE_WATER, 10
# 36 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BRUTE_BONNET, 50, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 244, 0, 92, 0, 0, 172, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_SEED_BOMB, MOVE_LASH_OUT, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 37 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_4:
# 39 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUDICOLO, 50, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 188, 0, 140, 92, 76, 12, 31, 31, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 40 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_PELIPPER, 50, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_WEATHER_BALL, MOVE_HURRICANE, 2, FALSE, TYPE_WATER, 10
# 41 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MANECTRIC, 50, ITEM_MANECTITE, ITEM_POKE_BALL, NATURE_TIMID, 1, 1, 244, 0, 4, 220, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_THUNDER, 2, FALSE, FALSE, 10
# 42 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 50, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, FALSE, 10
# 43 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_5:
# 45 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_FIRE, 10
# 46 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 116, 20, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GRASS, 10
# 47 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 36, 52, 164, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, 2, FALSE, TYPE_STEEL, 10
# 48 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 49 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_6:
# 51 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, 2, FALSE, TYPE_WATER, 10
# 52 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FAIRIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 164, 0, 204, 12, 124, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_ICY_WIND, 2, FALSE, TYPE_FAIRY, 10
# 53 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 54 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 55 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_7:
# 57 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_8:
# 59 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1::
# 67 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Hall_Of_Fame_Page1
# 68 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 70 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_2
# 76 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_3
# 82 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_4
# 88 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_5
# 94 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_6
# 96 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_7
# 99 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_2:
# 71 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 72 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 20, 196, 4, 252, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_ROCK_SLIDE, MOVE_TERA_BLAST, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_FLYING, 10
# 73 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 228, 0, 4, 36, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, 2, FALSE, TYPE_GRASS, 10
# 74 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 75 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_3:
# 77 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLANGING_SCALES, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, 2, FALSE, TYPE_FIRE, 10
# 78 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 76, 0, 28, 204, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_WATER, 10
# 79 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 80 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 116, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 81 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_4:
# 83 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, 2, FALSE, TYPE_WATER, 10
# 84 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DRACO_METEOR, 2, FALSE, TYPE_WATER, 10
# 85 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 86 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 116, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 87 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_5:
# 89 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_BEAT_UP, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_DARK, 10
# 90 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TERRAKION, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_KICK, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_GHOST, 10
# 91 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, 2, FALSE, TYPE_GRASS, 10
# 92 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 236, 0, 0, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_POISON_JAB, 2, FALSE, TYPE_DARK, 10
# 93 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_6:
# 95 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1_7:
# 97 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Hall_Of_Fame_Page1
	return


Auto_EventScript_Sample_Teams_Controls_Text_0:
# 5 "data/scripts/sample_teams_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                               B: Go Back$"

Auto_Text_Sample_Teams_Page1::
# 103 "data/scripts/sample_teams_options.pory"
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Page1::
# 110 "data/scripts/sample_teams_options.pory"
	.string "HALL OF FAME$"
	.string "M-CAMEL ROOM$"
	.string "M-MANECTRIC RAIN$"
	.string "M-META BALANCE$"
	.string "M-ZARD Y FLUTTER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Hall_Of_Fame_Page1::
# 121 "data/scripts/sample_teams_options.pory"
	.string "M-GARDY BALANCE$"
	.string "M-GENGAR KOMMO-O$"
	.string "M-MENCE BALANCE$"
	.string "M-ZARD Y TERRACOTT$"
	.string "Go Back$"
	.string "$"
