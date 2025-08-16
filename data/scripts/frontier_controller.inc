BattleFrontierController_EventScript_ControllerHill::
# 2 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerHill_Text_0
# 3 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_IS_CHAMPION, BattleFrontierController_EventScript_ControllerHill_2
BattleFrontierController_EventScript_ControllerHill_1:
# 6 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerHill_Text_1
# 7 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerEnd
	return

BattleFrontierController_EventScript_ControllerHill_2:
# 4 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerInfo
	goto BattleFrontierController_EventScript_ControllerHill_1


BattleFrontierController_EventScript_ControllerTent::
# 11 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerTent_Text_0
# 12 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerInfo
	return


BattleFrontierController_EventScript_ControllerFrontier::
# 16 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerFrontier_Text_0
# 17 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerInfo
	return


BattleFrontierController_EventScript_ControllerManiac::
# 21 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerManiac_Text_0
# 22 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerInfo
	return


BattleFrontierController_EventScript_ControllerInfo::
# 26 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerInfo_Text_0
# 27 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
	return


BattleFrontierController_EventScript_ControllerOptions::
# 31 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerOptions_Text_0
# 32 "data/scripts/frontier_controller.pory"
	multichoice2 18, 0, BattleFrontierController_Text_ControllerOptionSelect
# 33 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 34 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerOptions_2
# 36 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerOptions_3
# 38 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerOptions_4
# 40 "data/scripts/frontier_controller.pory"
	case 3, BattleFrontierController_EventScript_ControllerOptions_5
# 42 "data/scripts/frontier_controller.pory"
	case 4, BattleFrontierController_EventScript_ControllerOptions_6
# 45 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerEnd
	return

BattleFrontierController_EventScript_ControllerOptions_2:
# 35 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeDifficulty
	return

BattleFrontierController_EventScript_ControllerOptions_3:
# 37 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeOpponents
	return

BattleFrontierController_EventScript_ControllerOptions_4:
# 39 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBehavior
	return

BattleFrontierController_EventScript_ControllerOptions_5:
# 41 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
	return

BattleFrontierController_EventScript_ControllerOptions_6:
# 43 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusic
	return


BattleFrontierController_EventScript_ControllerChangeDifficulty::
# 50 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_FIXED_IV, BattleFrontierController_EventScript_ControllerChangeDifficulty_2
# 56 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_2
# 57 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_3
BattleFrontierController_EventScript_ControllerChangeDifficulty_1:
# 59 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 60 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeDifficulty_6
BattleFrontierController_EventScript_ControllerChangeDifficulty_5:
# 71 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
	return

BattleFrontierController_EventScript_ControllerChangeDifficulty_2:
# 51 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_0
# 52 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_1
	goto BattleFrontierController_EventScript_ControllerChangeDifficulty_1

BattleFrontierController_EventScript_ControllerChangeDifficulty_6:
# 61 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_FIXED_IV, BattleFrontierController_EventScript_ControllerChangeDifficulty_8
# 67 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_FIXED_IV
# 68 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_5
	goto BattleFrontierController_EventScript_ControllerChangeDifficulty_5

BattleFrontierController_EventScript_ControllerChangeDifficulty_8:
# 62 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_FIXED_IV
# 63 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_4
	goto BattleFrontierController_EventScript_ControllerChangeDifficulty_5


BattleFrontierController_EventScript_ControllerChangeOpponents::
# 75 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_GENERATOR, BattleFrontierController_EventScript_ControllerChangeOpponents_2
# 82 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_3
# 83 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_4
# 84 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_5
BattleFrontierController_EventScript_ControllerChangeOpponents_1:
# 86 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 87 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeOpponents_6
BattleFrontierController_EventScript_ControllerChangeOpponents_5:
# 98 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
	return

BattleFrontierController_EventScript_ControllerChangeOpponents_2:
# 76 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_0
# 77 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_1
# 78 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_2
	goto BattleFrontierController_EventScript_ControllerChangeOpponents_1

BattleFrontierController_EventScript_ControllerChangeOpponents_6:
# 88 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_GENERATOR, BattleFrontierController_EventScript_ControllerChangeOpponents_8
# 94 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_GENERATOR
# 95 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_7
	goto BattleFrontierController_EventScript_ControllerChangeOpponents_5

BattleFrontierController_EventScript_ControllerChangeOpponents_8:
# 89 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_GENERATOR
# 90 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_6
	goto BattleFrontierController_EventScript_ControllerChangeOpponents_5


BattleFrontierController_EventScript_ControllerChangeBehavior::
# 102 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_0
# 104 "data/scripts/frontier_controller.pory"
	switch VAR_FRONTIER_METHOD
# 105 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeBehavior_3
# 107 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeBehavior_4
# 109 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeBehavior_5
# 111 "data/scripts/frontier_controller.pory"
	case 3, BattleFrontierController_EventScript_ControllerChangeBehavior_6
# 113 "data/scripts/frontier_controller.pory"
	case 4, BattleFrontierController_EventScript_ControllerChangeBehavior_7
# 115 "data/scripts/frontier_controller.pory"
	case 5, BattleFrontierController_EventScript_ControllerChangeBehavior_8
BattleFrontierController_EventScript_ControllerChangeBehavior_1:
# 119 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_7
# 121 "data/scripts/frontier_controller.pory"
	multichoice2 18, 0, BattleFrontierController_Text_ControllerOptionSelectBehavior
# 122 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne BattleFrontierController_EventScript_ControllerChangeBehavior_10
BattleFrontierController_EventScript_ControllerChangeBehavior_9:
# 127 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
	return

BattleFrontierController_EventScript_ControllerChangeBehavior_3:
# 106 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_1
	goto BattleFrontierController_EventScript_ControllerChangeBehavior_1

BattleFrontierController_EventScript_ControllerChangeBehavior_4:
# 108 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_2
	goto BattleFrontierController_EventScript_ControllerChangeBehavior_1

BattleFrontierController_EventScript_ControllerChangeBehavior_5:
# 110 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_3
	goto BattleFrontierController_EventScript_ControllerChangeBehavior_1

BattleFrontierController_EventScript_ControllerChangeBehavior_6:
# 112 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_4
	goto BattleFrontierController_EventScript_ControllerChangeBehavior_1

BattleFrontierController_EventScript_ControllerChangeBehavior_7:
# 114 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_5
	goto BattleFrontierController_EventScript_ControllerChangeBehavior_1

BattleFrontierController_EventScript_ControllerChangeBehavior_8:
# 116 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_6
	goto BattleFrontierController_EventScript_ControllerChangeBehavior_1

BattleFrontierController_EventScript_ControllerChangeBehavior_10:
# 123 "data/scripts/frontier_controller.pory"
	copyvar VAR_FRONTIER_METHOD, VAR_RESULT
# 124 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_8
	goto BattleFrontierController_EventScript_ControllerChangeBehavior_9


BattleFrontierController_EventScript_ControllerChangeMusic::
# 131 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeMusic_Text_0
# 132 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeMusic_Text_1
# 133 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1
	return


BattleFrontierController_EventScript_ControllerChangeBanlist::
# 137 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlist_Text_0
# 138 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerChangeRules
# 139 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 141 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeBanlist_2
# 143 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeBanlist_3
# 146 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
	return

BattleFrontierController_EventScript_ControllerChangeBanlist_2:
# 142 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard
	return

BattleFrontierController_EventScript_ControllerChangeBanlist_3:
# 144 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamax
	return


BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas::
# 152 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_ALLOW_MEGA, BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_2
# 162 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_Text_2
# 163 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 164 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_7
BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_1:
# 169 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
	return

BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_2:
# 153 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_Text_0
# 154 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 155 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_5
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_5:
# 156 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_Text_1
# 157 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_ALLOW_MEGA
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_7:
# 165 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_Text_3
# 166 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_MEGA
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_1


BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves::
# 174 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_ALLOW_ZMOVE, BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_2
# 184 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_Text_2
# 185 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 186 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_7
BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_1:
# 191 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
	return

BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_2:
# 175 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_Text_0
# 176 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 177 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_5
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_5:
# 178 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_Text_1
# 179 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_ALLOW_ZMOVE
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_7:
# 187 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_Text_3
# 188 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_ZMOVE
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_1


BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras::
# 196 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_ALLOW_TERA, BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_2
# 206 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_Text_2
# 207 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 208 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_7
BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_1:
# 213 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard
	return

BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_2:
# 197 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_Text_0
# 198 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 199 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_5
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_5:
# 200 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_Text_1
# 201 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_ALLOW_TERA
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_7:
# 209 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_Text_3
# 210 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_TERA
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_1


BattleFrontierController_EventScript_ControllerChangeBanlistStandard::
# 217 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_0
# 218 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerChangeRulesStandard
# 219 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 221 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeBanlistStandard_3
# 223 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeBanlistStandard_4
# 225 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeBanlistStandard_5
# 228 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1:
# 230 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
	return

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_3:
# 222 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_4:
# 224 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_5:
# 226 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1


BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax::
# 235 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_ALLOW_GMAX, BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_2
# 245 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_Text_2
# 246 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 247 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_7
BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_1:
# 252 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamax
	return

BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_2:
# 236 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_Text_0
# 237 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 238 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_5
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_1

BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_5:
# 239 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_Text_1
# 240 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_ALLOW_GMAX
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_1

BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_7:
# 248 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_Text_3
# 249 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_GMAX
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_1


BattleFrontierController_EventScript_ControllerChangeBanlistDynamax::
# 256 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_0
# 257 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerChangeRulesDynamax
# 258 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 260 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_3
# 263 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_1:
# 265 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
	return

BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_3:
# 261 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_1


BattleFrontierController_EventScript_ControllerChangeMusicPage1::
# 269 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage1
# 270 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 271 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeMusicPage1_3
# 273 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeMusicPage1_4
# 275 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeMusicPage1_5
# 277 "data/scripts/frontier_controller.pory"
	case 3, BattleFrontierController_EventScript_ControllerChangeMusicPage1_6
# 279 "data/scripts/frontier_controller.pory"
	case 4, BattleFrontierController_EventScript_ControllerChangeMusicPage1_7
# 281 "data/scripts/frontier_controller.pory"
	case 5, BattleFrontierController_EventScript_ControllerChangeMusicPage1_8
# 283 "data/scripts/frontier_controller.pory"
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage1_9
# 285 "data/scripts/frontier_controller.pory"
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage1_10
# 288 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
BattleFrontierController_EventScript_ControllerChangeMusicPage1_1:
# 290 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicSuccess
	return

BattleFrontierController_EventScript_ControllerChangeMusicPage1_3:
# 272 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 0
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_4:
# 274 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 20
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_5:
# 276 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 1
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_6:
# 278 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 2
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_7:
# 280 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 3
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_8:
# 282 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 4
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_9:
# 284 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_10:
# 286 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1


BattleFrontierController_EventScript_ControllerChangeMusicPage2::
# 294 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage2
# 295 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 296 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeMusicPage2_3
# 298 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeMusicPage2_4
# 300 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeMusicPage2_5
# 302 "data/scripts/frontier_controller.pory"
	case 3, BattleFrontierController_EventScript_ControllerChangeMusicPage2_6
# 304 "data/scripts/frontier_controller.pory"
	case 4, BattleFrontierController_EventScript_ControllerChangeMusicPage2_7
# 306 "data/scripts/frontier_controller.pory"
	case 5, BattleFrontierController_EventScript_ControllerChangeMusicPage2_8
# 308 "data/scripts/frontier_controller.pory"
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage2_9
# 310 "data/scripts/frontier_controller.pory"
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage2_10
# 313 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
BattleFrontierController_EventScript_ControllerChangeMusicPage2_1:
# 315 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicSuccess
	return

BattleFrontierController_EventScript_ControllerChangeMusicPage2_3:
# 297 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 5
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_4:
# 299 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 6
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_5:
# 301 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 7
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_6:
# 303 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 8
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_7:
# 305 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 9
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_8:
# 307 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 10
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_9:
# 309 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_10:
# 311 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1


BattleFrontierController_EventScript_ControllerChangeMusicPage3::
# 319 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage3
# 320 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 321 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeMusicPage3_3
# 323 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeMusicPage3_4
# 325 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeMusicPage3_5
# 327 "data/scripts/frontier_controller.pory"
	case 3, BattleFrontierController_EventScript_ControllerChangeMusicPage3_6
# 329 "data/scripts/frontier_controller.pory"
	case 4, BattleFrontierController_EventScript_ControllerChangeMusicPage3_7
# 331 "data/scripts/frontier_controller.pory"
	case 5, BattleFrontierController_EventScript_ControllerChangeMusicPage3_8
# 333 "data/scripts/frontier_controller.pory"
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage3_9
# 335 "data/scripts/frontier_controller.pory"
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage3_10
# 338 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
BattleFrontierController_EventScript_ControllerChangeMusicPage3_1:
# 340 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicSuccess
	return

BattleFrontierController_EventScript_ControllerChangeMusicPage3_3:
# 322 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 11
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_4:
# 324 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 12
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_5:
# 326 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 13
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_6:
# 328 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 14
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_7:
# 330 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 15
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_8:
# 332 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 16
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_9:
# 334 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_10:
# 336 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1


BattleFrontierController_EventScript_ControllerChangeMusicPage4::
# 344 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage4
# 345 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 346 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeMusicPage4_3
# 348 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeMusicPage4_4
# 350 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeMusicPage4_5
# 352 "data/scripts/frontier_controller.pory"
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage4_6
# 354 "data/scripts/frontier_controller.pory"
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage4_7
# 357 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
BattleFrontierController_EventScript_ControllerChangeMusicPage4_1:
# 359 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicSuccess
	return

BattleFrontierController_EventScript_ControllerChangeMusicPage4_3:
# 347 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 17
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1

BattleFrontierController_EventScript_ControllerChangeMusicPage4_4:
# 349 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 18
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1

BattleFrontierController_EventScript_ControllerChangeMusicPage4_5:
# 351 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 19
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1

BattleFrontierController_EventScript_ControllerChangeMusicPage4_6:
# 353 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1

BattleFrontierController_EventScript_ControllerChangeMusicPage4_7:
# 355 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1


BattleFrontierController_EventScript_ControllerChangeMusicSuccess::
# 363 "data/scripts/frontier_controller.pory"
	playse SE_SUCCESS
# 364 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeMusicSuccess_Text_0
# 365 "data/scripts/frontier_controller.pory"
	waitse
# 366 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
	return


BattleFrontierController_EventScript_ControllerEnd::
# 370 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerEnd_Text_0
# 371 "data/scripts/frontier_controller.pory"
	release
	end


BattleFrontierController_EventScript_ControllerHill_Text_0:
# 2 "data/scripts/frontier_controller.pory"
	.string "Hello and welcome to the TRAINER HILL!$"

BattleFrontierController_EventScript_ControllerHill_Text_1:
# 6 "data/scripts/frontier_controller.pory"
	.string "We haven't finished getting everything\n"
	.string "ready yet.$"

BattleFrontierController_EventScript_ControllerTent_Text_0:
# 11 "data/scripts/frontier_controller.pory"
	.string "Hello and welcome to the BATTLE TENT!$"

BattleFrontierController_EventScript_ControllerFrontier_Text_0:
# 16 "data/scripts/frontier_controller.pory"
	.string "Hello and welcome to the BATTLE\n"
	.string "FRONTIER!$"

BattleFrontierController_EventScript_ControllerManiac_Text_0:
# 21 "data/scripts/frontier_controller.pory"
	.string "Hello, I'm the BATTLE FRONTIER MANIAC!$"

BattleFrontierController_EventScript_ControllerInfo_Text_0:
# 26 "data/scripts/frontier_controller.pory"
	.string "I can help you customise your Battle\n"
	.string "Frontier experience.$"

BattleFrontierController_EventScript_ControllerOptions_Text_0:
# 31 "data/scripts/frontier_controller.pory"
	.string "What would you like to do?$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_0:
# 51 "data/scripts/frontier_controller.pory"
	.string "You are currently playing hard mode,\n"
	.string "where you will face up against difficult\l"
	.string "opponents regardless of win streak.$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_1:
# 52 "data/scripts/frontier_controller.pory"
	.string "Would you like to switch to normal mode,\n"
	.string "where opponent difficulty will scale\l"
	.string "based on your win streak?$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_2:
# 56 "data/scripts/frontier_controller.pory"
	.string "You are currently playing normal mode,\n"
	.string "where your opponents strength will\l"
	.string "scale from easy to hard at 49 wins.$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_3:
# 57 "data/scripts/frontier_controller.pory"
	.string "Would you like to switch to hard mode,\n"
	.string "with all opponents scaled up from the\l"
	.string "start?$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_4:
# 63 "data/scripts/frontier_controller.pory"
	.string "Done! You'll now play against\n"
	.string "difficulty-scaled Battle Frontier\l"
	.string "opponents.$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_5:
# 68 "data/scripts/frontier_controller.pory"
	.string "Done! You'll now play against difficult\n"
	.string "Battle Frontier opponents only.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_0:
# 76 "data/scripts/frontier_controller.pory"
	.string "You are currently playing against\n"
	.string "modern Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_1:
# 77 "data/scripts/frontier_controller.pory"
	.string "Please note, all other opponent\n"
	.string "behavior-related settings will be\l"
	.string "ignored in legacy mode.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_2:
# 78 "data/scripts/frontier_controller.pory"
	.string "Would you like to switch to legacy\n"
	.string "Battle Frontier opponents?$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_3:
# 82 "data/scripts/frontier_controller.pory"
	.string "You are currently playing against\n"
	.string "legacy Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_4:
# 83 "data/scripts/frontier_controller.pory"
	.string "Modern Battle Frontier opponents are\n"
	.string "randomly generated and include new\l"
	.string "species, items, formes and more.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_5:
# 84 "data/scripts/frontier_controller.pory"
	.string "Would you like to switch to modern\n"
	.string "Battle Frontier opponents?$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_6:
# 90 "data/scripts/frontier_controller.pory"
	.string "Done! You'll now play against legacy\n"
	.string "Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_7:
# 95 "data/scripts/frontier_controller.pory"
	.string "Done! You'll now play against modern\n"
	.string "Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_0:
# 102 "data/scripts/frontier_controller.pory"
	.string "I can change how modern Battle\n"
	.string "Frontier teams are built.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_1:
# 106 "data/scripts/frontier_controller.pory"
	.string "You are currently using the DEFAULT\n"
	.string "setting.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_2:
# 108 "data/scripts/frontier_controller.pory"
	.string "You are currently using the RANDOM\n"
	.string "setting.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_3:
# 110 "data/scripts/frontier_controller.pory"
	.string "You are currently using the FILTERED\n"
	.string "setting.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_4:
# 112 "data/scripts/frontier_controller.pory"
	.string "You are currently using the FILTERED\n"
	.string "ATTACKS setting.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_5:
# 114 "data/scripts/frontier_controller.pory"
	.string "You are currently using the RANKED\n"
	.string "setting.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_6:
# 116 "data/scripts/frontier_controller.pory"
	.string "You are currently using the RANKED\n"
	.string "ATTACKS setting.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_7:
# 119 "data/scripts/frontier_controller.pory"
	.string "Which option would you like to use?$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_8:
# 124 "data/scripts/frontier_controller.pory"
	.string "Modern teams have been updated\n"
	.string "successfully!$"

BattleFrontierController_EventScript_ControllerChangeMusic_Text_0:
# 131 "data/scripts/frontier_controller.pory"
	.string "What would like to listen to?$"

BattleFrontierController_EventScript_ControllerChangeMusic_Text_1:
# 132 "data/scripts/frontier_controller.pory"
	.string "L: Previous Page                    R: Next Page\nB: Go Back$"

BattleFrontierController_EventScript_ControllerChangeBanlist_Text_0:
# 137 "data/scripts/frontier_controller.pory"
	.string "Which ruleset would you like to change?$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_Text_0:
# 153 "data/scripts/frontier_controller.pory"
	.string "Megas are currently allowed. Would you\n"
	.string "like them to be banned?$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_Text_1:
# 156 "data/scripts/frontier_controller.pory"
	.string "Got it! Megas will now be banned.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_Text_2:
# 162 "data/scripts/frontier_controller.pory"
	.string "Megas are currently banned. Would you\n"
	.string "like them to be allowed?$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardMegas_Text_3:
# 165 "data/scripts/frontier_controller.pory"
	.string "Got it! Megas will now be allowed.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_Text_0:
# 175 "data/scripts/frontier_controller.pory"
	.string "Z-Moves are currently allowed. Would\n"
	.string "you like them to be banned?$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_Text_1:
# 178 "data/scripts/frontier_controller.pory"
	.string "Got it! Z-Moves will now be banned.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_Text_2:
# 184 "data/scripts/frontier_controller.pory"
	.string "Z-Moves are currently banned. Would\n"
	.string "you like them to be allowed?$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardZmoves_Text_3:
# 187 "data/scripts/frontier_controller.pory"
	.string "Got it! Z-Moves will now be allowed.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_Text_0:
# 197 "data/scripts/frontier_controller.pory"
	.string "Tera is currently allowed. Would you like\n"
	.string "it to be banned?$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_Text_1:
# 200 "data/scripts/frontier_controller.pory"
	.string "Got it! Tera will now be banned.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_Text_2:
# 206 "data/scripts/frontier_controller.pory"
	.string "Tera is currently banned. Would you like\n"
	.string "it to be allowed?$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandardTeras_Text_3:
# 209 "data/scripts/frontier_controller.pory"
	.string "Got it! Tera will now be allowed.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_0:
# 217 "data/scripts/frontier_controller.pory"
	.string "What would you like to change?$"

BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_Text_0:
# 236 "data/scripts/frontier_controller.pory"
	.string "Gmax is currently allowed. Would you\n"
	.string "like it to be banned?$"

BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_Text_1:
# 239 "data/scripts/frontier_controller.pory"
	.string "Got it! Gmax will now be banned.$"

BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_Text_2:
# 245 "data/scripts/frontier_controller.pory"
	.string "Gmax is currently banned. Would you like\n"
	.string "it to be allowed?$"

BattleFrontierController_EventScript_ControllerChangeBanlistDynamaxGmax_Text_3:
# 248 "data/scripts/frontier_controller.pory"
	.string "Got it! Gmax will now be allowed.$"

BattleFrontierController_EventScript_ControllerChangeMusicSuccess_Text_0:
# 364 "data/scripts/frontier_controller.pory"
	.string "All done! Your music selection has been\n"
	.string "changed.$"

BattleFrontierController_EventScript_ControllerEnd_Text_0:
# 370 "data/scripts/frontier_controller.pory"
	.string "I hope you have some good battles!$"

BattleFrontierController_Text_ControllerOptionSelect::
# 375 "data/scripts/frontier_controller.pory"
	.string "CHANGE DIFFICULTY$"
	.string "CHANGE OPPONENTS$"
	.string "CHANGE BEHAVIOR$"
	.string "CHANGE BANLIST$"
	.string "CHANGE MUSIC$"
	.string "NOTHING$"
	.string "$"

BattleFrontierController_Text_ControllerOptionSelectBehavior::
# 385 "data/scripts/frontier_controller.pory"
	.string "DEFAULT$"
	.string "RANDOM$"
	.string "FILTERED$"
	.string "FILTERED ATTACKS$"
	.string "RANKED$"
	.string "RANKED ATTACKS$"
	.string "$"

BattleFrontierController_Text_ControllerChangeRules::
# 395 "data/scripts/frontier_controller.pory"
	.string "STANDARD BATTLE$"
	.string "DYNAMAX BATTLE$"
	.string "$"

BattleFrontierController_Text_ControllerChangeRulesStandard::
# 401 "data/scripts/frontier_controller.pory"
	.string "MEGA EVOLUTIONS$"
	.string "Z-MOVES$"
	.string "TERASTALISATION$"
	.string "$"

BattleFrontierController_Text_ControllerChangeRulesDynamax::
# 408 "data/scripts/frontier_controller.pory"
	.string "GIGANTAMAX$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage1::
# 413 "data/scripts/frontier_controller.pory"
	.string "DEFAULT$"
	.string "RANDOM$"
	.string "VS.Frontier Brain$"
	.string "VS.Mew$"
	.string "VS.Wild Pokemon$"
	.string "VS.Team Aqua & Magma$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage2::
# 423 "data/scripts/frontier_controller.pory"
	.string "VS.Trainer$"
	.string "VS.Gym Leader$"
	.string "VS.Champion$"
	.string "VS.Regi$"
	.string "VS.Kyogre & Groudon$"
	.string "VS.Rival$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage3::
# 433 "data/scripts/frontier_controller.pory"
	.string "VS.Elite Four$"
	.string "VS.Aqua & Magma Leader$"
	.string "VS.Gym Leader (FRLG)$"
	.string "VS.Trainer (FRLG)$"
	.string "VS.Wild Pokemon (FRLG)$"
	.string "VS.Champion (FRLG)$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage4::
# 443 "data/scripts/frontier_controller.pory"
	.string "VS.Deoxys (FRLG)$"
	.string "VS.Mewtwo (FRLG)$"
	.string "VS.Legend (FRLG)$"
	.string "$"
