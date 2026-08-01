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
	goto Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_4:
# 35 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_5:
# 37 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_6:
# 39 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_7:
# 41 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
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
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_3:
# 57 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_4:
# 59 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_5:
# 61 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page2_6:
# 63 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_3:
# 81 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_4:
# 83 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_5:
# 85 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page3_6:
# 87 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_3:
# 105 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_4:
# 107 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_5:
# 109 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_6:
# 111 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_3:
# 129 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_4:
# 131 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_5:
# 133 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_6:
# 135 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_3:
# 153 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_4:
# 155 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_5:
# 157 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_6:
# 159 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_3:
# 177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Entei_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_4:
# 179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_5:
# 181 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_6:
# 183 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_3:
# 201 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_4:
# 203 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_5:
# 205 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_6:
# 207 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_3:
# 225 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_4:
# 227 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_5:
# 229 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_6:
# 231 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_3:
# 249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_4:
# 251 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_5:
# 253 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_6:
# 255 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_3:
# 273 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_4:
# 275 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_5:
# 277 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_6:
# 279 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_3:
# 297 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_4:
# 299 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_5:
# 301 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_6:
# 303 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_3:
# 321 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_4:
# 323 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_5:
# 325 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_6:
# 327 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_3:
# 345 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_4:
# 347 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_5:
# 349 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_6:
# 351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_3:
# 369 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_4:
# 371 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_5:
# 373 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_6:
# 375 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_3:
# 393 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_4:
# 395 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_5:
# 397 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_6:
# 399 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_3:
# 417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_4:
# 419 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_5:
# 421 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_6:
# 423 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_3:
# 441 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_4:
# 443 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_5:
# 445 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_6:
# 447 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
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
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page19_6
# 472 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page19_7
# 474 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page19_8
# 477 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_2:
# 463 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_3:
# 465 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_4:
# 467 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_5:
# 469 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_6:
# 471 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_7:
# 473 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_8:
# 475 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return


Auto_EventScript_Sample_Sets_Doubles_Page20::
# 483 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page20
# 484 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 486 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page20_2
# 488 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page20_3
# 490 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page20_4
# 492 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page20_5
# 494 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page20_6
# 496 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page20_7
# 498 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page20_8
# 501 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_2:
# 487 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_3:
# 489 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_4:
# 491 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_5:
# 493 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_6:
# 495 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_7:
# 497 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_8:
# 499 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return


Auto_EventScript_Sample_Sets_Doubles_Page21::
# 507 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page21
# 508 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 510 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page21_2
# 512 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page21_3
# 514 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page21_4
# 516 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page21_5
# 518 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page21_6
# 520 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page21_7
# 522 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page21_8
# 525 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_2:
# 511 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_3:
# 513 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_4:
# 515 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_5:
# 517 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_6:
# 519 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_7:
# 521 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_8:
# 523 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return


Auto_EventScript_Sample_Sets_Doubles_Page22::
# 531 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page22
# 532 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 534 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page22_2
# 536 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page22_3
# 538 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page22_4
# 540 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page22_5
# 542 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page22_6
# 544 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page22_7
# 546 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page22_8
# 549 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_2:
# 535 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_3:
# 537 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_4:
# 539 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_5:
# 541 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_6:
# 543 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_7:
# 545 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_8:
# 547 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return


Auto_EventScript_Sample_Sets_Doubles_Page23::
# 555 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page23
# 556 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 558 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page23_2
# 560 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page23_3
# 562 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page23_4
# 564 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page23_5
# 566 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page23_6
# 568 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page23_7
# 570 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page23_8
# 573 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_2:
# 559 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_3:
# 561 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_4:
# 563 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_5:
# 565 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_6:
# 567 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_7:
# 569 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_8:
# 571 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return


Auto_EventScript_Sample_Sets_Doubles_Page24::
# 579 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page24
# 580 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 582 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page24_2
# 584 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page24_3
# 586 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page24_4
# 588 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page24_5
# 590 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page24_6
# 592 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page24_7
# 594 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page24_8
# 597 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_2:
# 583 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_3:
# 585 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_4:
# 587 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_5:
# 589 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_6:
# 591 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_7:
# 593 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_8:
# 595 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return


Auto_EventScript_Sample_Sets_Doubles_Page25::
# 603 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page25
# 604 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 606 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page25_2
# 608 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page25_3
# 610 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page25_4
# 612 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page25_5
# 614 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page25_6
# 616 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page25_7
# 618 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page25_8
# 621 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_2:
# 607 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_3:
# 609 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_4:
# 611 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_5:
# 613 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_6:
# 615 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_7:
# 617 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_8:
# 619 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return


Auto_EventScript_Sample_Sets_Doubles_Page26::
# 627 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page26
# 628 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 630 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page26_2
# 632 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page26_3
# 634 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page26_4
# 636 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page26_5
# 638 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page26_6
# 640 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page26_7
# 642 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page26_8
# 645 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_2:
# 631 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_3:
# 633 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_4:
# 635 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_5:
# 637 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_6:
# 639 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_7:
# 641 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_8:
# 643 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return


Auto_EventScript_Sample_Sets_Doubles_Page27::
# 651 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page27
# 652 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 654 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page27_2
# 656 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page27_3
# 658 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page27_4
# 660 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page27_5
# 662 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page27_6
# 664 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page27_7
# 666 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page27_8
# 669 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_2:
# 655 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_3:
# 657 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_4:
# 659 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_5:
# 661 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_6:
# 663 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_7:
# 665 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_8:
# 667 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
	return


Auto_EventScript_Sample_Sets_Doubles_Page28::
# 675 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page28
# 676 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 678 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page28_2
# 680 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page28_3
# 682 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page28_4
# 684 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page28_5
# 687 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_2:
# 679 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_3:
# 681 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_4:
# 683 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_5:
# 685 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1::
# 693 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Zamazenta_Page1
# 694 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 696 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_2
# 699 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_3
# 701 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_4
# 704 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
	return

Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_2:
# 697 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAMAZENTA, 65, ITEM_RUSTED_SHIELD, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 76, 0, 244, 188, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, 2, FALSE, TYPE_DRAGON, 10
# 698 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_3:
# 700 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_4:
# 702 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1::
# 710 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Zapdos_Page1
# 711 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 713 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_2
# 716 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_3
# 719 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_4
# 722 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_5
# 724 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_6
# 727 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_2:
# 714 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 84, 28, 116, 36, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GRASS, 10
# 715 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_3:
# 717 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 76, 28, 116, 36, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 718 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_4:
# 720 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 28, 0, 0, 252, 228, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_HIDDEN_POWER, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GHOST, 10
# 721 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_5:
# 723 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_6:
# 725 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1::
# 733 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Weezing_Galar_Page1
# 734 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 736 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_2
# 739 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_3
# 742 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_4
# 744 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_5
# 747 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_2:
# 737 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WEEZING_GALAR, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 252, 0, 4, 4, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_SLUDGE_BOMB, MOVE_STRANGE_STEAM, MOVE_FLAMETHROWER, 2, FALSE, TYPE_WATER, 10
# 738 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_3:
# 740 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WEEZING_GALAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 1, 0, 252, 0, 76, 4, 4, 172, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_SLUDGE_BOMB, MOVE_STRANGE_STEAM, 2, FALSE, TYPE_WATER, 10
# 741 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_4:
# 743 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_5:
# 745 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1::
# 753 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Whimsicott_Page1
# 754 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 756 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_2
# 759 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_3
# 762 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_4
# 764 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_5
# 767 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_2:
# 757 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_TEARS, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_DARK, 10
# 758 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_3:
# 760 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_GHOST, 10
# 761 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_4:
# 763 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_5:
# 765 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1::
# 773 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Xerneas_Page1
# 774 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 776 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_2
# 779 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_3
# 782 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_4
# 784 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_5
# 787 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_2:
# 777 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, 2, FALSE, FALSE, 10
# 778 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_3:
# 780 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, 2, FALSE, FALSE, 10
# 781 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_4:
# 783 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_5:
# 785 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1::
# 793 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Yveltal_Page1
# 794 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 796 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_2
# 799 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_3
# 802 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_4
# 805 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_5
# 807 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_6
# 810 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_2:
# 797 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SNARL, MOVE_FOUL_PLAY, MOVE_DARK_PULSE, 2, FALSE, TYPE_POISON, 10
# 798 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_3:
# 800 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_POISON, 10
# 801 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_4:
# 803 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_POISON, 10
# 804 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_5:
# 806 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_6:
# 808 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1::
# 816 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Zacian_Page1
# 817 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 819 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_2
# 822 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_3
# 825 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_4
# 827 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_5
# 830 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_2:
# 820 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BEHEMOTH_BLADE, MOVE_PLAY_ROUGH, MOVE_TERA_BLAST, 2, FALSE, TYPE_GROUND, 10
# 821 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_3:
# 823 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_SACRED_SWORD, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_STELLAR, 10
# 824 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_4:
# 826 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_5:
# 828 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1::
# 836 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Urshifu_Rs_Page1
# 837 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 839 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_2
# 842 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_3
# 845 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_4
# 848 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_5
# 850 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_6
# 853 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_2:
# 840 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 841 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_3:
# 843 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 844 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_4:
# 846 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 847 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_5:
# 849 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_6:
# 851 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1::
# 859 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Urshifu_Ss_Page1
# 860 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 862 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_2
# 865 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_3
# 868 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_4
# 870 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_5
# 873 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_2:
# 863 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 236, 0, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 864 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_3:
# 866 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 867 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_4:
# 869 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_5:
# 871 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1::
# 879 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Venusaur_Page1
# 880 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 882 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_2
# 885 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_3
# 887 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_4
# 890 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_2:
# 883 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, 2, FALSE, TYPE_GHOST, 10
# 884 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_3:
# 886 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_4:
# 888 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1::
# 896 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Venusaur_Gmax_Page1
# 897 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 899 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_2
# 902 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_3
# 904 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_4
# 907 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_2:
# 900 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 156, 0, 36, 116, 172, 20, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, 2, TRUE, FALSE, 10
# 901 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_3:
# 903 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_4:
# 905 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1::
# 913 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Volcarona_Page1
# 914 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 916 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_2
# 919 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_3
# 922 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_4
# 924 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_5
# 927 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_2:
# 917 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 108, 108, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FAIRY, 10
# 918 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_3:
# 920 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 188, 28, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_STRUGGLE_BUG, MOVE_HEAT_WAVE, 2, FALSE, TYPE_WATER, 10
# 921 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_4:
# 923 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_5:
# 925 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1::
# 933 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tornadus_Page1
# 934 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 936 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_2
# 939 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_3
# 942 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_4
# 945 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_5
# 947 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_6
# 950 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_2:
# 937 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 938 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_3:
# 940 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 941 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_4:
# 943 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 944 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_5:
# 946 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_6:
# 948 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1::
# 956 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tsareena_Page1
# 957 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 959 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_2
# 962 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_3
# 965 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_4
# 968 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_5
# 970 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_6
# 973 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_2:
# 960 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_TROP_KICK, MOVE_LOW_KICK, 2, FALSE, TYPE_WATER, 10
# 961 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_3:
# 963 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 252, 236, 4, 4, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_TROP_KICK, MOVE_LOW_KICK, MOVE_U_TURN, MOVE_KNOCK_OFF, 2, FALSE, TYPE_WATER, 10
# 964 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_4:
# 966 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, 2, FALSE, TYPE_GRASS, 10
# 967 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_5:
# 969 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_6:
# 971 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1::
# 979 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tyranitar_Page1
# 980 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 982 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_2
# 985 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_3
# 988 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_4
# 991 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_5
# 994 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_6
# 997 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_7
# 999 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_8
# 1002 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_2:
# 983 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 1, 188, 204, 0, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 984 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_3:
# 986 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 204, 4, 4, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 987 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_4:
# 989 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 204, 0, 0, 0, 52, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 990 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_5:
# 992 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 204, 4, 4, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 993 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_6:
# 995 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_ASSURANCE, MOVE_ICE_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 996 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_7:
# 998 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_8:
# 1000 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2::
# 1008 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tyranitar_Page2
# 1009 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1011 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_2
# 1014 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_3
# 1016 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_4
# 1019 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_2:
# 1012 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 44, 164, 20, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT, 2, FALSE, FALSE, 10
# 1013 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_3:
# 1015 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_4:
# 1017 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1::
# 1025 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ursaluna_Page1
# 1026 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1028 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_2
# 1031 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_3
# 1034 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_4
# 1036 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_5
# 1039 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_2:
# 1029 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 140, 236, 0, 0, 0, 132, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 1030 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_3:
# 1032 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 140, 236, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 1033 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_4:
# 1035 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_5:
# 1037 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1::
# 1045 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
# 1046 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1048 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_2
# 1051 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_3
# 1054 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_4
# 1057 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_5
# 1059 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_6
# 1062 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_2:
# 1049 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 12, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 1050 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_3:
# 1052 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 244, 0, 0, 0, 196, 68, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 1053 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_4:
# 1055 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 1056 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_5:
# 1058 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_6:
# 1060 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1::
# 1068 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Thundurus_Page1
# 1069 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1071 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_2
# 1074 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_3
# 1077 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_4
# 1080 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_5
# 1083 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_6
# 1086 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_7
# 1088 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_8
# 1091 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_2:
# 1072 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 228, 0, 28, 68, 12, 172, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 1073 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_3:
# 1075 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 36, 212, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_FLY, 2, FALSE, TYPE_FIRE, 10
# 1076 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_4:
# 1078 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 1079 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_5:
# 1081 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 1082 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_6:
# 1084 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 50, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 236, 4, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_FLY, 2, FALSE, TYPE_FIRE, 10
# 1085 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_7:
# 1087 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_8:
# 1089 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1::
# 1097 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ting_Lu_Page1
# 1098 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1100 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_2
# 1103 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_3
# 1105 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_4
# 1108 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_2:
# 1101 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TING_LU, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 52, 4, 196, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SAND_TOMB, MOVE_RUINATION, MOVE_BODY_PRESS, 2, FALSE, TYPE_POISON, 10
# 1102 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_3:
# 1104 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_4:
# 1106 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1::
# 1114 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tinkaton_Page1
# 1115 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1117 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_2
# 1120 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_3
# 1122 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_4
# 1125 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_2:
# 1118 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TINKATON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 180, 172, 100, 12, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_FEINT, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 1119 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_3:
# 1121 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_4:
# 1123 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1::
# 1131 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Togekiss_Page1
# 1132 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1134 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_2
# 1137 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_3
# 1140 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_4
# 1142 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_5
# 1145 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_2:
# 1135 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_SCOPE_LENS, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 228, 0, 196, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_YAWN, MOVE_FOLLOW_ME, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 1136 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_3:
# 1138 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_BABIRI_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 2, 0, 236, 0, 196, 60, 4, 12, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_YAWN, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 1139 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_4:
# 1141 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_5:
# 1143 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1::
# 1151 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Torkoal_Page1
# 1152 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1154 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_2
# 1157 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_3
# 1160 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_4
# 1162 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_5
# 1165 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_2:
# 1155 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHARCOAL, ITEM_POKE_BALL, NATURE_QUIET, 1, 1, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 1156 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_3:
# 1158 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_WEATHER_BALL, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 1159 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_4:
# 1161 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_5:
# 1163 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1::
# 1171 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Bulu_Page1
# 1172 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1174 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_2
# 1177 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_3
# 1180 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_4
# 1183 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_5
# 1186 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_6
# 1188 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_7
# 1191 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_2:
# 1175 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 124, 140, 4, 228, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_GRASS, 10
# 1176 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_3:
# 1178 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 252, 4, 36, 4, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_LEFTOVERS, MOVE_HORN_LEECH, 2, FALSE, TYPE_WATER, 10
# 1179 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_4:
# 1181 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_GRASSIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 0, 180, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 1182 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_5:
# 1184 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 28, 236, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 1185 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_6:
# 1187 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_7:
# 1189 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1::
# 1197 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Fini_Page1
# 1198 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1200 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_2
# 1203 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_3
# 1206 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_4
# 1209 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_5
# 1212 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_6
# 1215 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_7
# 1217 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_8
# 1220 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_2:
# 1201 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 100, 148, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 1202 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_3:
# 1204 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 12, 236, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 1205 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_4:
# 1207 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MUDDY_WATER, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1208 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_5:
# 1210 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_TRICK, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 1211 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_6:
# 1213 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SCALD, MOVE_SOAK, MOVE_ICE_BEAM, 2, FALSE, TYPE_STEEL, 10
# 1214 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_7:
# 1216 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_8:
# 1218 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1::
# 1226 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Koko_Page1
# 1227 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1229 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_2
# 1232 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_3
# 1235 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_4
# 1238 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_5
# 1241 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_6
# 1243 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_7
# 1246 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_2:
# 1230 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 172, 0, 12, 92, 36, 196, 31, 31, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_SKY_DROP, MOVE_VOLT_SWITCH, 2, FALSE, TYPE_WATER, 10
# 1231 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_3:
# 1233 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 28, 0, 4, 252, 196, 28, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 1234 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_4:
# 1236 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 1237 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_5:
# 1239 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 1240 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_6:
# 1242 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_7:
# 1244 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1::
# 1252 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Lele_Page1
# 1253 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1255 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_2
# 1258 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_3
# 1261 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_4
# 1264 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_5
# 1267 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_6
# 1269 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_7
# 1272 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_2:
# 1256 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_PSYCHIC, 10
# 1257 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_3:
# 1259 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_PSYCHIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1260 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_4:
# 1262 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_MAGIC_ROOM, 2, FALSE, TYPE_WATER, 10
# 1263 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_5:
# 1265 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 108, 68, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1266 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_6:
# 1268 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_7:
# 1270 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1::
# 1278 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tatsugiri_Page1
# 1279 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1281 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_2
# 1284 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_3
# 1287 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_4
# 1289 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_5
# 1292 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_2:
# 1282 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TATSUGIRI, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_TAUNT, 2, FALSE, TYPE_STELLAR, 10
# 1283 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_3:
# 1285 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TATSUGIRI, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, 2, FALSE, TYPE_STELLAR, 10
# 1286 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_4:
# 1288 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_5:
# 1290 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1::
# 1298 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sneasler_Page1
# 1299 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1301 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_2
# 1304 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_3
# 1307 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_4
# 1310 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_5
# 1312 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_6
# 1315 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_2:
# 1302 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_COACHING, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1303 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_3:
# 1305 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_DARK, 10
# 1306 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_4:
# 1308 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_WHITE_HERB, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_STELLAR, 10
# 1309 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_5:
# 1311 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_6:
# 1313 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1::
# 1321 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Snorlax_Page1
# 1322 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1324 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_2
# 1327 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_3
# 1330 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_4
# 1332 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_5
# 1335 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_2:
# 1325 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 228, 76, 196, 4, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_RETURN, 2, FALSE, TYPE_GHOST, 10
# 1326 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_3:
# 1328 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 2, 1, 228, 76, 204, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_RETURN, 2, FALSE, TYPE_GHOST, 10
# 1329 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_4:
# 1331 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_5:
# 1333 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1::
# 1341 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Stakataka_Page1
# 1342 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1344 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_2
# 1347 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_3
# 1350 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_4
# 1353 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_5
# 1355 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_6
# 1358 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_2:
# 1345 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_WIDE_GUARD, MOVE_TRICK_ROOM, MOVE_BODY_PRESS, MOVE_GYRO_BALL, 2, FALSE, TYPE_GRASS, 10
# 1346 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_3:
# 1348 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_LONELY, 0, 0, 252, 252, 0, 0, 0, 4, 31, 31, 17, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, 2, FALSE, TYPE_WATER, 10
# 1349 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_4:
# 1351 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_ROCKIUM_Z, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 68, 0, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, 2, FALSE, TYPE_GRASS, 10
# 1352 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_5:
# 1354 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_6:
# 1356 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1::
# 1364 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sylveon_Page1
# 1365 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1367 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_2
# 1370 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_3
# 1373 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_4
# 1376 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_5
# 1378 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_6
# 1381 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_2:
# 1368 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 180, 0, 244, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_WATER, 10
# 1369 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_3:
# 1371 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_PIXIE_PLATE, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 172, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_QUICK_ATTACK, 2, FALSE, TYPE_WATER, 10
# 1372 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_4:
# 1374 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 92, 4, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_MOONBLAST, MOVE_PSYSHOCK, 2, FALSE, TYPE_FAIRY, 10
# 1375 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_5:
# 1377 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_6:
# 1379 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1::
# 1387 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Talonflame_Page1
# 1388 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1390 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_2
# 1393 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_3
# 1396 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_4
# 1399 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_5
# 1401 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_6
# 1404 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_2:
# 1391 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_SLEEP_TALK, MOVE_U_TURN, 2, FALSE, TYPE_FLYING, 10
# 1392 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_3:
# 1394 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_GUARD, MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 1395 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_4:
# 1397 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_TAUNT, 2, FALSE, TYPE_FLYING, 10
# 1398 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_5:
# 1400 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_6:
# 1402 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1::
# 1410 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Roaring_Moon_Page1
# 1411 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1413 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_2
# 1416 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_3
# 1418 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_4
# 1421 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_2:
# 1414 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROARING_MOON, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ACROBATICS, MOVE_KNOCK_OFF, 2, FALSE, TYPE_FLYING, 10
# 1415 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_3:
# 1417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_4:
# 1419 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1::
# 1427 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rotom_Wash_Page1
# 1428 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1430 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_2
# 1433 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_3
# 1436 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_4
# 1438 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_5
# 1441 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_2:
# 1431 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 132, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, 2, FALSE, TYPE_STEEL, 10
# 1432 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_3:
# 1434 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 44, 4, 60, 148, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_STEEL, 10
# 1435 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_4:
# 1437 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_5:
# 1439 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1::
# 1447 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sableye_Page1
# 1448 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1450 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_2
# 1453 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_3
# 1456 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_4
# 1458 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_5
# 1461 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_2:
# 1451 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 116, 0, 0, 140, 31, 0, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_STEEL, 10
# 1452 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_3:
# 1454 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 36, 0, 0, 220, 31, 0, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_STEEL, 10
# 1455 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_4:
# 1457 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_5:
# 1459 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1::
# 1467 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Salamence_Page1
# 1468 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1470 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_2
# 1473 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_3
# 1476 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_4
# 1479 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_5
# 1481 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_6
# 1484 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_2:
# 1471 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_NAIVE, 0, 0, 0, 44, 0, 212, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, 2, FALSE, TYPE_WATER, 10
# 1472 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_3:
# 1474 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 92, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, 2, FALSE, TYPE_WATER, 10
# 1475 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_4:
# 1477 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DRACO_METEOR, 2, FALSE, TYPE_WATER, 10
# 1478 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_5:
# 1480 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_6:
# 1482 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1::
# 1490 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sinistcha_Page1
# 1491 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1493 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_2
# 1496 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_3
# 1499 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_4
# 1502 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_5
# 1505 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_6
# 1507 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_7
# 1510 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_2:
# 1494 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 236, 0, 188, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1495 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_3:
# 1497 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 236, 0, 188, 0, 0, 84, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1498 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_4:
# 1500 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 244, 0, 188, 4, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1501 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_5:
# 1503 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1504 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_6:
# 1506 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_7:
# 1508 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1::
# 1516 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rayquaza_Page1
# 1517 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1519 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_2
# 1522 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_3
# 1524 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_4
# 1527 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_2:
# 1520 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, 2, FALSE, FALSE, 10
# 1521 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_3:
# 1523 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_4:
# 1525 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1::
# 1533 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Regidrago_Page1
# 1534 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1536 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_2
# 1539 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_3
# 1541 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_4
# 1544 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_2:
# 1537 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIDRAGO, 65, ITEM_DRAGON_FANG, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, 2, FALSE, TYPE_STEEL, 10
# 1538 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_3:
# 1540 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_4:
# 1542 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1::
# 1550 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Regieleki_Page1
# 1551 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1553 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_2
# 1556 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_3
# 1558 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_4
# 1561 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_2:
# 1554 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIELEKI, 65, ITEM_MAGNET, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 1555 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_3:
# 1557 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_4:
# 1559 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1::
# 1567 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rhyperior_Page1
# 1568 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1570 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_2
# 1573 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_3
# 1576 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_4
# 1578 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_5
# 1581 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_2:
# 1571 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RHYPERIOR, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 12, 236, 4, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, 2, FALSE, TYPE_WATER, 10
# 1572 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_3:
# 1574 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RHYPERIOR, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_BRAVE, 1, 0, 20, 236, 0, 0, 0, 252, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, 2, FALSE, TYPE_WATER, 10
# 1575 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_4:
# 1577 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_5:
# 1579 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1::
# 1587 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rillaboom_Page1
# 1588 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1590 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_2
# 1593 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_3
# 1596 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_4
# 1598 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_5
# 1601 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_2:
# 1591 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 116, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1592 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_3:
# 1594 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 196, 12, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1595 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_4:
# 1597 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_5:
# 1599 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1::
# 1607 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Politoed_Page1
# 1608 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1610 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_2
# 1613 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_3
# 1615 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_4
# 1618 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_2:
# 1611 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 220, 0, 196, 12, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENCORE, MOVE_PERISH_SONG, MOVE_SCALD, 2, FALSE, TYPE_GRASS, 10
# 1612 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_3:
# 1614 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_4:
# 1616 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1::
# 1624 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Porygon2_Page1
# 1625 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1627 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_2
# 1630 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_3
# 1633 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_4
# 1635 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_5
# 1638 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_2:
# 1628 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 244, 0, 92, 4, 116, 52, 31, 0, 31, 31, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1629 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_3:
# 1631 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 244, 0, 92, 0, 116, 52, 31, 0, 31, 0, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1632 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_4:
# 1634 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_5:
# 1636 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1::
# 1644 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Primarina_Page1
# 1645 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1647 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_2
# 1650 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_3
# 1653 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_4
# 1655 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_5
# 1658 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_2:
# 1648 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PRIMARINA, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 180, 0, 108, 28, 188, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HAZE, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1649 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_3:
# 1651 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PRIMARINA, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 236, 0, 132, 28, 108, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HAZE, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1652 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_4:
# 1654 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_5:
# 1656 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1::
# 1664 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Raging_Bolt_Page1
# 1665 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1667 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_2
# 1670 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_3
# 1673 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_4
# 1675 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_5
# 1678 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_2:
# 1668 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 148, 0, 36, 180, 100, 44, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1669 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_3:
# 1671 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 124, 4, 100, 36, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1672 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_4:
# 1674 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_5:
# 1676 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1::
# 1684 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Raichu_Page1
# 1685 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1687 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_2
# 1690 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_3
# 1693 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_4
# 1696 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_5
# 1698 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_6
# 1701 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_2:
# 1688 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 140, 0, 188, 180, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_ENDEAVOR, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1689 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_3:
# 1691 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_TACKLE, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1692 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_4:
# 1694 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_ENCORE, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1695 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_5:
# 1697 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_6:
# 1699 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1::
# 1707 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Hf_Page1
# 1708 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1710 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_2
# 1713 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_3
# 1716 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_4
# 1718 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_5
# 1721 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_2:
# 1711 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 76, 52, 188, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 1712 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_3:
# 1714 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 1715 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_4:
# 1717 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_5:
# 1719 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1::
# 1727 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Ws_Page1
# 1728 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1730 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_2
# 1733 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_3
# 1735 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_4
# 1738 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_2:
# 1731 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_WELLSPRING, 65, ITEM_WELLSPRING_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 220, 60, 44, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, 2, FALSE, TYPE_WATER, 10
# 1732 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_3:
# 1734 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_4:
# 1736 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1::
# 1744 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Oranguru_Page1
# 1745 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1747 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_2
# 1750 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_3
# 1752 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_4
# 1755 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_2:
# 1748 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ORANGURU, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_SASSY, 1, 0, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_INSTRUCT, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1749 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_3:
# 1751 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_4:
# 1753 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1::
# 1761 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Palafin_Page1
# 1762 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1764 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_2
# 1767 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_3
# 1769 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_4
# 1772 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_2:
# 1765 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PALAFIN, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 252, 156, 4, 4, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_JET_PUNCH, MOVE_WAVE_CRASH, 2, FALSE, TYPE_WATER, 10
# 1766 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_3:
# 1768 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_4:
# 1770 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1::
# 1778 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Pelipper_Page1
# 1779 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1781 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_2
# 1784 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_3
# 1786 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_4
# 1789 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_2:
# 1782 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PELIPPER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_WEATHER_BALL, MOVE_HURRICANE, 2, FALSE, TYPE_GHOST, 10
# 1783 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_3:
# 1785 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_4:
# 1787 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1::
# 1795 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Muk_Alola_Page1
# 1796 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1798 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_2
# 1801 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_3
# 1804 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_4
# 1806 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_5
# 1809 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_2:
# 1799 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MUK_ALOLA, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 220, 36, 108, 4, 0, 140, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_TOXIC, 2, FALSE, TYPE_WATER, 10
# 1800 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_3:
# 1802 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MUK_ALOLA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CAREFUL, 2, 1, 228, 4, 116, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_MINIMIZE, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, 2, FALSE, TYPE_WATER, 10
# 1803 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_4:
# 1805 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_5:
# 1807 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1::
# 1815 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Murkrow_Page1
# 1816 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1818 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_2
# 1821 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_3
# 1824 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_4
# 1826 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_5
# 1829 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_2:
# 1819 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MURKROW, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 116, 0, 0, 140, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 1820 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_3:
# 1822 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MURKROW, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 140, 0, 0, 116, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 1823 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_4:
# 1825 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_5:
# 1827 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1::
# 1835 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Nihilego_Page1
# 1836 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1838 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_2
# 1841 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_3
# 1844 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_4
# 1847 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_5
# 1850 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_6
# 1852 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_7
# 1855 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_2:
# 1839 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_POWER_GEM, MOVE_SLUDGE_BOMB, MOVE_METEOR_BEAM, 2, FALSE, TYPE_GHOST, 10
# 1840 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_3:
# 1842 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ACID_SPRAY, MOVE_POWER_GEM, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_GHOST, 10
# 1843 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_4:
# 1845 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 36, 0, 4, 252, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SLUDGE_BOMB, MOVE_POWER_GEM, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 1846 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_5:
# 1848 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 68, 0, 4, 252, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_POWER_GEM, MOVE_ACID_SPRAY, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GHOST, 10
# 1849 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_6:
# 1851 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_7:
# 1853 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1::
# 1861 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ninetales_Alola_Page1
# 1862 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1864 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_2
# 1867 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_3
# 1870 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_4
# 1872 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_5
# 1875 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_2:
# 1865 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NINETALES_ALOLA, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_TIMID, 2, 1, 212, 0, 100, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_BLIZZARD, 2, FALSE, TYPE_WATER, 10
# 1866 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_3:
# 1868 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NINETALES_ALOLA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_BLIZZARD, 2, FALSE, TYPE_GHOST, 10
# 1869 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_4:
# 1871 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_5:
# 1873 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1::
# 1881 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Cs_Page1
# 1882 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1884 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_2
# 1887 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_3
# 1889 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_4
# 1892 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_2:
# 1885 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_CORNERSTONE, 65, ITEM_CORNERSTONE_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_POWER_WHIP, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_ROCK, 10
# 1886 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_3:
# 1888 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_4:
# 1890 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1::
# 1898 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Metagross_Page1
# 1899 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1901 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_2
# 1904 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_3
# 1906 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_4
# 1909 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_2:
# 1902 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_FIRE, 10
# 1903 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_3:
# 1905 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_4:
# 1907 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1::
# 1915 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Milotic_Page1
# 1916 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1918 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_2
# 1921 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_3
# 1924 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_4
# 1926 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_5
# 1929 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_2:
# 1919 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 1, 0, 180, 0, 204, 4, 4, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_COIL, MOVE_HYPNOSIS, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 1920 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_3:
# 1922 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 244, 0, 220, 4, 4, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RECOVER, MOVE_ICY_WIND, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 1923 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_4:
# 1925 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_5:
# 1927 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1::
# 1935 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mimikyu_Page1
# 1936 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1938 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_2
# 1941 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_3
# 1944 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_4
# 1947 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_5
# 1950 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_6
# 1952 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_7
# 1955 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_2:
# 1939 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_MIMIKIUM_Z, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 236, 20, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1940 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_3:
# 1942 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, 2, FALSE, TYPE_WATER, 10
# 1943 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_4:
# 1945 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, 2, FALSE, TYPE_WATER, 10
# 1946 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_5:
# 1948 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_MIMIKIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_WATER, 10
# 1949 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_6:
# 1951 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_7:
# 1953 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1::
# 1961 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Miraidon_Page1
# 1962 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1964 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_2
# 1967 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_3
# 1969 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_4
# 1972 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_2:
# 1965 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIRAIDON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 92, 0, 4, 212, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_ELECTRO_DRIFT, MOVE_DRACO_METEOR, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_FAIRY, 10
# 1966 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_3:
# 1968 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_4:
# 1970 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1::
# 1978 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Moltres_Galar_Page1
# 1979 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1981 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_2
# 1984 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_3
# 1987 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_4
# 1989 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_5
# 1992 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_2:
# 1982 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 28, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_FIERY_WRATH, 2, FALSE, TYPE_POISON, 10
# 1983 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_3:
# 1985 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 92, 0, 4, 252, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_FIERY_WRATH, 2, FALSE, TYPE_POISON, 10
# 1986 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_4:
# 1988 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_5:
# 1990 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1::
# 1998 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Manectric_Page1
# 1999 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2001 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_2
# 2004 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_3
# 2006 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_4
# 2009 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_2:
# 2002 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_POKE_BALL, NATURE_TIMID, 1, 1, 244, 0, 4, 220, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GRASS, 10
# 2003 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_3:
# 2005 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_4:
# 2007 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1::
# 2015 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Marowak_Alola_Page1
# 2016 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2018 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_2
# 2021 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_3
# 2024 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_4
# 2026 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_5
# 2029 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_2:
# 2019 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAROWAK_ALOLA, 65, ITEM_THICK_CLUB, ITEM_POKE_BALL, NATURE_BRAVE, 1, 0, 252, 156, 0, 0, 0, 100, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_BONEMERANG, 2, FALSE, TYPE_WATER, 10
# 2020 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_3:
# 2022 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAROWAK_ALOLA, 65, ITEM_THICK_CLUB, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 252, 156, 4, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_BONEMERANG, 2, FALSE, TYPE_WATER, 10
# 2023 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_4:
# 2025 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_5:
# 2027 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1::
# 2035 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Maushold_Page1
# 2036 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2038 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_2
# 2041 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_3
# 2044 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_4
# 2047 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_5
# 2049 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_6
# 2052 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_2:
# 2039 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 156, 100, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BEAT_UP, MOVE_FOLLOW_ME, MOVE_SUPER_FANG, 2, FALSE, TYPE_GHOST, 10
# 2040 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_3:
# 2042 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 252, 0, 236, 0, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_SUPER_FANG, 2, FALSE, TYPE_GHOST, 10
# 2043 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_4:
# 2045 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_WIDE_LENS, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_BITE, MOVE_POPULATION_BOMB, 2, FALSE, TYPE_NORMAL, 10
# 2046 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_5:
# 2048 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_6:
# 2050 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1::
# 2058 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mawile_Page1
# 2059 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2061 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_2
# 2064 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_3
# 2067 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_4
# 2069 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_5
# 2072 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_2:
# 2062 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_BRAVE, 1, 1, 156, 196, 0, 0, 0, 156, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2063 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_3:
# 2065 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 156, 196, 4, 4, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2066 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_4:
# 2068 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_5:
# 2070 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1::
# 2078 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Meowscarada_Page1
# 2079 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2081 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_2
# 2084 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_3
# 2087 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_4
# 2089 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_5
# 2092 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_2:
# 2082 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MEOWSCARADA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 2083 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_3:
# 2085 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MEOWSCARADA, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 2086 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_4:
# 2088 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_5:
# 2090 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1::
# 2098 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Lapras_Gmax_Page1
# 2099 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2101 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_2
# 2104 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_3
# 2106 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_4
# 2109 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_2:
# 2102 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LAPRAS, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 108, 0, 172, 28, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, 2, TRUE, FALSE, 10
# 2103 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_3:
# 2105 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_4:
# 2107 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Latias_Page1::
# 2115 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Latias_Page1
# 2116 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2118 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_2
# 2121 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_3
# 2123 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_4
# 2126 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_2:
# 2119 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LATIAS, 65, ITEM_LATIASITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 60, 108, 76, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_RECOVER, 2, FALSE, FALSE, 10
# 2120 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_3:
# 2122 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_4:
# 2124 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Latias_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1::
# 2132 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ludicolo_Page1
# 2133 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2135 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_2
# 2138 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_3
# 2141 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_4
# 2143 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_5
# 2146 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_2:
# 2136 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 188, 0, 148, 92, 76, 4, 31, 31, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2137 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_3:
# 2139 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 92, 156, 4, 31, 31, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2140 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_4:
# 2142 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_5:
# 2144 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1::
# 2152 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Lunala_Page1
# 2153 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2155 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_2
# 2158 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_3
# 2160 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_4
# 2163 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_2:
# 2156 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 132, 52, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_WIDE_GUARD, MOVE_MOONGEIST_BEAM, MOVE_METEOR_BEAM, MOVE_TRICK_ROOM, 2, FALSE, TYPE_DARK, 10
# 2157 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_3:
# 2159 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_4:
# 2161 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1::
# 2169 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Manaphy_Page1
# 2170 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2172 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_2
# 2175 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_3
# 2178 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_4
# 2180 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_5
# 2183 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_2:
# 2173 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANAPHY, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 228, 0, 172, 28, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAIL_GLOW, MOVE_DAZZLING_GLEAM, MOVE_SCALD, 2, FALSE, TYPE_FAIRY, 10
# 2174 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_3:
# 2176 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANAPHY, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 68, 0, 4, 252, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAIL_GLOW, MOVE_DAZZLING_GLEAM, MOVE_SCALD, 2, FALSE, TYPE_FAIRY, 10
# 2177 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_4:
# 2179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_5:
# 2181 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1::
# 2189 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kommo_O_Page1
# 2190 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2192 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_2
# 2195 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_3
# 2198 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_4
# 2201 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_5
# 2203 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_6
# 2206 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_2:
# 2193 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMOIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLANGING_SCALES, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE, 2, FALSE, TYPE_FAIRY, 10
# 2194 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_3:
# 2196 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 204, 0, 0, 228, 76, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLANGOROUS_SOUL, MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, 2, FALSE, TYPE_FAIRY, 10
# 2197 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_4:
# 2199 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BOLD, 1, 0, 212, 0, 196, 52, 44, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_AURA_SPHERE, 2, FALSE, TYPE_STEEL, 10
# 2200 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_5:
# 2202 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_6:
# 2204 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1::
# 2212 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Koraidon_Page1
# 2213 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2215 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_2
# 2218 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_3
# 2221 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_4
# 2223 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_5
# 2226 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_2:
# 2216 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 108, 116, 4, 212, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 2217 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_3:
# 2219 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 2220 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_4:
# 2222 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_5:
# 2224 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1::
# 2232 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kyogre_Page1
# 2233 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2235 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_2
# 2238 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_3
# 2241 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_4
# 2244 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_5
# 2246 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_6
# 2249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_2:
# 2236 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 132, 44, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 2237 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_3:
# 2239 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 164, 12, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 2240 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_4:
# 2242 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_SCALD, MOVE_THUNDER, 2, FALSE, FALSE, 10
# 2243 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_5:
# 2245 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_6:
# 2247 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1::
# 2255 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Lando_T_Page1
# 2256 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2258 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_2
# 2261 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_3
# 2264 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_4
# 2267 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_5
# 2270 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_6
# 2272 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_7
# 2275 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_2:
# 2259 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FLYING, 10
# 2260 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_3:
# 2262 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 2263 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_4:
# 2265 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_WATER, 10
# 2266 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_5:
# 2268 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 2269 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_6:
# 2271 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_7:
# 2273 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1::
# 2281 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Landorus_Page1
# 2282 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2284 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_2
# 2287 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_3
# 2290 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_4
# 2292 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_5
# 2295 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_2:
# 2285 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 132, 0, 4, 252, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 2286 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_3:
# 2288 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 2289 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_4:
# 2291 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_5:
# 2293 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1::
# 2301 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Iron_Hands_Page1
# 2302 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2304 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_2
# 2307 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_3
# 2310 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_4
# 2312 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_5
# 2315 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_2:
# 2305 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 100, 156, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 2306 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_3:
# 2308 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 2309 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_4:
# 2311 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_5:
# 2313 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1::
# 2321 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kangaskhan_Page1
# 2322 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2324 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_2
# 2327 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_3
# 2329 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_4
# 2332 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_2:
# 2325 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 36, 196, 20, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2326 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_3:
# 2328 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_4:
# 2330 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1::
# 2338 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kartana_Page1
# 2339 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2341 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_2
# 2344 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_3
# 2347 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_4
# 2350 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_5
# 2352 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_6
# 2355 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_2:
# 2342 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 116, 4, 4, 252, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_SMART_STRIKE, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH, 2, FALSE, TYPE_FIRE, 10
# 2343 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_3:
# 2345 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_DETECT, 2, FALSE, TYPE_FIRE, 10
# 2346 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_4:
# 2348 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_GRASSIUM_Z, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 84, 84, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_DETECT, MOVE_SUBSTITUTE, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, 2, FALSE, TYPE_FIRE, 10
# 2349 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_5:
# 2351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_6:
# 2353 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1::
# 2361 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Keldeo_Resolute_Page1
# 2362 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2364 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_2
# 2367 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_3
# 2370 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_4
# 2372 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_5
# 2375 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_2:
# 2365 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KELDEO_RESOLUTE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 20, 0, 4, 252, 228, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SECRET_SWORD, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, 2, FALSE, TYPE_GRASS, 10
# 2366 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_3:
# 2368 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KELDEO_RESOLUTE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SECRET_SWORD, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, 2, FALSE, TYPE_GHOST, 10
# 2369 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_4:
# 2371 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_5:
# 2373 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1::
# 2381 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kingambit_Page1
# 2382 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2384 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_2
# 2387 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_3
# 2390 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_4
# 2392 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_5
# 2395 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_2:
# 2385 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_BLACK_GLASSES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 2386 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_3:
# 2388 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, MOVE_TERA_BLAST, MOVE_IRON_HEAD, 2, FALSE, TYPE_FLYING, 10
# 2389 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_4:
# 2391 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_5:
# 2393 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1::
# 2401 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Hydreigon_Page1
# 2402 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2404 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_2
# 2407 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_3
# 2410 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_4
# 2413 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_5
# 2416 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_6
# 2418 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_7
# 2421 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_2:
# 2405 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_DARK_PULSE, 2, FALSE, TYPE_STEEL, 10
# 2406 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_3:
# 2408 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_SCOPE_LENS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOCUS_ENERGY, MOVE_DRACO_METEOR, MOVE_HEAT_WAVE, 2, FALSE, TYPE_FIRE, 10
# 2409 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_4:
# 2411 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_TRICK, 2, FALSE, TYPE_STEEL, 10
# 2412 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_5:
# 2414 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_FLAMETHROWER, 2, FALSE, TYPE_STEEL, 10
# 2415 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_6:
# 2417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_7:
# 2419 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1::
# 2427 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Incineroar_Page1
# 2428 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2430 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_2
# 2433 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_3
# 2436 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_4
# 2439 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_5
# 2441 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_6
# 2444 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_2:
# 2431 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2432 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_3:
# 2434 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 4, 236, 4, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_WILL_O_WISP, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2435 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_4:
# 2437 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 244, 36, 4, 4, 0, 220, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2438 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_5:
# 2440 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_6:
# 2442 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1::
# 2450 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Indeedee_Page1
# 2451 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2453 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_2
# 2456 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_3
# 2458 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_4
# 2461 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_2:
# 2454 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_EXPANDING_FORCE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FIGHTING, 10
# 2455 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_3:
# 2457 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_4:
# 2459 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1::
# 2467 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Indeedee_F_Page1
# 2468 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2470 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_2
# 2473 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_3
# 2475 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_4
# 2478 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_2:
# 2471 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE_F, 65, ITEM_PSYCHIC_SEED, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 252, 0, 204, 4, 4, 44, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 2472 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_3:
# 2474 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_4:
# 2476 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1::
# 2484 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Iron_Bundle_Page1
# 2485 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2487 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_2
# 2490 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_3
# 2492 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_4
# 2495 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_2:
# 2488 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_BUNDLE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_GRASS, 10
# 2489 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_3:
# 2491 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_4:
# 2493 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1::
# 2501 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Groudon_Page1
# 2502 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2504 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_2
# 2507 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_3
# 2510 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_4
# 2513 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_5
# 2515 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_6
# 2518 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_2:
# 2505 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, 2, FALSE, TYPE_FIRE, 10
# 2506 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_3:
# 2508 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, 2, FALSE, FALSE, 10
# 2509 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_4:
# 2511 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_ROAR, 2, FALSE, FALSE, 10
# 2512 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_5:
# 2514 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_6:
# 2516 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1::
# 2524 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gyarados_Page1
# 2525 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2527 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_2
# 2530 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_3
# 2533 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_4
# 2536 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_5
# 2539 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_6
# 2541 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_7
# 2544 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_2:
# 2528 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 172, 36, 116, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_WATERFALL, 2, FALSE, TYPE_GRASS, 10
# 2529 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_3:
# 2531 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 44, 196, 12, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_GRASS, 10
# 2532 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_4:
# 2534 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 44, 196, 12, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, 2, FALSE, TYPE_GROUND, 10
# 2535 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_5:
# 2537 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_GYARADOSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 52, 196, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, 2, FALSE, FALSE, 10
# 2538 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_6:
# 2540 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_7:
# 2542 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1::
# 2550 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Hatterene_Page1
# 2551 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2553 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_2
# 2556 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_3
# 2558 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_4
# 2561 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_2:
# 2554 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HATTERENE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 2, 1, 212, 0, 84, 0, 188, 20, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 2555 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_3:
# 2557 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_4:
# 2559 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1::
# 2567 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Heatran_Page1
# 2568 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2570 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_2
# 2573 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_3
# 2576 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_4
# 2578 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_5
# 2581 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_2:
# 2571 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 244, 0, 4, 20, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, 2, FALSE, TYPE_GRASS, 10
# 2572 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_3:
# 2574 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 36, 36, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_TERA_BLAST, MOVE_HEAT_WAVE, 2, FALSE, TYPE_GRASS, 10
# 2575 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_4:
# 2577 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_5:
# 2579 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1::
# 2587 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Hitmontop_Page1
# 2588 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2590 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_2
# 2593 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_3
# 2596 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_4
# 2598 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_5
# 2601 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_2:
# 2591 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HITMONTOP, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 4, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_WIDE_GUARD, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2592 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_3:
# 2594 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HITMONTOP, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 0, 252, 4, 92, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_WIDE_GUARD, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2595 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_4:
# 2597 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_5:
# 2599 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1::
# 2607 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gastrodon_Page1
# 2608 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2610 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_2
# 2613 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_3
# 2616 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_4
# 2618 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_5
# 2621 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_2:
# 2611 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 172, 0, 108, 4, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 2612 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_3:
# 2614 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 172, 0, 116, 0, 220, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 2615 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_4:
# 2617 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_5:
# 2619 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1::
# 2627 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gengar_Page1
# 2628 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2630 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_2
# 2633 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_3
# 2636 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_4
# 2639 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_5
# 2642 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_6
# 2644 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_7
# 2647 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_2:
# 2631 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_DARK, 10
# 2632 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_3:
# 2634 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 68, 180, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, 2, FALSE, TYPE_WATER, 10
# 2635 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_4:
# 2637 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_DARK, 10
# 2638 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_5:
# 2640 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 76, 0, 28, 180, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, 2, FALSE, TYPE_WATER, 10
# 2641 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_6:
# 2643 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_7:
# 2645 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1::
# 2653 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gholdengo_Page1
# 2654 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2656 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_2
# 2659 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_3
# 2662 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_4
# 2665 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_5
# 2667 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_6
# 2670 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_2:
# 2657 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 212, 0, 4, 60, 212, 20, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 2658 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_3:
# 2660 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 36, 212, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 2661 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_4:
# 2663 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 36, 0, 4, 252, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_STEEL_BEAM, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 2664 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_5:
# 2666 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_6:
# 2668 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1::
# 2676 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gothitelle_Page1
# 2677 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2679 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_2
# 2682 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_3
# 2685 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_4
# 2688 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_5
# 2690 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_6
# 2693 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_2:
# 2680 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 244, 0, 180, 4, 4, 76, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2681 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_3:
# 2683 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 244, 0, 108, 0, 0, 156, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2684 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_4:
# 2686 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 0, 244, 0, 28, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2687 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_5:
# 2689 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_6:
# 2691 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1::
# 2699 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Grimmsnarl_Page1
# 2700 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2702 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_2
# 2705 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_3
# 2708 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_4
# 2710 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_5
# 2713 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_2:
# 2703 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 236, 0, 156, 0, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 2704 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_3:
# 2706 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 244, 4, 196, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_SPIRIT_BREAK, 2, FALSE, TYPE_GHOST, 10
# 2707 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_4:
# 2709 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_5:
# 2711 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1::
# 2719 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Flutter_Mane_Page1
# 2720 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2722 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_2
# 2725 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_3
# 2728 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_4
# 2731 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_5
# 2733 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_6
# 2736 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_2:
# 2723 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 2724 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_3:
# 2726 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 116, 0, 156, 196, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_ICY_WIND, 2, FALSE, TYPE_FAIRY, 10
# 2727 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_4:
# 2729 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 228, 0, 204, 68, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 2730 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_5:
# 2732 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_6:
# 2734 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1::
# 2742 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gallade_Page1
# 2743 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2745 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_2
# 2748 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_3
# 2751 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_4
# 2753 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_5
# 2756 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_2:
# 2746 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GALLADE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 1, 0, 204, 116, 188, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, 2, FALSE, TYPE_WATER, 10
# 2747 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_3:
# 2749 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GALLADE, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 1, 0, 252, 116, 140, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_WIDE_GUARD, MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, 2, FALSE, TYPE_WATER, 10
# 2750 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_4:
# 2752 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_5:
# 2754 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1::
# 2762 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Garchomp_Page1
# 2763 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2765 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_2
# 2768 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_3
# 2771 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_4
# 2774 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_5
# 2776 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_6
# 2779 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_2:
# 2766 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 108, 172, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_FIRE, 10
# 2767 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_3:
# 2769 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 156, 4, 252, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_DRAGON_CLAW, 2, FALSE, TYPE_FIRE, 10
# 2770 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_4:
# 2772 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_GROUND, 10
# 2773 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_5:
# 2775 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_6:
# 2777 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1::
# 2785 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gardevoir_Page1
# 2786 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2788 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_2
# 2791 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_3
# 2793 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_4
# 2796 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_2:
# 2789 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 2790 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_3:
# 2792 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_4:
# 2794 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1::
# 2802 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Garganacl_Page1
# 2803 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2805 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_2
# 2808 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_3
# 2811 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_4
# 2813 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_5
# 2816 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_2:
# 2806 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_SASSY, 0, 0, 252, 0, 20, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 2807 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_3:
# 2809 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 252, 4, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 2810 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_4:
# 2812 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_5:
# 2814 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1::
# 2822 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dusclops_Page1
# 2823 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2825 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_2
# 2828 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_3
# 2831 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_4
# 2833 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_5
# 2836 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_2:
# 2826 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DUSCLOPS, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_NIGHT_SHADE, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 2827 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_3:
# 2829 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DUSCLOPS, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_RELAXED, 2, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_NIGHT_SHADE, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 2830 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_4:
# 2832 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_5:
# 2834 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Entei_Page1::
# 2842 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Entei_Page1
# 2843 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2845 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_2
# 2848 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_3
# 2850 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_4
# 2853 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_2:
# 2846 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ENTEI, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_SACRED_FIRE, MOVE_STONE_EDGE, MOVE_EXTREME_SPEED, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_NORMAL, 10
# 2847 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_3:
# 2849 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Entei_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_4:
# 2851 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Entei_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1::
# 2859 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Excadrill_Page1
# 2860 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2862 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_2
# 2865 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_3
# 2868 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_4
# 2870 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_5
# 2873 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_2:
# 2863 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, 2, FALSE, TYPE_GROUND, 10
# 2864 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_3:
# 2866 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 28, 196, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, 2, FALSE, TYPE_WATER, 10
# 2867 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_4:
# 2869 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_5:
# 2871 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1::
# 2879 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Farigiraf_Page1
# 2880 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2882 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_2
# 2885 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_3
# 2887 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_4
# 2890 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_2:
# 2883 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FARIGIRAF, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 228, 0, 116, 4, 4, 156, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_HYPER_VOICE, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 2884 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_3:
# 2886 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_4:
# 2888 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1::
# 2896 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ferrothorn_Page1
# 2897 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2899 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_2
# 2902 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_3
# 2905 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_4
# 2908 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_5
# 2910 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_6
# 2913 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_2:
# 2900 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 220, 0, 100, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 2901 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_3:
# 2903 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 1, 220, 0, 228, 0, 0, 60, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 2904 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_4:
# 2906 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 220, 204, 0, 0, 0, 84, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 2907 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_5:
# 2909 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_6:
# 2911 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1::
# 2919 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Corviknight_Page1
# 2920 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2922 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_2
# 2925 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_3
# 2927 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_4
# 2930 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_2:
# 2923 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CORVIKNIGHT, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_IMPISH, 2, 1, 244, 4, 116, 4, 0, 140, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_IRON_HEAD, 2, FALSE, TYPE_DRAGON, 10
# 2924 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_3:
# 2926 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_4:
# 2928 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1::
# 2936 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Cresselia_Page1
# 2937 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2939 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_2
# 2942 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_3
# 2945 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_4
# 2948 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_5
# 2950 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_6
# 2953 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_2:
# 2940 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 1, 252, 0, 156, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2941 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_3:
# 2943 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 1, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2944 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_4:
# 2946 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_SASSY, 0, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2947 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_5:
# 2949 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_6:
# 2951 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1::
# 2959 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dracovish_Page1
# 2960 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2962 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_2
# 2965 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_3
# 2968 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_4
# 2970 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_5
# 2973 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_2:
# 2963 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRACOVISH, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FISHIOUS_REND, MOVE_STONE_EDGE, MOVE_OUTRAGE, MOVE_CRUNCH, 2, FALSE, TYPE_WATER, 10
# 2964 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_3:
# 2966 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRACOVISH, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 236, 4, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FISHIOUS_REND, MOVE_STONE_EDGE, MOVE_OUTRAGE, MOVE_CRUNCH, 2, FALSE, TYPE_WATER, 10
# 2967 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_4:
# 2969 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_5:
# 2971 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1::
# 2979 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dragapult_Page1
# 2980 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2982 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_2
# 2985 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_3
# 2988 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_4
# 2991 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_5
# 2993 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_6
# 2996 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_2:
# 2983 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 252, 4, 44, 164, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DARTS, MOVE_LIGHT_SCREEN, MOVE_WILL_O_WISP, 2, FALSE, TYPE_WATER, 10
# 2984 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_3:
# 2986 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 28, 196, 4, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_PHANTOM_FORCE, MOVE_DRAGON_CLAW, 2, FALSE, TYPE_WATER, 10
# 2987 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_4:
# 2989 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_OUTRAGE, 2, FALSE, TYPE_DRAGON, 10
# 2990 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_5:
# 2992 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_6:
# 2994 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1::
# 3002 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dragonite_Page1
# 3003 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3005 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_2
# 3008 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_3
# 3011 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_4
# 3013 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_5
# 3016 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_2:
# 3006 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_NORMAL, 10
# 3007 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_3:
# 3009 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_LOADED_DICE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HAZE, MOVE_SCALE_SHOT, 2, FALSE, TYPE_FAIRY, 10
# 3010 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_4:
# 3012 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_5:
# 3014 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1::
# 3022 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Cinderace_Page1
# 3023 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3025 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_2
# 3028 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_3
# 3031 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_4
# 3033 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_5
# 3036 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_2:
# 3026 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CINDERACE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, 2, FALSE, TYPE_GHOST, 10
# 3027 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_3:
# 3029 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CINDERACE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, 2, FALSE, TYPE_GHOST, 10
# 3030 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_4:
# 3032 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_5:
# 3034 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1::
# 3042 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Clefairy_Page1
# 3043 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3045 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_2
# 3048 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_3
# 3051 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_4
# 3054 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_5
# 3056 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_6
# 3059 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_2:
# 3046 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 140, 0, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 3047 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_3:
# 3049 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 220, 0, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 3050 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_4:
# 3052 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 60, 0, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 3053 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_5:
# 3055 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_6:
# 3057 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1::
# 3065 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Coalossal_Gmax_Page1
# 3066 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3068 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_2
# 3071 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_3
# 3074 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_4
# 3076 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_5
# 3079 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_2:
# 3069 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_COALOSSAL, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 116, 0, 4, 228, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_METEOR_BEAM, MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, 2, TRUE, TYPE_FIRE, 10
# 3070 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_3:
# 3072 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_COALOSSAL, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_METEOR_BEAM, MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, 2, TRUE, TYPE_FIRE, 10
# 3073 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_4:
# 3075 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_5:
# 3077 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1::
# 3085 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Comfey_Page1
# 3086 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3088 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_2
# 3091 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_3
# 3093 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_4
# 3096 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_2:
# 3089 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_COMFEY, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_CALM, 1, 0, 180, 0, 0, 0, 0, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_FLORAL_HEALING, MOVE_DRAINING_KISS, 2, FALSE, TYPE_WATER, 10
# 3090 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_3:
# 3092 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_4:
# 3094 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1::
# 3102 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Conkeldurr_Page1
# 3103 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3105 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_2
# 3108 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_3
# 3111 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_4
# 3114 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_5
# 3117 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_6
# 3119 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_7
# 3122 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_2:
# 3106 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 228, 236, 0, 0, 0, 44, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_POISON_JAB, 2, FALSE, TYPE_FIRE, 10
# 3107 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_3:
# 3109 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 2, 1, 228, 236, 0, 0, 0, 44, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 3110 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_4:
# 3112 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_POISON_JAB, 2, FALSE, TYPE_FIRE, 10
# 3113 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_5:
# 3115 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 3116 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_6:
# 3118 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_7:
# 3120 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1::
# 3128 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chandelure_Page1
# 3129 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3131 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_2
# 3134 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_3
# 3137 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_4
# 3139 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_5
# 3142 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_2:
# 3132 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHANDELURE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 228, 0, 84, 0, 196, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, 2, FALSE, TYPE_GRASS, 10
# 3133 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_3:
# 3135 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHANDELURE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_OVERHEAT, 2, FALSE, TYPE_FIRE, 10
# 3136 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_4:
# 3138 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_5:
# 3140 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1::
# 3148 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Charizard_Page1
# 3149 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3151 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_2
# 3154 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_3
# 3157 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_4
# 3159 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_5
# 3162 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_2:
# 3152 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, 2, FALSE, TYPE_GRASS, 10
# 3153 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_3:
# 3155 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 236, 44, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_ROOST, 2, FALSE, TYPE_GRASS, 10
# 3156 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_4:
# 3158 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_5:
# 3160 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1::
# 3168 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Charizard_Gmax_Page1
# 3169 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3171 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_2
# 3174 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_3
# 3176 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_4
# 3179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_2:
# 3172 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARTI_BERRY, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 4, 252, 244, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BLAST_BURN, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH, 2, TRUE, FALSE, 10
# 3173 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_3:
# 3175 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_4:
# 3177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1::
# 3185 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chi_Yu_Page1
# 3186 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3188 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_2
# 3191 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_3
# 3194 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_4
# 3196 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_5
# 3199 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_2:
# 3189 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_OVERHEAT, 2, FALSE, TYPE_GHOST, 10
# 3190 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_3:
# 3192 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GHOST, 10
# 3193 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_4:
# 3195 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_5:
# 3197 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1::
# 3205 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chien_Pao_Page1
# 3206 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3208 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_2
# 3211 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_3
# 3213 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_4
# 3216 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_2:
# 3209 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHIEN_PAO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICICLE_CRASH, MOVE_SACRED_SWORD, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 3210 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_3:
# 3212 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_4:
# 3214 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1::
# 3222 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Basculegion_Page1
# 3223 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3225 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_2
# 3228 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_3
# 3231 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_4
# 3234 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_5
# 3237 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_6
# 3239 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_7
# 3242 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_2:
# 3226 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 220, 124, 156, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 3227 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_3:
# 3229 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 3230 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_4:
# 3232 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 3233 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_5:
# 3235 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 3236 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_6:
# 3238 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_7:
# 3240 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1::
# 3248 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Baxcalibur_Page1
# 3249 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3251 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_2
# 3254 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_3
# 3256 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_4
# 3259 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_2:
# 3252 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BAXCALIBUR, 65, ITEM_LOADED_DICE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCALE_SHOT, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, 2, FALSE, TYPE_FAIRY, 10
# 3253 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_3:
# 3255 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_4:
# 3257 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1::
# 3265 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Bronzong_Page1
# 3266 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3268 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_2
# 3271 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_3
# 3274 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_4
# 3276 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_5
# 3279 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_2:
# 3269 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 252, 0, 188, 0, 0, 68, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, MOVE_GYRO_BALL, 2, FALSE, TYPE_WATER, 10
# 3270 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_3:
# 3272 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, MOVE_GYRO_BALL, 2, FALSE, TYPE_WATER, 10
# 3273 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_4:
# 3275 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_5:
# 3277 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1::
# 3285 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Calyrex_Page1
# 3286 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3288 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_2
# 3291 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_3
# 3294 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_4
# 3297 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_5
# 3300 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_6
# 3302 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_7
# 3305 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_2:
# 3289 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_GHOST, 10
# 3290 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_3:
# 3292 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 20, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_DARK, 10
# 3293 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_4:
# 3295 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 116, 0, 0, 0, 140, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 3296 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_5:
# 3298 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 116, 4, 12, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 3299 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_6:
# 3301 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_7:
# 3303 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1::
# 3311 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Celesteela_Page1
# 3312 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3314 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_2
# 3317 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_3
# 3320 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_4
# 3322 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_5
# 3325 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_2:
# 3315 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 20, 4, 180, 52, 31, 0, 31, 31, 31, 31, MOVE_AIR_SLASH, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_GIGA_DRAIN, 2, FALSE, TYPE_DRAGON, 10
# 3316 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_3:
# 3318 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 68, 84, 4, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_HEAVY_SLAM, 2, FALSE, TYPE_DRAGON, 10
# 3319 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_4:
# 3321 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_5:
# 3323 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1::
# 3331 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Arcanine_Page1
# 3332 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3334 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_2
# 3337 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_3
# 3340 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_4
# 3342 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_5
# 3345 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_2:
# 3335 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 236, 68, 4, 196, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EXTREME_SPEED, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 3336 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_3:
# 3338 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 252, 68, 4, 76, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, MOVE_SNARL, 2, FALSE, TYPE_WATER, 10
# 3339 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_4:
# 3341 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_5:
# 3343 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1::
# 3351 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Arcanine_Hisui_Page1
# 3352 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3354 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_2
# 3357 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_3
# 3359 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_4
# 3362 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_2:
# 3355 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE_HISUI, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EXTREME_SPEED, MOVE_HEAD_SMASH, 2, FALSE, TYPE_NORMAL, 10
# 3356 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_3:
# 3358 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_4:
# 3360 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1::
# 3368 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Archaludon_Page1
# 3369 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3371 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_2
# 3374 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_3
# 3377 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_4
# 3379 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_5
# 3382 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_2:
# 3372 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, 2, FALSE, TYPE_ELECTRIC, 10
# 3373 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_3:
# 3375 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 4, 4, 44, 204, 31, 31, 31, 31, 31, 31, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_BODY_PRESS, 2, FALSE, TYPE_GRASS, 10
# 3376 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_4:
# 3378 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_5:
# 3380 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1::
# 3388 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Armarouge_Page1
# 3389 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3391 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_2
# 3394 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_3
# 3397 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_4
# 3399 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_5
# 3402 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_2:
# 3392 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARMAROUGE, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENDURE, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_FIRE, 10
# 3393 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_3:
# 3395 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARMAROUGE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 0, 1, 228, 0, 0, 0, 196, 84, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_GRASS, 10
# 3396 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_4:
# 3398 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_5:
# 3400 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1::
# 3408 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Azumarill_Page1
# 3409 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3411 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_2
# 3414 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_3
# 3417 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_4
# 3419 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_5
# 3422 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_2:
# 3412 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 204, 236, 4, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_KNOCK_OFF, 2, FALSE, TYPE_WATER, 10
# 3413 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_3:
# 3415 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_KNOCK_OFF, 2, FALSE, TYPE_WATER, 10
# 3416 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_4:
# 3418 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_5:
# 3420 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1::
# 3428 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Aegislash_Page1
# 3429 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3431 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_2
# 3434 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_3
# 3437 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_4
# 3440 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_5
# 3442 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_6
# 3445 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_2:
# 3432 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, 2, FALSE, FALSE, 10
# 3433 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_3:
# 3435 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, 2, FALSE, TYPE_WATER, 10
# 3436 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_4:
# 3438 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 252, 0, 4, 0, 180, 68, 31, 0, 31, 0, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, 2, FALSE, FALSE, 10
# 3439 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_5:
# 3441 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_6:
# 3443 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1::
# 3451 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Aerodactyl_Page1
# 3452 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3454 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_2
# 3457 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_3
# 3460 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_4
# 3462 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_5
# 3465 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_2:
# 3455 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AERODACTYL, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_WIDE_GUARD, MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, 2, FALSE, TYPE_GHOST, 10
# 3456 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_3:
# 3458 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AERODACTYL, 65, ITEM_AERODACTYLITE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 132, 116, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, 2, FALSE, TYPE_WATER, 10
# 3459 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_4:
# 3461 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_5:
# 3463 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1::
# 3471 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Amoonguss_Page1
# 3472 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3474 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_2
# 3477 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_3
# 3480 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_4
# 3483 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_5
# 3486 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_6
# 3488 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_7
# 3491 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_2:
# 3475 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_RELAXED, 2, 1, 236, 0, 236, 0, 0, 36, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 3476 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_3:
# 3478 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 244, 0, 108, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 3479 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_4:
# 3481 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_SPORE, MOVE_RAGE_POWDER, 2, FALSE, TYPE_WATER, 10
# 3482 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_5:
# 3484 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 20, 0, 0, 236, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 3485 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_6:
# 3487 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_7:
# 3489 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1::
# 3497 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Annihilape_Page1
# 3498 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3500 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_2
# 3503 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_3
# 3506 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_4
# 3508 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_5
# 3511 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_2:
# 3501 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 180, 68, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 3502 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_3:
# 3504 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_FINAL_GAMBIT, 2, FALSE, TYPE_FIGHTING, 10
# 3505 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_4:
# 3507 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_5:
# 3509 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1::
# 3517 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Araquanid_Page1
# 3518 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3520 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_2
# 3523 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_3
# 3525 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_4
# 3528 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_2:
# 3521 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARAQUANID, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 236, 20, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_BUG_BITE, MOVE_LIQUIDATION, 2, FALSE, TYPE_WATER, 10
# 3522 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_3:
# 3524 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_4:
# 3526 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
# 5 "data/scripts/sample_sets_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                               B: Go Back$"

Auto_Text_Sample_Sets_Page1::
# 3532 "data/scripts/sample_sets_options.pory"
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page1::
# 3539 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "AERODACTYL$"
	.string "AMOONGUSS$"
	.string "ANNIHILAPE$"
	.string "ARAQUANID$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page2::
# 3550 "data/scripts/sample_sets_options.pory"
	.string "ARCANINE$"
	.string "ARCANINE-HISUI$"
	.string "ARCHALUDON$"
	.string "ARMAROUGE$"
	.string "AZUMARILL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page3::
# 3561 "data/scripts/sample_sets_options.pory"
	.string "BASCULEGION$"
	.string "BAXCALIBUR$"
	.string "BRONZONG$"
	.string "CALYREX$"
	.string "CELESTEELA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page4::
# 3572 "data/scripts/sample_sets_options.pory"
	.string "CHANDELURE$"
	.string "CHARIZARD$"
	.string "CHARIZARD-GMAX$"
	.string "CHI-YU$"
	.string "CHIEN-PAO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page5::
# 3583 "data/scripts/sample_sets_options.pory"
	.string "CINDERACE$"
	.string "CLEFAIRY$"
	.string "COALOSSAL-GMAX$"
	.string "COMFEY$"
	.string "CONKELDURR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page6::
# 3594 "data/scripts/sample_sets_options.pory"
	.string "CORVIKNIGHT$"
	.string "CRESSELIA$"
	.string "DRACOVISH$"
	.string "DRAGAPULT$"
	.string "DRAGONITE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page7::
# 3605 "data/scripts/sample_sets_options.pory"
	.string "DUSCLOPS$"
	.string "ENTEI$"
	.string "EXCADRILL$"
	.string "FARIGIRAF$"
	.string "FERROTHORN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page8::
# 3616 "data/scripts/sample_sets_options.pory"
	.string "FLUTTER MANE$"
	.string "GALLADE$"
	.string "GARCHOMP$"
	.string "GARDEVOIR$"
	.string "GARGANACL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page9::
# 3627 "data/scripts/sample_sets_options.pory"
	.string "GASTRODON$"
	.string "GENGAR$"
	.string "GHOLDENGO$"
	.string "GOTHITELLE$"
	.string "GRIMMSNARL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page10::
# 3638 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "GYARADOS$"
	.string "HATTERENE$"
	.string "HEATRAN$"
	.string "HITMONTOP$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page11::
# 3649 "data/scripts/sample_sets_options.pory"
	.string "HYDREIGON$"
	.string "INCINEROAR$"
	.string "INDEEDEE$"
	.string "INDEEDEE-F$"
	.string "IRON BUNDLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page12::
# 3660 "data/scripts/sample_sets_options.pory"
	.string "IRON HANDS$"
	.string "KANGASKHAN$"
	.string "KARTANA$"
	.string "KELDEO-RESOLUTE$"
	.string "KINGAMBIT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page13::
# 3671 "data/scripts/sample_sets_options.pory"
	.string "KOMMO-O$"
	.string "KORAIDON$"
	.string "KYOGRE$"
	.string "LANDO-T$"
	.string "LANDORUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page14::
# 3682 "data/scripts/sample_sets_options.pory"
	.string "LAPRAS-GMAX$"
	.string "LATIAS$"
	.string "LUDICOLO$"
	.string "LUNALA$"
	.string "MANAPHY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page15::
# 3693 "data/scripts/sample_sets_options.pory"
	.string "MANECTRIC$"
	.string "MAROWAK-ALOLA$"
	.string "MAUSHOLD$"
	.string "MAWILE$"
	.string "MEOWSCARADA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page16::
# 3704 "data/scripts/sample_sets_options.pory"
	.string "METAGROSS$"
	.string "MILOTIC$"
	.string "MIMIKYU$"
	.string "MIRAIDON$"
	.string "MOLTRES-GALAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page17::
# 3715 "data/scripts/sample_sets_options.pory"
	.string "MUK-ALOLA$"
	.string "MURKROW$"
	.string "NIHILEGO$"
	.string "NINETALES-ALOLA$"
	.string "OGERPON-CS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page18::
# 3726 "data/scripts/sample_sets_options.pory"
	.string "OGERPON-HF$"
	.string "OGERPON-WS$"
	.string "ORANGURU$"
	.string "PALAFIN$"
	.string "PELIPPER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page19::
# 3737 "data/scripts/sample_sets_options.pory"
	.string "POLITOED$"
	.string "PORYGON2$"
	.string "PRIMARINA$"
	.string "RAGING BOLT$"
	.string "RAICHU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page20::
# 3748 "data/scripts/sample_sets_options.pory"
	.string "RAYQUAZA$"
	.string "REGIDRAGO$"
	.string "REGIELEKI$"
	.string "RHYPERIOR$"
	.string "RILLABOOM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page21::
# 3759 "data/scripts/sample_sets_options.pory"
	.string "ROARING MOON$"
	.string "ROTOM-WASH$"
	.string "SABLEYE$"
	.string "SALAMENCE$"
	.string "SINISTCHA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page22::
# 3770 "data/scripts/sample_sets_options.pory"
	.string "SNEASLER$"
	.string "SNORLAX$"
	.string "STAKATAKA$"
	.string "SYLVEON$"
	.string "TALONFLAME$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page23::
# 3781 "data/scripts/sample_sets_options.pory"
	.string "TAPU BULU$"
	.string "TAPU FINI$"
	.string "TAPU KOKO$"
	.string "TAPU LELE$"
	.string "TATSUGIRI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page24::
# 3792 "data/scripts/sample_sets_options.pory"
	.string "THUNDURUS$"
	.string "TING-LU$"
	.string "TINKATON$"
	.string "TOGEKISS$"
	.string "TORKOAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page25::
# 3803 "data/scripts/sample_sets_options.pory"
	.string "TORNADUS$"
	.string "TSAREENA$"
	.string "TYRANITAR$"
	.string "URSALUNA$"
	.string "URSALUNA-BLOODMOON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page26::
# 3814 "data/scripts/sample_sets_options.pory"
	.string "URSHIFU-RS$"
	.string "URSHIFU-SS$"
	.string "VENUSAUR$"
	.string "VENUSAUR-GMAX$"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page27::
# 3825 "data/scripts/sample_sets_options.pory"
	.string "WEEZING-GALAR$"
	.string "WHIMSICOTT$"
	.string "XERNEAS$"
	.string "YVELTAL$"
	.string "ZACIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page28::
# 3836 "data/scripts/sample_sets_options.pory"
	.string "ZAMAZENTA$"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Zamazenta_Page1::
# 3844 "data/scripts/sample_sets_options.pory"
	.string "76/0/244+/0-/0/188$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Zapdos_Page1::
# 3851 "data/scripts/sample_sets_options.pory"
	.string "244/0-/84/116+/36/28 (SITRUS)$"
	.string "252/0-/76/116+/36/28 (GOGGLES)$"
	.string "28/0-/0/228/0/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Weezing_Galar_Page1::
# 3860 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/196+/52/4 (SPECS)$"
	.string "252/0-/76+/4/172/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Whimsicott_Page1::
# 3868 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/0/0/252+ (CLOAK)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Xerneas_Page1::
# 3876 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+$"
	.string "44/0-/20/188/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Yveltal_Page1::
# 3884 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (ORB)$"
	.string "4/244/4/0-/4/252+ (DARK Z)$"
	.string "4/244/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Zacian_Page1::
# 3893 "data/scripts/sample_sets_options.pory"
	.string "252/76+/4/0-/12/164 (GROUND)$"
	.string "252/76+/4/0-/12/164 (STELLAR)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Urshifu_Rs_Page1::
# 3901 "data/scripts/sample_sets_options.pory"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "12/156+/4/0-/84/252 (MYSTIC)$"
	.string "12/156+/4/0-/84/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Urshifu_Ss_Page1::
# 3910 "data/scripts/sample_sets_options.pory"
	.string "0/236+/0/0-/20/252 (BAND)$"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Venusaur_Page1::
# 3918 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Venusaur_Gmax_Page1::
# 3925 "data/scripts/sample_sets_options.pory"
	.string "156/0-/36/172+/20/116 (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Volcarona_Page1::
# 3932 "data/scripts/sample_sets_options.pory"
	.string "252/0-/108/36+/4/108 (TERA)$"
	.string "252/0-/188/36+/4/28 (SUPPORT)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tornadus_Page1::
# 3940 "data/scripts/sample_sets_options.pory"
	.string "196/0-/228+/4/76/4 (CLOAK)$"
	.string "196/0-/228+/4/76/4 (HELMET)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tsareena_Page1::
# 3949 "data/scripts/sample_sets_options.pory"
	.string "228/236+/4/0-/36/4 (SITRUS)$"
	.string "252/236+/4/0-/12/4 (VEST)$"
	.string "4/252+/0/0-/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tyranitar_Page1::
# 3958 "data/scripts/sample_sets_options.pory"
	.string "188/204+/0/0/116/0- (LIFE ORB)$"
	.string "188/204+/4/0-/108/4 (LIFE ORB)$"
	.string "252/204+/0/0/52/0- (LUM BERRY)$"
	.string "252/204+/4/0-/44/4 (LUM BERRY)$"
	.string "4/244/4/0-/4/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tyranitar_Page2::
# 3969 "data/scripts/sample_sets_options.pory"
	.string "44/164/20/0-/28/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ursaluna_Page1::
# 3976 "data/scripts/sample_sets_options.pory"
	.string "140/236+/0/0/132/0-$"
	.string "140/236+/4/0-/116/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1::
# 3984 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/196+/52/12 (ORB)$"
	.string "244/0/0/196+/68/0- (ORB)$"
	.string "4/0-/4/196+/52/252 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Thundurus_Page1::
# 3993 "data/scripts/sample_sets_options.pory"
	.string "228/0-/28/12/172+/68$"
	.string "36/212/4/0-/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "4/236/4/0-/12/252+ (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ting_Lu_Page1::
# 4004 "data/scripts/sample_sets_options.pory"
	.string "52/4/196+/0-/252/4 (HELMET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tinkaton_Page1::
# 4011 "data/scripts/sample_sets_options.pory"
	.string "180/172/100/0-/44+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Togekiss_Page1::
# 4018 "data/scripts/sample_sets_options.pory"
	.string "228/0-/196+/4/76/4 (LENS)$"
	.string "236/0-/196+/4/12/60 (BABIRI)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Torkoal_Page1::
# 4026 "data/scripts/sample_sets_options.pory"
	.string "204/0/0/196+/108/0-$"
	.string "204/0/0/196+/108/0- (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Bulu_Page1::
# 4034 "data/scripts/sample_sets_options.pory"
	.string "124/140/4/0-/12/228+ (SCARF)$"
	.string "252/4/36+/0-/212/4 (LEFTYS)$"
	.string "252/76+/0/0-/0/180 (GRASS Z)$"
	.string "28/236/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Fini_Page1::
# 4044 "data/scripts/sample_sets_options.pory"
	.string "252/0-/100/4/4+/148 (SUPPORT)$"
	.string "252/0-/12/4/4/236+ (SUPPORT)$"
	.string "252/0-/172/4/76+/4 (CALM MIND)$"
	.string "252/0-/4/196+/4/52 (SPECS)$"
	.string "4/0-/4/196+/52/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Koko_Page1::
# 4055 "data/scripts/sample_sets_options.pory"
	.string "172/0-/12/36/196/92+ (VEST)$"
	.string "28/0-/4/196+/28/252 (ELEC Z)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "4/0-/4/244/4/252+ (ELEC Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Lele_Page1::
# 4065 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "12/0-/4/236+/4/252 (PSYCH Z)$"
	.string "12/0-/4/236+/4/252 (SCARF)$"
	.string "252/0-/108/76+/4/68 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tatsugiri_Page1::
# 4075 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252 (SCARF)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sneasler_Page1::
# 4083 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (COACHING)$"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "4/244/4/0-/4/252+ (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Snorlax_Page1::
# 4092 "data/scripts/sample_sets_options.pory"
	.string "228/76+/196/0-/4/4 (DRUM)$"
	.string "228/76+/204/0/0/0- (DRUM)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Stakataka_Page1::
# 4100 "data/scripts/sample_sets_options.pory"
	.string "252/0/68+/0/188/0- (HERB)$"
	.string "252/252+/0-/0/4/0 (ORB)$"
	.string "252/68+/0/0/188/0- (ROCK Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sylveon_Page1::
# 4109 "data/scripts/sample_sets_options.pory"
	.string "180/0-/244/76+/4/4 (LEFTYS)$"
	.string "252/0-/172/76+/4/4 (PLATE)$"
	.string "252/0-/92/156+/4/4 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Talonflame_Page1::
# 4118 "data/scripts/sample_sets_options.pory"
	.string "4/252+/0/0-/0/252 (BANDED)$"
	.string "4/252+/0/0-/0/252 (LIFE ORB)$"
	.string "4/252/0/0-/0/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Roaring_Moon_Page1::
# 4127 "data/scripts/sample_sets_options.pory"
	.string "4/220/28/0-/4/252+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rotom_Wash_Page1::
# 4134 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/116+/4/132 (SITRUS)$"
	.string "252/0-/44/60/148+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sableye_Page1::
# 4142 "data/scripts/sample_sets_options.pory"
	.string "252/0-/116+/0/140/0 (CLAY)$"
	.string "252/0-/36+/0/220/0 (CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Salamence_Page1::
# 4150 "data/scripts/sample_sets_options.pory"
	.string "0/44/0/252/0-/212+ (MEGA)$"
	.string "252/36+/4/0-/124/92 (MEGA)$"
	.string "4/0-/4/244+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sinistcha_Page1::
# 4159 "data/scripts/sample_sets_options.pory"
	.string "236/0-/188+/4/76/4 (SITRUS)$"
	.string "236/0/188+/0/84/0- (SITRUS)$"
	.string "244/0-/188+/4/68/4 (LEFTYS)$"
	.string "244/0/188+/0/76/0- (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rayquaza_Page1::
# 4169 "data/scripts/sample_sets_options.pory"
	.string "4/252/0/0-/0/252+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Regidrago_Page1::
# 4176 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Regieleki_Page1::
# 4183 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (MAGNET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rhyperior_Page1::
# 4190 "data/scripts/sample_sets_options.pory"
	.string "12/236+/4/0-/252/4 (POLICY)$"
	.string "20/236+/0/0/252/0- (POLICY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rillaboom_Page1::
# 4198 "data/scripts/sample_sets_options.pory"
	.string "140/116+/12/0-/236/4 (VEST)$"
	.string "140/196+/12/0-/156/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Politoed_Page1::
# 4206 "data/scripts/sample_sets_options.pory"
	.string "220/0-/196/4/76+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Porygon2_Page1::
# 4213 "data/scripts/sample_sets_options.pory"
	.string "244/0-/92/116+/52/4 (TERA)$"
	.string "244/0/92/116+/52/0- (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Primarina_Page1::
# 4221 "data/scripts/sample_sets_options.pory"
	.string "180/0-/108/188+/4/28 (SPRAY)$"
	.string "236/0-/132/108+/4/28 (SPRAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Raging_Bolt_Page1::
# 4229 "data/scripts/sample_sets_options.pory"
	.string "148/0-/36/100+/44/180 (ORB)$"
	.string "244/0-/124/100+/36/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Raichu_Page1::
# 4237 "data/scripts/sample_sets_options.pory"
	.string "140/0-/188/0/0/180+ (VEST)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Hf_Page1::
# 4246 "data/scripts/sample_sets_options.pory"
	.string "188/76+/52/0-/4/188$"
	.string "28/220/4/0-/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Ws_Page1::
# 4254 "data/scripts/sample_sets_options.pory"
	.string "220/60/44/0-/4/180+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Oranguru_Page1::
# 4261 "data/scripts/sample_sets_options.pory"
	.string "252/0/180/0/76+/0- (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Palafin_Page1::
# 4268 "data/scripts/sample_sets_options.pory"
	.string "252/156+/4/0-/92/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Pelipper_Page1::
# 4275 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Muk_Alola_Page1::
# 4282 "data/scripts/sample_sets_options.pory"
	.string "220/36+/108/0-/140/4 (FIGY)$"
	.string "228/4/116/0-/156+/4 (MINIMIZE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Murkrow_Page1::
# 4290 "data/scripts/sample_sets_options.pory"
	.string "252/0-/116/0/140+/0$"
	.string "252/0-/140+/0/116/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Nihilego_Page1::
# 4298 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (HERB)$"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "36/0-/4/212/4/252+ (ORB)$"
	.string "68/0-/4/180+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ninetales_Alola_Page1::
# 4308 "data/scripts/sample_sets_options.pory"
	.string "212/0-/100/4/4/188+ (CLAY)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Cs_Page1::
# 4316 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Metagross_Page1::
# 4323 "data/scripts/sample_sets_options.pory"
	.string "124/196+/12/0-/36/140 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Milotic_Page1::
# 4330 "data/scripts/sample_sets_options.pory"
	.string "180/0-/204/4/116+/4 (COIL)$"
	.string "244/0-/220/4/36+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mimikyu_Page1::
# 4338 "data/scripts/sample_sets_options.pory"
	.string "252/236+/20/0/0/0- (MIMI Z)$"
	.string "4/0-/0/252+/0/252 (GHOST Z)$"
	.string "4/252+/0/0-/0/252 (GHOST Z)$"
	.string "4/252+/0/0-/0/252 (MIMI Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Miraidon_Page1::
# 4348 "data/scripts/sample_sets_options.pory"
	.string "92/0-/4/196+/4/212 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Moltres_Galar_Page1::
# 4355 "data/scripts/sample_sets_options.pory"
	.string "28/0-/4/220/4/252+ (ORB)$"
	.string "92/0-/4/156+/4/252 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Manectric_Page1::
# 4363 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/36/4/220+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Marowak_Alola_Page1::
# 4370 "data/scripts/sample_sets_options.pory"
	.string "252/156+/0/0/100/0-$"
	.string "252/156+/4/0-/0/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Maushold_Page1::
# 4378 "data/scripts/sample_sets_options.pory"
	.string "252/0-/156/0/0/100+ (BEAT UP)$"
	.string "252/0-/236+/0/20/0 (GOGGLES)$"
	.string "4/244/4/0-/4/252+ (LENS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mawile_Page1::
# 4387 "data/scripts/sample_sets_options.pory"
	.string "156/196+/0/0/156/0- (MEGA)$"
	.string "156/196+/4/0-/148/4 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Meowscarada_Page1::
# 4395 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "4/244/4/0-/4/252+ (BAND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Lapras_Gmax_Page1::
# 4403 "data/scripts/sample_sets_options.pory"
	.string "108/0-/172/196+/4/28 (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Latias_Page1::
# 4410 "data/scripts/sample_sets_options.pory"
	.string "252/0-/60/76+/12/108$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ludicolo_Page1::
# 4417 "data/scripts/sample_sets_options.pory"
	.string "188/0-/148/76+/4/92 (VEST)$"
	.string "252/0-/4/156+/4/92 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Lunala_Page1::
# 4425 "data/scripts/sample_sets_options.pory"
	.string "140/0-/132/180+/4/52 (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Manaphy_Page1::
# 4432 "data/scripts/sample_sets_options.pory"
	.string "228/0-/172/76+/4/28$"
	.string "68/0-/4/180+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kommo_O_Page1::
# 4440 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252 (KOMMO Z)$"
	.string "204/0-/0/76+/0/228 (LEFTYS)$"
	.string "212/0-/196+/44/4/52 (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Koraidon_Page1::
# 4449 "data/scripts/sample_sets_options.pory"
	.string "108/116+/4/0-/68/212 (ORB)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kyogre_Page1::
# 4457 "data/scripts/sample_sets_options.pory"
	.string "252/0-/132/76+/4/44 (MYSTIC)$"
	.string "252/0-/164/76+/4/12 (PRIMAL)$"
	.string "4/0-/4/244+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Lando_T_Page1::
# 4466 "data/scripts/sample_sets_options.pory"
	.string "12/196+/4/0-/44/252 (SCARF)$"
	.string "12/196+/4/0-/44/252 (VEST)$"
	.string "156/116+/36/0-/108/92 (GROUND Z)$"
	.string "20/164+/4/0-/68/252 (GROUND Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Landorus_Page1::
# 4476 "data/scripts/sample_sets_options.pory"
	.string "132/0-/4/116+/4/252 (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Iron_Hands_Page1::
# 4484 "data/scripts/sample_sets_options.pory"
	.string "100/156+/0/0/252/0- (VEST)$"
	.string "60/156+/36/0-/252/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kangaskhan_Page1::
# 4492 "data/scripts/sample_sets_options.pory"
	.string "36/196+/20/0-/236/20 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kartana_Page1::
# 4499 "data/scripts/sample_sets_options.pory"
	.string "116/4/4/0-/132/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (FOCUS SASH)$"
	.string "84/84/4/0-/84/252+ (GRASS Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Keldeo_Resolute_Page1::
# 4508 "data/scripts/sample_sets_options.pory"
	.string "20/0-/4/228/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kingambit_Page1::
# 4516 "data/scripts/sample_sets_options.pory"
	.string "204/196+/4/0-/92/12$"
	.string "204/196+/4/0-/92/12 (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Hydreigon_Page1::
# 4524 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236/4/252+ (ORB)$"
	.string "52/0-/4/196+/4/252 (LENS)$"
	.string "52/0-/4/196+/4/252 (SCARF)$"
	.string "52/0-/4/196+/4/252 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Incineroar_Page1::
# 4534 "data/scripts/sample_sets_options.pory"
	.string "236/36+/4/0-/204/28 (SITRUS)$"
	.string "236/4+/236/0-/28/4 (HELMET)$"
	.string "244/36+/4/0-/220/4 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Indeedee_Page1::
# 4543 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Indeedee_F_Page1::
# 4550 "data/scripts/sample_sets_options.pory"
	.string "252/0-/204/4/44+/4 (SEED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Iron_Bundle_Page1::
# 4557 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Groudon_Page1::
# 4564 "data/scripts/sample_sets_options.pory"
	.string "252/156+/4/0-/84/12 (AMULET)$"
	.string "252/156+/4/0-/84/12 (PRIMAL)$"
	.string "4/0-/4/244/4/252+ (PRIMAL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gyarados_Page1::
# 4573 "data/scripts/sample_sets_options.pory"
	.string "172/36+/116/0-/4/180 (SUPPORT)$"
	.string "44/196+/12/0-/4/252 (GRASS)$"
	.string "44/196+/12/0-/4/252 (GROUND)$"
	.string "52/196+/4/0-/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Hatterene_Page1::
# 4583 "data/scripts/sample_sets_options.pory"
	.string "212/0/84/188+/20/0- (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Heatran_Page1::
# 4590 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/236+/4/20 (SHUCA)$"
	.string "252/0-/36/180+/4/36 (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Hitmontop_Page1::
# 4598 "data/scripts/sample_sets_options.pory"
	.string "252/36+/4/0-/212/4 (AMULET)$"
	.string "252/4/92/0-/156+/4 (AMULET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gastrodon_Page1::
# 4606 "data/scripts/sample_sets_options.pory"
	.string "172/0-/108/220+/4/4 (SITRUS)$"
	.string "172/0/116/220+/0/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gengar_Page1::
# 4614 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "252/0-/68/4/4/180+ (PERISH)$"
	.string "4/0-/4/244/4/252+ (GHOST Z)$"
	.string "76/0-/28/220/4/180+ (CONTROL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gholdengo_Page1::
# 4624 "data/scripts/sample_sets_options.pory"
	.string "212/0-/4/212+/20/60 (ORB)$"
	.string "244/0-/4/212+/12/36 (LEFTYS)$"
	.string "36/0-/4/212+/4/252 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gothitelle_Page1::
# 4633 "data/scripts/sample_sets_options.pory"
	.string "244/0-/180/4/76+/4 (SITRUS)$"
	.string "244/0/108/0/156+/0- (SITRUS)$"
	.string "244/0/28/0/236+/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Grimmsnarl_Page1::
# 4642 "data/scripts/sample_sets_options.pory"
	.string "236/0-/156/0/116+/0 (LIGHT CLAY)$"
	.string "244/4/196+/0-/60/4 (LIGHT CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Flutter_Mane_Page1::
# 4650 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "116/0-/156/36+/4/196 (SPECS)$"
	.string "228/0-/204/4/4/68+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gallade_Page1::
# 4659 "data/scripts/sample_sets_options.pory"
	.string "204/116+/188/0/0/0- (ORB)$"
	.string "252/116+/140/0/0/0- (AMULET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Garchomp_Page1::
# 4667 "data/scripts/sample_sets_options.pory"
	.string "108/172+/4/0-/4/220 (GROUND Z)$"
	.string "4/156/4/0-/92/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gardevoir_Page1::
# 4676 "data/scripts/sample_sets_options.pory"
	.string "244/0-/196/36+/4/28 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Garganacl_Page1::
# 4683 "data/scripts/sample_sets_options.pory"
	.string "252/0/20/0/236+/0-$"
	.string "252/4/12/0-/236+/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dusclops_Page1::
# 4691 "data/scripts/sample_sets_options.pory"
	.string "252/0/100/0/156+/0-$"
	.string "252/0/156+/0/100/0-$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Entei_Page1::
# 4699 "data/scripts/sample_sets_options.pory"
	.string "4/196+/4/0-/52/252 (BAND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Excadrill_Page1::
# 4706 "data/scripts/sample_sets_options.pory"
	.string "0/252+/4/0-/0/252 (SASH)$"
	.string "28/196+/28/0-/4/252 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Farigiraf_Page1::
# 4714 "data/scripts/sample_sets_options.pory"
	.string "228/0-/116/4/156+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ferrothorn_Page1::
# 4721 "data/scripts/sample_sets_options.pory"
	.string "220/0/100+/0/188/0- (LEFTYS)$"
	.string "220/0/228+/0/60/0- (LEFTYS)$"
	.string "220/204+/0/0/84/0- (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Corviknight_Page1::
# 4730 "data/scripts/sample_sets_options.pory"
	.string "244/4/116+/0-/140/4 (FIGY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Cresselia_Page1::
# 4737 "data/scripts/sample_sets_options.pory"
	.string "252/0-/156+/4/76/4 (HELMET)$"
	.string "252/0-/172/4/76+/4 (GOGGLES)$"
	.string "252/0/180/0/76+/0- (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dracovish_Page1::
# 4746 "data/scripts/sample_sets_options.pory"
	.string "0/252/0/0-/4/252+ (BAND)$"
	.string "4/236+/4/0-/12/252 (BAND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dragapult_Page1::
# 4754 "data/scripts/sample_sets_options.pory"
	.string "252/4/44/0-/44/164+ (SUPPORT)$"
	.string "28/196/4/0-/28/252+ (ORB)$"
	.string "4/244/4/0-/4/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dragonite_Page1::
# 4763 "data/scripts/sample_sets_options.pory"
	.string "44/204+/4/0-/4/252 (BANDED)$"
	.string "44/204+/4/0-/4/252 (DICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Cinderace_Page1::
# 4771 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Clefairy_Page1::
# 4779 "data/scripts/sample_sets_options.pory"
	.string "252/0-/140/0/116+/0$"
	.string "252/0-/220/0/36+/0$"
	.string "252/0-/60/0/196+/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Coalossal_Gmax_Page1::
# 4788 "data/scripts/sample_sets_options.pory"
	.string "116/0-/4/156+/4/228 (GMAX)$"
	.string "12/0-/4/236+/4/252 (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Comfey_Page1::
# 4796 "data/scripts/sample_sets_options.pory"
	.string "180/0-/0/0/76+/0 (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Conkeldurr_Page1::
# 4803 "data/scripts/sample_sets_options.pory"
	.string "228/236+/0/0/44/0- (GUTS)$"
	.string "228/236+/0/0/44/0- (ORB)$"
	.string "228/236+/4/0-/36/4 (GUTS)$"
	.string "228/236+/4/0-/36/4 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chandelure_Page1::
# 4813 "data/scripts/sample_sets_options.pory"
	.string "228/0/84/196+/0/0- (SITRUS)$"
	.string "4/0-/0/252/0/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Charizard_Page1::
# 4821 "data/scripts/sample_sets_options.pory"
	.string "204/0-/108/4+/4/188 (MEGA Y)$"
	.string "236/44/4/0-/4/220+ (MEGA X)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Charizard_Gmax_Page1::
# 4829 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/0/252+ (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chi_Yu_Page1::
# 4836 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "52/0-/4/196+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chien_Pao_Page1::
# 4844 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Basculegion_Page1::
# 4851 "data/scripts/sample_sets_options.pory"
	.string "4/220+/124/0-/4/156 (BULKY)$"
	.string "4/220+/28/0-/4/252 (BAND)$"
	.string "4/220+/28/0-/4/252 (RAIN)$"
	.string "4/220+/28/0-/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Baxcalibur_Page1::
# 4861 "data/scripts/sample_sets_options.pory"
	.string "4/196+/4/0-/52/252 (DICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Bronzong_Page1::
# 4868 "data/scripts/sample_sets_options.pory"
	.string "252/0/188+/0/68/0- (HERB)$"
	.string "252/0/68/0/188+/0- (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Calyrex_Page1::
# 4876 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SHADOW)$"
	.string "20/0-/4/220/4/252+ (SHADOW)$"
	.string "252/116+/0/0/140/0- (ICE)$"
	.string "252/116+/4/0-/124/12 (ICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Celesteela_Page1::
# 4886 "data/scripts/sample_sets_options.pory"
	.string "252/0-/20/180+/52/4 (VEST)$"
	.string "252/68+/84/0-/100/4 (FIGY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Arcanine_Page1::
# 4894 "data/scripts/sample_sets_options.pory"
	.string "236/68/4/0-/4/196+ (GOGGLES)$"
	.string "252/68+/4/0-/108/76 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Arcanine_Hisui_Page1::
# 4902 "data/scripts/sample_sets_options.pory"
	.string "12/196+/4/0-/44/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Archaludon_Page1::
# 4909 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252+/4/252 (HERB)$"
	.string "252/0-/4/44+/204/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Armarouge_Page1::
# 4917 "data/scripts/sample_sets_options.pory"
	.string "212/0-/4/36+/4/252 (POLICY)$"
	.string "228/0/0/196+/84/0- (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Azumarill_Page1::
# 4925 "data/scripts/sample_sets_options.pory"
	.string "204/236+/4/0-/60/4 (VEST)$"
	.string "228/236+/4/0-/36/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Aegislash_Page1::
# 4933 "data/scripts/sample_sets_options.pory"
	.string "140/0-/0/252+/0/116 (GHOST Z)$"
	.string "236/0-/0/252+/0/20 (LEFTYS)$"
	.string "252/0/4/180+/68/0- (POLICY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Aerodactyl_Page1::
# 4942 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "132/116+/4/0-/4/252 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Amoonguss_Page1::
# 4950 "data/scripts/sample_sets_options.pory"
	.string "236/0/236+/0/36/0- (HELMET)$"
	.string "244/0/108/0/156+/0- (SITRUS)$"
	.string "252/0/180/0/76+/0- (EJECT)$"
	.string "252/0/20/0/236+/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Annihilape_Page1::
# 4960 "data/scripts/sample_sets_options.pory"
	.string "180/68/4/0-/4/252+ (SITRUS)$"
	.string "252/4/0/0-/0/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Araquanid_Page1::
# 4968 "data/scripts/sample_sets_options.pory"
	.string "252/236+/20/0/0/0- (AMULET)$"
	.string "Go Back$"
	.string "$"
