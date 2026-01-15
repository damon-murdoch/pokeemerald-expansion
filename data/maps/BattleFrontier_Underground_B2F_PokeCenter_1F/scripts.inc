# 1 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"

# 2 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"

# 4 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
BattleFrontier_Underground_B2F_PokeCenter_1F_MapScripts::
# 5 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_Underground_B2F_PokeCenter_1F_OnTransition
# 6 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"

# 9 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
BattleFrontier_Underground_B2F_PokeCenter_1F_OnTransition:
# 10 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_UNDERGROUND
# 11 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	end
# 12 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"

# 13 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_Nurse::
# 14 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	release
# 19 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	end

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart::
# 23 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	lock
# 24 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	faceplayer
# 25 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_Text_0
# 26 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_Text_1
# 27 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_Text_2
# 28 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	yesnobox 0, 8
# 29 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_2
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_1:
# 32 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartEnd
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_2:
# 30 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartRefresh
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_1


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartRefresh::
# 36 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartRefresh_Text_0
# 37 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special RefreshQuickStart
# 38 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartRefresh_Text_1
# 39 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartEnd
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartEnd::
# 43 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartEnd_Text_0
# 44 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_Gentleman::
# 49 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	lock
# 50 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	faceplayer
# 51 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_Gentleman_Text_0
# 52 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints::
# 56 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 57 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_TEMP_1, 100
	goto_if_ge BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_2
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_1:
# 60 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_Text_0
# 61 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_2:
# 58 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_1


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection::
# 65 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_0
# 66 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special ShowBattlePointsWindow
# 67 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	multichoice2 18, 0, BattleFrontier_Underground_B2F_PokeCenter_1F_Text_Gentleman
# 68 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	case 0, BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_3
# 71 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	case 1, BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_4
# 74 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special CloseBattlePointsWindow
# 75 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_1:
# 77 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	setvar VAR_0x8004, 100
# 78 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_1
# 79 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special TakeFrontierBattlePoints
# 80 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	playse SE_SHOP
# 81 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special UpdateBattlePointsWindow
# 82 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitse
# 83 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special CloseBattlePointsWindow
# 84 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_2
# 85 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_3
# 86 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	yesnobox 0, 8
# 87 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_7
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_6:
# 90 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_3:
# 70 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	giveitem ITEM_CHERISH_BALL
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_1

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_4:
# 72 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	giveitem ITEM_GOLD_BOTTLE_CAP
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_1

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_7:
# 88 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_6


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd::
# 94 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd_Text_0
# 95 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert::
# 100 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	lock
# 101 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	faceplayer
# 102 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert_Text_0
# 103 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert_Text_1
# 104 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney::
# 108 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 109 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	checkmoney 500
# 110 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney_2
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney_1:
# 113 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantAfford
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney_2:
# 111 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney_1


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon::
# 117 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_0
# 118 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special ChooseMonForMoveRelearner
# 119 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitstate
# 122 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 125 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_2
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_1:
# 130 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 133 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_5
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_4:
# 138 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	hasgigantamaxfactor VAR_0x8004
# 140 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_8
# 144 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_2
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_7:
# 146 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	yesnobox 0, 8
# 147 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_12
# 165 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	hidemoneybox
# 166 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_11:
# 168 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	hidemoneybox
# 169 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_2:
# 126 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_1

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_5:
# 134 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantTeachEgg
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_4

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_8:
# 141 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_1
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_7

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_12:
# 150 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	togglegigantamaxfactor VAR_0x8004
# 152 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_15
# 162 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_5
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_11

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_15:
# 153 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_3
# 154 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_4
# 155 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	removemoney 500
# 156 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	playse SE_SHOP
# 157 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	updatemoneybox
# 158 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitse
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_11


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk::
# 173 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk_Text_0
# 174 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	yesnobox 0, 8
# 175 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk_1
# 178 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk_1:
# 176 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantAfford::
# 183 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantAfford_Text_0
# 184 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantTeachEgg::
# 188 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantTeachEgg_Text_0
# 189 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd::
# 193 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd_Text_0
# 194 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_Text_0:
# 25 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Hello! I'm here to update your save data\n"
	.string "if a new version is released.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_Text_1:
# 26 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "You shouldn't have any issues, but\n"
	.string "don't use me unless you need to!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStart_Text_2:
# 27 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Do you want me to update your save?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartRefresh_Text_0:
# 36 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Okay! Lets get started ...$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartRefresh_Text_1:
# 38 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "All done!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_QuickStartEnd_Text_0:
# 43 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Come back next time!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_Gentleman_Text_0:
# 51 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Good to see you. I offer rare items in\n"
	.string "exchange for battle points.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_Text_0:
# 60 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "You'll need at least 100 BP before you\n"
	.string "can buy anything from me.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_0:
# 65 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "What would you like? All of my items\n"
	.string "cost 100 BP.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_1:
# 78 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "I'll take your payment now, please.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_2:
# 84 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Thank you for that.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_3:
# 85 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Would you like anything else?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd_Text_0:
# 94 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Please come see me again.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert_Text_0:
# 102 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Hello, I'm the Gigantamax Expert! I can\n"
	.string "change the gigantamax factor of your\l"
	.string "POKéMON.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert_Text_1:
# 103 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "My services cost a mere ¥500 per\n"
	.string "POKéMON.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_0:
# 117 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Which POKéMON would you like me to\n"
	.string "change?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_1:
# 141 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Would you like me to remove the\n"
	.string "Gigantamax factor from this POKéMON?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_2:
# 144 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Would you like me to add the Gigantamax\n"
	.string "factor to this POKéMON?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_3:
# 153 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Done! Your POKéMON's gigantamax factor\n"
	.string "has been changed.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_4:
# 154 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "I'll accept your payment now, please.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_5:
# 162 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Sorry, I was unable to change the\n"
	.string "gigantamax factor of this POKéMON!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk_Text_0:
# 173 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Would you like me to teach anything\n"
	.string "else?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantAfford_Text_0:
# 183 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Sorry, you need ¥500 for me to change\n"
	.string "your POKéMON's gigantamax state!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantTeachEgg_Text_0:
# 188 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "I can't change the gigantamax status\n"
	.string "of an egg!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd_Text_0:
# 193 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Please come back again soon!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_Text_Gentleman::
# 198 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "CHERISH BALL$"
	.string "GOLD BOTTLE CAP$"
	.string "NOTHING$"
	.string "$"
