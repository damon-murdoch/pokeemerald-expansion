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
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_7:
# 41 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
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
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_3:
# 57 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_4:
# 59 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_5:
# 61 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_6:
# 63 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_3:
# 81 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_4:
# 83 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_5:
# 85 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_6:
# 87 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_3:
# 105 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_4:
# 107 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_5:
# 109 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_6:
# 111 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_3:
# 129 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_4:
# 131 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_5:
# 133 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_6:
# 135 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_3:
# 153 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_4:
# 155 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_5:
# 157 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_6:
# 159 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_3:
# 177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_4:
# 179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_5:
# 181 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_6:
# 183 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_3:
# 201 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_4:
# 203 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_5:
# 205 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_6:
# 207 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_3:
# 225 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_4:
# 227 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_5:
# 229 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_6:
# 231 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_3:
# 249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_4:
# 251 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_5:
# 253 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_6:
# 255 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_3:
# 273 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_4:
# 275 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_5:
# 277 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_6:
# 279 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_3:
# 297 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_4:
# 299 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_5:
# 301 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_6:
# 303 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_3:
# 321 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_4:
# 323 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_5:
# 325 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_6:
# 327 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_7:
# 329 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_8:
# 331 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1::
# 339 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Urshifu_Rs_Page1
# 340 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 342 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_2
# 345 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_3
# 348 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_4
# 351 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_5
# 353 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_6
# 356 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_2:
# 343 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 344 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_3:
# 346 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 347 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_4:
# 349 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 350 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_5:
# 352 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_6:
# 354 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1::
# 362 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Urshifu_Ss_Page1
# 363 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 365 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_2
# 368 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_3
# 371 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_4
# 373 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_5
# 376 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_2:
# 366 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 236, 0, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 367 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_3:
# 369 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 370 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_4:
# 372 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_5:
# 374 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1::
# 382 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Venusaur_Page1
# 383 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 385 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_2
# 388 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_3
# 390 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_4
# 393 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_2:
# 386 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, 2, FALSE, TYPE_GHOST, 10
# 387 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_3:
# 389 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_4:
# 391 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1::
# 399 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Whimsicott_Page1
# 400 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 402 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_2
# 405 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_3
# 408 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_4
# 410 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_5
# 413 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_2:
# 403 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_TEARS, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_DARK, 10
# 404 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_3:
# 406 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_GHOST, 10
# 407 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_4:
# 409 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_5:
# 411 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1::
# 419 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Z_Moves_Page1
# 420 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 422 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_2
# 424 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_3
# 426 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_4
# 428 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_5
# 430 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_6
# 432 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_7
# 434 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_8
# 437 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_2:
# 423 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_3:
# 425 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_4:
# 427 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_5:
# 429 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_6:
# 431 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_7:
# 433 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1_8:
# 435 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1::
# 443 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1
# 444 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 446 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1_2
# 449 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1_3
# 451 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1_4
# 454 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1_2:
# 447 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, 2, FALSE, FALSE, 10
# 448 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1_3:
# 450 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1_4:
# 452 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1::
# 460 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1
# 461 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 463 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1_2
# 466 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1_3
# 468 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1_4
# 471 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1_2:
# 464 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 108, 172, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_FIRE, 10
# 465 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1_3:
# 467 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1_4:
# 469 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1::
# 477 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Z_Moves_Kartana_Page1
# 478 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 480 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1_2
# 483 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1_3
# 485 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1_4
# 488 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1_2:
# 481 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_GRASSIUM_Z, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 84, 84, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_DETECT, MOVE_SUBSTITUTE, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, 2, FALSE, TYPE_FIRE, 10
# 482 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1_3:
# 484 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1_4:
# 486 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Kartana_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1::
# 494 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1
# 495 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 497 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1_2
# 500 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1_3
# 503 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1_4
# 505 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1_5
# 508 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1_2:
# 498 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_WATER, 10
# 499 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1_3:
# 501 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 502 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1_4:
# 504 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1_5:
# 506 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1::
# 514 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1
# 515 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 517 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1_2
# 520 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1_3
# 523 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1_4
# 525 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1_5
# 528 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1_2:
# 518 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 28, 0, 4, 252, 196, 28, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 519 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1_3:
# 521 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 522 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1_4:
# 524 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1_5:
# 526 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1::
# 534 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Torkoal_Page1
# 535 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 537 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_2
# 540 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_3
# 543 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_4
# 545 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_5
# 548 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_2:
# 538 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHARCOAL, ITEM_POKE_BALL, NATURE_QUIET, 1, 1, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 539 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_3:
# 541 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_WEATHER_BALL, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 542 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_4:
# 544 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_5:
# 546 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1::
# 554 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tornadus_Page1
# 555 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 557 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_2
# 560 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_3
# 563 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_4
# 566 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_5
# 568 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_6
# 571 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_2:
# 558 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 559 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_3:
# 561 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 562 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_4:
# 564 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 565 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_5:
# 567 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_6:
# 569 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1::
# 577 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tyranitar_Page1
# 578 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 580 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_2
# 583 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_3
# 586 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_4
# 589 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_5
# 592 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_6
# 595 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_7
# 597 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_8
# 600 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_2:
# 581 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 1, 188, 204, 0, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 582 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_3:
# 584 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 204, 4, 4, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 585 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_4:
# 587 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 204, 0, 0, 0, 52, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 588 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_5:
# 590 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 204, 4, 4, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 591 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_6:
# 593 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_ASSURANCE, MOVE_ICE_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 594 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_7:
# 596 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_8:
# 598 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1::
# 606 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ursaluna_Page1
# 607 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 609 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_2
# 612 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_3
# 615 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_4
# 617 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_5
# 620 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_2:
# 610 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 140, 236, 0, 0, 0, 132, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 611 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_3:
# 613 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 140, 236, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 614 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_4:
# 616 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_5:
# 618 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1::
# 626 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
# 627 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 629 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_2
# 632 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_3
# 635 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_4
# 638 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_5
# 640 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_6
# 643 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_2:
# 630 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 12, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 631 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_3:
# 633 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 244, 0, 0, 0, 196, 68, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 634 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_4:
# 636 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 637 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_5:
# 639 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_6:
# 641 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1::
# 649 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Koko_Page1
# 650 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 652 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_2
# 655 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_3
# 658 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_4
# 660 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_5
# 663 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_2:
# 653 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 172, 0, 12, 92, 36, 196, 31, 31, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_SKY_DROP, MOVE_VOLT_SWITCH, 2, FALSE, TYPE_WATER, 10
# 654 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_3:
# 656 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 657 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_4:
# 659 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_5:
# 661 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1::
# 669 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Thundurus_Page1
# 670 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 672 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_2
# 675 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_3
# 678 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_4
# 681 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_5
# 683 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_6
# 686 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_2:
# 673 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 228, 0, 28, 68, 12, 172, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 674 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_3:
# 676 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 677 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_4:
# 679 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 680 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_5:
# 682 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_6:
# 684 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1::
# 692 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ting_Lu_Page1
# 693 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 695 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_2
# 698 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_3
# 700 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_4
# 703 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_2:
# 696 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TING_LU, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 52, 4, 196, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SAND_TOMB, MOVE_RUINATION, MOVE_BODY_PRESS, 2, FALSE, TYPE_POISON, 10
# 697 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_3:
# 699 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_4:
# 701 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1::
# 709 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tinkaton_Page1
# 710 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 712 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_2
# 715 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_3
# 717 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_4
# 720 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_2:
# 713 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TINKATON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 180, 172, 100, 12, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_FEINT, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 714 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_3:
# 716 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_4:
# 718 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1::
# 726 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Togekiss_Page1
# 727 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 729 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_2
# 732 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_3
# 735 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_4
# 737 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_5
# 740 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_2:
# 730 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_SCOPE_LENS, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 228, 0, 196, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_YAWN, MOVE_FOLLOW_ME, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 731 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_3:
# 733 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_BABIRI_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 2, 0, 236, 0, 196, 60, 4, 12, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_YAWN, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 734 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_4:
# 736 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_5:
# 738 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1::
# 746 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sinistcha_Page1
# 747 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 749 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_2
# 752 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_3
# 755 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_4
# 758 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_5
# 761 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_6
# 763 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_7
# 766 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_2:
# 750 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 236, 0, 188, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 751 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_3:
# 753 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 236, 0, 188, 0, 0, 84, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 754 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_4:
# 756 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 244, 0, 188, 4, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 757 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_5:
# 759 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 760 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_6:
# 762 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_7:
# 764 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1::
# 772 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sneasler_Page1
# 773 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 775 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_2
# 778 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_3
# 781 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_4
# 784 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_5
# 786 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_6
# 789 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_2:
# 776 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_COACHING, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 777 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_3:
# 779 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_DARK, 10
# 780 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_4:
# 782 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_WHITE_HERB, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_STELLAR, 10
# 783 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_5:
# 785 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_6:
# 787 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1::
# 795 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sylveon_Page1
# 796 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 798 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_2
# 801 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_3
# 804 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_4
# 807 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_5
# 809 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_6
# 812 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_2:
# 799 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 180, 0, 244, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_WATER, 10
# 800 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_3:
# 802 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_PIXIE_PLATE, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 172, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_QUICK_ATTACK, 2, FALSE, TYPE_WATER, 10
# 803 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_4:
# 805 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 92, 4, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_MOONBLAST, MOVE_PSYSHOCK, 2, FALSE, TYPE_FAIRY, 10
# 806 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_5:
# 808 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_6:
# 810 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1::
# 818 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Talonflame_Page1
# 819 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 821 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_2
# 824 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_3
# 827 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_4
# 830 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_5
# 832 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_6
# 835 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_2:
# 822 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_SLEEP_TALK, MOVE_U_TURN, 2, FALSE, TYPE_FLYING, 10
# 823 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_3:
# 825 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_GUARD, MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 826 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_4:
# 828 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_TAUNT, 2, FALSE, TYPE_FLYING, 10
# 829 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_5:
# 831 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_6:
# 833 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1::
# 841 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Fini_Page1
# 842 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 844 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_2
# 847 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_3
# 850 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_4
# 853 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_5
# 856 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_6
# 859 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_7
# 861 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_8
# 864 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_2:
# 845 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 100, 148, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 846 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_3:
# 848 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 12, 236, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 849 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_4:
# 851 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MUDDY_WATER, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 852 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_5:
# 854 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_TRICK, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 855 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_6:
# 857 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SCALD, MOVE_SOAK, MOVE_ICE_BEAM, 2, FALSE, TYPE_STEEL, 10
# 858 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_7:
# 860 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_8:
# 862 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1::
# 870 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Regieleki_Page1
# 871 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 873 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_2
# 876 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_3
# 878 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_4
# 881 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_2:
# 874 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIELEKI, 65, ITEM_MAGNET, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 875 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_3:
# 877 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_4:
# 879 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1::
# 887 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Page1
# 888 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 890 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_2
# 892 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_3
# 894 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_4
# 896 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_5
# 898 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_6
# 900 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_7
# 902 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_8
# 905 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_2:
# 891 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_3:
# 893 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_4:
# 895 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_5:
# 897 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_6:
# 899 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_7:
# 901 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_8:
# 903 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2::
# 911 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Page2
# 912 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 914 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_2
# 916 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_3
# 918 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_4
# 920 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_5
# 922 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_6
# 924 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_7
# 926 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_8
# 929 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_2:
# 915 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_3:
# 917 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_4:
# 919 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_5:
# 921 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_6:
# 923 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_7:
# 925 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_8:
# 927 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1::
# 935 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Miraidon_Page1
# 936 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 938 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_2
# 941 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_3
# 943 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_4
# 946 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_2:
# 939 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIRAIDON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 92, 0, 4, 212, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_ELECTRO_DRIFT, MOVE_DRACO_METEOR, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_FAIRY, 10
# 940 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_3:
# 942 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_4:
# 944 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1::
# 952 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
# 953 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 955 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_2
# 958 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_3
# 960 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_4
# 963 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_2:
# 956 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, 2, FALSE, FALSE, 10
# 957 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_3:
# 959 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_4:
# 961 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1::
# 969 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Xerneas_Page1
# 970 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 972 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_2
# 975 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_3
# 978 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_4
# 980 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_5
# 983 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_2:
# 973 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, 2, FALSE, FALSE, 10
# 974 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_3:
# 976 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, 2, FALSE, FALSE, 10
# 977 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_4:
# 979 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_5:
# 981 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1::
# 989 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Zacian_Page1
# 990 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 992 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_2
# 995 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_3
# 998 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_4
# 1000 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_5
# 1003 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_2:
# 993 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BEHEMOTH_BLADE, MOVE_PLAY_ROUGH, MOVE_TERA_BLAST, 2, FALSE, TYPE_GROUND, 10
# 994 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_3:
# 996 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_SACRED_SWORD, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_STELLAR, 10
# 997 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_4:
# 999 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_5:
# 1001 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1::
# 1009 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
# 1010 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1012 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_2
# 1015 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_3
# 1017 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_4
# 1020 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_2:
# 1013 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAMAZENTA, 65, ITEM_RUSTED_SHIELD, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 76, 0, 244, 188, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, 2, FALSE, TYPE_DRAGON, 10
# 1014 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_3:
# 1016 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_4:
# 1018 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1::
# 1026 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Calyrex_Page1
# 1027 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1029 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_2
# 1032 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_3
# 1035 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_4
# 1038 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_5
# 1041 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_6
# 1043 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_7
# 1046 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_2:
# 1030 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_GHOST, 10
# 1031 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_3:
# 1033 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 20, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_DARK, 10
# 1034 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_4:
# 1036 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 116, 0, 0, 0, 140, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 1037 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_5:
# 1039 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 116, 4, 12, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 1040 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_6:
# 1042 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_7:
# 1044 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1::
# 1052 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Groudon_Page1
# 1053 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1055 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_2
# 1058 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_3
# 1061 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_4
# 1064 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_5
# 1066 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_6
# 1069 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_2:
# 1056 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, 2, FALSE, TYPE_FIRE, 10
# 1057 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_3:
# 1059 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, 2, FALSE, FALSE, 10
# 1060 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_4:
# 1062 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_ROAR, 2, FALSE, FALSE, 10
# 1063 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_5:
# 1065 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_6:
# 1067 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1::
# 1075 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Koraidon_Page1
# 1076 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1078 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_2
# 1081 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_3
# 1084 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_4
# 1086 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_5
# 1089 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_2:
# 1079 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 108, 116, 4, 212, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 1080 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_3:
# 1082 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 1083 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_4:
# 1085 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_5:
# 1087 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1::
# 1095 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Kyogre_Page1
# 1096 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1098 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_2
# 1101 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_3
# 1104 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_4
# 1107 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_5
# 1109 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_6
# 1112 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_2:
# 1099 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 132, 44, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 1100 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_3:
# 1102 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 164, 12, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 1103 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_4:
# 1105 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_SCALD, MOVE_THUNDER, 2, FALSE, FALSE, 10
# 1106 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_5:
# 1108 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_6:
# 1110 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1::
# 1118 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Lunala_Page1
# 1119 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1121 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_2
# 1124 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_3
# 1126 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_4
# 1129 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_2:
# 1122 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 132, 52, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_WIDE_GUARD, MOVE_MOONGEIST_BEAM, MOVE_METEOR_BEAM, MOVE_TRICK_ROOM, 2, FALSE, TYPE_DARK, 10
# 1123 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_3:
# 1125 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_4:
# 1127 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1::
# 1135 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rillaboom_Page1
# 1136 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1138 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_2
# 1141 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_3
# 1144 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_4
# 1146 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_5
# 1149 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_2:
# 1139 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 116, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1140 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_3:
# 1142 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 196, 12, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1143 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_4:
# 1145 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_5:
# 1147 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1::
# 1155 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Roaring_Moon_Page1
# 1156 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1158 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_2
# 1161 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_3
# 1163 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_4
# 1166 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_2:
# 1159 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROARING_MOON, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ACROBATICS, MOVE_KNOCK_OFF, 2, FALSE, TYPE_FLYING, 10
# 1160 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_3:
# 1162 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_4:
# 1164 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1::
# 1172 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rotom_Wash_Page1
# 1173 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1175 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_2
# 1178 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_3
# 1181 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_4
# 1183 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_5
# 1186 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_2:
# 1176 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 132, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, 2, FALSE, TYPE_STEEL, 10
# 1177 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_3:
# 1179 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 44, 4, 60, 148, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_STEEL, 10
# 1180 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_4:
# 1182 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_5:
# 1184 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1::
# 1192 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Pelipper_Page1
# 1193 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1195 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_2
# 1198 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_3
# 1200 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_4
# 1203 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_2:
# 1196 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PELIPPER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_WEATHER_BALL, MOVE_HURRICANE, 2, FALSE, TYPE_GHOST, 10
# 1197 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_3:
# 1199 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_4:
# 1201 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1::
# 1209 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Politoed_Page1
# 1210 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1212 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_2
# 1215 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_3
# 1217 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_4
# 1220 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_2:
# 1213 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 220, 0, 196, 12, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENCORE, MOVE_PERISH_SONG, MOVE_SCALD, 2, FALSE, TYPE_GRASS, 10
# 1214 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_3:
# 1216 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_4:
# 1218 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1::
# 1226 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Porygon2_Page1
# 1227 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1229 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_2
# 1232 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_3
# 1235 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_4
# 1237 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_5
# 1240 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_2:
# 1230 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 244, 0, 92, 4, 116, 52, 31, 0, 31, 31, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1231 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_3:
# 1233 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 244, 0, 92, 0, 116, 52, 31, 0, 31, 0, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1234 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_4:
# 1236 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_5:
# 1238 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1::
# 1246 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Raging_Bolt_Page1
# 1247 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1249 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_2
# 1252 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_3
# 1255 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_4
# 1257 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_5
# 1260 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_2:
# 1250 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 148, 0, 36, 180, 100, 44, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1251 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_3:
# 1253 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 124, 4, 100, 36, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1254 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_4:
# 1256 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_5:
# 1258 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1::
# 1266 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Regidrago_Page1
# 1267 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1269 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_2
# 1272 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_3
# 1274 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_4
# 1277 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_2:
# 1270 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIDRAGO, 65, ITEM_DRAGON_FANG, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, 2, FALSE, TYPE_STEEL, 10
# 1271 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_3:
# 1273 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_4:
# 1275 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Page1::
# 1283 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Page1
# 1284 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1286 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_2
# 1288 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_3
# 1290 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_4
# 1292 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_5
# 1294 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_6
# 1296 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_7
# 1298 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_8
# 1301 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_2:
# 1287 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_3:
# 1289 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_4:
# 1291 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_5:
# 1293 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_6:
# 1295 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_7:
# 1297 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_8:
# 1299 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Page2::
# 1307 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Page2
# 1308 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1310 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_2
# 1312 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_3
# 1314 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_4
# 1316 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_5
# 1318 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_6
# 1320 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_7
# 1322 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_8
# 1325 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_2:
# 1311 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_3:
# 1313 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_4:
# 1315 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_5:
# 1317 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_6:
# 1319 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_7:
# 1321 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_8:
# 1323 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1::
# 1331 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Manectric_Page1
# 1332 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1334 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_2
# 1337 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_3
# 1339 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_4
# 1342 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_2:
# 1335 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_POKE_BALL, NATURE_TIMID, 1, 1, 244, 0, 4, 220, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GRASS, 10
# 1336 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_3:
# 1338 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_4:
# 1340 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1::
# 1348 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Mawile_Page1
# 1349 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1351 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_2
# 1354 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_3
# 1357 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_4
# 1359 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_5
# 1362 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_2:
# 1352 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_BRAVE, 1, 1, 156, 196, 0, 0, 0, 156, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 1353 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_3:
# 1355 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 156, 196, 4, 4, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 1356 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_4:
# 1358 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_5:
# 1360 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1::
# 1368 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Metagross_Page1
# 1369 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1371 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_2
# 1374 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_3
# 1376 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_4
# 1379 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_2:
# 1372 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_FIRE, 10
# 1373 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_3:
# 1375 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_4:
# 1377 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1::
# 1385 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Salamence_Page1
# 1386 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1388 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_2
# 1391 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_3
# 1394 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_4
# 1397 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_5
# 1399 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_6
# 1402 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_2:
# 1389 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_NAIVE, 0, 0, 0, 44, 0, 212, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, 2, FALSE, TYPE_WATER, 10
# 1390 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_3:
# 1392 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 92, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, 2, FALSE, TYPE_WATER, 10
# 1393 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_4:
# 1395 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DRACO_METEOR, 2, FALSE, TYPE_WATER, 10
# 1396 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_5:
# 1398 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_6:
# 1400 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1::
# 1408 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Tyranitar_Page1
# 1409 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1411 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_2
# 1414 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_3
# 1416 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_4
# 1419 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_2:
# 1412 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 44, 164, 20, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT, 2, FALSE, FALSE, 10
# 1413 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_3:
# 1415 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_4:
# 1417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1::
# 1425 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Charizard_Page1
# 1426 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1428 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_2
# 1431 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_3
# 1434 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_4
# 1436 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_5
# 1439 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_2:
# 1429 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, 2, FALSE, TYPE_GRASS, 10
# 1430 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_3:
# 1432 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 236, 44, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_ROOST, 2, FALSE, TYPE_GRASS, 10
# 1433 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_4:
# 1435 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_5:
# 1437 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1::
# 1445 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Gardevoir_Page1
# 1446 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1448 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_2
# 1451 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_3
# 1453 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_4
# 1456 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_2:
# 1449 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1450 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_3:
# 1452 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_4:
# 1454 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1::
# 1462 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Gengar_Page1
# 1463 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1465 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_2
# 1468 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_3
# 1471 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_4
# 1473 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_5
# 1476 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_2:
# 1466 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 68, 180, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, 2, FALSE, TYPE_WATER, 10
# 1467 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_3:
# 1469 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 76, 0, 28, 180, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, 2, FALSE, TYPE_WATER, 10
# 1470 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_4:
# 1472 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_5:
# 1474 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1::
# 1482 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
# 1483 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1485 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_2
# 1488 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_3
# 1490 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_4
# 1493 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_2:
# 1486 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 36, 196, 20, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1487 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_3:
# 1489 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_4:
# 1491 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1::
# 1499 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Latias_Page1
# 1500 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1502 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_2
# 1505 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_3
# 1507 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_4
# 1510 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_2:
# 1503 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LATIAS, 65, ITEM_LATIASITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 60, 108, 76, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_RECOVER, 2, FALSE, FALSE, 10
# 1504 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_3:
# 1506 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_4:
# 1508 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1::
# 1516 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Milotic_Page1
# 1517 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1519 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_2
# 1522 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_3
# 1525 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_4
# 1527 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_5
# 1530 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_2:
# 1520 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 1, 0, 180, 0, 204, 4, 4, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_COIL, MOVE_HYPNOSIS, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 1521 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_3:
# 1523 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 244, 0, 220, 4, 4, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RECOVER, MOVE_ICY_WIND, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 1524 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_4:
# 1526 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_5:
# 1528 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1::
# 1536 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Cs_Page1
# 1537 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1539 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_2
# 1542 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_3
# 1544 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_4
# 1547 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_2:
# 1540 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_CORNERSTONE, 65, ITEM_CORNERSTONE_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_POWER_WHIP, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_ROCK, 10
# 1541 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_3:
# 1543 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_4:
# 1545 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1::
# 1553 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Hf_Page1
# 1554 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1556 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_2
# 1559 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_3
# 1562 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_4
# 1564 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_5
# 1567 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_2:
# 1557 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 76, 52, 188, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 1558 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_3:
# 1560 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 1561 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_4:
# 1563 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_5:
# 1565 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1::
# 1573 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Ws_Page1
# 1574 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1576 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_2
# 1579 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_3
# 1581 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_4
# 1584 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_2:
# 1577 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_WELLSPRING, 65, ITEM_WELLSPRING_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 220, 60, 44, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, 2, FALSE, TYPE_WATER, 10
# 1578 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_3:
# 1580 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_4:
# 1582 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1::
# 1590 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Iron_Hands_Page1
# 1591 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1593 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_2
# 1596 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_3
# 1599 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_4
# 1601 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_5
# 1604 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_2:
# 1594 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 100, 156, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 1595 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_3:
# 1597 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 1598 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_4:
# 1600 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_5:
# 1602 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1::
# 1610 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kartana_Page1
# 1611 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1613 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_2
# 1616 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_3
# 1619 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_4
# 1621 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_5
# 1624 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_2:
# 1614 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 116, 4, 4, 252, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_SMART_STRIKE, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH, 2, FALSE, TYPE_FIRE, 10
# 1615 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_3:
# 1617 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_DETECT, 2, FALSE, TYPE_FIRE, 10
# 1618 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_4:
# 1620 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_5:
# 1622 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1::
# 1630 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kingambit_Page1
# 1631 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1633 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_2
# 1636 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_3
# 1639 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_4
# 1641 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_5
# 1644 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_2:
# 1634 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_BLACK_GLASSES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 1635 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_3:
# 1637 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, MOVE_TERA_BLAST, MOVE_IRON_HEAD, 2, FALSE, TYPE_FLYING, 10
# 1638 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_4:
# 1640 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_5:
# 1642 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1::
# 1650 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Lando_T_Page1
# 1651 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1653 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_2
# 1656 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_3
# 1659 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_4
# 1661 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_5
# 1664 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_2:
# 1654 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FLYING, 10
# 1655 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_3:
# 1657 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 1658 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_4:
# 1660 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_5:
# 1662 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1::
# 1670 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Landorus_Page1
# 1671 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1673 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_2
# 1676 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_3
# 1679 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_4
# 1681 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_5
# 1684 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_2:
# 1674 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 132, 0, 4, 252, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 1675 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_3:
# 1677 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 1678 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_4:
# 1680 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_5:
# 1682 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1::
# 1690 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Heatran_Page1
# 1691 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1693 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_2
# 1696 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_3
# 1699 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_4
# 1701 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_5
# 1704 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_2:
# 1694 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 244, 0, 4, 20, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, 2, FALSE, TYPE_GRASS, 10
# 1695 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_3:
# 1697 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 36, 36, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_TERA_BLAST, MOVE_HEAT_WAVE, 2, FALSE, TYPE_GRASS, 10
# 1698 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_4:
# 1700 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_5:
# 1702 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1::
# 1710 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Incineroar_Page1
# 1711 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1713 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_2
# 1716 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_3
# 1719 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_4
# 1722 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_5
# 1724 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_6
# 1727 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_2:
# 1714 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1715 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_3:
# 1717 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 4, 236, 4, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_WILL_O_WISP, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1718 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_4:
# 1720 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 244, 36, 4, 4, 0, 220, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1721 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_5:
# 1723 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_6:
# 1725 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1::
# 1733 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Indeedee_Page1
# 1734 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1736 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_2
# 1739 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_3
# 1741 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_4
# 1744 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_2:
# 1737 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_EXPANDING_FORCE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FIGHTING, 10
# 1738 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_3:
# 1740 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_4:
# 1742 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1::
# 1750 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Indeedee_F_Page1
# 1751 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1753 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_2
# 1756 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_3
# 1758 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_4
# 1761 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_2:
# 1754 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE_F, 65, ITEM_PSYCHIC_SEED, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 252, 0, 204, 4, 4, 44, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1755 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_3:
# 1757 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_4:
# 1759 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1::
# 1767 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Iron_Bundle_Page1
# 1768 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1770 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_2
# 1773 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_3
# 1775 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_4
# 1778 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_2:
# 1771 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_BUNDLE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_GRASS, 10
# 1772 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_3:
# 1774 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_4:
# 1776 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1::
# 1784 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gastrodon_Page1
# 1785 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1787 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_2
# 1790 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_3
# 1793 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_4
# 1795 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_5
# 1798 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_2:
# 1788 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 172, 0, 108, 4, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 1789 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_3:
# 1791 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 172, 0, 116, 0, 220, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 1792 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_4:
# 1794 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_5:
# 1796 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1::
# 1804 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gholdengo_Page1
# 1805 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1807 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_2
# 1810 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_3
# 1813 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_4
# 1816 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_5
# 1818 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_6
# 1821 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_2:
# 1808 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 212, 0, 4, 60, 212, 20, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 1809 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_3:
# 1811 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 36, 212, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 1812 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_4:
# 1814 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 36, 0, 4, 252, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_STEEL_BEAM, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 1815 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_5:
# 1817 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_6:
# 1819 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1::
# 1827 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gigantamax_Page1
# 1828 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1830 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_2
# 1832 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_3
# 1834 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_4
# 1836 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_5
# 1839 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_2:
# 1831 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_3:
# 1833 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_4:
# 1835 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1_5:
# 1837 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1::
# 1845 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1
# 1846 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1848 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_2
# 1851 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_3
# 1853 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_4
# 1856 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_2:
# 1849 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARTI_BERRY, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 4, 252, 244, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BLAST_BURN, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH, 2, TRUE, FALSE, 10
# 1850 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_3:
# 1852 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1_4:
# 1854 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1::
# 1862 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1
# 1863 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1865 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_2
# 1868 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_3
# 1870 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_4
# 1873 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_2:
# 1866 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 156, 0, 36, 116, 172, 20, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, 2, TRUE, FALSE, 10
# 1867 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_3:
# 1869 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1_4:
# 1871 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1::
# 1879 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Grimmsnarl_Page1
# 1880 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1882 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_2
# 1885 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_3
# 1888 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_4
# 1890 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_5
# 1893 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_2:
# 1883 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 236, 0, 156, 0, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 1884 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_3:
# 1886 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 244, 4, 196, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_SPIRIT_BREAK, 2, FALSE, TYPE_GHOST, 10
# 1887 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_4:
# 1889 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_5:
# 1891 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1::
# 1899 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Hatterene_Page1
# 1900 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1902 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_2
# 1905 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_3
# 1907 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_4
# 1910 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_2:
# 1903 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HATTERENE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 2, 1, 212, 0, 84, 0, 188, 20, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 1904 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_3:
# 1906 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_4:
# 1908 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1::
# 1916 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dragonite_Page1
# 1917 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1919 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_2
# 1922 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_3
# 1925 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_4
# 1927 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_5
# 1930 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_2:
# 1920 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_NORMAL, 10
# 1921 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_3:
# 1923 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_LOADED_DICE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HAZE, MOVE_SCALE_SHOT, 2, FALSE, TYPE_FAIRY, 10
# 1924 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_4:
# 1926 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_5:
# 1928 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1::
# 1936 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Farigiraf_Page1
# 1937 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1939 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_2
# 1942 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_3
# 1944 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_4
# 1947 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_2:
# 1940 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FARIGIRAF, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 228, 0, 116, 4, 4, 156, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_HYPER_VOICE, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1941 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_3:
# 1943 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_4:
# 1945 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1::
# 1953 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Flutter_Mane_Page1
# 1954 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1956 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_2
# 1959 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_3
# 1962 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_4
# 1965 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_5
# 1967 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_6
# 1970 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_2:
# 1957 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 1958 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_3:
# 1960 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 116, 0, 156, 196, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_ICY_WIND, 2, FALSE, TYPE_FAIRY, 10
# 1961 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_4:
# 1963 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 228, 0, 204, 68, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 1964 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_5:
# 1966 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_6:
# 1968 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1::
# 1976 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Garchomp_Page1
# 1977 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1979 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_2
# 1982 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_3
# 1985 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_4
# 1987 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_5
# 1990 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_2:
# 1980 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 156, 4, 252, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_DRAGON_CLAW, 2, FALSE, TYPE_FIRE, 10
# 1981 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_3:
# 1983 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_GROUND, 10
# 1984 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_4:
# 1986 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_5:
# 1988 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1::
# 1996 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Garganacl_Page1
# 1997 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1999 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_2
# 2002 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_3
# 2005 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_4
# 2007 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_5
# 2010 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_2:
# 2000 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_SASSY, 0, 0, 252, 0, 20, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 2001 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_3:
# 2003 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 252, 4, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 2004 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_4:
# 2006 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_5:
# 2008 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1::
# 2016 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Basculegion_Page1
# 2017 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2019 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_2
# 2022 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_3
# 2025 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_4
# 2027 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_5
# 2030 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_2:
# 2020 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 164, 220, 4, 116, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2021 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_3:
# 2023 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2024 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_4:
# 2026 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_5:
# 2028 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1::
# 2036 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chi_Yu_Page1
# 2037 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2039 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_2
# 2042 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_3
# 2045 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_4
# 2047 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_5
# 2050 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_2:
# 2040 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_SNARL, 2, FALSE, TYPE_GHOST, 10
# 2041 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_3:
# 2043 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GHOST, 10
# 2044 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_4:
# 2046 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_5:
# 2048 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1::
# 2056 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chien_Pao_Page1
# 2057 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2059 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_2
# 2062 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_3
# 2064 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_4
# 2067 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_2:
# 2060 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHIEN_PAO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICICLE_CRASH, MOVE_SACRED_SWORD, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 2061 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_3:
# 2063 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_4:
# 2065 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1::
# 2073 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Cresselia_Page1
# 2074 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2076 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_2
# 2079 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_3
# 2082 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_4
# 2085 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_5
# 2087 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_6
# 2090 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_2:
# 2077 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 1, 252, 0, 156, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2078 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_3:
# 2080 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 1, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2081 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_4:
# 2083 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_SASSY, 0, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2084 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_5:
# 2086 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_6:
# 2088 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1::
# 2096 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dragapult_Page1
# 2097 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2099 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_2
# 2102 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_3
# 2105 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_4
# 2107 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_5
# 2110 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_2:
# 2100 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 252, 4, 44, 164, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DARTS, MOVE_LIGHT_SCREEN, MOVE_WILL_O_WISP, 2, FALSE, TYPE_WATER, 10
# 2101 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_3:
# 2103 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_OUTRAGE, 2, FALSE, TYPE_DRAGON, 10
# 2104 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_4:
# 2106 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_5:
# 2108 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1::
# 2116 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Aegislash_Page1
# 2117 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2119 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_2
# 2122 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_3
# 2125 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_4
# 2127 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_5
# 2130 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_2:
# 2120 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, 2, FALSE, TYPE_WATER, 10
# 2121 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_3:
# 2123 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 252, 0, 4, 0, 180, 68, 31, 0, 31, 0, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, 2, FALSE, FALSE, 10
# 2124 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_4:
# 2126 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_5:
# 2128 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1::
# 2136 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Amoonguss_Page1
# 2137 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2139 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_2
# 2142 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_3
# 2145 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_4
# 2148 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_5
# 2151 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_6
# 2153 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_7
# 2156 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_2:
# 2140 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_RELAXED, 2, 1, 236, 0, 236, 0, 0, 36, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 2141 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_3:
# 2143 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 244, 0, 108, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 2144 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_4:
# 2146 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_SPORE, MOVE_RAGE_POWDER, 2, FALSE, TYPE_WATER, 10
# 2147 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_5:
# 2149 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 20, 0, 0, 236, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 2150 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_6:
# 2152 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_7:
# 2154 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1::
# 2162 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Annihilape_Page1
# 2163 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2165 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_2
# 2168 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_3
# 2171 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_4
# 2173 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_5
# 2176 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_2:
# 2166 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 180, 68, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2167 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_3:
# 2169 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_FINAL_GAMBIT, 2, FALSE, TYPE_FIGHTING, 10
# 2170 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_4:
# 2172 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_5:
# 2174 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1::
# 2182 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Arcanine_Page1
# 2183 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2185 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_2
# 2188 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_3
# 2191 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_4
# 2193 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_5
# 2196 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_2:
# 2186 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 236, 68, 4, 196, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EXTREME_SPEED, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 2187 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_3:
# 2189 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 252, 68, 4, 76, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, MOVE_SNARL, 2, FALSE, TYPE_WATER, 10
# 2190 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_4:
# 2192 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_5:
# 2194 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1::
# 2202 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Archaludon_Page1
# 2203 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2205 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_2
# 2208 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_3
# 2211 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_4
# 2213 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_5
# 2216 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_2:
# 2206 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, 2, FALSE, TYPE_ELECTRIC, 10
# 2207 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_3:
# 2209 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 4, 4, 44, 204, 31, 31, 31, 31, 31, 31, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_BODY_PRESS, 2, FALSE, TYPE_GRASS, 10
# 2210 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_4:
# 2212 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_5:
# 2214 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
# 5 "data/scripts/sample_sets_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                               B: Go Back$"

Auto_Text_Sample_Sets_Page1::
# 2220 "data/scripts/sample_sets_options.pory"
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page1::
# 2227 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "AMOONGUSS$"
	.string "ANNIHILAPE$"
	.string "ARCANINE$"
	.string "ARCHALUDON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page2::
# 2238 "data/scripts/sample_sets_options.pory"
	.string "BASCULEGION$"
	.string "CHI-YU$"
	.string "CHIEN-PAO$"
	.string "CRESSELIA$"
	.string "DRAGAPULT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page3::
# 2249 "data/scripts/sample_sets_options.pory"
	.string "DRAGONITE$"
	.string "FARIGIRAF$"
	.string "FLUTTER MANE$"
	.string "GARCHOMP$"
	.string "GARGANACL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page4::
# 2260 "data/scripts/sample_sets_options.pory"
	.string "GASTRODON$"
	.string "GHOLDENGO$"
	.string "GIGANTAMAX$"
	.string "GRIMMSNARL$"
	.string "HATTERENE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page5::
# 2271 "data/scripts/sample_sets_options.pory"
	.string "HEATRAN$"
	.string "INCINEROAR$"
	.string "INDEEDEE$"
	.string "INDEEDEE-F$"
	.string "IRON BUNDLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page6::
# 2282 "data/scripts/sample_sets_options.pory"
	.string "IRON HANDS$"
	.string "KARTANA$"
	.string "KINGAMBIT$"
	.string "LANDO-T$"
	.string "LANDORUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page7::
# 2293 "data/scripts/sample_sets_options.pory"
	.string "MEGA$"
	.string "MILOTIC$"
	.string "OGERPON-CS$"
	.string "OGERPON-HF$"
	.string "OGERPON-WS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page8::
# 2304 "data/scripts/sample_sets_options.pory"
	.string "PELIPPER$"
	.string "POLITOED$"
	.string "PORYGON2$"
	.string "RAGING BOLT$"
	.string "REGIDRAGO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page9::
# 2315 "data/scripts/sample_sets_options.pory"
	.string "REGIELEKI$"
	.string "RESTRICTED$"
	.string "RILLABOOM$"
	.string "ROARING MOON$"
	.string "ROTOM-WASH$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page10::
# 2326 "data/scripts/sample_sets_options.pory"
	.string "SINISTCHA$"
	.string "SNEASLER$"
	.string "SYLVEON$"
	.string "TALONFLAME$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page11::
# 2337 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "THUNDURUS$"
	.string "TING-LU$"
	.string "TINKATON$"
	.string "TOGEKISS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page12::
# 2348 "data/scripts/sample_sets_options.pory"
	.string "TORKOAL$"
	.string "TORNADUS$"
	.string "TYRANITAR$"
	.string "URSALUNA$"
	.string "URSALUNA-BLOODMOON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page13::
# 2359 "data/scripts/sample_sets_options.pory"
	.string "URSHIFU-RS$"
	.string "URSHIFU-SS$"
	.string "VENUSAUR$"
	.string "WHIMSICOTT$"
	.string "Z MOVES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Urshifu_Rs_Page1::
# 2370 "data/scripts/sample_sets_options.pory"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "12/156+/4/0-/84/252 (MYSTIC)$"
	.string "12/156+/4/0-/84/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Urshifu_Ss_Page1::
# 2379 "data/scripts/sample_sets_options.pory"
	.string "0/236+/0/0-/20/252 (BAND)$"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Venusaur_Page1::
# 2387 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Whimsicott_Page1::
# 2394 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/0/0/252+ (CLOAK)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Z_Moves_Page1::
# 2402 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "GARCHOMP$"
	.string "KARTANA$"
	.string "LANDO-T$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Z_Moves_Aegislash_Page1::
# 2413 "data/scripts/sample_sets_options.pory"
	.string "140/0-/0/252+/0/116 (GHOST Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Z_Moves_Garchomp_Page1::
# 2420 "data/scripts/sample_sets_options.pory"
	.string "108/172+/4/0-/4/220 (GROUND Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Z_Moves_Kartana_Page1::
# 2427 "data/scripts/sample_sets_options.pory"
	.string "84/84/4/0-/84/252+ (GRASS Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Z_Moves_Lando_T_Page1::
# 2434 "data/scripts/sample_sets_options.pory"
	.string "156/116+/36/0-/108/92 (GROUND Z)$"
	.string "20/164+/4/0-/68/252 (GROUND Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Z_Moves_Tapu_Koko_Page1::
# 2442 "data/scripts/sample_sets_options.pory"
	.string "28/0-/4/196+/28/252 (ELEC Z)$"
	.string "4/0-/4/244/4/252+ (ELEC Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Torkoal_Page1::
# 2450 "data/scripts/sample_sets_options.pory"
	.string "204/0/0/196+/108/0-$"
	.string "204/0/0/196+/108/0- (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tornadus_Page1::
# 2458 "data/scripts/sample_sets_options.pory"
	.string "196/0-/228+/4/76/4 (CLOAK)$"
	.string "196/0-/228+/4/76/4 (HELMET)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tyranitar_Page1::
# 2467 "data/scripts/sample_sets_options.pory"
	.string "188/204+/0/0/116/0- (LIFE ORB)$"
	.string "188/204+/4/0-/108/4 (LIFE ORB)$"
	.string "252/204+/0/0/52/0- (LUM BERRY)$"
	.string "252/204+/4/0-/44/4 (LUM BERRY)$"
	.string "4/244/4/0-/4/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ursaluna_Page1::
# 2478 "data/scripts/sample_sets_options.pory"
	.string "140/236+/0/0/132/0-$"
	.string "140/236+/4/0-/116/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1::
# 2486 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/196+/52/12 (ORB)$"
	.string "244/0/0/196+/68/0- (ORB)$"
	.string "4/0-/4/196+/52/252 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Koko_Page1::
# 2495 "data/scripts/sample_sets_options.pory"
	.string "172/0-/12/36/196/92+ (VEST)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Thundurus_Page1::
# 2503 "data/scripts/sample_sets_options.pory"
	.string "228/0-/28/12/172+/68$"
	.string "4/0-/0/252/0/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ting_Lu_Page1::
# 2512 "data/scripts/sample_sets_options.pory"
	.string "52/4/196+/0-/252/4 (HELMET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tinkaton_Page1::
# 2519 "data/scripts/sample_sets_options.pory"
	.string "180/172/100/0-/44+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Togekiss_Page1::
# 2526 "data/scripts/sample_sets_options.pory"
	.string "228/0-/196+/4/76/4 (LENS)$"
	.string "236/0-/196+/4/12/60 (BABIRI)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sinistcha_Page1::
# 2534 "data/scripts/sample_sets_options.pory"
	.string "236/0-/188+/4/76/4 (SITRUS)$"
	.string "236/0/188+/0/84/0- (SITRUS)$"
	.string "244/0-/188+/4/68/4 (LEFTYS)$"
	.string "244/0/188+/0/76/0- (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sneasler_Page1::
# 2544 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (COACHING)$"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "4/244/4/0-/4/252+ (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sylveon_Page1::
# 2553 "data/scripts/sample_sets_options.pory"
	.string "180/0-/244/76+/4/4 (LEFTYS)$"
	.string "252/0-/172/76+/4/4 (PLATE)$"
	.string "252/0-/92/156+/4/4 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Talonflame_Page1::
# 2562 "data/scripts/sample_sets_options.pory"
	.string "4/252+/0/0-/0/252 (BANDED)$"
	.string "4/252+/0/0-/0/252 (LIFE ORB)$"
	.string "4/252/0/0-/0/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Fini_Page1::
# 2571 "data/scripts/sample_sets_options.pory"
	.string "252/0-/100/4/4+/148 (SUPPORT)$"
	.string "252/0-/12/4/4/236+ (SUPPORT)$"
	.string "252/0-/172/4/76+/4 (CALM MIND)$"
	.string "252/0-/4/196+/4/52 (SPECS)$"
	.string "4/0-/4/196+/52/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Regieleki_Page1::
# 2582 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (MAGNET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Page1::
# 2589 "data/scripts/sample_sets_options.pory"
	.string "CALYREX$"
	.string "GROUDON$"
	.string "KORAIDON$"
	.string "KYOGRE$"
	.string "LUNALA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Page2::
# 2600 "data/scripts/sample_sets_options.pory"
	.string "MIRAIDON$"
	.string "RAYQUAZA$"
	.string "XERNEAS$"
	.string "ZACIAN$"
	.string "ZAMAZENTA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Miraidon_Page1::
# 2611 "data/scripts/sample_sets_options.pory"
	.string "92/0-/4/196+/4/212 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Rayquaza_Page1::
# 2618 "data/scripts/sample_sets_options.pory"
	.string "4/252/0/0-/0/252+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Xerneas_Page1::
# 2625 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+$"
	.string "44/0-/20/188/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Zacian_Page1::
# 2633 "data/scripts/sample_sets_options.pory"
	.string "252/76+/4/0-/12/164 (GROUND)$"
	.string "252/76+/4/0-/12/164 (STELLAR)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Zamazenta_Page1::
# 2641 "data/scripts/sample_sets_options.pory"
	.string "76/0/244+/0-/0/188$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Calyrex_Page1::
# 2648 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SHADOW)$"
	.string "20/0-/4/220/4/252+ (SHADOW)$"
	.string "252/116+/0/0/140/0- (ICE)$"
	.string "252/116+/4/0-/124/12 (ICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Groudon_Page1::
# 2658 "data/scripts/sample_sets_options.pory"
	.string "252/156+/4/0-/84/12 (AMULET)$"
	.string "252/156+/4/0-/84/12 (PRIMAL)$"
	.string "4/0-/4/244/4/252+ (PRIMAL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Koraidon_Page1::
# 2667 "data/scripts/sample_sets_options.pory"
	.string "108/116+/4/0-/68/212 (ORB)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Kyogre_Page1::
# 2675 "data/scripts/sample_sets_options.pory"
	.string "252/0-/132/76+/4/44 (MYSTIC)$"
	.string "252/0-/164/76+/4/12 (PRIMAL)$"
	.string "4/0-/4/244+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Lunala_Page1::
# 2684 "data/scripts/sample_sets_options.pory"
	.string "140/0-/132/180+/4/52 (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rillaboom_Page1::
# 2691 "data/scripts/sample_sets_options.pory"
	.string "140/116+/12/0-/236/4 (VEST)$"
	.string "140/196+/12/0-/156/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Roaring_Moon_Page1::
# 2699 "data/scripts/sample_sets_options.pory"
	.string "4/220/28/0-/4/252+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rotom_Wash_Page1::
# 2706 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/116+/4/132$"
	.string "252/0-/44/60/148+/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Pelipper_Page1::
# 2714 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Politoed_Page1::
# 2721 "data/scripts/sample_sets_options.pory"
	.string "220/0-/196/4/76+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Porygon2_Page1::
# 2728 "data/scripts/sample_sets_options.pory"
	.string "244/0-/92/116+/52/4$"
	.string "244/0/92/116+/52/0-$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Raging_Bolt_Page1::
# 2736 "data/scripts/sample_sets_options.pory"
	.string "148/0-/36/100+/44/180 (ORB)$"
	.string "244/0-/124/100+/36/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Regidrago_Page1::
# 2744 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Page1::
# 2751 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD$"
	.string "GARDEVOIR$"
	.string "GENGAR$"
	.string "KANGASKHAN$"
	.string "LATIAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Page2::
# 2762 "data/scripts/sample_sets_options.pory"
	.string "MANECTRIC$"
	.string "MAWILE$"
	.string "METAGROSS$"
	.string "SALAMENCE$"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Manectric_Page1::
# 2773 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/36/4/220+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Mawile_Page1::
# 2780 "data/scripts/sample_sets_options.pory"
	.string "156/196+/0/0/156/0- (MEGA)$"
	.string "156/196+/4/0-/148/4 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Metagross_Page1::
# 2788 "data/scripts/sample_sets_options.pory"
	.string "124/196+/12/0-/36/140 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Salamence_Page1::
# 2795 "data/scripts/sample_sets_options.pory"
	.string "0/44/0/252/0-/212+ (MEGA)$"
	.string "252/36+/4/0-/124/92 (MEGA)$"
	.string "4/0-/4/244+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Tyranitar_Page1::
# 2804 "data/scripts/sample_sets_options.pory"
	.string "44/164/20/0-/28/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Charizard_Page1::
# 2811 "data/scripts/sample_sets_options.pory"
	.string "204/0-/108/4+/4/188 (MEGA Y)$"
	.string "236/44/4/0-/4/220+ (MEGA X)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Gardevoir_Page1::
# 2819 "data/scripts/sample_sets_options.pory"
	.string "244/0-/196/36+/4/28 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Gengar_Page1::
# 2826 "data/scripts/sample_sets_options.pory"
	.string "252/0-/68/4/4/180+ (PERISH)$"
	.string "76/0-/28/220/4/180+ (CONTROL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Kangaskhan_Page1::
# 2834 "data/scripts/sample_sets_options.pory"
	.string "36/196+/20/0-/236/20 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Latias_Page1::
# 2841 "data/scripts/sample_sets_options.pory"
	.string "252/0-/60/76+/12/108$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Milotic_Page1::
# 2848 "data/scripts/sample_sets_options.pory"
	.string "180/0-/204/4/116+/4 (COIL)$"
	.string "244/0-/220/4/36+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Cs_Page1::
# 2856 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Hf_Page1::
# 2863 "data/scripts/sample_sets_options.pory"
	.string "188/76+/52/0-/4/188$"
	.string "28/220/4/0-/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Ws_Page1::
# 2871 "data/scripts/sample_sets_options.pory"
	.string "220/60/44/0-/4/180+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Iron_Hands_Page1::
# 2878 "data/scripts/sample_sets_options.pory"
	.string "100/156+/0/0/252/0- (VEST)$"
	.string "60/156+/36/0-/252/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kartana_Page1::
# 2886 "data/scripts/sample_sets_options.pory"
	.string "116/4/4/0-/132/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (FOCUS SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kingambit_Page1::
# 2894 "data/scripts/sample_sets_options.pory"
	.string "204/196+/4/0-/92/12$"
	.string "204/196+/4/0-/92/12 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Lando_T_Page1::
# 2902 "data/scripts/sample_sets_options.pory"
	.string "12/196+/4/0-/44/252 (SCARF)$"
	.string "12/196+/4/0-/44/252 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Landorus_Page1::
# 2910 "data/scripts/sample_sets_options.pory"
	.string "132/0-/4/116+/4/252 (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Heatran_Page1::
# 2918 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/236+/4/20 (SHUCA)$"
	.string "252/0-/36/180+/4/36 (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Incineroar_Page1::
# 2926 "data/scripts/sample_sets_options.pory"
	.string "236/36+/4/0-/204/28 (SITRUS)$"
	.string "236/4+/236/0-/28/4 (HELMET)$"
	.string "244/36+/4/0-/220/4 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Indeedee_Page1::
# 2935 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Indeedee_F_Page1::
# 2942 "data/scripts/sample_sets_options.pory"
	.string "252/0-/204/4/44+/4 (SEED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Iron_Bundle_Page1::
# 2949 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gastrodon_Page1::
# 2956 "data/scripts/sample_sets_options.pory"
	.string "172/0-/108/220+/4/4 (SITRUS)$"
	.string "172/0/116/220+/0/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gholdengo_Page1::
# 2964 "data/scripts/sample_sets_options.pory"
	.string "212/0-/4/212+/20/60 (ORB)$"
	.string "244/0-/4/212+/12/36 (LEFTYS)$"
	.string "36/0-/4/212+/4/252 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gigantamax_Page1::
# 2973 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD-GMAX$"
	.string "VENUSAUR-GMAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gigantamax_Charizard_Gmax_Page1::
# 2981 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/0/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gigantamax_Venusaur_Gmax_Page1::
# 2988 "data/scripts/sample_sets_options.pory"
	.string "156/0-/36/172+/20/116$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Grimmsnarl_Page1::
# 2995 "data/scripts/sample_sets_options.pory"
	.string "236/0-/156/0/116+/0 (LIGHT CLAY)$"
	.string "244/4/196+/0-/60/4 (LIGHT CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Hatterene_Page1::
# 3003 "data/scripts/sample_sets_options.pory"
	.string "212/0/84/188+/20/0- (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dragonite_Page1::
# 3010 "data/scripts/sample_sets_options.pory"
	.string "44/204+/4/0-/4/252 (BANDED)$"
	.string "44/204+/4/0-/4/252 (DICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Farigiraf_Page1::
# 3018 "data/scripts/sample_sets_options.pory"
	.string "228/0-/116/4/156+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Flutter_Mane_Page1::
# 3025 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "116/0-/156/36+/4/196 (SPECS)$"
	.string "228/0-/204/4/4/68+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Garchomp_Page1::
# 3034 "data/scripts/sample_sets_options.pory"
	.string "4/156/4/0-/92/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Garganacl_Page1::
# 3042 "data/scripts/sample_sets_options.pory"
	.string "252/0/20/0/236+/0-$"
	.string "252/4/12/0-/236+/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Basculegion_Page1::
# 3050 "data/scripts/sample_sets_options.pory"
	.string "164/220+/4/0-/4/116 (BAND)$"
	.string "4/244+/4/0-/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chi_Yu_Page1::
# 3058 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "52/0-/4/196+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chien_Pao_Page1::
# 3066 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Cresselia_Page1::
# 3073 "data/scripts/sample_sets_options.pory"
	.string "252/0-/156+/4/76/4 (HELMET)$"
	.string "252/0-/172/4/76+/4 (GOGGLES)$"
	.string "252/0/180/0/76+/0- (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dragapult_Page1::
# 3082 "data/scripts/sample_sets_options.pory"
	.string "252/4/44/0-/44/164+ (SUPPORT)$"
	.string "4/244/4/0-/4/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Aegislash_Page1::
# 3090 "data/scripts/sample_sets_options.pory"
	.string "236/0-/0/252+/0/20 (LEFTYS)$"
	.string "252/0/4/180+/68/0- (POLICY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Amoonguss_Page1::
# 3098 "data/scripts/sample_sets_options.pory"
	.string "236/0/236+/0/36/0- (HELMET)$"
	.string "244/0/108/0/156+/0- (SITRUS)$"
	.string "252/0/180/0/76+/0- (EJECT)$"
	.string "252/0/20/0/236+/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Annihilape_Page1::
# 3108 "data/scripts/sample_sets_options.pory"
	.string "180/68/4/0-/4/252+ (SITRUS)$"
	.string "252/4/0/0-/0/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Arcanine_Page1::
# 3116 "data/scripts/sample_sets_options.pory"
	.string "236/68/4/0-/4/196+ (GOGGLES)$"
	.string "252/68+/4/0-/108/76 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Archaludon_Page1::
# 3124 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252+/4/252 (HERB)$"
	.string "252/0-/4/44+/204/4 (VEST)$"
	.string "Go Back$"
	.string "$"
