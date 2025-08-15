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
	msgbox BattleFrontierController_EventScript_ControllerInfo_Text_1
# 28 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
	return


BattleFrontierController_EventScript_ControllerOptions::
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
# 51 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_FIXED_IV, BattleFrontierController_EventScript_ControllerChangeDifficulty_2
# 57 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_2
# 58 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_3
BattleFrontierController_EventScript_ControllerChangeDifficulty_1:
# 61 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 62 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeDifficulty_6
BattleFrontierController_EventScript_ControllerChangeDifficulty_5:
# 74 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_6
# 75 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerAsk
	return

BattleFrontierController_EventScript_ControllerChangeDifficulty_2:
# 52 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_0
# 53 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_1
	goto BattleFrontierController_EventScript_ControllerChangeDifficulty_1

BattleFrontierController_EventScript_ControllerChangeDifficulty_6:
# 63 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_FIXED_IV, BattleFrontierController_EventScript_ControllerChangeDifficulty_8
# 69 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_FIXED_IV
# 70 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_5
	goto BattleFrontierController_EventScript_ControllerChangeDifficulty_5

BattleFrontierController_EventScript_ControllerChangeDifficulty_8:
# 64 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_FIXED_IV
# 65 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_4
	goto BattleFrontierController_EventScript_ControllerChangeDifficulty_5


BattleFrontierController_EventScript_ControllerChangeOpponents::
# 80 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_GENERATOR, BattleFrontierController_EventScript_ControllerChangeOpponents_2
# 88 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_4
# 89 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_5
# 90 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_1
# 91 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_6
BattleFrontierController_EventScript_ControllerChangeOpponents_1:
# 94 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 95 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeOpponents_6
BattleFrontierController_EventScript_ControllerChangeOpponents_5:
# 107 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_6
# 108 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerAsk
	return

BattleFrontierController_EventScript_ControllerChangeOpponents_2:
# 81 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_0
# 82 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_1
# 83 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_2
# 84 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_3
	goto BattleFrontierController_EventScript_ControllerChangeOpponents_1

BattleFrontierController_EventScript_ControllerChangeOpponents_6:
# 96 "data/scripts/frontier_controller.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_GENERATOR, BattleFrontierController_EventScript_ControllerChangeOpponents_8
# 102 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_GENERATOR
# 103 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_8
	goto BattleFrontierController_EventScript_ControllerChangeOpponents_5

BattleFrontierController_EventScript_ControllerChangeOpponents_8:
# 97 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_GENERATOR
# 98 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_7
	goto BattleFrontierController_EventScript_ControllerChangeOpponents_5


BattleFrontierController_EventScript_ControllerChangeBehavior::
# 113 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_0
# 114 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_1
# 116 "data/scripts/frontier_controller.pory"
	multichoice2 18, 0, BattleFrontierController_Text_ControllerOptionSelectBehavior
# 117 "data/scripts/frontier_controller.pory"
	copyvar VAR_FRONTIER_METHOD, VAR_RESULT
# 119 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_2
# 121 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerAsk
	return


BattleFrontierController_EventScript_ControllerChangeMusic::
# 125 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeMusic_Text_0
# 126 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeMusic_Text_1
# 127 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1
	return


BattleFrontierController_EventScript_ControllerChangeBanlist::
# 131 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlist_Text_0
# 132 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerChangeRules
# 133 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 135 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeBanlist_2
# 137 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeBanlist_3
# 140 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerAsk
	return

BattleFrontierController_EventScript_ControllerChangeBanlist_2:
# 136 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard
	return

BattleFrontierController_EventScript_ControllerChangeBanlist_3:
# 138 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamax
	return


BattleFrontierController_EventScript_ControllerChangeBanlistStandard::
# 145 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_0
# 146 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_1
# 147 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_2
# 148 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerChangeRulesStandard
# 149 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 151 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeBanlistStandard_3
# 154 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeBanlistStandard_4
# 157 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeBanlistStandard_5
# 160 "data/scripts/frontier_controller.pory"
	case 3, BattleFrontierController_EventScript_ControllerChangeBanlistStandard_6
# 163 "data/scripts/frontier_controller.pory"
	case 4, BattleFrontierController_EventScript_ControllerChangeBanlistStandard_7
# 166 "data/scripts/frontier_controller.pory"
	case 5, BattleFrontierController_EventScript_ControllerChangeBanlistStandard_8
# 170 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1:
# 172 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
	return

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_3:
# 152 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_3
# 153 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_MEGA
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_4:
# 155 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_4
# 156 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_ALLOW_MEGA
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_5:
# 158 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_5
# 159 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_ZMOVE
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_6:
# 161 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_6
# 162 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_ALLOW_ZMOVE
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_7:
# 164 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_7
# 165 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_TERA
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_8:
# 167 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_8
# 168 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_ALLOW_TERA
	goto BattleFrontierController_EventScript_ControllerChangeBanlistStandard_1


BattleFrontierController_EventScript_ControllerChangeBanlistDynamax::
# 176 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_Text_0
# 177 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_1
# 178 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_2
# 179 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerChangeRulesDynamax
# 180 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 182 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_3
# 185 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_4
# 189 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_1:
# 191 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeBanlist
	return

BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_3:
# 183 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_Text_1
# 184 "data/scripts/frontier_controller.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_GMAX
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_1

BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_4:
# 186 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_Text_2
# 187 "data/scripts/frontier_controller.pory"
	clearflag FLAG_BATTLE_FRONTIER_ALLOW_GMAX
	goto BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_1


BattleFrontierController_EventScript_ControllerChangeMusicPage1::
# 195 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage1
# 196 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 197 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeMusicPage1_3
# 199 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeMusicPage1_4
# 201 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeMusicPage1_5
# 203 "data/scripts/frontier_controller.pory"
	case 3, BattleFrontierController_EventScript_ControllerChangeMusicPage1_6
# 205 "data/scripts/frontier_controller.pory"
	case 4, BattleFrontierController_EventScript_ControllerChangeMusicPage1_7
# 207 "data/scripts/frontier_controller.pory"
	case 5, BattleFrontierController_EventScript_ControllerChangeMusicPage1_8
# 209 "data/scripts/frontier_controller.pory"
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage1_9
# 211 "data/scripts/frontier_controller.pory"
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage1_10
# 214 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerAsk
BattleFrontierController_EventScript_ControllerChangeMusicPage1_1:
# 216 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicSuccess
	return

BattleFrontierController_EventScript_ControllerChangeMusicPage1_3:
# 198 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 0
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_4:
# 200 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 1
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_5:
# 202 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 2
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_6:
# 204 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 3
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_7:
# 206 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 4
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_8:
# 208 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 5
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_9:
# 210 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1

BattleFrontierController_EventScript_ControllerChangeMusicPage1_10:
# 212 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1_1


BattleFrontierController_EventScript_ControllerChangeMusicPage2::
# 220 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage2
# 221 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 222 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeMusicPage2_3
# 224 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeMusicPage2_4
# 226 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeMusicPage2_5
# 228 "data/scripts/frontier_controller.pory"
	case 3, BattleFrontierController_EventScript_ControllerChangeMusicPage2_6
# 230 "data/scripts/frontier_controller.pory"
	case 4, BattleFrontierController_EventScript_ControllerChangeMusicPage2_7
# 232 "data/scripts/frontier_controller.pory"
	case 5, BattleFrontierController_EventScript_ControllerChangeMusicPage2_8
# 234 "data/scripts/frontier_controller.pory"
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage2_9
# 236 "data/scripts/frontier_controller.pory"
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage2_10
# 239 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerAsk
BattleFrontierController_EventScript_ControllerChangeMusicPage2_1:
# 241 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicSuccess
	return

BattleFrontierController_EventScript_ControllerChangeMusicPage2_3:
# 223 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 6
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_4:
# 225 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 7
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_5:
# 227 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 8
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_6:
# 229 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 9
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_7:
# 231 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 10
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_8:
# 233 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 11
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_9:
# 235 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1

BattleFrontierController_EventScript_ControllerChangeMusicPage2_10:
# 237 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2_1


BattleFrontierController_EventScript_ControllerChangeMusicPage3::
# 245 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage3
# 246 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 247 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeMusicPage3_3
# 249 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeMusicPage3_4
# 251 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeMusicPage3_5
# 253 "data/scripts/frontier_controller.pory"
	case 3, BattleFrontierController_EventScript_ControllerChangeMusicPage3_6
# 255 "data/scripts/frontier_controller.pory"
	case 4, BattleFrontierController_EventScript_ControllerChangeMusicPage3_7
# 257 "data/scripts/frontier_controller.pory"
	case 5, BattleFrontierController_EventScript_ControllerChangeMusicPage3_8
# 259 "data/scripts/frontier_controller.pory"
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage3_9
# 261 "data/scripts/frontier_controller.pory"
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage3_10
# 264 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerAsk
BattleFrontierController_EventScript_ControllerChangeMusicPage3_1:
# 266 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicSuccess
	return

BattleFrontierController_EventScript_ControllerChangeMusicPage3_3:
# 248 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 12
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_4:
# 250 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 13
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_5:
# 252 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 14
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_6:
# 254 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 15
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_7:
# 256 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 16
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_8:
# 258 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 17
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_9:
# 260 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage2
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1

BattleFrontierController_EventScript_ControllerChangeMusicPage3_10:
# 262 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3_1


BattleFrontierController_EventScript_ControllerChangeMusicPage4::
# 270 "data/scripts/frontier_controller.pory"
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage4
# 271 "data/scripts/frontier_controller.pory"
	switch VAR_RESULT
# 272 "data/scripts/frontier_controller.pory"
	case 0, BattleFrontierController_EventScript_ControllerChangeMusicPage4_3
# 274 "data/scripts/frontier_controller.pory"
	case 1, BattleFrontierController_EventScript_ControllerChangeMusicPage4_4
# 276 "data/scripts/frontier_controller.pory"
	case 2, BattleFrontierController_EventScript_ControllerChangeMusicPage4_5
# 278 "data/scripts/frontier_controller.pory"
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage4_6
# 280 "data/scripts/frontier_controller.pory"
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerChangeMusicPage4_7
# 283 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerAsk
BattleFrontierController_EventScript_ControllerChangeMusicPage4_1:
# 285 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicSuccess
	return

BattleFrontierController_EventScript_ControllerChangeMusicPage4_3:
# 273 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 18
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1

BattleFrontierController_EventScript_ControllerChangeMusicPage4_4:
# 275 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 19
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1

BattleFrontierController_EventScript_ControllerChangeMusicPage4_5:
# 277 "data/scripts/frontier_controller.pory"
	setvar VAR_FRONTIER_BGM, 20
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1

BattleFrontierController_EventScript_ControllerChangeMusicPage4_6:
# 279 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage3
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1

BattleFrontierController_EventScript_ControllerChangeMusicPage4_7:
# 281 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage1
	goto BattleFrontierController_EventScript_ControllerChangeMusicPage4_1


BattleFrontierController_EventScript_ControllerChangeMusicSuccess::
# 289 "data/scripts/frontier_controller.pory"
	playse SE_SUCCESS
# 290 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerChangeMusicSuccess_Text_0
# 291 "data/scripts/frontier_controller.pory"
	waitse
# 292 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerAsk
	return


BattleFrontierController_EventScript_ControllerAsk::
# 296 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerAsk_Text_0
# 297 "data/scripts/frontier_controller.pory"
	yesnobox 0, 8
# 298 "data/scripts/frontier_controller.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerAsk_1
# 301 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerEnd
	return

BattleFrontierController_EventScript_ControllerAsk_1:
# 299 "data/scripts/frontier_controller.pory"
	goto BattleFrontierController_EventScript_ControllerOptions
	return


BattleFrontierController_EventScript_ControllerEnd::
# 306 "data/scripts/frontier_controller.pory"
	msgbox BattleFrontierController_EventScript_ControllerEnd_Text_0
# 307 "data/scripts/frontier_controller.pory"
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

BattleFrontierController_EventScript_ControllerInfo_Text_1:
# 27 "data/scripts/frontier_controller.pory"
	.string "What would you like to do?$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_0:
# 52 "data/scripts/frontier_controller.pory"
	.string "You are currently playing hard mode,\n"
	.string "where you will face up against difficult\l"
	.string "opponents regardless of win streak.$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_1:
# 53 "data/scripts/frontier_controller.pory"
	.string "Would you like to switch to normal mode,\n"
	.string "where opponent difficulty will scale\l"
	.string "based on your win streak?$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_2:
# 57 "data/scripts/frontier_controller.pory"
	.string "You are currently playing normal mode,\n"
	.string "where your opponents strength will\l"
	.string "scale from easy to hard at 49 wins.$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_3:
# 58 "data/scripts/frontier_controller.pory"
	.string "Would you like to switch to hard mode,\n"
	.string "with all opponents scaled up from the\l"
	.string "start?$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_4:
# 65 "data/scripts/frontier_controller.pory"
	.string "Done! You'll now play against\n"
	.string "difficulty-scaled Battle Frontier\l"
	.string "opponents.$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_5:
# 70 "data/scripts/frontier_controller.pory"
	.string "Done! You'll now play against difficult\n"
	.string "Battle Frontier opponents only.$"

BattleFrontierController_EventScript_ControllerChangeDifficulty_Text_6:
# 74 "data/scripts/frontier_controller.pory"
	.string "Feel free to ask me again if you change\n"
	.string "your mind!$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_0:
# 81 "data/scripts/frontier_controller.pory"
	.string "You are currently playing against\n"
	.string "modern Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_1:
# 82 "data/scripts/frontier_controller.pory"
	.string "Keep in mind, you may experience bugs or\n"
	.string "crashes using this mode during\l"
	.string "development.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_2:
# 83 "data/scripts/frontier_controller.pory"
	.string "Please note, all other opponent\n"
	.string "behavior-related settings will be\l"
	.string "ignored in legacy mode.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_3:
# 84 "data/scripts/frontier_controller.pory"
	.string "Would you like to switch to legacy\n"
	.string "Battle Frontier opponents?$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_4:
# 88 "data/scripts/frontier_controller.pory"
	.string "You are currently playing against\n"
	.string "legacy Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_5:
# 89 "data/scripts/frontier_controller.pory"
	.string "Modern Battle Frontier opponents are\n"
	.string "randomly generated, and include new\l"
	.string "species, items, formes and more.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_6:
# 91 "data/scripts/frontier_controller.pory"
	.string "Would you like to switch to modern\n"
	.string "Battle Frontier opponents?$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_7:
# 98 "data/scripts/frontier_controller.pory"
	.string "Done! You'll now play against legacy\n"
	.string "Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_8:
# 103 "data/scripts/frontier_controller.pory"
	.string "Done! You'll now play against modern\n"
	.string "Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_0:
# 113 "data/scripts/frontier_controller.pory"
	.string "I can change how modern Battle\n"
	.string "Frontier teams are built.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_1:
# 114 "data/scripts/frontier_controller.pory"
	.string "Which option would you like to use?$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_2:
# 119 "data/scripts/frontier_controller.pory"
	.string "Modern teams have been updated\n"
	.string "successfully!$"

BattleFrontierController_EventScript_ControllerChangeMusic_Text_0:
# 125 "data/scripts/frontier_controller.pory"
	.string "What would like to listen to?$"

BattleFrontierController_EventScript_ControllerChangeMusic_Text_1:
# 126 "data/scripts/frontier_controller.pory"
	.string "L: Previous Page                    R: Next Page\nB: Go Back$"

BattleFrontierController_EventScript_ControllerChangeBanlist_Text_0:
# 131 "data/scripts/frontier_controller.pory"
	.string "Which ruleset would you like to change?$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_0:
# 145 "data/scripts/frontier_controller.pory"
	.string "These are the options for standard\n"
	.string "battles.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_1:
# 146 "data/scripts/frontier_controller.pory"
	.string "Please remember, these rules apply to\n"
	.string "both you and your opponents!$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_2:
# 147 "data/scripts/frontier_controller.pory"
	.string "What would you like to change?$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_3:
# 152 "data/scripts/frontier_controller.pory"
	.string "Okay! Mega Evolutions will be allowed.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_4:
# 155 "data/scripts/frontier_controller.pory"
	.string "Okay! Mega Evolutions will be banned.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_5:
# 158 "data/scripts/frontier_controller.pory"
	.string "Okay! Z-Moves will be allowed.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_6:
# 161 "data/scripts/frontier_controller.pory"
	.string "Okay! Z-Moves will be banned.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_7:
# 164 "data/scripts/frontier_controller.pory"
	.string "Okay! Terastalisation will be allowed.$"

BattleFrontierController_EventScript_ControllerChangeBanlistStandard_Text_8:
# 167 "data/scripts/frontier_controller.pory"
	.string "Okay! Terastalisation will be banned.$"

BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_Text_0:
# 176 "data/scripts/frontier_controller.pory"
	.string "These are the options for dynamax\n"
	.string "battles.$"

BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_Text_1:
# 183 "data/scripts/frontier_controller.pory"
	.string "Okay! Gigantamax Formes will be allowed.$"

BattleFrontierController_EventScript_ControllerChangeBanlistDynamax_Text_2:
# 186 "data/scripts/frontier_controller.pory"
	.string "Okay! Gigantamax Formes will be banned.$"

BattleFrontierController_EventScript_ControllerChangeMusicSuccess_Text_0:
# 290 "data/scripts/frontier_controller.pory"
	.string "All done! Your music selection has been\n"
	.string "changed.$"

BattleFrontierController_EventScript_ControllerAsk_Text_0:
# 296 "data/scripts/frontier_controller.pory"
	.string "Do you need me for anything else?$"

BattleFrontierController_EventScript_ControllerEnd_Text_0:
# 306 "data/scripts/frontier_controller.pory"
	.string "I hope you have some good battles!$"

BattleFrontierController_Text_ControllerOptionSelect::
# 311 "data/scripts/frontier_controller.pory"
	.string "CHANGE DIFFICULTY$"
	.string "CHANGE OPPONENTS$"
	.string "CHANGE BEHAVIOR$"
	.string "CHANGE BANLIST$"
	.string "CHANGE MUSIC$"
	.string "NOTHING$"
	.string "$"

BattleFrontierController_Text_ControllerOptionSelectBehavior::
# 321 "data/scripts/frontier_controller.pory"
	.string "DEFAULT$"
	.string "RANDOM$"
	.string "FILTERED$"
	.string "FILTERED ATTACKS$"
	.string "RANKED$"
	.string "RANKED ATTACKS$"
	.string "$"

BattleFrontierController_Text_ControllerChangeRules::
# 331 "data/scripts/frontier_controller.pory"
	.string "STANDARD BATTLE$"
	.string "DYNAMAX BATTLE$"
	.string "$"

BattleFrontierController_Text_ControllerChangeRulesStandard::
# 337 "data/scripts/frontier_controller.pory"
	.string "ALLOW MEGAS$"
	.string "BAN MEGAS$"
	.string "ALLOW ZMOVES$"
	.string "BAN ZMOVES$"
	.string "ALLOW TERA$"
	.string "BAN TERA$"
	.string "$"

BattleFrontierController_Text_ControllerChangeRulesDynamax::
# 347 "data/scripts/frontier_controller.pory"
	.string "ALLOW GMAX$"
	.string "BAN GMAX$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage1::
# 353 "data/scripts/frontier_controller.pory"
	.string "DEFAULT$"
	.string "VS.Frontier Brain$"
	.string "VS.Mew$"
	.string "VS.Wild Pokemon$"
	.string "VS.Team Aqua & Magma$"
	.string "VS.Trainer$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage2::
# 363 "data/scripts/frontier_controller.pory"
	.string "VS.Gym Leader$"
	.string "VS.Champion$"
	.string "VS.Regi$"
	.string "VS.Kyogre & Groudon$"
	.string "VS.Rival$"
	.string "VS.Elite Four$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage3::
# 373 "data/scripts/frontier_controller.pory"
	.string "VS.Aqua & Magma Leader$"
	.string "VS.Gym Leader (FRLG)$"
	.string "VS.Trainer (FRLG)$"
	.string "VS.Wild Pokemon (FRLG)$"
	.string "VS.Champion (FRLG)$"
	.string "VS.Deoxys (FRLG)$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage4::
# 383 "data/scripts/frontier_controller.pory"
	.string "VS.Mewtwo (FRLG)$"
	.string "VS.Legend (FRLG)$"
	.string "RANDOM SONG$"
	.string "$"
