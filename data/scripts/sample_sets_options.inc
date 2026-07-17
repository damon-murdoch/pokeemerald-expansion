Auto_EventScript_Sample_Sets_Controls::
# 5 "data/scripts/sample_sets_options.pory"
	msgbox Auto_EventScript_Sample_Sets_Controls_Text_0
# 6 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_Page1::
# 11 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page1
# 12 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 14 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Page1_2
# 16 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page1_3
# 18 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page1_4
# 21 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page1_2:
# 15 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Page1_3:
# 17 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Page1_4:
# 19 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Page1::
# 27 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page1
# 28 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 30 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page1_2
# 32 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page1_3
# 34 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page1_4
# 36 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page1_5
# 38 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page1_6
# 40 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page1_7
# 42 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page1_8
# 45 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_2:
# 31 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_3:
# 33 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_4:
# 35 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_5:
# 37 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_6:
# 39 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_7:
# 41 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_8:
# 43 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Page2::
# 51 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page2
# 52 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 54 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page2_2
# 56 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page2_3
# 58 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page2_4
# 60 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page2_5
# 62 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page2_6
# 64 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page2_7
# 66 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page2_8
# 69 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_2:
# 55 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_3:
# 57 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_4:
# 59 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_5:
# 61 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_6:
# 63 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_7:
# 65 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_8:
# 67 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return


Auto_EventScript_Sample_Sets_Doubles_Page3::
# 75 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page3
# 76 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 78 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page3_2
# 80 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page3_3
# 82 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page3_4
# 84 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page3_5
# 86 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page3_6
# 88 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page3_7
# 90 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page3_8
# 93 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_2:
# 79 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_3:
# 81 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_4:
# 83 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_5:
# 85 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_6:
# 87 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_7:
# 89 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_8:
# 91 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return


Auto_EventScript_Sample_Sets_Doubles_Page4::
# 99 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page4
# 100 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 102 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page4_2
# 104 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page4_3
# 106 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page4_4
# 108 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page4_5
# 110 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page4_6
# 112 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page4_7
# 114 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page4_8
# 117 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_2:
# 103 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_3:
# 105 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_4:
# 107 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_5:
# 109 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_6:
# 111 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_7:
# 113 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_8:
# 115 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return


Auto_EventScript_Sample_Sets_Doubles_Page5::
# 123 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page5
# 124 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 126 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page5_2
# 128 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page5_3
# 130 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page5_4
# 132 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page5_5
# 134 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page5_6
# 136 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page5_7
# 138 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page5_8
# 141 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_2:
# 127 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_3:
# 129 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_4:
# 131 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_5:
# 133 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_6:
# 135 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_7:
# 137 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_8:
# 139 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return


Auto_EventScript_Sample_Sets_Doubles_Page6::
# 147 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page6
# 148 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 150 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page6_2
# 152 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page6_3
# 154 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page6_4
# 156 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page6_5
# 158 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page6_6
# 160 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page6_7
# 162 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page6_8
# 165 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_2:
# 151 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_3:
# 153 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_4:
# 155 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_5:
# 157 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_6:
# 159 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_7:
# 161 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_8:
# 163 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return


Auto_EventScript_Sample_Sets_Doubles_Page7::
# 171 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page7
# 172 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 174 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page7_2
# 176 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page7_3
# 178 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page7_4
# 180 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page7_5
# 182 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page7_6
# 184 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page7_7
# 186 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page7_8
# 189 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_2:
# 175 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_3:
# 177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_4:
# 179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_5:
# 181 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_6:
# 183 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_7:
# 185 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_8:
# 187 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return


Auto_EventScript_Sample_Sets_Doubles_Page8::
# 195 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page8
# 196 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 198 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page8_2
# 200 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page8_3
# 202 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page8_4
# 204 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page8_5
# 206 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page8_6
# 208 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page8_7
# 210 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page8_8
# 213 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_2:
# 199 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_3:
# 201 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_4:
# 203 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_5:
# 205 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_6:
# 207 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_7:
# 209 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_8:
# 211 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return


Auto_EventScript_Sample_Sets_Doubles_Page9::
# 219 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page9
# 220 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 222 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page9_2
# 224 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page9_3
# 226 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page9_4
# 228 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page9_5
# 230 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page9_6
# 232 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page9_7
# 234 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page9_8
# 237 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_2:
# 223 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_3:
# 225 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_4:
# 227 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_5:
# 229 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_6:
# 231 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_7:
# 233 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_8:
# 235 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return


Auto_EventScript_Sample_Sets_Doubles_Page10::
# 243 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page10
# 244 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 246 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page10_2
# 248 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page10_3
# 250 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page10_4
# 252 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page10_5
# 254 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page10_6
# 256 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page10_7
# 258 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page10_8
# 261 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_2:
# 247 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_3:
# 249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_4:
# 251 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_5:
# 253 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_6:
# 255 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_7:
# 257 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_8:
# 259 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return


Auto_EventScript_Sample_Sets_Doubles_Page11::
# 267 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page11
# 268 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 270 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page11_2
# 272 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page11_3
# 274 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page11_4
# 276 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page11_5
# 278 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page11_6
# 280 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page11_7
# 282 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page11_8
# 285 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_2:
# 271 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_3:
# 273 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_4:
# 275 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_5:
# 277 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_6:
# 279 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_7:
# 281 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_8:
# 283 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return


Auto_EventScript_Sample_Sets_Doubles_Page12::
# 291 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page12
# 292 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 294 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page12_2
# 296 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page12_3
# 298 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page12_4
# 300 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page12_5
# 302 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page12_6
# 304 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page12_7
# 306 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page12_8
# 309 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_2:
# 295 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_3:
# 297 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_4:
# 299 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_5:
# 301 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_6:
# 303 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_7:
# 305 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_8:
# 307 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return


Auto_EventScript_Sample_Sets_Doubles_Page13::
# 315 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page13
# 316 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 318 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page13_2
# 320 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page13_3
# 322 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page13_4
# 324 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page13_5
# 326 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page13_6
# 328 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page13_7
# 330 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page13_8
# 333 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_2:
# 319 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_3:
# 321 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_4:
# 323 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_5:
# 325 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_6:
# 327 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_7:
# 329 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_8:
# 331 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return


Auto_EventScript_Sample_Sets_Doubles_Page14::
# 339 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page14
# 340 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 342 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page14_2
# 344 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page14_3
# 346 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page14_4
# 348 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page14_5
# 350 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page14_6
# 352 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page14_7
# 354 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page14_8
# 357 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_2:
# 343 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_3:
# 345 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_4:
# 347 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_5:
# 349 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_6:
# 351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_7:
# 353 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_8:
# 355 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return


Auto_EventScript_Sample_Sets_Doubles_Page15::
# 363 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page15
# 364 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 366 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page15_2
# 368 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page15_3
# 370 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page15_4
# 372 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page15_5
# 374 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page15_6
# 376 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page15_7
# 378 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page15_8
# 381 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_2:
# 367 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_3:
# 369 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_4:
# 371 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_5:
# 373 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_6:
# 375 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_7:
# 377 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_8:
# 379 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return


Auto_EventScript_Sample_Sets_Doubles_Page16::
# 387 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page16
# 388 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 390 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page16_2
# 392 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page16_3
# 394 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page16_4
# 396 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page16_5
# 398 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page16_6
# 400 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page16_7
# 402 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page16_8
# 405 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_2:
# 391 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_3:
# 393 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_4:
# 395 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_5:
# 397 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_6:
# 399 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_7:
# 401 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_8:
# 403 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return


Auto_EventScript_Sample_Sets_Doubles_Page17::
# 411 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page17
# 412 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 414 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page17_2
# 416 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page17_3
# 418 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page17_4
# 420 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page17_5
# 422 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page17_6
# 424 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page17_7
# 426 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page17_8
# 429 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_2:
# 415 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_3:
# 417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_4:
# 419 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_5:
# 421 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_6:
# 423 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_7:
# 425 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_8:
# 427 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return


Auto_EventScript_Sample_Sets_Doubles_Page18::
# 435 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page18
# 436 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 438 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page18_2
# 440 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page18_3
# 442 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page18_4
# 444 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page18_5
# 446 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page18_6
# 448 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page18_7
# 450 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page18_8
# 453 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_2:
# 439 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_3:
# 441 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_4:
# 443 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_5:
# 445 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_6:
# 447 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_7:
# 449 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_8:
# 451 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return


Auto_EventScript_Sample_Sets_Doubles_Page19::
# 459 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page19
# 460 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 462 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page19_2
# 464 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page19_3
# 466 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page19_4
# 468 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page19_5
# 470 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page19_6
# 472 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page19_7
# 475 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_2:
# 463 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_3:
# 465 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_4:
# 467 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_5:
# 469 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_6:
# 471 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_7:
# 473 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1::
# 481 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Venusaur_Page1
# 482 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 484 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_2
# 487 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_3
# 489 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_4
# 492 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_2:
# 485 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, 2, FALSE, TYPE_GHOST, 10
# 486 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_3:
# 488 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_4:
# 490 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1::
# 498 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Volcarona_Page1
# 499 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 501 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_2
# 504 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_3
# 507 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_4
# 509 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_5
# 512 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_2:
# 502 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 108, 108, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FAIRY, 10
# 503 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_3:
# 505 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 188, 28, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_STRUGGLE_BUG, MOVE_HEAT_WAVE, 2, FALSE, TYPE_WATER, 10
# 506 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_4:
# 508 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_5:
# 510 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1::
# 518 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Whimsicott_Page1
# 519 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 521 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_2
# 524 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_3
# 527 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_4
# 529 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_5
# 532 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_2:
# 522 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_TEARS, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_DARK, 10
# 523 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_3:
# 525 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_GHOST, 10
# 526 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_4:
# 528 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_5:
# 530 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1::
# 538 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Zapdos_Page1
# 539 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 541 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_2
# 544 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_3
# 547 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_4
# 550 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_5
# 552 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_6
# 555 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_2:
# 542 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 84, 28, 116, 36, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GRASS, 10
# 543 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_3:
# 545 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 76, 28, 116, 36, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 546 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_4:
# 548 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 28, 0, 0, 252, 228, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_HIDDEN_POWER, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GHOST, 10
# 549 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_5:
# 551 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_6:
# 553 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1::
# 561 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tyranitar_Page1
# 562 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 564 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_2
# 567 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_3
# 570 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_4
# 573 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_5
# 576 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_6
# 579 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_7
# 581 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_8
# 584 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_2:
# 565 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 1, 188, 204, 0, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 566 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_3:
# 568 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 204, 4, 4, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 569 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_4:
# 571 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 204, 0, 0, 0, 52, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 572 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_5:
# 574 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 204, 4, 4, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 575 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_6:
# 577 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_ASSURANCE, MOVE_ICE_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 578 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_7:
# 580 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_8:
# 582 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1::
# 590 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ursaluna_Page1
# 591 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 593 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_2
# 596 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_3
# 599 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_4
# 601 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_5
# 604 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_2:
# 594 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 140, 236, 0, 0, 0, 132, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 595 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_3:
# 597 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 140, 236, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 598 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_4:
# 600 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_5:
# 602 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1::
# 610 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
# 611 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 613 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_2
# 616 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_3
# 619 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_4
# 622 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_5
# 624 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_6
# 627 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_2:
# 614 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 12, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 615 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_3:
# 617 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 244, 0, 0, 0, 196, 68, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 618 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_4:
# 620 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 621 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_5:
# 623 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_6:
# 625 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1::
# 633 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Urshifu_Rs_Page1
# 634 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 636 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_2
# 639 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_3
# 642 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_4
# 645 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_5
# 647 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_6
# 650 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_2:
# 637 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 638 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_3:
# 640 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 641 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_4:
# 643 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 644 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_5:
# 646 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_6:
# 648 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1::
# 656 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Urshifu_Ss_Page1
# 657 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 659 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_2
# 662 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_3
# 665 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_4
# 667 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_5
# 670 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_2:
# 660 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 236, 0, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 661 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_3:
# 663 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 664 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_4:
# 666 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_5:
# 668 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1::
# 676 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ting_Lu_Page1
# 677 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 679 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_2
# 682 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_3
# 684 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_4
# 687 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_2:
# 680 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TING_LU, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 52, 4, 196, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SAND_TOMB, MOVE_RUINATION, MOVE_BODY_PRESS, 2, FALSE, TYPE_POISON, 10
# 681 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_3:
# 683 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_4:
# 685 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1::
# 693 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tinkaton_Page1
# 694 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 696 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_2
# 699 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_3
# 701 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_4
# 704 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_2:
# 697 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TINKATON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 180, 172, 100, 12, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_FEINT, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 698 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_3:
# 700 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_4:
# 702 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1::
# 710 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Togekiss_Page1
# 711 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 713 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_2
# 716 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_3
# 719 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_4
# 721 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_5
# 724 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_2:
# 714 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_SCOPE_LENS, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 228, 0, 196, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_YAWN, MOVE_FOLLOW_ME, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 715 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_3:
# 717 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_BABIRI_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 2, 0, 236, 0, 196, 60, 4, 12, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_YAWN, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 718 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_4:
# 720 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_5:
# 722 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1::
# 730 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Torkoal_Page1
# 731 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 733 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_2
# 736 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_3
# 739 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_4
# 741 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_5
# 744 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_2:
# 734 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHARCOAL, ITEM_POKE_BALL, NATURE_QUIET, 1, 1, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 735 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_3:
# 737 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_WEATHER_BALL, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 738 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_4:
# 740 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_5:
# 742 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1::
# 750 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tornadus_Page1
# 751 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 753 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_2
# 756 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_3
# 759 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_4
# 762 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_5
# 764 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_6
# 767 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_2:
# 754 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 755 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_3:
# 757 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 758 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_4:
# 760 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 761 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_5:
# 763 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_6:
# 765 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1::
# 773 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Fini_Page1
# 774 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 776 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_2
# 779 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_3
# 782 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_4
# 785 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_5
# 788 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_6
# 791 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_7
# 793 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_8
# 796 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_2:
# 777 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 100, 148, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 778 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_3:
# 780 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 12, 236, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 781 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_4:
# 783 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MUDDY_WATER, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 784 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_5:
# 786 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_TRICK, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 787 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_6:
# 789 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SCALD, MOVE_SOAK, MOVE_ICE_BEAM, 2, FALSE, TYPE_STEEL, 10
# 790 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_7:
# 792 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_8:
# 794 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1::
# 802 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Koko_Page1
# 803 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 805 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_2
# 808 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_3
# 811 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_4
# 814 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_5
# 817 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_6
# 819 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_7
# 822 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_2:
# 806 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 172, 0, 12, 92, 36, 196, 31, 31, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_SKY_DROP, MOVE_VOLT_SWITCH, 2, FALSE, TYPE_WATER, 10
# 807 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_3:
# 809 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 28, 0, 4, 252, 196, 28, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 810 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_4:
# 812 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 813 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_5:
# 815 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 816 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_6:
# 818 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_7:
# 820 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1::
# 828 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Lele_Page1
# 829 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 831 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_2
# 834 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_3
# 837 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_4
# 840 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_5
# 843 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_6
# 845 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_7
# 848 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_2:
# 832 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_PSYCHIC, 10
# 833 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_3:
# 835 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_PSYCHIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 836 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_4:
# 838 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_MAGIC_ROOM, 2, FALSE, TYPE_WATER, 10
# 839 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_5:
# 841 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 108, 68, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 842 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_6:
# 844 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_7:
# 846 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1::
# 854 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tatsugiri_Page1
# 855 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 857 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_2
# 860 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_3
# 863 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_4
# 865 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_5
# 868 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_2:
# 858 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TATSUGIRI, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_TAUNT, 2, FALSE, TYPE_STELLAR, 10
# 859 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_3:
# 861 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TATSUGIRI, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, 2, FALSE, TYPE_STELLAR, 10
# 862 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_4:
# 864 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_5:
# 866 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1::
# 874 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Thundurus_Page1
# 875 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 877 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_2
# 880 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_3
# 883 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_4
# 886 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_5
# 888 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_6
# 891 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_2:
# 878 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 228, 0, 28, 68, 12, 172, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 879 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_3:
# 881 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 882 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_4:
# 884 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 885 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_5:
# 887 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_6:
# 889 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1::
# 897 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sinistcha_Page1
# 898 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 900 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_2
# 903 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_3
# 906 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_4
# 909 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_5
# 912 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_6
# 914 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_7
# 917 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_2:
# 901 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 236, 0, 188, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 902 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_3:
# 904 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 236, 0, 188, 0, 0, 84, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 905 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_4:
# 907 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 244, 0, 188, 4, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 908 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_5:
# 910 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 911 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_6:
# 913 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_7:
# 915 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1::
# 923 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sneasler_Page1
# 924 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 926 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_2
# 929 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_3
# 932 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_4
# 935 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_5
# 937 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_6
# 940 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_2:
# 927 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_COACHING, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 928 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_3:
# 930 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_DARK, 10
# 931 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_4:
# 933 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_WHITE_HERB, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_STELLAR, 10
# 934 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_5:
# 936 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_6:
# 938 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1::
# 946 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Snorlax_Page1
# 947 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 949 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_2
# 952 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_3
# 955 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_4
# 957 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_5
# 960 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_2:
# 950 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 228, 76, 196, 4, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_RETURN, 2, FALSE, TYPE_GHOST, 10
# 951 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_3:
# 953 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 2, 1, 228, 76, 204, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_RETURN, 2, FALSE, TYPE_GHOST, 10
# 954 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_4:
# 956 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_5:
# 958 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1::
# 966 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sylveon_Page1
# 967 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 969 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_2
# 972 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_3
# 975 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_4
# 978 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_5
# 980 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_6
# 983 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_2:
# 970 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 180, 0, 244, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_WATER, 10
# 971 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_3:
# 973 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_PIXIE_PLATE, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 172, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_QUICK_ATTACK, 2, FALSE, TYPE_WATER, 10
# 974 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_4:
# 976 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 92, 4, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_MOONBLAST, MOVE_PSYSHOCK, 2, FALSE, TYPE_FAIRY, 10
# 977 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_5:
# 979 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_6:
# 981 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1::
# 989 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Talonflame_Page1
# 990 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 992 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_2
# 995 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_3
# 998 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_4
# 1001 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_5
# 1003 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_6
# 1006 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_2:
# 993 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_SLEEP_TALK, MOVE_U_TURN, 2, FALSE, TYPE_FLYING, 10
# 994 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_3:
# 996 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_GUARD, MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 997 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_4:
# 999 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_TAUNT, 2, FALSE, TYPE_FLYING, 10
# 1000 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_5:
# 1002 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_6:
# 1004 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1::
# 1012 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Page1
# 1013 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1015 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_2
# 1017 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_3
# 1019 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_4
# 1021 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_5
# 1023 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_6
# 1025 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_7
# 1027 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_8
# 1030 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_2:
# 1016 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_3:
# 1018 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_4:
# 1020 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_5:
# 1022 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_6:
# 1024 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_7:
# 1026 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_8:
# 1028 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2::
# 1036 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Page2
# 1037 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1039 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_2
# 1041 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_3
# 1043 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_4
# 1045 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_5
# 1047 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_6
# 1049 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_7
# 1051 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_8
# 1054 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_2:
# 1040 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_3:
# 1042 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_4:
# 1044 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_5:
# 1046 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_6:
# 1048 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_7:
# 1050 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_8:
# 1052 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3::
# 1060 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Page3
# 1061 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1063 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_2
# 1065 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_3
# 1067 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_4
# 1070 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_2:
# 1064 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_3:
# 1066 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_4:
# 1068 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1::
# 1076 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
# 1077 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1079 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_2
# 1082 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_3
# 1084 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_4
# 1087 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_2:
# 1080 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAMAZENTA, 65, ITEM_RUSTED_SHIELD, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 76, 0, 244, 188, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, 2, FALSE, TYPE_DRAGON, 10
# 1081 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_3:
# 1083 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_4:
# 1085 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1::
# 1093 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Miraidon_Page1
# 1094 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1096 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_2
# 1099 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_3
# 1101 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_4
# 1104 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_2:
# 1097 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIRAIDON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 92, 0, 4, 212, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_ELECTRO_DRIFT, MOVE_DRACO_METEOR, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_FAIRY, 10
# 1098 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_3:
# 1100 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_4:
# 1102 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1::
# 1110 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
# 1111 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1113 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_2
# 1116 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_3
# 1118 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_4
# 1121 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_2:
# 1114 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, 2, FALSE, FALSE, 10
# 1115 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_3:
# 1117 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_4:
# 1119 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1::
# 1127 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Xerneas_Page1
# 1128 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1130 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_2
# 1133 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_3
# 1136 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_4
# 1138 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_5
# 1141 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_2:
# 1131 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, 2, FALSE, FALSE, 10
# 1132 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_3:
# 1134 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, 2, FALSE, FALSE, 10
# 1135 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_4:
# 1137 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_5:
# 1139 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1::
# 1147 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Yveltal_Page1
# 1148 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1150 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_2
# 1153 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_3
# 1156 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_4
# 1159 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_5
# 1161 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_6
# 1164 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_2:
# 1151 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SNARL, MOVE_FOUL_PLAY, MOVE_DARK_PULSE, 2, FALSE, TYPE_POISON, 10
# 1152 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_3:
# 1154 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_POISON, 10
# 1155 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_4:
# 1157 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_POISON, 10
# 1158 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_5:
# 1160 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_6:
# 1162 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1::
# 1170 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Zacian_Page1
# 1171 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1173 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_2
# 1176 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_3
# 1179 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_4
# 1181 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_5
# 1184 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_2:
# 1174 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BEHEMOTH_BLADE, MOVE_PLAY_ROUGH, MOVE_TERA_BLAST, 2, FALSE, TYPE_GROUND, 10
# 1175 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_3:
# 1177 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_SACRED_SWORD, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_STELLAR, 10
# 1178 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_4:
# 1180 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_5:
# 1182 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1::
# 1190 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Calyrex_Page1
# 1191 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1193 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_2
# 1196 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_3
# 1199 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_4
# 1202 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_5
# 1205 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_6
# 1207 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_7
# 1210 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_2:
# 1194 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_GHOST, 10
# 1195 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_3:
# 1197 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 20, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_DARK, 10
# 1198 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_4:
# 1200 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 116, 0, 0, 0, 140, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 1201 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_5:
# 1203 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 116, 4, 12, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 1204 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_6:
# 1206 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_7:
# 1208 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1::
# 1216 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Groudon_Page1
# 1217 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1219 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_2
# 1222 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_3
# 1225 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_4
# 1228 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_5
# 1230 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_6
# 1233 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_2:
# 1220 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, 2, FALSE, TYPE_FIRE, 10
# 1221 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_3:
# 1223 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, 2, FALSE, FALSE, 10
# 1224 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_4:
# 1226 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_ROAR, 2, FALSE, FALSE, 10
# 1227 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_5:
# 1229 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_6:
# 1231 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1::
# 1239 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Koraidon_Page1
# 1240 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1242 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_2
# 1245 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_3
# 1248 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_4
# 1250 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_5
# 1253 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_2:
# 1243 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 108, 116, 4, 212, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 1244 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_3:
# 1246 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 1247 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_4:
# 1249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_5:
# 1251 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1::
# 1259 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Kyogre_Page1
# 1260 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1262 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_2
# 1265 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_3
# 1268 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_4
# 1271 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_5
# 1273 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_6
# 1276 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_2:
# 1263 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 132, 44, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 1264 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_3:
# 1266 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 164, 12, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 1267 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_4:
# 1269 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_SCALD, MOVE_THUNDER, 2, FALSE, FALSE, 10
# 1270 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_5:
# 1272 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_6:
# 1274 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1::
# 1282 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Lunala_Page1
# 1283 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1285 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_2
# 1288 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_3
# 1290 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_4
# 1293 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_2:
# 1286 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 132, 52, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_WIDE_GUARD, MOVE_MOONGEIST_BEAM, MOVE_METEOR_BEAM, MOVE_TRICK_ROOM, 2, FALSE, TYPE_DARK, 10
# 1287 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_3:
# 1289 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_4:
# 1291 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1::
# 1299 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rillaboom_Page1
# 1300 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1302 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_2
# 1305 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_3
# 1308 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_4
# 1310 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_5
# 1313 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_2:
# 1303 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 116, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1304 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_3:
# 1306 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 196, 12, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1307 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_4:
# 1309 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_5:
# 1311 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1::
# 1319 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Roaring_Moon_Page1
# 1320 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1322 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_2
# 1325 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_3
# 1327 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_4
# 1330 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_2:
# 1323 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROARING_MOON, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ACROBATICS, MOVE_KNOCK_OFF, 2, FALSE, TYPE_FLYING, 10
# 1324 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_3:
# 1326 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_4:
# 1328 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1::
# 1336 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rotom_Wash_Page1
# 1337 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1339 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_2
# 1342 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_3
# 1345 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_4
# 1347 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_5
# 1350 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_2:
# 1340 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 132, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, 2, FALSE, TYPE_STEEL, 10
# 1341 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_3:
# 1343 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 44, 4, 60, 148, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_STEEL, 10
# 1344 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_4:
# 1346 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_5:
# 1348 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1::
# 1356 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sableye_Page1
# 1357 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1359 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_2
# 1362 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_3
# 1365 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_4
# 1367 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_5
# 1370 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_2:
# 1360 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 116, 0, 0, 140, 31, 0, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_STEEL, 10
# 1361 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_3:
# 1363 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 36, 0, 0, 220, 31, 0, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_STEEL, 10
# 1364 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_4:
# 1366 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_5:
# 1368 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1::
# 1376 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Primarina_Page1
# 1377 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1379 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_2
# 1382 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_3
# 1385 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_4
# 1387 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_5
# 1390 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_2:
# 1380 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PRIMARINA, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 180, 0, 108, 28, 188, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HAZE, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1381 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_3:
# 1383 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PRIMARINA, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 236, 0, 132, 28, 108, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HAZE, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1384 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_4:
# 1386 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_5:
# 1388 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1::
# 1396 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Raging_Bolt_Page1
# 1397 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1399 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_2
# 1402 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_3
# 1405 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_4
# 1407 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_5
# 1410 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_2:
# 1400 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 148, 0, 36, 180, 100, 44, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1401 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_3:
# 1403 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 124, 4, 100, 36, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1404 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_4:
# 1406 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_5:
# 1408 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1::
# 1416 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Raichu_Page1
# 1417 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1419 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_2
# 1422 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_3
# 1425 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_4
# 1428 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_5
# 1430 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_6
# 1433 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_2:
# 1420 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 140, 0, 188, 180, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_ENDEAVOR, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1421 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_3:
# 1423 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_TACKLE, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1424 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_4:
# 1426 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_ENCORE, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1427 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_5:
# 1429 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_6:
# 1431 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1::
# 1439 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Regidrago_Page1
# 1440 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1442 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_2
# 1445 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_3
# 1447 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_4
# 1450 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_2:
# 1443 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIDRAGO, 65, ITEM_DRAGON_FANG, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, 2, FALSE, TYPE_STEEL, 10
# 1444 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_3:
# 1446 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_4:
# 1448 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1::
# 1456 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Regieleki_Page1
# 1457 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1459 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_2
# 1462 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_3
# 1464 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_4
# 1467 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_2:
# 1460 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIELEKI, 65, ITEM_MAGNET, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 1461 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_3:
# 1463 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_4:
# 1465 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1::
# 1473 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Ws_Page1
# 1474 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1476 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_2
# 1479 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_3
# 1481 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_4
# 1484 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_2:
# 1477 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_WELLSPRING, 65, ITEM_WELLSPRING_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 220, 60, 44, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, 2, FALSE, TYPE_WATER, 10
# 1478 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_3:
# 1480 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_4:
# 1482 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1::
# 1490 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Palafin_Page1
# 1491 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1493 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_2
# 1496 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_3
# 1498 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_4
# 1501 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_2:
# 1494 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PALAFIN, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 252, 156, 4, 4, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_JET_PUNCH, MOVE_WAVE_CRASH, 2, FALSE, TYPE_WATER, 10
# 1495 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_3:
# 1497 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_4:
# 1499 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1::
# 1507 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Pelipper_Page1
# 1508 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1510 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_2
# 1513 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_3
# 1515 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_4
# 1518 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_2:
# 1511 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PELIPPER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_WEATHER_BALL, MOVE_HURRICANE, 2, FALSE, TYPE_GHOST, 10
# 1512 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_3:
# 1514 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_4:
# 1516 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1::
# 1524 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Politoed_Page1
# 1525 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1527 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_2
# 1530 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_3
# 1532 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_4
# 1535 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_2:
# 1528 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 220, 0, 196, 12, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENCORE, MOVE_PERISH_SONG, MOVE_SCALD, 2, FALSE, TYPE_GRASS, 10
# 1529 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_3:
# 1531 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_4:
# 1533 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1::
# 1541 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Porygon2_Page1
# 1542 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1544 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_2
# 1547 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_3
# 1550 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_4
# 1552 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_5
# 1555 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_2:
# 1545 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 244, 0, 92, 4, 116, 52, 31, 0, 31, 31, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1546 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_3:
# 1548 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 244, 0, 92, 0, 116, 52, 31, 0, 31, 0, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1549 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_4:
# 1551 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_5:
# 1553 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1::
# 1561 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Murkrow_Page1
# 1562 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1564 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_2
# 1567 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_3
# 1570 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_4
# 1572 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_5
# 1575 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_2:
# 1565 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MURKROW, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 116, 0, 0, 140, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 1566 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_3:
# 1568 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MURKROW, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 140, 0, 0, 116, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 1569 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_4:
# 1571 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_5:
# 1573 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1::
# 1581 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mythical_Page1
# 1582 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1584 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_2
# 1586 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_3
# 1588 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_4
# 1590 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_5
# 1593 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_2:
# 1585 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_3:
# 1587 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_4:
# 1589 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_5:
# 1591 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1::
# 1599 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1
# 1600 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1602 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_2
# 1605 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_3
# 1608 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_4
# 1610 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_5
# 1613 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_2:
# 1603 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KELDEO_RESOLUTE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 20, 0, 4, 252, 228, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SECRET_SWORD, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, 2, FALSE, TYPE_GRASS, 10
# 1604 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_3:
# 1606 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KELDEO_RESOLUTE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SECRET_SWORD, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, 2, FALSE, TYPE_GHOST, 10
# 1607 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_4:
# 1609 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_5:
# 1611 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1::
# 1619 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mythical_Manaphy_Page1
# 1620 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1622 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_2
# 1625 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_3
# 1628 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_4
# 1630 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_5
# 1633 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_2:
# 1623 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANAPHY, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 228, 0, 172, 28, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAIL_GLOW, MOVE_DAZZLING_GLEAM, MOVE_SCALD, 2, FALSE, TYPE_FAIRY, 10
# 1624 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_3:
# 1626 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANAPHY, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 68, 0, 4, 252, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAIL_GLOW, MOVE_DAZZLING_GLEAM, MOVE_SCALD, 2, FALSE, TYPE_FAIRY, 10
# 1627 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_4:
# 1629 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_5:
# 1631 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1::
# 1639 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ninetales_Alola_Page1
# 1640 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1642 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_2
# 1645 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_3
# 1648 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_4
# 1650 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_5
# 1653 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_2:
# 1643 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NINETALES_ALOLA, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_TIMID, 2, 1, 212, 0, 100, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_BLIZZARD, 2, FALSE, TYPE_WATER, 10
# 1644 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_3:
# 1646 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NINETALES_ALOLA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_BLIZZARD, 2, FALSE, TYPE_GHOST, 10
# 1647 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_4:
# 1649 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_5:
# 1651 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1::
# 1659 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Cs_Page1
# 1660 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1662 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_2
# 1665 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_3
# 1667 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_4
# 1670 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_2:
# 1663 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_CORNERSTONE, 65, ITEM_CORNERSTONE_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_POWER_WHIP, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_ROCK, 10
# 1664 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_3:
# 1666 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_4:
# 1668 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1::
# 1676 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Hf_Page1
# 1677 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1679 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_2
# 1682 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_3
# 1685 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_4
# 1687 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_5
# 1690 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_2:
# 1680 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 76, 52, 188, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 1681 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_3:
# 1683 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 1684 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_4:
# 1686 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_5:
# 1688 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Page1::
# 1696 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Page1
# 1697 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1699 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_2
# 1701 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_3
# 1703 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_4
# 1705 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_5
# 1707 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_6
# 1709 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_7
# 1711 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_8
# 1714 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_2:
# 1700 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_3:
# 1702 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_4:
# 1704 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_5:
# 1706 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_6:
# 1708 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_7:
# 1710 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_8:
# 1712 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Page2::
# 1720 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Page2
# 1721 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1723 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_2
# 1725 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_3
# 1727 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_4
# 1729 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_5
# 1731 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_6
# 1733 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_7
# 1735 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_8
# 1738 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_2:
# 1724 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_3:
# 1726 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_4:
# 1728 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_5:
# 1730 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_6:
# 1732 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_7:
# 1734 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_8:
# 1736 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page3
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Page3::
# 1744 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Page3
# 1745 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1747 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_2
# 1749 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_3
# 1751 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_4
# 1754 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_2:
# 1748 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_3:
# 1750 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_4:
# 1752 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1::
# 1760 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Tyranitar_Page1
# 1761 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1763 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_2
# 1766 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_3
# 1768 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_4
# 1771 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_2:
# 1764 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 44, 164, 20, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT, 2, FALSE, FALSE, 10
# 1765 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_3:
# 1767 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_4:
# 1769 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1::
# 1777 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Latias_Page1
# 1778 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1780 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_2
# 1783 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_3
# 1785 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_4
# 1788 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_2:
# 1781 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LATIAS, 65, ITEM_LATIASITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 60, 108, 76, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_RECOVER, 2, FALSE, FALSE, 10
# 1782 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_3:
# 1784 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_4:
# 1786 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1::
# 1794 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Manectric_Page1
# 1795 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1797 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_2
# 1800 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_3
# 1802 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_4
# 1805 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_2:
# 1798 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_POKE_BALL, NATURE_TIMID, 1, 1, 244, 0, 4, 220, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GRASS, 10
# 1799 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_3:
# 1801 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_4:
# 1803 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1::
# 1811 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Mawile_Page1
# 1812 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1814 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_2
# 1817 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_3
# 1820 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_4
# 1822 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_5
# 1825 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_2:
# 1815 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_BRAVE, 1, 1, 156, 196, 0, 0, 0, 156, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 1816 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_3:
# 1818 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 156, 196, 4, 4, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 1819 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_4:
# 1821 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_5:
# 1823 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1::
# 1831 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Metagross_Page1
# 1832 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1834 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_2
# 1837 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_3
# 1839 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_4
# 1842 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_2:
# 1835 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_FIRE, 10
# 1836 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_3:
# 1838 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_4:
# 1840 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1::
# 1848 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Salamence_Page1
# 1849 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1851 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_2
# 1854 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_3
# 1857 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_4
# 1860 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_5
# 1862 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_6
# 1865 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_2:
# 1852 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_NAIVE, 0, 0, 0, 44, 0, 212, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, 2, FALSE, TYPE_WATER, 10
# 1853 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_3:
# 1855 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 92, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, 2, FALSE, TYPE_WATER, 10
# 1856 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_4:
# 1858 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DRACO_METEOR, 2, FALSE, TYPE_WATER, 10
# 1859 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_5:
# 1861 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_6:
# 1863 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1::
# 1871 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Charizard_Page1
# 1872 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1874 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_2
# 1877 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_3
# 1880 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_4
# 1882 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_5
# 1885 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_2:
# 1875 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, 2, FALSE, TYPE_GRASS, 10
# 1876 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_3:
# 1878 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 236, 44, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_ROOST, 2, FALSE, TYPE_GRASS, 10
# 1879 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_4:
# 1881 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_5:
# 1883 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1::
# 1891 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Gardevoir_Page1
# 1892 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1894 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_2
# 1897 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_3
# 1899 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_4
# 1902 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_2:
# 1895 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1896 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_3:
# 1898 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_4:
# 1900 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1::
# 1908 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Gengar_Page1
# 1909 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1911 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_2
# 1914 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_3
# 1917 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_4
# 1919 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_5
# 1922 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_2:
# 1912 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 68, 180, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, 2, FALSE, TYPE_WATER, 10
# 1913 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_3:
# 1915 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 76, 0, 28, 180, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, 2, FALSE, TYPE_WATER, 10
# 1916 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_4:
# 1918 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_5:
# 1920 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1::
# 1928 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Gyarados_Page1
# 1929 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1931 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_2
# 1934 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_3
# 1936 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_4
# 1939 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_2:
# 1932 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_GYARADOSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 52, 196, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, 2, FALSE, FALSE, 10
# 1933 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_3:
# 1935 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_4:
# 1937 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1::
# 1945 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
# 1946 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1948 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_2
# 1951 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_3
# 1953 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_4
# 1956 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_2:
# 1949 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 36, 196, 20, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1950 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_3:
# 1952 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_4:
# 1954 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1::
# 1962 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Meowscarada_Page1
# 1963 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1965 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_2
# 1968 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_3
# 1971 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_4
# 1973 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_5
# 1976 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_2:
# 1966 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MEOWSCARADA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 1967 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_3:
# 1969 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MEOWSCARADA, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 1970 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_4:
# 1972 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_5:
# 1974 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1::
# 1982 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Milotic_Page1
# 1983 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1985 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_2
# 1988 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_3
# 1991 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_4
# 1993 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_5
# 1996 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_2:
# 1986 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 1, 0, 180, 0, 204, 4, 4, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_COIL, MOVE_HYPNOSIS, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 1987 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_3:
# 1989 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 244, 0, 220, 4, 4, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RECOVER, MOVE_ICY_WIND, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 1990 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_4:
# 1992 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_5:
# 1994 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1::
# 2002 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mimikyu_Page1
# 2003 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2005 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_2
# 2008 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_3
# 2011 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_4
# 2014 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_5
# 2017 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_6
# 2019 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_7
# 2022 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_2:
# 2006 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_MIMIKIUM_Z, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 236, 20, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 2007 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_3:
# 2009 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, 2, FALSE, TYPE_WATER, 10
# 2010 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_4:
# 2012 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, 2, FALSE, TYPE_WATER, 10
# 2013 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_5:
# 2015 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_MIMIKIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_WATER, 10
# 2016 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_6:
# 2018 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_7:
# 2020 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1::
# 2028 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Moltres_Galar_Page1
# 2029 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2031 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_2
# 2034 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_3
# 2037 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_4
# 2039 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_5
# 2042 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_2:
# 2032 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 28, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_FIERY_WRATH, 2, FALSE, TYPE_POISON, 10
# 2033 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_3:
# 2035 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 92, 0, 4, 252, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_FIERY_WRATH, 2, FALSE, TYPE_POISON, 10
# 2036 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_4:
# 2038 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_5:
# 2040 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1::
# 2048 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kartana_Page1
# 2049 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2051 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_2
# 2054 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_3
# 2057 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_4
# 2060 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_5
# 2062 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_6
# 2065 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_2:
# 2052 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 116, 4, 4, 252, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_SMART_STRIKE, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH, 2, FALSE, TYPE_FIRE, 10
# 2053 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_3:
# 2055 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_DETECT, 2, FALSE, TYPE_FIRE, 10
# 2056 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_4:
# 2058 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_GRASSIUM_Z, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 84, 84, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_DETECT, MOVE_SUBSTITUTE, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, 2, FALSE, TYPE_FIRE, 10
# 2059 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_5:
# 2061 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_6:
# 2063 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1::
# 2071 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kingambit_Page1
# 2072 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2074 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_2
# 2077 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_3
# 2080 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_4
# 2082 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_5
# 2085 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_2:
# 2075 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_BLACK_GLASSES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 2076 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_3:
# 2078 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, MOVE_TERA_BLAST, MOVE_IRON_HEAD, 2, FALSE, TYPE_FLYING, 10
# 2079 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_4:
# 2081 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_5:
# 2083 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1::
# 2091 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Lando_T_Page1
# 2092 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2094 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_2
# 2097 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_3
# 2100 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_4
# 2103 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_5
# 2106 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_6
# 2108 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_7
# 2111 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_2:
# 2095 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FLYING, 10
# 2096 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_3:
# 2098 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 2099 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_4:
# 2101 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_WATER, 10
# 2102 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_5:
# 2104 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 2105 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_6:
# 2107 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_7:
# 2109 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1::
# 2117 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Landorus_Page1
# 2118 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2120 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_2
# 2123 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_3
# 2126 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_4
# 2128 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_5
# 2131 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_2:
# 2121 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 132, 0, 4, 252, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 2122 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_3:
# 2124 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 2125 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_4:
# 2127 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_5:
# 2129 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1::
# 2137 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Maushold_Page1
# 2138 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2140 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_2
# 2143 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_3
# 2146 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_4
# 2149 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_5
# 2151 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_6
# 2154 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_2:
# 2141 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 156, 100, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BEAT_UP, MOVE_FOLLOW_ME, MOVE_SUPER_FANG, 2, FALSE, TYPE_GHOST, 10
# 2142 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_3:
# 2144 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 252, 0, 236, 0, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_SUPER_FANG, 2, FALSE, TYPE_GHOST, 10
# 2145 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_4:
# 2147 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_WIDE_LENS, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_BITE, MOVE_POPULATION_BOMB, 2, FALSE, TYPE_NORMAL, 10
# 2148 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_5:
# 2150 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_6:
# 2152 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1::
# 2160 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Incineroar_Page1
# 2161 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2163 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_2
# 2166 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_3
# 2169 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_4
# 2172 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_5
# 2174 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_6
# 2177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_2:
# 2164 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2165 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_3:
# 2167 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 4, 236, 4, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_WILL_O_WISP, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2168 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_4:
# 2170 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 244, 36, 4, 4, 0, 220, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2171 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_5:
# 2173 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_6:
# 2175 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1::
# 2183 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Indeedee_Page1
# 2184 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2186 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_2
# 2189 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_3
# 2191 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_4
# 2194 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_2:
# 2187 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_EXPANDING_FORCE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FIGHTING, 10
# 2188 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_3:
# 2190 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_4:
# 2192 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1::
# 2200 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Indeedee_F_Page1
# 2201 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2203 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_2
# 2206 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_3
# 2208 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_4
# 2211 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_2:
# 2204 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE_F, 65, ITEM_PSYCHIC_SEED, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 252, 0, 204, 4, 4, 44, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 2205 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_3:
# 2207 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_4:
# 2209 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1::
# 2217 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Iron_Bundle_Page1
# 2218 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2220 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_2
# 2223 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_3
# 2225 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_4
# 2228 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_2:
# 2221 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_BUNDLE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_GRASS, 10
# 2222 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_3:
# 2224 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_4:
# 2226 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1::
# 2234 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Iron_Hands_Page1
# 2235 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2237 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_2
# 2240 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_3
# 2243 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_4
# 2245 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_5
# 2248 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_2:
# 2238 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 100, 156, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 2239 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_3:
# 2241 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 2242 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_4:
# 2244 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_5:
# 2246 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1::
# 2254 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Grimmsnarl_Page1
# 2255 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2257 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_2
# 2260 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_3
# 2263 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_4
# 2265 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_5
# 2268 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_2:
# 2258 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 236, 0, 156, 0, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 2259 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_3:
# 2261 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 244, 4, 196, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_SPIRIT_BREAK, 2, FALSE, TYPE_GHOST, 10
# 2262 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_4:
# 2264 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_5:
# 2266 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1::
# 2274 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gyarados_Page1
# 2275 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2277 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_2
# 2280 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_3
# 2283 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_4
# 2286 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_5
# 2288 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_6
# 2291 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_2:
# 2278 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 172, 36, 116, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_WATERFALL, 2, FALSE, TYPE_GRASS, 10
# 2279 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_3:
# 2281 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 44, 196, 12, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_GRASS, 10
# 2282 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_4:
# 2284 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 44, 196, 12, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, 2, FALSE, TYPE_GROUND, 10
# 2285 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_5:
# 2287 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_6:
# 2289 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1::
# 2297 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Hatterene_Page1
# 2298 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2300 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_2
# 2303 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_3
# 2305 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_4
# 2308 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_2:
# 2301 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HATTERENE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 2, 1, 212, 0, 84, 0, 188, 20, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 2302 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_3:
# 2304 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_4:
# 2306 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1::
# 2314 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Heatran_Page1
# 2315 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2317 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_2
# 2320 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_3
# 2323 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_4
# 2325 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_5
# 2328 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_2:
# 2318 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 244, 0, 4, 20, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, 2, FALSE, TYPE_GRASS, 10
# 2319 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_3:
# 2321 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 36, 36, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_TERA_BLAST, MOVE_HEAT_WAVE, 2, FALSE, TYPE_GRASS, 10
# 2322 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_4:
# 2324 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_5:
# 2326 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1::
# 2334 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Hydreigon_Page1
# 2335 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2337 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_2
# 2340 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_3
# 2343 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_4
# 2346 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_5
# 2349 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_6
# 2351 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_7
# 2354 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_2:
# 2338 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_DARK_PULSE, 2, FALSE, TYPE_STEEL, 10
# 2339 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_3:
# 2341 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_SCOPE_LENS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOCUS_ENERGY, MOVE_DRACO_METEOR, MOVE_HEAT_WAVE, 2, FALSE, TYPE_FIRE, 10
# 2342 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_4:
# 2344 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_TRICK, 2, FALSE, TYPE_STEEL, 10
# 2345 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_5:
# 2347 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_FLAMETHROWER, 2, FALSE, TYPE_STEEL, 10
# 2348 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_6:
# 2350 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_7:
# 2352 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1::
# 2360 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gastrodon_Page1
# 2361 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2363 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_2
# 2366 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_3
# 2369 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_4
# 2371 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_5
# 2374 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_2:
# 2364 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 172, 0, 108, 4, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 2365 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_3:
# 2367 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 172, 0, 116, 0, 220, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 2368 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_4:
# 2370 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_5:
# 2372 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1::
# 2380 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gengar_Page1
# 2381 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2383 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_2
# 2386 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_3
# 2389 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_4
# 2391 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_5
# 2394 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_2:
# 2384 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_DARK, 10
# 2385 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_3:
# 2387 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_DARK, 10
# 2388 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_4:
# 2390 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_5:
# 2392 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1::
# 2400 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gholdengo_Page1
# 2401 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2403 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_2
# 2406 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_3
# 2409 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_4
# 2412 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_5
# 2414 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_6
# 2417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_2:
# 2404 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 212, 0, 4, 60, 212, 20, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 2405 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_3:
# 2407 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 36, 212, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 2408 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_4:
# 2410 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 36, 0, 4, 252, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_STEEL_BEAM, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 2411 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_5:
# 2413 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_6:
# 2415 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1::
# 2423 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gigantamax_Page1
# 2424 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2426 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_2
# 2428 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_3
# 2430 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_4
# 2432 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_5
# 2434 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_6
# 2437 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_2:
# 2427 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_3:
# 2429 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_4:
# 2431 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_5:
# 2433 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_6:
# 2435 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1::
# 2443 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1
# 2444 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2446 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_2
# 2449 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_3
# 2451 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_4
# 2454 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_2:
# 2447 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARTI_BERRY, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 4, 252, 244, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BLAST_BURN, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH, 2, TRUE, FALSE, 10
# 2448 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_3:
# 2450 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_4:
# 2452 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1::
# 2460 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1
# 2461 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2463 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1_2
# 2466 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1_3
# 2468 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1_4
# 2471 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1_2:
# 2464 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LAPRAS, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 108, 0, 172, 28, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, 2, TRUE, FALSE, 10
# 2465 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1_3:
# 2467 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1_4:
# 2469 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1::
# 2477 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1
# 2478 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2480 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_2
# 2483 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_3
# 2485 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_4
# 2488 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_2:
# 2481 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 156, 0, 36, 116, 172, 20, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, 2, TRUE, FALSE, 10
# 2482 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_3:
# 2484 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_4:
# 2486 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1::
# 2494 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gothitelle_Page1
# 2495 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2497 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_2
# 2500 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_3
# 2503 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_4
# 2506 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_5
# 2508 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_6
# 2511 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_2:
# 2498 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 244, 0, 180, 4, 4, 76, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2499 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_3:
# 2501 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 244, 0, 108, 0, 0, 156, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2502 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_4:
# 2504 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 0, 244, 0, 28, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2505 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_5:
# 2507 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_6:
# 2509 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1::
# 2517 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Farigiraf_Page1
# 2518 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2520 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_2
# 2523 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_3
# 2525 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_4
# 2528 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_2:
# 2521 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FARIGIRAF, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 228, 0, 116, 4, 4, 156, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_HYPER_VOICE, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 2522 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_3:
# 2524 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_4:
# 2526 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1::
# 2534 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ferrothorn_Page1
# 2535 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2537 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_2
# 2540 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_3
# 2543 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_4
# 2546 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_5
# 2548 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_6
# 2551 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_2:
# 2538 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 220, 0, 100, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 2539 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_3:
# 2541 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 1, 220, 0, 228, 0, 0, 60, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 2542 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_4:
# 2544 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 220, 204, 0, 0, 0, 84, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 2545 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_5:
# 2547 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_6:
# 2549 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1::
# 2557 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Flutter_Mane_Page1
# 2558 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2560 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_2
# 2563 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_3
# 2566 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_4
# 2569 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_5
# 2571 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_6
# 2574 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_2:
# 2561 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 2562 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_3:
# 2564 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 116, 0, 156, 196, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_ICY_WIND, 2, FALSE, TYPE_FAIRY, 10
# 2565 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_4:
# 2567 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 228, 0, 204, 68, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 2568 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_5:
# 2570 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_6:
# 2572 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1::
# 2580 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Garchomp_Page1
# 2581 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2583 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_2
# 2586 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_3
# 2589 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_4
# 2592 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_5
# 2594 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_6
# 2597 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_2:
# 2584 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 108, 172, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_FIRE, 10
# 2585 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_3:
# 2587 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 156, 4, 252, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_DRAGON_CLAW, 2, FALSE, TYPE_FIRE, 10
# 2588 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_4:
# 2590 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_GROUND, 10
# 2591 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_5:
# 2593 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_6:
# 2595 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1::
# 2603 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Garganacl_Page1
# 2604 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2606 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_2
# 2609 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_3
# 2612 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_4
# 2614 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_5
# 2617 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_2:
# 2607 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_SASSY, 0, 0, 252, 0, 20, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 2608 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_3:
# 2610 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 252, 4, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 2611 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_4:
# 2613 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_5:
# 2615 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1::
# 2623 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dragapult_Page1
# 2624 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2626 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_2
# 2629 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_3
# 2632 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_4
# 2634 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_5
# 2637 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_2:
# 2627 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 252, 4, 44, 164, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DARTS, MOVE_LIGHT_SCREEN, MOVE_WILL_O_WISP, 2, FALSE, TYPE_WATER, 10
# 2628 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_3:
# 2630 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_OUTRAGE, 2, FALSE, TYPE_DRAGON, 10
# 2631 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_4:
# 2633 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_5:
# 2635 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1::
# 2643 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dragonite_Page1
# 2644 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2646 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_2
# 2649 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_3
# 2652 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_4
# 2654 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_5
# 2657 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_2:
# 2647 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_NORMAL, 10
# 2648 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_3:
# 2650 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_LOADED_DICE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HAZE, MOVE_SCALE_SHOT, 2, FALSE, TYPE_FAIRY, 10
# 2651 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_4:
# 2653 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_5:
# 2655 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1::
# 2663 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dusclops_Page1
# 2664 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2666 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_2
# 2669 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_3
# 2672 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_4
# 2674 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_5
# 2677 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_2:
# 2667 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DUSCLOPS, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_NIGHT_SHADE, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 2668 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_3:
# 2670 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DUSCLOPS, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_RELAXED, 2, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_NIGHT_SHADE, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 2671 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_4:
# 2673 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_5:
# 2675 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1::
# 2683 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Page1
# 2684 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2686 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_2
# 2688 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_3
# 2690 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_4
# 2692 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_5
# 2695 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_2:
# 2687 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_3:
# 2689 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_4:
# 2691 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_5:
# 2693 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1::
# 2701 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Dragapult_Page1
# 2702 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2704 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_2
# 2707 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_3
# 2709 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_4
# 2712 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_2:
# 2705 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 28, 196, 4, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_PHANTOM_FORCE, MOVE_DRAGON_CLAW, 2, FALSE, TYPE_WATER, 10
# 2706 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_3:
# 2708 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_4:
# 2710 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1::
# 2718 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Thundurus_Page1
# 2719 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2721 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_2
# 2724 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_3
# 2727 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_4
# 2729 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_5
# 2732 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_2:
# 2722 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 36, 212, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_FLY, 2, FALSE, TYPE_FIRE, 10
# 2723 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_3:
# 2725 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 50, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 236, 4, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_FLY, 2, FALSE, TYPE_FIRE, 10
# 2726 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_4:
# 2728 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_5:
# 2730 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1::
# 2738 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Excadrill_Page1
# 2739 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2741 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_2
# 2744 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_3
# 2747 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_4
# 2749 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_5
# 2752 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_2:
# 2742 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, 2, FALSE, TYPE_GROUND, 10
# 2743 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_3:
# 2745 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 28, 196, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, 2, FALSE, TYPE_WATER, 10
# 2746 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_4:
# 2748 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_5:
# 2750 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1::
# 2758 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chien_Pao_Page1
# 2759 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2761 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_2
# 2764 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_3
# 2766 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_4
# 2769 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_2:
# 2762 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHIEN_PAO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICICLE_CRASH, MOVE_SACRED_SWORD, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 2763 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_3:
# 2765 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_4:
# 2767 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1::
# 2775 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Clefairy_Page1
# 2776 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2778 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_2
# 2781 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_3
# 2784 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_4
# 2787 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_5
# 2789 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_6
# 2792 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_2:
# 2779 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 140, 0, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 2780 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_3:
# 2782 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 220, 0, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 2783 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_4:
# 2785 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 60, 0, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 2786 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_5:
# 2788 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_6:
# 2790 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1::
# 2798 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Conkeldurr_Page1
# 2799 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2801 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_2
# 2804 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_3
# 2807 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_4
# 2810 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_5
# 2813 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_6
# 2815 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_7
# 2818 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_2:
# 2802 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 228, 236, 0, 0, 0, 44, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_POISON_JAB, 2, FALSE, TYPE_FIRE, 10
# 2803 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_3:
# 2805 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 2, 1, 228, 236, 0, 0, 0, 44, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2806 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_4:
# 2808 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_POISON_JAB, 2, FALSE, TYPE_FIRE, 10
# 2809 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_5:
# 2811 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2812 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_6:
# 2814 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_7:
# 2816 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1::
# 2824 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Corviknight_Page1
# 2825 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2827 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_2
# 2830 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_3
# 2832 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_4
# 2835 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_2:
# 2828 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CORVIKNIGHT, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_IMPISH, 2, 1, 244, 4, 116, 4, 0, 140, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_IRON_HEAD, 2, FALSE, TYPE_DRAGON, 10
# 2829 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_3:
# 2831 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_4:
# 2833 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1::
# 2841 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Cresselia_Page1
# 2842 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2844 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_2
# 2847 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_3
# 2850 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_4
# 2853 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_5
# 2855 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_6
# 2858 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_2:
# 2845 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 1, 252, 0, 156, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2846 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_3:
# 2848 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 1, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2849 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_4:
# 2851 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_SASSY, 0, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2852 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_5:
# 2854 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_6:
# 2856 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1::
# 2864 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Archaludon_Page1
# 2865 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2867 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_2
# 2870 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_3
# 2873 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_4
# 2875 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_5
# 2878 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_2:
# 2868 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, 2, FALSE, TYPE_ELECTRIC, 10
# 2869 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_3:
# 2871 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 4, 4, 44, 204, 31, 31, 31, 31, 31, 31, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_BODY_PRESS, 2, FALSE, TYPE_GRASS, 10
# 2872 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_4:
# 2874 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_5:
# 2876 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1::
# 2884 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Armarouge_Page1
# 2885 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2887 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_2
# 2890 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_3
# 2893 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_4
# 2895 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_5
# 2898 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_2:
# 2888 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARMAROUGE, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENDURE, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_FIRE, 10
# 2889 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_3:
# 2891 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARMAROUGE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 0, 1, 228, 0, 0, 0, 196, 84, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_GRASS, 10
# 2892 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_4:
# 2894 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_5:
# 2896 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1::
# 2904 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Basculegion_Page1
# 2905 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2907 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_2
# 2910 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_3
# 2913 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_4
# 2916 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_5
# 2919 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_6
# 2921 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_7
# 2924 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_2:
# 2908 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 220, 124, 156, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2909 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_3:
# 2911 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2912 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_4:
# 2914 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2915 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_5:
# 2917 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2918 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_6:
# 2920 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_7:
# 2922 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1::
# 2930 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Celesteela_Page1
# 2931 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2933 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_2
# 2936 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_3
# 2939 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_4
# 2941 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_5
# 2944 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_2:
# 2934 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 20, 4, 180, 52, 31, 0, 31, 31, 31, 31, MOVE_AIR_SLASH, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_GIGA_DRAIN, 2, FALSE, TYPE_DRAGON, 10
# 2935 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_3:
# 2937 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 68, 84, 4, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_HEAVY_SLAM, 2, FALSE, TYPE_DRAGON, 10
# 2938 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_4:
# 2940 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_5:
# 2942 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1::
# 2950 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chi_Yu_Page1
# 2951 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2953 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_2
# 2956 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_3
# 2959 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_4
# 2961 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_5
# 2964 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_2:
# 2954 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_SNARL, 2, FALSE, TYPE_GHOST, 10
# 2955 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_3:
# 2957 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GHOST, 10
# 2958 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_4:
# 2960 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_5:
# 2962 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1::
# 2970 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Aegislash_Page1
# 2971 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2973 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_2
# 2976 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_3
# 2979 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_4
# 2982 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_5
# 2984 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_6
# 2987 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_2:
# 2974 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, 2, FALSE, FALSE, 10
# 2975 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_3:
# 2977 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, 2, FALSE, TYPE_WATER, 10
# 2978 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_4:
# 2980 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 252, 0, 4, 0, 180, 68, 31, 0, 31, 0, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, 2, FALSE, FALSE, 10
# 2981 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_5:
# 2983 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_6:
# 2985 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1::
# 2993 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Amoonguss_Page1
# 2994 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2996 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_2
# 2999 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_3
# 3002 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_4
# 3005 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_5
# 3008 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_6
# 3010 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_7
# 3013 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_2:
# 2997 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_RELAXED, 2, 1, 236, 0, 236, 0, 0, 36, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 2998 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_3:
# 3000 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 244, 0, 108, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 3001 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_4:
# 3003 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_SPORE, MOVE_RAGE_POWDER, 2, FALSE, TYPE_WATER, 10
# 3004 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_5:
# 3006 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 20, 0, 0, 236, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 3007 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_6:
# 3009 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_7:
# 3011 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1::
# 3019 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Annihilape_Page1
# 3020 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3022 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_2
# 3025 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_3
# 3028 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_4
# 3030 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_5
# 3033 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_2:
# 3023 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 180, 68, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 3024 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_3:
# 3026 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_FINAL_GAMBIT, 2, FALSE, TYPE_FIGHTING, 10
# 3027 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_4:
# 3029 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_5:
# 3031 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1::
# 3039 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Arcanine_Page1
# 3040 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3042 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_2
# 3045 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_3
# 3048 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_4
# 3050 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_5
# 3053 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_2:
# 3043 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 236, 68, 4, 196, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EXTREME_SPEED, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 3044 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_3:
# 3046 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 252, 68, 4, 76, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, MOVE_SNARL, 2, FALSE, TYPE_WATER, 10
# 3047 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_4:
# 3049 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_5:
# 3051 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1::
# 3059 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Arcanine_Hisui_Page1
# 3060 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3062 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_2
# 3065 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_3
# 3067 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_4
# 3070 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_2:
# 3063 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE_HISUI, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EXTREME_SPEED, MOVE_HEAD_SMASH, 2, FALSE, TYPE_NORMAL, 10
# 3064 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_3:
# 3066 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_4:
# 3068 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
# 5 "data/scripts/sample_sets_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                               B: Go Back$"

Auto_Text_Sample_Sets_Page1::
# 3074 "data/scripts/sample_sets_options.pory"
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page1::
# 3081 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "AMOONGUSS$"
	.string "ANNIHILAPE$"
	.string "ARCANINE$"
	.string "ARCANINE-HISUI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page2::
# 3092 "data/scripts/sample_sets_options.pory"
	.string "ARCHALUDON$"
	.string "ARMAROUGE$"
	.string "BASCULEGION$"
	.string "CELESTEELA$"
	.string "CHI-YU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page3::
# 3103 "data/scripts/sample_sets_options.pory"
	.string "CHIEN-PAO$"
	.string "CLEFAIRY$"
	.string "CONKELDURR$"
	.string "CORVIKNIGHT$"
	.string "CRESSELIA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page4::
# 3114 "data/scripts/sample_sets_options.pory"
	.string "DRAGAPULT$"
	.string "DRAGONITE$"
	.string "DUSCLOPS$"
	.string "DYNAMAX$"
	.string "EXCADRILL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page5::
# 3125 "data/scripts/sample_sets_options.pory"
	.string "FARIGIRAF$"
	.string "FERROTHORN$"
	.string "FLUTTER MANE$"
	.string "GARCHOMP$"
	.string "GARGANACL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page6::
# 3136 "data/scripts/sample_sets_options.pory"
	.string "GASTRODON$"
	.string "GENGAR$"
	.string "GHOLDENGO$"
	.string "GIGANTAMAX$"
	.string "GOTHITELLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page7::
# 3147 "data/scripts/sample_sets_options.pory"
	.string "GRIMMSNARL$"
	.string "GYARADOS$"
	.string "HATTERENE$"
	.string "HEATRAN$"
	.string "HYDREIGON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page8::
# 3158 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "INDEEDEE$"
	.string "INDEEDEE-F$"
	.string "IRON BUNDLE$"
	.string "IRON HANDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page9::
# 3169 "data/scripts/sample_sets_options.pory"
	.string "KARTANA$"
	.string "KINGAMBIT$"
	.string "LANDO-T$"
	.string "LANDORUS$"
	.string "MAUSHOLD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page10::
# 3180 "data/scripts/sample_sets_options.pory"
	.string "MEGA$"
	.string "MEOWSCARADA$"
	.string "MILOTIC$"
	.string "MIMIKYU$"
	.string "MOLTRES-GALAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page11::
# 3191 "data/scripts/sample_sets_options.pory"
	.string "MURKROW$"
	.string "MYTHICAL$"
	.string "NINETALES-ALOLA$"
	.string "OGERPON-CS$"
	.string "OGERPON-HF$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page12::
# 3202 "data/scripts/sample_sets_options.pory"
	.string "OGERPON-WS$"
	.string "PALAFIN$"
	.string "PELIPPER$"
	.string "POLITOED$"
	.string "PORYGON2$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page13::
# 3213 "data/scripts/sample_sets_options.pory"
	.string "PRIMARINA$"
	.string "RAGING BOLT$"
	.string "RAICHU$"
	.string "REGIDRAGO$"
	.string "REGIELEKI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page14::
# 3224 "data/scripts/sample_sets_options.pory"
	.string "RESTRICTED$"
	.string "RILLABOOM$"
	.string "ROARING MOON$"
	.string "ROTOM-WASH$"
	.string "SABLEYE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page15::
# 3235 "data/scripts/sample_sets_options.pory"
	.string "SINISTCHA$"
	.string "SNEASLER$"
	.string "SNORLAX$"
	.string "SYLVEON$"
	.string "TALONFLAME$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page16::
# 3246 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "TAPU KOKO$"
	.string "TAPU LELE$"
	.string "TATSUGIRI$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page17::
# 3257 "data/scripts/sample_sets_options.pory"
	.string "TING-LU$"
	.string "TINKATON$"
	.string "TOGEKISS$"
	.string "TORKOAL$"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page18::
# 3268 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "URSALUNA$"
	.string "URSALUNA-BLOODMOON$"
	.string "URSHIFU-RS$"
	.string "URSHIFU-SS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page19::
# 3279 "data/scripts/sample_sets_options.pory"
	.string "VENUSAUR$"
	.string "VOLCARONA$"
	.string "WHIMSICOTT$"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Venusaur_Page1::
# 3289 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Volcarona_Page1::
# 3296 "data/scripts/sample_sets_options.pory"
	.string "252/0-/108/36+/4/108 (TERA)$"
	.string "252/0-/188/36+/4/28 (SUPPORT)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Whimsicott_Page1::
# 3304 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/0/0/252+ (CLOAK)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Zapdos_Page1::
# 3312 "data/scripts/sample_sets_options.pory"
	.string "244/0-/84/116+/36/28 (SITRUS)$"
	.string "252/0-/76/116+/36/28 (GOGGLES)$"
	.string "28/0-/0/228/0/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tyranitar_Page1::
# 3321 "data/scripts/sample_sets_options.pory"
	.string "188/204+/0/0/116/0- (LIFE ORB)$"
	.string "188/204+/4/0-/108/4 (LIFE ORB)$"
	.string "252/204+/0/0/52/0- (LUM BERRY)$"
	.string "252/204+/4/0-/44/4 (LUM BERRY)$"
	.string "4/244/4/0-/4/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ursaluna_Page1::
# 3332 "data/scripts/sample_sets_options.pory"
	.string "140/236+/0/0/132/0-$"
	.string "140/236+/4/0-/116/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1::
# 3340 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/196+/52/12 (ORB)$"
	.string "244/0/0/196+/68/0- (ORB)$"
	.string "4/0-/4/196+/52/252 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Urshifu_Rs_Page1::
# 3349 "data/scripts/sample_sets_options.pory"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "12/156+/4/0-/84/252 (MYSTIC)$"
	.string "12/156+/4/0-/84/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Urshifu_Ss_Page1::
# 3358 "data/scripts/sample_sets_options.pory"
	.string "0/236+/0/0-/20/252 (BAND)$"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ting_Lu_Page1::
# 3366 "data/scripts/sample_sets_options.pory"
	.string "52/4/196+/0-/252/4 (HELMET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tinkaton_Page1::
# 3373 "data/scripts/sample_sets_options.pory"
	.string "180/172/100/0-/44+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Togekiss_Page1::
# 3380 "data/scripts/sample_sets_options.pory"
	.string "228/0-/196+/4/76/4 (LENS)$"
	.string "236/0-/196+/4/12/60 (BABIRI)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Torkoal_Page1::
# 3388 "data/scripts/sample_sets_options.pory"
	.string "204/0/0/196+/108/0-$"
	.string "204/0/0/196+/108/0- (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tornadus_Page1::
# 3396 "data/scripts/sample_sets_options.pory"
	.string "196/0-/228+/4/76/4 (CLOAK)$"
	.string "196/0-/228+/4/76/4 (HELMET)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Fini_Page1::
# 3405 "data/scripts/sample_sets_options.pory"
	.string "252/0-/100/4/4+/148 (SUPPORT)$"
	.string "252/0-/12/4/4/236+ (SUPPORT)$"
	.string "252/0-/172/4/76+/4 (CALM MIND)$"
	.string "252/0-/4/196+/4/52 (SPECS)$"
	.string "4/0-/4/196+/52/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Koko_Page1::
# 3416 "data/scripts/sample_sets_options.pory"
	.string "172/0-/12/36/196/92+ (VEST)$"
	.string "28/0-/4/196+/28/252 (ELEC Z)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "4/0-/4/244/4/252+ (ELEC Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Lele_Page1::
# 3426 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "12/0-/4/236+/4/252 (PSYCH Z)$"
	.string "12/0-/4/236+/4/252 (SCARF)$"
	.string "252/0-/108/76+/4/68 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tatsugiri_Page1::
# 3436 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252 (SCARF)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Thundurus_Page1::
# 3444 "data/scripts/sample_sets_options.pory"
	.string "228/0-/28/12/172+/68$"
	.string "4/0-/0/252/0/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sinistcha_Page1::
# 3453 "data/scripts/sample_sets_options.pory"
	.string "236/0-/188+/4/76/4 (SITRUS)$"
	.string "236/0/188+/0/84/0- (SITRUS)$"
	.string "244/0-/188+/4/68/4 (LEFTYS)$"
	.string "244/0/188+/0/76/0- (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sneasler_Page1::
# 3463 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (COACHING)$"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "4/244/4/0-/4/252+ (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Snorlax_Page1::
# 3472 "data/scripts/sample_sets_options.pory"
	.string "228/76+/196/0-/4/4 (DRUM)$"
	.string "228/76+/204/0/0/0- (DRUM)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sylveon_Page1::
# 3480 "data/scripts/sample_sets_options.pory"
	.string "180/0-/244/76+/4/4 (LEFTYS)$"
	.string "252/0-/172/76+/4/4 (PLATE)$"
	.string "252/0-/92/156+/4/4 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Talonflame_Page1::
# 3489 "data/scripts/sample_sets_options.pory"
	.string "4/252+/0/0-/0/252 (BANDED)$"
	.string "4/252+/0/0-/0/252 (LIFE ORB)$"
	.string "4/252/0/0-/0/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Page1::
# 3498 "data/scripts/sample_sets_options.pory"
	.string "CALYREX$"
	.string "GROUDON$"
	.string "KORAIDON$"
	.string "KYOGRE$"
	.string "LUNALA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Page2::
# 3509 "data/scripts/sample_sets_options.pory"
	.string "MIRAIDON$"
	.string "RAYQUAZA$"
	.string "XERNEAS$"
	.string "YVELTAL$"
	.string "ZACIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Page3::
# 3520 "data/scripts/sample_sets_options.pory"
	.string "ZAMAZENTA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Zamazenta_Page1::
# 3527 "data/scripts/sample_sets_options.pory"
	.string "76/0/244+/0-/0/188$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Miraidon_Page1::
# 3534 "data/scripts/sample_sets_options.pory"
	.string "92/0-/4/196+/4/212 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Rayquaza_Page1::
# 3541 "data/scripts/sample_sets_options.pory"
	.string "4/252/0/0-/0/252+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Xerneas_Page1::
# 3548 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+$"
	.string "44/0-/20/188/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Yveltal_Page1::
# 3556 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (ORB)$"
	.string "4/244/4/0-/4/252+ (DARK Z)$"
	.string "4/244/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Zacian_Page1::
# 3565 "data/scripts/sample_sets_options.pory"
	.string "252/76+/4/0-/12/164 (GROUND)$"
	.string "252/76+/4/0-/12/164 (STELLAR)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Calyrex_Page1::
# 3573 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SHADOW)$"
	.string "20/0-/4/220/4/252+ (SHADOW)$"
	.string "252/116+/0/0/140/0- (ICE)$"
	.string "252/116+/4/0-/124/12 (ICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Groudon_Page1::
# 3583 "data/scripts/sample_sets_options.pory"
	.string "252/156+/4/0-/84/12 (AMULET)$"
	.string "252/156+/4/0-/84/12 (PRIMAL)$"
	.string "4/0-/4/244/4/252+ (PRIMAL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Koraidon_Page1::
# 3592 "data/scripts/sample_sets_options.pory"
	.string "108/116+/4/0-/68/212 (ORB)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Kyogre_Page1::
# 3600 "data/scripts/sample_sets_options.pory"
	.string "252/0-/132/76+/4/44 (MYSTIC)$"
	.string "252/0-/164/76+/4/12 (PRIMAL)$"
	.string "4/0-/4/244+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Lunala_Page1::
# 3609 "data/scripts/sample_sets_options.pory"
	.string "140/0-/132/180+/4/52 (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rillaboom_Page1::
# 3616 "data/scripts/sample_sets_options.pory"
	.string "140/116+/12/0-/236/4 (VEST)$"
	.string "140/196+/12/0-/156/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Roaring_Moon_Page1::
# 3624 "data/scripts/sample_sets_options.pory"
	.string "4/220/28/0-/4/252+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rotom_Wash_Page1::
# 3631 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/116+/4/132$"
	.string "252/0-/44/60/148+/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sableye_Page1::
# 3639 "data/scripts/sample_sets_options.pory"
	.string "252/0-/116+/0/140/0 (CLAY)$"
	.string "252/0-/36+/0/220/0 (CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Primarina_Page1::
# 3647 "data/scripts/sample_sets_options.pory"
	.string "180/0-/108/188+/4/28 (SPRAY)$"
	.string "236/0-/132/108+/4/28 (SPRAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Raging_Bolt_Page1::
# 3655 "data/scripts/sample_sets_options.pory"
	.string "148/0-/36/100+/44/180 (ORB)$"
	.string "244/0-/124/100+/36/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Raichu_Page1::
# 3663 "data/scripts/sample_sets_options.pory"
	.string "140/0-/188/0/0/180+ (VEST)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Regidrago_Page1::
# 3672 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Regieleki_Page1::
# 3679 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (MAGNET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Ws_Page1::
# 3686 "data/scripts/sample_sets_options.pory"
	.string "220/60/44/0-/4/180+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Palafin_Page1::
# 3693 "data/scripts/sample_sets_options.pory"
	.string "252/156+/4/0-/92/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Pelipper_Page1::
# 3700 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Politoed_Page1::
# 3707 "data/scripts/sample_sets_options.pory"
	.string "220/0-/196/4/76+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Porygon2_Page1::
# 3714 "data/scripts/sample_sets_options.pory"
	.string "244/0-/92/116+/52/4 (TERA)$"
	.string "244/0/92/116+/52/0- (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Murkrow_Page1::
# 3722 "data/scripts/sample_sets_options.pory"
	.string "252/0-/116/0/140+/0$"
	.string "252/0-/140+/0/116/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mythical_Page1::
# 3730 "data/scripts/sample_sets_options.pory"
	.string "KELDEO-RESOLUTE$"
	.string "MANAPHY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1::
# 3738 "data/scripts/sample_sets_options.pory"
	.string "20/0-/4/228/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mythical_Manaphy_Page1::
# 3746 "data/scripts/sample_sets_options.pory"
	.string "228/0-/172/76+/4/28$"
	.string "68/0-/4/180+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ninetales_Alola_Page1::
# 3754 "data/scripts/sample_sets_options.pory"
	.string "212/0-/100/4/4/188+ (CLAY)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Cs_Page1::
# 3762 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Hf_Page1::
# 3769 "data/scripts/sample_sets_options.pory"
	.string "188/76+/52/0-/4/188$"
	.string "28/220/4/0-/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Page1::
# 3777 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD$"
	.string "GARDEVOIR$"
	.string "GENGAR$"
	.string "GYARADOS$"
	.string "KANGASKHAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Page2::
# 3788 "data/scripts/sample_sets_options.pory"
	.string "LATIAS$"
	.string "MANECTRIC$"
	.string "MAWILE$"
	.string "METAGROSS$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Page3::
# 3799 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Tyranitar_Page1::
# 3806 "data/scripts/sample_sets_options.pory"
	.string "44/164/20/0-/28/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Latias_Page1::
# 3813 "data/scripts/sample_sets_options.pory"
	.string "252/0-/60/76+/12/108$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Manectric_Page1::
# 3820 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/36/4/220+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Mawile_Page1::
# 3827 "data/scripts/sample_sets_options.pory"
	.string "156/196+/0/0/156/0- (MEGA)$"
	.string "156/196+/4/0-/148/4 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Metagross_Page1::
# 3835 "data/scripts/sample_sets_options.pory"
	.string "124/196+/12/0-/36/140 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Salamence_Page1::
# 3842 "data/scripts/sample_sets_options.pory"
	.string "0/44/0/252/0-/212+ (MEGA)$"
	.string "252/36+/4/0-/124/92 (MEGA)$"
	.string "4/0-/4/244+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Charizard_Page1::
# 3851 "data/scripts/sample_sets_options.pory"
	.string "204/0-/108/4+/4/188 (MEGA Y)$"
	.string "236/44/4/0-/4/220+ (MEGA X)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Gardevoir_Page1::
# 3859 "data/scripts/sample_sets_options.pory"
	.string "244/0-/196/36+/4/28 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Gengar_Page1::
# 3866 "data/scripts/sample_sets_options.pory"
	.string "252/0-/68/4/4/180+ (PERISH)$"
	.string "76/0-/28/220/4/180+ (CONTROL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Gyarados_Page1::
# 3874 "data/scripts/sample_sets_options.pory"
	.string "52/196+/4/0-/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Kangaskhan_Page1::
# 3881 "data/scripts/sample_sets_options.pory"
	.string "36/196+/20/0-/236/20 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Meowscarada_Page1::
# 3888 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "4/244/4/0-/4/252+ (BAND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Milotic_Page1::
# 3896 "data/scripts/sample_sets_options.pory"
	.string "180/0-/204/4/116+/4 (COIL)$"
	.string "244/0-/220/4/36+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mimikyu_Page1::
# 3904 "data/scripts/sample_sets_options.pory"
	.string "252/236+/20/0/0/0- (MIMI Z)$"
	.string "4/0-/0/252+/0/252 (GHOST Z)$"
	.string "4/252+/0/0-/0/252 (GHOST Z)$"
	.string "4/252+/0/0-/0/252 (MIMI Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Moltres_Galar_Page1::
# 3914 "data/scripts/sample_sets_options.pory"
	.string "28/0-/4/220/4/252+ (ORB)$"
	.string "92/0-/4/156+/4/252 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kartana_Page1::
# 3922 "data/scripts/sample_sets_options.pory"
	.string "116/4/4/0-/132/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (FOCUS SASH)$"
	.string "84/84/4/0-/84/252+ (GRASS Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kingambit_Page1::
# 3931 "data/scripts/sample_sets_options.pory"
	.string "204/196+/4/0-/92/12$"
	.string "204/196+/4/0-/92/12 (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Lando_T_Page1::
# 3939 "data/scripts/sample_sets_options.pory"
	.string "12/196+/4/0-/44/252 (SCARF)$"
	.string "12/196+/4/0-/44/252 (VEST)$"
	.string "156/116+/36/0-/108/92 (GROUND Z)$"
	.string "20/164+/4/0-/68/252 (GROUND Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Landorus_Page1::
# 3949 "data/scripts/sample_sets_options.pory"
	.string "132/0-/4/116+/4/252 (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Maushold_Page1::
# 3957 "data/scripts/sample_sets_options.pory"
	.string "252/0-/156/0/0/100+ (BEAT UP)$"
	.string "252/0-/236+/0/20/0 (GOGGLES)$"
	.string "4/244/4/0-/4/252+ (LENS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Incineroar_Page1::
# 3966 "data/scripts/sample_sets_options.pory"
	.string "236/36+/4/0-/204/28 (SITRUS)$"
	.string "236/4+/236/0-/28/4 (HELMET)$"
	.string "244/36+/4/0-/220/4 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Indeedee_Page1::
# 3975 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Indeedee_F_Page1::
# 3982 "data/scripts/sample_sets_options.pory"
	.string "252/0-/204/4/44+/4 (SEED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Iron_Bundle_Page1::
# 3989 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Iron_Hands_Page1::
# 3996 "data/scripts/sample_sets_options.pory"
	.string "100/156+/0/0/252/0- (VEST)$"
	.string "60/156+/36/0-/252/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Grimmsnarl_Page1::
# 4004 "data/scripts/sample_sets_options.pory"
	.string "236/0-/156/0/116+/0 (LIGHT CLAY)$"
	.string "244/4/196+/0-/60/4 (LIGHT CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gyarados_Page1::
# 4012 "data/scripts/sample_sets_options.pory"
	.string "172/36+/116/0-/4/180 (SUPPORT)$"
	.string "44/196+/12/0-/4/252 (GRASS)$"
	.string "44/196+/12/0-/4/252 (GROUND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Hatterene_Page1::
# 4021 "data/scripts/sample_sets_options.pory"
	.string "212/0/84/188+/20/0- (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Heatran_Page1::
# 4028 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/236+/4/20 (SHUCA)$"
	.string "252/0-/36/180+/4/36 (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Hydreigon_Page1::
# 4036 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236/4/252+ (ORB)$"
	.string "52/0-/4/196+/4/252 (LENS)$"
	.string "52/0-/4/196+/4/252 (SCARF)$"
	.string "52/0-/4/196+/4/252 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gastrodon_Page1::
# 4046 "data/scripts/sample_sets_options.pory"
	.string "172/0-/108/220+/4/4 (SITRUS)$"
	.string "172/0/116/220+/0/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gengar_Page1::
# 4054 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "4/0-/4/244/4/252+ (GHOST Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gholdengo_Page1::
# 4062 "data/scripts/sample_sets_options.pory"
	.string "212/0-/4/212+/20/60 (ORB)$"
	.string "244/0-/4/212+/12/36 (LEFTYS)$"
	.string "36/0-/4/212+/4/252 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gigantamax_Page1::
# 4071 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD-GMAX$"
	.string "LAPRAS-GMAX$"
	.string "VENUSAUR-GMAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1::
# 4080 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/0/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gigantamax_Lapras_Gmax_Page1::
# 4087 "data/scripts/sample_sets_options.pory"
	.string "108/0-/172/196+/4/28 (CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1::
# 4094 "data/scripts/sample_sets_options.pory"
	.string "156/0-/36/172+/20/116 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gothitelle_Page1::
# 4101 "data/scripts/sample_sets_options.pory"
	.string "244/0-/180/4/76+/4 (SITRUS)$"
	.string "244/0/108/0/156+/0- (SITRUS)$"
	.string "244/0/28/0/236+/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Farigiraf_Page1::
# 4110 "data/scripts/sample_sets_options.pory"
	.string "228/0-/116/4/156+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ferrothorn_Page1::
# 4117 "data/scripts/sample_sets_options.pory"
	.string "220/0/100+/0/188/0- (LEFTYS)$"
	.string "220/0/228+/0/60/0- (LEFTYS)$"
	.string "220/204+/0/0/84/0- (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Flutter_Mane_Page1::
# 4126 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "116/0-/156/36+/4/196 (SPECS)$"
	.string "228/0-/204/4/4/68+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Garchomp_Page1::
# 4135 "data/scripts/sample_sets_options.pory"
	.string "108/172+/4/0-/4/220 (GROUND Z)$"
	.string "4/156/4/0-/92/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Garganacl_Page1::
# 4144 "data/scripts/sample_sets_options.pory"
	.string "252/0/20/0/236+/0-$"
	.string "252/4/12/0-/236+/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dragapult_Page1::
# 4152 "data/scripts/sample_sets_options.pory"
	.string "252/4/44/0-/44/164+ (SUPPORT)$"
	.string "4/244/4/0-/4/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dragonite_Page1::
# 4160 "data/scripts/sample_sets_options.pory"
	.string "44/204+/4/0-/4/252 (BANDED)$"
	.string "44/204+/4/0-/4/252 (DICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dusclops_Page1::
# 4168 "data/scripts/sample_sets_options.pory"
	.string "252/0/100/0/156+/0-$"
	.string "252/0/156+/0/100/0-$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Page1::
# 4176 "data/scripts/sample_sets_options.pory"
	.string "DRAGAPULT$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Dragapult_Page1::
# 4184 "data/scripts/sample_sets_options.pory"
	.string "28/196/4/0-/28/252+ (LIFE ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Thundurus_Page1::
# 4191 "data/scripts/sample_sets_options.pory"
	.string "36/212/4/0-/4/252+ (ORB)$"
	.string "4/236/4/0-/12/252+ (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Excadrill_Page1::
# 4199 "data/scripts/sample_sets_options.pory"
	.string "0/252+/4/0-/0/252 (SASH)$"
	.string "28/196+/28/0-/4/252 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chien_Pao_Page1::
# 4207 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Clefairy_Page1::
# 4214 "data/scripts/sample_sets_options.pory"
	.string "252/0-/140/0/116+/0$"
	.string "252/0-/220/0/36+/0$"
	.string "252/0-/60/0/196+/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Conkeldurr_Page1::
# 4223 "data/scripts/sample_sets_options.pory"
	.string "228/236+/0/0/44/0- (GUTS)$"
	.string "228/236+/0/0/44/0- (ORB)$"
	.string "228/236+/4/0-/36/4 (GUTS)$"
	.string "228/236+/4/0-/36/4 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Corviknight_Page1::
# 4233 "data/scripts/sample_sets_options.pory"
	.string "244/4/116+/0-/140/4 (FIGY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Cresselia_Page1::
# 4240 "data/scripts/sample_sets_options.pory"
	.string "252/0-/156+/4/76/4 (HELMET)$"
	.string "252/0-/172/4/76+/4 (GOGGLES)$"
	.string "252/0/180/0/76+/0- (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Archaludon_Page1::
# 4249 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252+/4/252 (HERB)$"
	.string "252/0-/4/44+/204/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Armarouge_Page1::
# 4257 "data/scripts/sample_sets_options.pory"
	.string "212/0-/4/36+/4/252 (POLICY)$"
	.string "228/0/0/196+/84/0- (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Basculegion_Page1::
# 4265 "data/scripts/sample_sets_options.pory"
	.string "4/220+/124/0-/4/156 (BULKY)$"
	.string "4/220+/28/0-/4/252 (BAND)$"
	.string "4/220+/28/0-/4/252 (RAIN)$"
	.string "4/220+/28/0-/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Celesteela_Page1::
# 4275 "data/scripts/sample_sets_options.pory"
	.string "252/0-/20/180+/52/4 (VEST)$"
	.string "252/68+/84/0-/100/4 (FIGY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chi_Yu_Page1::
# 4283 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "52/0-/4/196+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Aegislash_Page1::
# 4291 "data/scripts/sample_sets_options.pory"
	.string "140/0-/0/252+/0/116 (GHOST Z)$"
	.string "236/0-/0/252+/0/20 (LEFTYS)$"
	.string "252/0/4/180+/68/0- (POLICY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Amoonguss_Page1::
# 4300 "data/scripts/sample_sets_options.pory"
	.string "236/0/236+/0/36/0- (HELMET)$"
	.string "244/0/108/0/156+/0- (SITRUS)$"
	.string "252/0/180/0/76+/0- (EJECT)$"
	.string "252/0/20/0/236+/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Annihilape_Page1::
# 4310 "data/scripts/sample_sets_options.pory"
	.string "180/68/4/0-/4/252+ (SITRUS)$"
	.string "252/4/0/0-/0/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Arcanine_Page1::
# 4318 "data/scripts/sample_sets_options.pory"
	.string "236/68/4/0-/4/196+ (GOGGLES)$"
	.string "252/68+/4/0-/108/76 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Arcanine_Hisui_Page1::
# 4326 "data/scripts/sample_sets_options.pory"
	.string "12/196+/4/0-/44/252$"
	.string "Go Back$"
	.string "$"
