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
	goto Auto_EventScript_Sample_Sets_Doubles_Page32
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
	goto Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_3:
# 105 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_4:
# 107 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_5:
# 109 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page4_6:
# 111 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_3:
# 129 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_4:
# 131 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_5:
# 133 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page5_6:
# 135 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_3:
# 153 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_4:
# 155 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_5:
# 157 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page6_6:
# 159 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_3:
# 177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_4:
# 179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_5:
# 181 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page7_6:
# 183 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_3:
# 201 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Entei_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_4:
# 203 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_5:
# 205 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page8_6:
# 207 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_3:
# 225 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_4:
# 227 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_5:
# 229 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page9_6:
# 231 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_3:
# 249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_4:
# 251 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_5:
# 253 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page10_6:
# 255 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_3:
# 273 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_4:
# 275 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_5:
# 277 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page11_6:
# 279 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_3:
# 297 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_4:
# 299 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_5:
# 301 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page12_6:
# 303 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_3:
# 321 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_4:
# 323 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_5:
# 325 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page13_6:
# 327 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_3:
# 345 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_4:
# 347 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_5:
# 349 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page14_6:
# 351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_3:
# 369 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_4:
# 371 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_5:
# 373 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page15_6:
# 375 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_3:
# 393 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_4:
# 395 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_5:
# 397 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page16_6:
# 399 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_3:
# 417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_4:
# 419 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_5:
# 421 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page17_6:
# 423 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_3:
# 441 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_4:
# 443 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_5:
# 445 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page18_6:
# 447 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_3:
# 465 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_4:
# 467 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_5:
# 469 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page19_6:
# 471 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_3:
# 489 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_4:
# 491 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_5:
# 493 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page20_6:
# 495 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_3:
# 513 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_4:
# 515 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_5:
# 517 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page21_6:
# 519 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_3:
# 537 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_4:
# 539 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_5:
# 541 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page22_6:
# 543 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_3:
# 561 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_4:
# 563 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_5:
# 565 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page23_6:
# 567 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_3:
# 585 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_4:
# 587 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_5:
# 589 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page24_6:
# 591 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_3:
# 609 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_4:
# 611 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_5:
# 613 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page25_6:
# 615 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_3:
# 633 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_4:
# 635 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_5:
# 637 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page26_6:
# 639 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_3:
# 657 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_4:
# 659 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_5:
# 661 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page27_6:
# 663 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1
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
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page28_4
# 684 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page28_5
# 686 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page28_6
# 688 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page28_7
# 690 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page28_8
# 693 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_2:
# 679 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_3:
# 681 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_4:
# 683 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_5:
# 685 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_6:
# 687 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_7:
# 689 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Page28_8:
# 691 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page29
	return


Auto_EventScript_Sample_Sets_Doubles_Page29::
# 699 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page29
# 700 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 702 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page29_2
# 704 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page29_3
# 706 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page29_4
# 708 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page29_5
# 710 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page29_6
# 712 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page29_7
# 714 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page29_8
# 717 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page29_2:
# 703 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page29_3:
# 705 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page29_4:
# 707 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page29_5:
# 709 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page29_6:
# 711 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page29_7:
# 713 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
	return

Auto_EventScript_Sample_Sets_Doubles_Page29_8:
# 715 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page30
	return


Auto_EventScript_Sample_Sets_Doubles_Page30::
# 723 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page30
# 724 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 726 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page30_2
# 728 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page30_3
# 730 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page30_4
# 732 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page30_5
# 734 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page30_6
# 736 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page30_7
# 738 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page30_8
# 741 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page30_2:
# 727 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page30_3:
# 729 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page30_4:
# 731 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page30_5:
# 733 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page30_6:
# 735 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page30_7:
# 737 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page29
	return

Auto_EventScript_Sample_Sets_Doubles_Page30_8:
# 739 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page31
	return


Auto_EventScript_Sample_Sets_Doubles_Page31::
# 747 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page31
# 748 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 750 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page31_2
# 752 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page31_3
# 754 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page31_4
# 756 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page31_5
# 758 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page31_6
# 760 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page31_7
# 762 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page31_8
# 765 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page31_2:
# 751 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page31_3:
# 753 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page31_4:
# 755 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page31_5:
# 757 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page31_6:
# 759 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page31_7:
# 761 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page30
	return

Auto_EventScript_Sample_Sets_Doubles_Page31_8:
# 763 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page32
	return


Auto_EventScript_Sample_Sets_Doubles_Page32::
# 771 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page32
# 772 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 774 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page32_2
# 776 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Page32_3
# 778 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Page32_4
# 780 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Page32_5
# 782 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Page32_6
# 784 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page32_7
# 786 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page32_8
# 789 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page32_2:
# 775 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page32_3:
# 777 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page32_4:
# 779 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page32_5:
# 781 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page32_6:
# 783 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page32_7:
# 785 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page31
	return

Auto_EventScript_Sample_Sets_Doubles_Page32_8:
# 787 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1::
# 795 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Xerneas_Page1
# 796 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 798 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_2
# 801 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_3
# 804 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_4
# 806 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_5
# 809 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page32
	return

Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_2:
# 799 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, 2, FALSE, FALSE, 10
# 800 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_3:
# 802 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, 2, FALSE, FALSE, 10
# 803 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_4:
# 805 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1_5:
# 807 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Xerneas_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1::
# 815 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Yveltal_Page1
# 816 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 818 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_2
# 821 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_3
# 824 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_4
# 827 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_5
# 829 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_6
# 832 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page32
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_2:
# 819 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SNARL, MOVE_FOUL_PLAY, MOVE_DARK_PULSE, 2, FALSE, TYPE_POISON, 10
# 820 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_3:
# 822 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_POISON, 10
# 823 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_4:
# 825 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_POISON, 10
# 826 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_5:
# 828 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1_6:
# 830 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Yveltal_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1::
# 838 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Zacian_Page1
# 839 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 841 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_2
# 844 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_3
# 847 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_4
# 849 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_5
# 852 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page32
	return

Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_2:
# 842 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BEHEMOTH_BLADE, MOVE_PLAY_ROUGH, MOVE_TERA_BLAST, 2, FALSE, TYPE_GROUND, 10
# 843 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_3:
# 845 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_SACRED_SWORD, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_STELLAR, 10
# 846 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_4:
# 848 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1_5:
# 850 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zacian_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1::
# 858 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Zamazenta_Page1
# 859 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 861 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_2
# 864 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_3
# 866 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_4
# 869 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page32
	return

Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_2:
# 862 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAMAZENTA, 65, ITEM_RUSTED_SHIELD, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 76, 0, 244, 188, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, 2, FALSE, TYPE_DRAGON, 10
# 863 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_3:
# 865 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1_4:
# 867 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zamazenta_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1::
# 875 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Zapdos_Page1
# 876 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 878 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_2
# 881 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_3
# 884 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_4
# 887 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_5
# 889 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_6
# 892 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page32
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_2:
# 879 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 84, 28, 116, 36, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GRASS, 10
# 880 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_3:
# 882 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 76, 28, 116, 36, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 883 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_4:
# 885 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 28, 0, 0, 252, 228, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_HIDDEN_POWER, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GHOST, 10
# 886 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_5:
# 888 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1_6:
# 890 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Zapdos_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1::
# 898 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Venusaur_Gmax_Page1
# 899 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 901 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_2
# 904 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_3
# 906 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_4
# 909 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page31
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_2:
# 902 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 156, 0, 36, 116, 172, 20, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, 2, TRUE, FALSE, 10
# 903 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_3:
# 905 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1_4:
# 907 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1::
# 915 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Volcarona_Page1
# 916 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 918 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_2
# 921 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_3
# 924 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_4
# 926 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_5
# 929 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page31
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_2:
# 919 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 108, 108, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FAIRY, 10
# 920 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_3:
# 922 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 188, 28, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_STRUGGLE_BUG, MOVE_HEAT_WAVE, 2, FALSE, TYPE_WATER, 10
# 923 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_4:
# 925 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1_5:
# 927 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Volcarona_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1::
# 935 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Weavile_Page1
# 936 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 938 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1_2
# 941 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1_3
# 944 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1_4
# 946 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1_5
# 949 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page31
	return

Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1_2:
# 939 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WEAVILE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_TAUNT, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 940 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1_3:
# 942 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WEAVILE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 943 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1_4:
# 945 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1_5:
# 947 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Weavile_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1::
# 955 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Weezing_Galar_Page1
# 956 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 958 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_2
# 961 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_3
# 964 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_4
# 966 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_5
# 969 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page31
	return

Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_2:
# 959 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WEEZING_GALAR, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 252, 0, 4, 4, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_SLUDGE_BOMB, MOVE_STRANGE_STEAM, MOVE_FLAMETHROWER, 2, FALSE, TYPE_WATER, 10
# 960 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_3:
# 962 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WEEZING_GALAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 1, 0, 252, 0, 76, 4, 4, 172, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_SLUDGE_BOMB, MOVE_STRANGE_STEAM, 2, FALSE, TYPE_WATER, 10
# 963 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_4:
# 965 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1_5:
# 967 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Weezing_Galar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1::
# 975 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Whimsicott_Page1
# 976 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 978 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_2
# 981 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_3
# 984 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_4
# 986 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_5
# 989 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page31
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_2:
# 979 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_TEARS, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_DARK, 10
# 980 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_3:
# 982 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_GHOST, 10
# 983 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_4:
# 985 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1_5:
# 987 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Whimsicott_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1::
# 995 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ursaluna_Page1
# 996 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 998 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_2
# 1001 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_3
# 1004 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_4
# 1006 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_5
# 1009 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page30
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_2:
# 999 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 140, 236, 0, 0, 0, 132, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 1000 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_3:
# 1002 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 140, 236, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 1003 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_4:
# 1005 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1_5:
# 1007 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1::
# 1015 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
# 1016 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1018 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_2
# 1021 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_3
# 1024 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_4
# 1027 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_5
# 1029 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_6
# 1032 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page30
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_2:
# 1019 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 12, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 1020 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_3:
# 1022 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 244, 0, 0, 0, 196, 68, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 1023 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_4:
# 1025 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 1026 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_5:
# 1028 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1_6:
# 1030 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1::
# 1038 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Urshifu_Rs_Page1
# 1039 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1041 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_2
# 1044 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_3
# 1047 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_4
# 1050 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_5
# 1052 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_6
# 1055 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page30
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_2:
# 1042 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 1043 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_3:
# 1045 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 1046 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_4:
# 1048 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 1049 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_5:
# 1051 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1_6:
# 1053 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Rs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1::
# 1061 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Urshifu_Ss_Page1
# 1062 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1064 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_2
# 1067 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_3
# 1070 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_4
# 1072 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_5
# 1075 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page30
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_2:
# 1065 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 236, 0, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 1066 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_3:
# 1068 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 1069 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_4:
# 1071 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1_5:
# 1073 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Urshifu_Ss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1::
# 1081 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Venusaur_Page1
# 1082 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1084 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_2
# 1087 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_3
# 1089 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_4
# 1092 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page30
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_2:
# 1085 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, 2, FALSE, TYPE_GHOST, 10
# 1086 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_3:
# 1088 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1_4:
# 1090 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Venusaur_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1::
# 1098 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Torkoal_Page1
# 1099 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1101 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_2
# 1104 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_3
# 1107 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_4
# 1109 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_5
# 1112 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page29
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_2:
# 1102 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHARCOAL, ITEM_POKE_BALL, NATURE_QUIET, 1, 1, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 1103 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_3:
# 1105 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_WEATHER_BALL, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 1106 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_4:
# 1108 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1_5:
# 1110 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Torkoal_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1::
# 1118 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tornadus_Page1
# 1119 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1121 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_2
# 1124 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_3
# 1127 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_4
# 1130 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_5
# 1132 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_6
# 1135 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page29
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_2:
# 1122 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 1123 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_3:
# 1125 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 1126 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_4:
# 1128 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 1129 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_5:
# 1131 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1_6:
# 1133 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tornadus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1::
# 1141 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Toxtricity_Page1
# 1142 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1144 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_2
# 1147 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_3
# 1150 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_4
# 1153 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_5
# 1155 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_6
# 1158 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page29
	return

Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_2:
# 1145 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOXTRICITY, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 44, 0, 4, 252, 204, 4, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_GHOST, 10
# 1146 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_3:
# 1148 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOXTRICITY, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 44, 0, 4, 252, 204, 4, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_GHOST, 10
# 1149 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_4:
# 1151 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOXTRICITY, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 44, 0, 4, 252, 204, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_GHOST, 10
# 1152 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_5:
# 1154 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1_6:
# 1156 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Toxtricity_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1::
# 1164 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tsareena_Page1
# 1165 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1167 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_2
# 1170 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_3
# 1173 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_4
# 1176 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_5
# 1178 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_6
# 1181 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page29
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_2:
# 1168 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_TROP_KICK, MOVE_LOW_KICK, 2, FALSE, TYPE_WATER, 10
# 1169 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_3:
# 1171 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 252, 236, 4, 4, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_TROP_KICK, MOVE_LOW_KICK, MOVE_U_TURN, MOVE_KNOCK_OFF, 2, FALSE, TYPE_WATER, 10
# 1172 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_4:
# 1174 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, 2, FALSE, TYPE_GRASS, 10
# 1175 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_5:
# 1177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1_6:
# 1179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tsareena_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1::
# 1187 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tyranitar_Page1
# 1188 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1190 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_2
# 1193 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_3
# 1196 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_4
# 1199 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_5
# 1202 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_6
# 1205 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_7
# 1207 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_8
# 1210 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page29
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_2:
# 1191 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 188, 204, 0, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_KNOCK_OFF, 2, FALSE, TYPE_GHOST, 10
# 1192 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_3:
# 1194 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 204, 4, 4, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_KNOCK_OFF, 2, FALSE, TYPE_GHOST, 10
# 1195 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_4:
# 1197 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 0, 1, 252, 204, 0, 0, 0, 52, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_KNOCK_OFF, 2, FALSE, TYPE_GHOST, 10
# 1198 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_5:
# 1200 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 204, 0, 0, 0, 52, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LOW_KICK, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_GHOST, 10
# 1201 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_6:
# 1203 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 204, 4, 4, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_KNOCK_OFF, 2, FALSE, TYPE_GHOST, 10
# 1204 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_7:
# 1206 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1_8:
# 1208 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2::
# 1216 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tyranitar_Page2
# 1217 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1219 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_2
# 1222 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_3
# 1225 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_4
# 1228 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_5
# 1230 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_6
# 1233 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page29
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_2:
# 1220 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 204, 4, 4, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_LOW_KICK, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_GHOST, 10
# 1221 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_3:
# 1223 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_ASSURANCE, MOVE_ICE_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 1224 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_4:
# 1226 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 44, 164, 20, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT, 2, FALSE, TYPE_GHOST, 10
# 1227 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_5:
# 1229 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page2_6:
# 1231 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1::
# 1239 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tatsugiri_Page1
# 1240 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1242 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_2
# 1245 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_3
# 1248 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_4
# 1250 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_5
# 1253 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_2:
# 1243 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TATSUGIRI, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_TAUNT, 2, FALSE, TYPE_STELLAR, 10
# 1244 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_3:
# 1246 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TATSUGIRI, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, 2, FALSE, TYPE_STELLAR, 10
# 1247 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_4:
# 1249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1_5:
# 1251 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tatsugiri_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1::
# 1259 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Thundurus_Page1
# 1260 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1262 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_2
# 1265 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_3
# 1268 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_4
# 1271 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_5
# 1274 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_6
# 1277 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_7
# 1279 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_8
# 1282 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_2:
# 1263 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 228, 0, 28, 68, 12, 172, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 1264 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_3:
# 1266 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 36, 212, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_FLY, 2, FALSE, TYPE_FIRE, 10
# 1267 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_4:
# 1269 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 1270 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_5:
# 1272 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 1273 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_6:
# 1275 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 236, 4, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_FLY, 2, FALSE, TYPE_FIRE, 10
# 1276 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_7:
# 1278 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1_8:
# 1280 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Thundurus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1::
# 1288 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ting_Lu_Page1
# 1289 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1291 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_2
# 1294 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_3
# 1296 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_4
# 1299 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_2:
# 1292 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TING_LU, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 52, 4, 196, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SAND_TOMB, MOVE_RUINATION, MOVE_BODY_PRESS, 2, FALSE, TYPE_POISON, 10
# 1293 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_3:
# 1295 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1_4:
# 1297 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ting_Lu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1::
# 1305 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tinkaton_Page1
# 1306 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1308 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_2
# 1311 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_3
# 1313 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_4
# 1316 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_2:
# 1309 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TINKATON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 180, 172, 100, 12, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_FEINT, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 1310 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_3:
# 1312 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1_4:
# 1314 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tinkaton_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1::
# 1322 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Togekiss_Page1
# 1323 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1325 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_2
# 1328 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_3
# 1331 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_4
# 1333 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_5
# 1336 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page28
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_2:
# 1326 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_SCOPE_LENS, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 228, 0, 196, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_YAWN, MOVE_FOLLOW_ME, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 1327 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_3:
# 1329 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_BABIRI_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 2, 0, 236, 0, 196, 60, 4, 12, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_YAWN, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 1330 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_4:
# 1332 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1_5:
# 1334 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Togekiss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1::
# 1342 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Talonflame_Page1
# 1343 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1345 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_2
# 1348 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_3
# 1351 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_4
# 1354 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_5
# 1356 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_6
# 1359 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_2:
# 1346 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_SLEEP_TALK, MOVE_U_TURN, 2, FALSE, TYPE_FLYING, 10
# 1347 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_3:
# 1349 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_GUARD, MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 1350 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_4:
# 1352 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_TAUNT, 2, FALSE, TYPE_FLYING, 10
# 1353 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_5:
# 1355 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1_6:
# 1357 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Talonflame_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1::
# 1365 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Bulu_Page1
# 1366 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1368 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_2
# 1371 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_3
# 1374 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_4
# 1377 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_5
# 1380 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_6
# 1382 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_7
# 1385 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_2:
# 1369 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 124, 140, 4, 228, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_GRASS, 10
# 1370 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_3:
# 1372 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 252, 4, 36, 4, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_HORN_LEECH, 2, FALSE, TYPE_WATER, 10
# 1373 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_4:
# 1375 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_GRASSIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 0, 180, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 1376 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_5:
# 1378 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 28, 236, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 1379 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_6:
# 1381 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1_7:
# 1383 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Bulu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1::
# 1391 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Fini_Page1
# 1392 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1394 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_2
# 1397 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_3
# 1400 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_4
# 1403 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_5
# 1406 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_6
# 1409 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_7
# 1411 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_8
# 1414 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_2:
# 1395 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 100, 148, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 1396 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_3:
# 1398 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 12, 236, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 1399 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_4:
# 1401 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MUDDY_WATER, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1402 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_5:
# 1404 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_TRICK, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 1405 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_6:
# 1407 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SCALD, MOVE_SOAK, MOVE_ICE_BEAM, 2, FALSE, TYPE_STEEL, 10
# 1408 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_7:
# 1410 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1_8:
# 1412 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Fini_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1::
# 1420 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Koko_Page1
# 1421 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1423 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_2
# 1426 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_3
# 1429 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_4
# 1432 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_5
# 1435 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_6
# 1437 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_7
# 1440 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_2:
# 1424 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 172, 0, 12, 92, 36, 196, 31, 31, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_SKY_DROP, MOVE_VOLT_SWITCH, 2, FALSE, TYPE_WATER, 10
# 1425 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_3:
# 1427 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 28, 0, 4, 252, 196, 28, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 1428 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_4:
# 1430 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 1431 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_5:
# 1433 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 1434 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_6:
# 1436 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1_7:
# 1438 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Koko_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1::
# 1446 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Tapu_Lele_Page1
# 1447 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1449 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_2
# 1452 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_3
# 1455 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_4
# 1458 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_5
# 1461 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_6
# 1463 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_7
# 1466 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page27
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_2:
# 1450 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_PSYCHIC, 10
# 1451 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_3:
# 1453 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_PSYCHIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1454 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_4:
# 1456 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_MAGIC_ROOM, 2, FALSE, TYPE_WATER, 10
# 1457 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_5:
# 1459 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 108, 68, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1460 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_6:
# 1462 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1_7:
# 1464 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Tapu_Lele_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1::
# 1472 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Skeledirge_Page1
# 1473 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1475 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1_2
# 1478 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1_3
# 1481 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1_4
# 1483 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1_5
# 1486 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1_2:
# 1476 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SKELEDIRGE, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 236, 0, 60, 4, 12, 196, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SLACK_OFF, MOVE_SHADOW_BALL, MOVE_TORCH_SONG, 2, FALSE, TYPE_GRASS, 10
# 1477 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1_3:
# 1479 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SKELEDIRGE, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 4, 4, 156, 92, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SLACK_OFF, MOVE_SHADOW_BALL, MOVE_TORCH_SONG, 2, FALSE, TYPE_GRASS, 10
# 1480 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1_4:
# 1482 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1_5:
# 1484 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Skeledirge_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1::
# 1492 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sneasler_Page1
# 1493 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1495 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_2
# 1498 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_3
# 1501 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_4
# 1504 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_5
# 1506 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_6
# 1509 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_2:
# 1496 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_COACHING, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1497 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_3:
# 1499 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_DARK, 10
# 1500 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_4:
# 1502 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_WHITE_HERB, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_STELLAR, 10
# 1503 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_5:
# 1505 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1_6:
# 1507 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sneasler_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1::
# 1515 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Snorlax_Page1
# 1516 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1518 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_2
# 1521 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_3
# 1524 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_4
# 1526 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_5
# 1529 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_2:
# 1519 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 228, 76, 196, 4, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_RETURN, 2, FALSE, TYPE_GHOST, 10
# 1520 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_3:
# 1522 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 2, 1, 228, 76, 204, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_RETURN, 2, FALSE, TYPE_GHOST, 10
# 1523 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_4:
# 1525 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1_5:
# 1527 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Snorlax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1::
# 1535 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Stakataka_Page1
# 1536 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1538 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_2
# 1541 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_3
# 1544 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_4
# 1547 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_5
# 1549 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_6
# 1552 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_2:
# 1539 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_WIDE_GUARD, MOVE_TRICK_ROOM, MOVE_BODY_PRESS, MOVE_GYRO_BALL, 2, FALSE, TYPE_GRASS, 10
# 1540 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_3:
# 1542 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_LONELY, 0, 0, 252, 252, 0, 0, 0, 4, 31, 31, 17, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, 2, FALSE, TYPE_WATER, 10
# 1543 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_4:
# 1545 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_ROCKIUM_Z, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 68, 0, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, 2, FALSE, TYPE_GRASS, 10
# 1546 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_5:
# 1548 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1_6:
# 1550 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Stakataka_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1::
# 1558 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sylveon_Page1
# 1559 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1561 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_2
# 1564 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_3
# 1567 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_4
# 1570 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_5
# 1572 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_6
# 1575 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page26
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_2:
# 1562 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 180, 0, 244, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_WATER, 10
# 1563 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_3:
# 1565 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_PIXIE_PLATE, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 172, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_QUICK_ATTACK, 2, FALSE, TYPE_WATER, 10
# 1566 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_4:
# 1568 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 92, 4, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_MOONBLAST, MOVE_PSYSHOCK, 2, FALSE, TYPE_FAIRY, 10
# 1569 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_5:
# 1571 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1_6:
# 1573 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sylveon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1::
# 1581 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sableye_Page1
# 1582 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1584 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_2
# 1587 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_3
# 1590 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_4
# 1592 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_5
# 1595 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_2:
# 1585 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 116, 0, 0, 140, 31, 0, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_STEEL, 10
# 1586 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_3:
# 1588 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 36, 0, 0, 220, 31, 0, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_STEEL, 10
# 1589 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_4:
# 1591 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1_5:
# 1593 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sableye_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1::
# 1601 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Salamence_Page1
# 1602 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1604 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_2
# 1607 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_3
# 1610 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_4
# 1613 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_5
# 1616 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_6
# 1619 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_7
# 1621 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_8
# 1624 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_2:
# 1605 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_NAIVE, 0, 0, 0, 44, 0, 212, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, 2, FALSE, TYPE_WATER, 10
# 1606 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_3:
# 1608 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 92, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, 2, FALSE, TYPE_WATER, 10
# 1609 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_4:
# 1611 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_DRAGONIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, 2, FALSE, TYPE_WATER, 10
# 1612 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_5:
# 1614 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DRACO_METEOR, 2, FALSE, TYPE_WATER, 10
# 1615 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_6:
# 1617 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DRAGON_PULSE, MOVE_HYDRO_PUMP, MOVE_FLAMETHROWER, 2, FALSE, TYPE_WATER, 10
# 1618 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_7:
# 1620 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Salamence_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1_8:
# 1622 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Salamence_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Salamence_Page2::
# 1630 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Salamence_Page2
# 1631 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1633 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page2_2
# 1636 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page2_3
# 1638 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Salamence_Page2_4
# 1641 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page2_2:
# 1634 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DRAGON_PULSE, MOVE_HYDRO_PUMP, MOVE_FLAMETHROWER, 2, FALSE, TYPE_WATER, 10
# 1635 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page2_3:
# 1637 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Salamence_Page2_4:
# 1639 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Salamence_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1::
# 1647 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Scizor_Page1
# 1648 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1650 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1_2
# 1653 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1_3
# 1655 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1_4
# 1658 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1_2:
# 1651 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SCIZOR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 188, 236, 4, 4, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_BUG_BITE, MOVE_BULLET_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 1652 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1_3:
# 1654 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1_4:
# 1656 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Scizor_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1::
# 1664 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Scream_Tail_Page1
# 1665 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1667 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1_2
# 1670 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1_3
# 1673 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1_4
# 1675 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1_5
# 1678 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1_2:
# 1668 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SCREAM_TAIL, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 228, 0, 20, 252, 4, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENCORE, MOVE_DISABLE, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_DARK, 10
# 1669 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1_3:
# 1671 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SCREAM_TAIL, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 228, 4, 20, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENCORE, MOVE_DISABLE, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_DARK, 10
# 1672 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1_4:
# 1674 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1_5:
# 1676 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Scream_Tail_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1::
# 1684 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sinistcha_Page1
# 1685 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1687 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_2
# 1690 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_3
# 1693 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_4
# 1696 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_5
# 1699 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_6
# 1701 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_7
# 1704 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page25
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_2:
# 1688 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 236, 0, 188, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1689 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_3:
# 1691 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 236, 0, 188, 0, 0, 84, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1692 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_4:
# 1694 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 244, 0, 188, 4, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1695 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_5:
# 1697 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1698 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_6:
# 1700 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1_7:
# 1702 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sinistcha_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1::
# 1710 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Roaring_Moon_Page1
# 1711 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1713 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_2
# 1716 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_3
# 1718 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_4
# 1721 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_2:
# 1714 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROARING_MOON, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ACROBATICS, MOVE_KNOCK_OFF, 2, FALSE, TYPE_FLYING, 10
# 1715 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_3:
# 1717 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1_4:
# 1719 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Roaring_Moon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1::
# 1727 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rotom_Frost_Page1
# 1728 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1730 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1_2
# 1733 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1_3
# 1735 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1_4
# 1738 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1_2:
# 1731 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_FROST, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_TRICK, 2, FALSE, FALSE, 10
# 1732 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1_3:
# 1734 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1_4:
# 1736 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Frost_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1::
# 1744 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rotom_Heat_Page1
# 1745 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1747 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_2
# 1750 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_3
# 1753 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_4
# 1756 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_5
# 1758 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_6
# 1761 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_2:
# 1748 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_HEAT, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 132, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_LEAF_STORM, MOVE_OVERHEAT, 2, FALSE, TYPE_STEEL, 10
# 1749 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_3:
# 1751 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_HEAT, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 44, 4, 60, 148, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT, MOVE_OVERHEAT, 2, FALSE, TYPE_STEEL, 10
# 1752 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_4:
# 1754 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_HEAT, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_TRICK, 2, FALSE, FALSE, 10
# 1755 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_5:
# 1757 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1_6:
# 1759 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Heat_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1::
# 1767 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rotom_Mow_Page1
# 1768 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1770 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1_2
# 1773 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1_3
# 1775 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1_4
# 1778 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1_2:
# 1771 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_MOW, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 132, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_LEAF_STORM, MOVE_THUNDERBOLT, 2, FALSE, TYPE_STEEL, 10
# 1772 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1_3:
# 1774 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1_4:
# 1776 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Mow_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1::
# 1784 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rotom_Wash_Page1
# 1785 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1787 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_2
# 1790 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_3
# 1793 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_4
# 1796 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_5
# 1798 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_6
# 1801 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page24
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_2:
# 1788 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 132, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, 2, FALSE, TYPE_STEEL, 10
# 1789 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_3:
# 1791 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 44, 4, 60, 148, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_STEEL, 10
# 1792 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_4:
# 1794 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_TRICK, 2, FALSE, FALSE, 10
# 1795 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_5:
# 1797 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1_6:
# 1799 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rotom_Wash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1::
# 1807 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rayquaza_Page1
# 1808 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1810 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_2
# 1813 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_3
# 1815 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_4
# 1818 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_2:
# 1811 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, 2, FALSE, FALSE, 10
# 1812 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_3:
# 1814 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1_4:
# 1816 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rayquaza_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1::
# 1824 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Regidrago_Page1
# 1825 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1827 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_2
# 1830 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_3
# 1832 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_4
# 1835 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_2:
# 1828 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIDRAGO, 65, ITEM_DRAGON_FANG, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, 2, FALSE, TYPE_STEEL, 10
# 1829 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_3:
# 1831 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1_4:
# 1833 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regidrago_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1::
# 1841 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Regieleki_Page1
# 1842 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1844 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_2
# 1847 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_3
# 1849 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_4
# 1852 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_2:
# 1845 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIELEKI, 65, ITEM_MAGNET, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 1846 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_3:
# 1848 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1_4:
# 1850 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Regieleki_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1::
# 1858 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rhyperior_Page1
# 1859 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1861 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_2
# 1864 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_3
# 1867 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_4
# 1869 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_5
# 1872 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_2:
# 1862 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RHYPERIOR, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 12, 236, 4, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, 2, FALSE, TYPE_WATER, 10
# 1863 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_3:
# 1865 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RHYPERIOR, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_BRAVE, 1, 0, 20, 236, 0, 0, 0, 252, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, 2, FALSE, TYPE_WATER, 10
# 1866 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_4:
# 1868 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1_5:
# 1870 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rhyperior_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1::
# 1878 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Rillaboom_Page1
# 1879 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1881 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_2
# 1884 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_3
# 1887 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_4
# 1889 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_5
# 1892 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page23
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_2:
# 1882 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 116, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1883 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_3:
# 1885 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 196, 12, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1886 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_4:
# 1888 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1_5:
# 1890 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Rillaboom_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1::
# 1898 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Politoed_Page1
# 1899 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1901 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_2
# 1904 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_3
# 1906 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_4
# 1909 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_2:
# 1902 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 220, 0, 196, 12, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENCORE, MOVE_PERISH_SONG, MOVE_SCALD, 2, FALSE, TYPE_GRASS, 10
# 1903 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_3:
# 1905 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1_4:
# 1907 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Politoed_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1::
# 1915 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Porygon2_Page1
# 1916 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1918 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_2
# 1921 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_3
# 1924 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_4
# 1926 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_5
# 1929 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_2:
# 1919 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 244, 0, 92, 4, 116, 52, 31, 0, 31, 31, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1920 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_3:
# 1922 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 244, 0, 92, 0, 116, 52, 31, 0, 31, 0, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1923 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_4:
# 1925 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1_5:
# 1927 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Porygon2_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1::
# 1935 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Primarina_Page1
# 1936 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1938 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_2
# 1941 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_3
# 1944 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_4
# 1946 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_5
# 1949 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_2:
# 1939 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PRIMARINA, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 180, 0, 108, 28, 188, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HAZE, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1940 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_3:
# 1942 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PRIMARINA, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 236, 0, 132, 28, 108, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HAZE, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1943 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_4:
# 1945 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1_5:
# 1947 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Primarina_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1::
# 1955 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Raging_Bolt_Page1
# 1956 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1958 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_2
# 1961 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_3
# 1964 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_4
# 1966 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_5
# 1969 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_2:
# 1959 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 148, 0, 36, 180, 100, 44, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1960 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_3:
# 1962 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 124, 4, 100, 36, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1963 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_4:
# 1965 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1_5:
# 1967 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raging_Bolt_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1::
# 1975 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Raichu_Page1
# 1976 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1978 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_2
# 1981 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_3
# 1984 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_4
# 1987 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_5
# 1989 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_6
# 1992 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page22
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_2:
# 1979 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 140, 0, 188, 180, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_ENDEAVOR, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1980 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_3:
# 1982 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_TACKLE, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1983 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_4:
# 1985 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_ENCORE, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1986 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_5:
# 1988 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1_6:
# 1990 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Raichu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1::
# 1998 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Hf_Page1
# 1999 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2001 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_2
# 2004 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_3
# 2007 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_4
# 2009 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_5
# 2012 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_2:
# 2002 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 76, 52, 188, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 2003 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_3:
# 2005 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 2006 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_4:
# 2008 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1_5:
# 2010 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Hf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1::
# 2018 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Ws_Page1
# 2019 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2021 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_2
# 2024 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_3
# 2026 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_4
# 2029 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_2:
# 2022 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_WELLSPRING, 65, ITEM_WELLSPRING_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 220, 60, 44, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, 2, FALSE, TYPE_WATER, 10
# 2023 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_3:
# 2025 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1_4:
# 2027 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Ws_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1::
# 2035 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Oranguru_Page1
# 2036 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2038 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_2
# 2041 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_3
# 2043 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_4
# 2046 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_2:
# 2039 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ORANGURU, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_SASSY, 1, 0, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_INSTRUCT, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 2040 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_3:
# 2042 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1_4:
# 2044 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Oranguru_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1::
# 2052 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Palafin_Page1
# 2053 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2055 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_2
# 2058 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_3
# 2060 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_4
# 2063 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_2:
# 2056 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PALAFIN, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 252, 156, 4, 4, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_JET_PUNCH, MOVE_WAVE_CRASH, 2, FALSE, TYPE_WATER, 10
# 2057 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_3:
# 2059 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1_4:
# 2061 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Palafin_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1::
# 2069 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Pelipper_Page1
# 2070 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2072 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_2
# 2075 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_3
# 2077 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_4
# 2080 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page21
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_2:
# 2073 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PELIPPER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_WEATHER_BALL, MOVE_HURRICANE, 2, FALSE, TYPE_GHOST, 10
# 2074 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_3:
# 2076 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1_4:
# 2078 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Pelipper_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1::
# 2086 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1
# 2087 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2089 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1_2
# 2092 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1_3
# 2095 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1_4
# 2097 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1_5
# 2100 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1_2:
# 2090 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NECROZMA_DAWN_WINGS, 65, ITEM_LUNALIUM_Z, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 252, 0, 156, 0, 100, 0, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_MOONGEIST_BEAM, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_DARK, 10
# 2091 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1_3:
# 2093 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NECROZMA_DAWN_WINGS, 65, ITEM_ULTRANECROZIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 60, 0, 4, 252, 180, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PHOTON_GEYSER, MOVE_MOONGEIST_BEAM, MOVE_DRACO_METEOR, 2, FALSE, TYPE_DARK, 10
# 2094 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1_4:
# 2096 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1_5:
# 2098 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1::
# 2106 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1
# 2107 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2109 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_2
# 2112 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_3
# 2115 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_4
# 2118 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_5
# 2120 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_6
# 2123 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_2:
# 2110 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 20, 0, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_SUNSTEEL_STRIKE, MOVE_PHOTON_GEYSER, 2, FALSE, TYPE_FIRE, 10
# 2111 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_3:
# 2113 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 20, 4, 4, 0, 228, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_SUNSTEEL_STRIKE, MOVE_PHOTON_GEYSER, 2, FALSE, TYPE_FIRE, 10
# 2114 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_4:
# 2116 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_ULTRANECROZIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 60, 0, 4, 252, 180, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PHOTON_GEYSER, MOVE_DRACO_METEOR, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_DARK, 10
# 2117 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_5:
# 2119 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1_6:
# 2121 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1::
# 2129 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Nihilego_Page1
# 2130 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2132 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_2
# 2135 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_3
# 2138 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_4
# 2141 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_5
# 2144 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_6
# 2146 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_7
# 2149 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_2:
# 2133 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_POWER_GEM, MOVE_SLUDGE_BOMB, MOVE_METEOR_BEAM, 2, FALSE, TYPE_GHOST, 10
# 2134 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_3:
# 2136 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ACID_SPRAY, MOVE_POWER_GEM, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_GHOST, 10
# 2137 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_4:
# 2139 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 36, 0, 4, 252, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SLUDGE_BOMB, MOVE_POWER_GEM, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 2140 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_5:
# 2142 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 68, 0, 4, 252, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_POWER_GEM, MOVE_ACID_SPRAY, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GHOST, 10
# 2143 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_6:
# 2145 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1_7:
# 2147 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Nihilego_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1::
# 2155 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ninetales_Alola_Page1
# 2156 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2158 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_2
# 2161 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_3
# 2164 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_4
# 2166 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_5
# 2169 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_2:
# 2159 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NINETALES_ALOLA, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_TIMID, 2, 1, 212, 0, 100, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_BLIZZARD, 2, FALSE, TYPE_WATER, 10
# 2160 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_3:
# 2162 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NINETALES_ALOLA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_BLIZZARD, 2, FALSE, TYPE_GHOST, 10
# 2163 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_4:
# 2165 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1_5:
# 2167 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ninetales_Alola_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1::
# 2175 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ogerpon_Cs_Page1
# 2176 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2178 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_2
# 2181 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_3
# 2183 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_4
# 2186 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page20
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_2:
# 2179 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_CORNERSTONE, 65, ITEM_CORNERSTONE_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_POWER_WHIP, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_ROCK, 10
# 2180 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_3:
# 2182 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1_4:
# 2184 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ogerpon_Cs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1::
# 2192 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mimikyu_Page1
# 2193 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2195 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_2
# 2198 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_3
# 2201 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_4
# 2204 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_5
# 2207 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_6
# 2209 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_7
# 2212 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_2:
# 2196 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_MIMIKIUM_Z, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 236, 20, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 2197 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_3:
# 2199 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, 2, FALSE, TYPE_WATER, 10
# 2200 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_4:
# 2202 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, 2, FALSE, TYPE_WATER, 10
# 2203 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_5:
# 2205 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_MIMIKIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_WATER, 10
# 2206 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_6:
# 2208 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1_7:
# 2210 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mimikyu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1::
# 2218 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Miraidon_Page1
# 2219 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2221 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_2
# 2224 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_3
# 2226 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_4
# 2229 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_2:
# 2222 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIRAIDON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 92, 0, 4, 212, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_ELECTRO_DRIFT, MOVE_DRACO_METEOR, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_FAIRY, 10
# 2223 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_3:
# 2225 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1_4:
# 2227 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Miraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1::
# 2235 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Moltres_Galar_Page1
# 2236 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2238 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_2
# 2241 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_3
# 2244 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_4
# 2246 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_5
# 2249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_2:
# 2239 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 28, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_FIERY_WRATH, 2, FALSE, TYPE_POISON, 10
# 2240 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_3:
# 2242 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 92, 0, 4, 252, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_FIERY_WRATH, 2, FALSE, TYPE_POISON, 10
# 2243 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_4:
# 2245 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1_5:
# 2247 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Moltres_Galar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1::
# 2255 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Muk_Alola_Page1
# 2256 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2258 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_2
# 2261 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_3
# 2264 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_4
# 2266 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_5
# 2269 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_2:
# 2259 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MUK_ALOLA, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 220, 36, 108, 4, 0, 140, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_TOXIC, 2, FALSE, TYPE_WATER, 10
# 2260 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_3:
# 2262 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MUK_ALOLA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CAREFUL, 2, 1, 228, 4, 116, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_MINIMIZE, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, 2, FALSE, TYPE_WATER, 10
# 2263 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_4:
# 2265 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1_5:
# 2267 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Muk_Alola_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1::
# 2275 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Murkrow_Page1
# 2276 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2278 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_2
# 2281 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_3
# 2284 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_4
# 2286 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_5
# 2289 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page19
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_2:
# 2279 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MURKROW, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 116, 0, 0, 140, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 2280 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_3:
# 2282 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MURKROW, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 140, 0, 0, 116, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 2283 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_4:
# 2285 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1_5:
# 2287 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Murkrow_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1::
# 2295 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mawile_Page1
# 2296 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2298 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_2
# 2301 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_3
# 2304 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_4
# 2306 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_5
# 2309 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_2:
# 2299 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_BRAVE, 1, 1, 156, 196, 0, 0, 0, 156, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2300 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_3:
# 2302 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 156, 196, 4, 4, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2303 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_4:
# 2305 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1_5:
# 2307 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mawile_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1::
# 2315 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Meowscarada_Page1
# 2316 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2318 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_2
# 2321 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_3
# 2324 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_4
# 2326 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_5
# 2329 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_2:
# 2319 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MEOWSCARADA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 2320 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_3:
# 2322 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MEOWSCARADA, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 2323 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_4:
# 2325 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1_5:
# 2327 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Meowscarada_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1::
# 2335 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Metagross_Page1
# 2336 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2338 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_2
# 2341 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_3
# 2344 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_4
# 2347 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_5
# 2350 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_6
# 2352 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_7
# 2355 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_2:
# 2339 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 124, 116, 4, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HEAVY_SLAM, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_FIRE, 10
# 2340 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_3:
# 2342 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HEAVY_SLAM, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_FIRE, 10
# 2343 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_4:
# 2345 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 204, 4, 156, 140, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, 2, FALSE, TYPE_FIGHTING, 10
# 2346 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_5:
# 2348 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HEAVY_SLAM, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_FIRE, 10
# 2349 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_6:
# 2351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1_7:
# 2353 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1::
# 2361 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mienshao_Page1
# 2362 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2364 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1_2
# 2367 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1_3
# 2369 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1_4
# 2372 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1_2:
# 2365 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIENSHAO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_HELPING_HAND, MOVE_WIDE_GUARD, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIGHTING, 10
# 2366 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1_3:
# 2368 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1_4:
# 2370 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mienshao_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1::
# 2378 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Milotic_Page1
# 2379 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2381 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_2
# 2384 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_3
# 2387 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_4
# 2389 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_5
# 2392 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_2:
# 2382 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 1, 0, 180, 0, 204, 4, 4, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_COIL, MOVE_HYPNOSIS, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 2383 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_3:
# 2385 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 244, 0, 220, 4, 4, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RECOVER, MOVE_ICY_WIND, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 2386 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_4:
# 2388 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1_5:
# 2390 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Milotic_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1::
# 2398 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Lunala_Page1
# 2399 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2401 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_2
# 2404 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_3
# 2406 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_4
# 2409 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_2:
# 2402 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 132, 52, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_WIDE_GUARD, MOVE_MOONGEIST_BEAM, MOVE_METEOR_BEAM, MOVE_TRICK_ROOM, 2, FALSE, TYPE_DARK, 10
# 2403 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_3:
# 2405 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1_4:
# 2407 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lunala_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1::
# 2415 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Manaphy_Page1
# 2416 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2418 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_2
# 2421 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_3
# 2424 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_4
# 2426 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_5
# 2429 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_2:
# 2419 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANAPHY, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 228, 0, 172, 28, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAIL_GLOW, MOVE_DAZZLING_GLEAM, MOVE_SCALD, 2, FALSE, TYPE_FAIRY, 10
# 2420 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_3:
# 2422 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANAPHY, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 68, 0, 4, 252, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAIL_GLOW, MOVE_DAZZLING_GLEAM, MOVE_SCALD, 2, FALSE, TYPE_FAIRY, 10
# 2423 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_4:
# 2425 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1_5:
# 2427 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manaphy_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1::
# 2435 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Manectric_Page1
# 2436 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2438 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_2
# 2441 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_3
# 2443 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_4
# 2446 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_2:
# 2439 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_POKE_BALL, NATURE_TIMID, 1, 1, 244, 0, 4, 220, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GRASS, 10
# 2440 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_3:
# 2442 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1_4:
# 2444 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1::
# 2452 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Marowak_Alola_Page1
# 2453 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2455 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_2
# 2458 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_3
# 2461 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_4
# 2463 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_5
# 2466 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_2:
# 2456 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAROWAK_ALOLA, 65, ITEM_THICK_CLUB, ITEM_POKE_BALL, NATURE_BRAVE, 1, 0, 252, 156, 0, 0, 0, 100, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_BONEMERANG, 2, FALSE, TYPE_WATER, 10
# 2457 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_3:
# 2459 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAROWAK_ALOLA, 65, ITEM_THICK_CLUB, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 252, 156, 4, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_BONEMERANG, 2, FALSE, TYPE_WATER, 10
# 2460 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_4:
# 2462 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1_5:
# 2464 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Marowak_Alola_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1::
# 2472 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Maushold_Page1
# 2473 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2475 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_2
# 2478 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_3
# 2481 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_4
# 2484 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_5
# 2486 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_6
# 2489 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_2:
# 2476 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 156, 100, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BEAT_UP, MOVE_FOLLOW_ME, MOVE_SUPER_FANG, 2, FALSE, TYPE_GHOST, 10
# 2477 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_3:
# 2479 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 252, 0, 236, 0, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_SUPER_FANG, 2, FALSE, TYPE_GHOST, 10
# 2480 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_4:
# 2482 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_WIDE_LENS, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_BITE, MOVE_POPULATION_BOMB, 2, FALSE, TYPE_NORMAL, 10
# 2483 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_5:
# 2485 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1_6:
# 2487 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Maushold_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1::
# 2495 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Lando_T_Page1
# 2496 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2498 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_2
# 2501 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_3
# 2504 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_4
# 2507 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_5
# 2510 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_6
# 2512 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_7
# 2515 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_2:
# 2499 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FLYING, 10
# 2500 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_3:
# 2502 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 2503 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_4:
# 2505 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_WATER, 10
# 2506 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_5:
# 2508 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 2509 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_6:
# 2511 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1_7:
# 2513 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lando_T_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1::
# 2521 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Landorus_Page1
# 2522 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2524 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_2
# 2527 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_3
# 2530 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_4
# 2532 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_5
# 2535 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_2:
# 2525 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 132, 0, 4, 252, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 2526 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_3:
# 2528 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 2529 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_4:
# 2531 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1_5:
# 2533 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Landorus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1::
# 2541 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Lapras_Gmax_Page1
# 2542 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2544 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_2
# 2547 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_3
# 2549 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_4
# 2552 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_2:
# 2545 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LAPRAS, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 108, 0, 172, 28, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, 2, TRUE, TYPE_GRASS, 10
# 2546 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_3:
# 2548 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1_4:
# 2550 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Lapras_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Latias_Page1::
# 2558 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Latias_Page1
# 2559 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2561 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_2
# 2564 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_3
# 2566 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_4
# 2569 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_2:
# 2562 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LATIAS, 65, ITEM_LATIASITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 60, 108, 76, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_RECOVER, 2, FALSE, TYPE_WATER, 10
# 2563 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_3:
# 2565 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Latias_Page1_4:
# 2567 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Latias_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1::
# 2575 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ludicolo_Page1
# 2576 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2578 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_2
# 2581 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_3
# 2584 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_4
# 2586 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_5
# 2589 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_2:
# 2579 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 188, 0, 148, 92, 76, 4, 31, 31, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2580 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_3:
# 2582 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 92, 156, 4, 31, 31, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2583 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_4:
# 2585 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1_5:
# 2587 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ludicolo_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1::
# 2595 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kingambit_Page1
# 2596 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2598 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_2
# 2601 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_3
# 2604 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_4
# 2606 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_5
# 2609 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_2:
# 2599 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_BLACK_GLASSES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 2600 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_3:
# 2602 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, MOVE_TERA_BLAST, MOVE_IRON_HEAD, 2, FALSE, TYPE_FLYING, 10
# 2603 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_4:
# 2605 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1_5:
# 2607 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kingambit_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1::
# 2615 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kommo_O_Page1
# 2616 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2618 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_2
# 2621 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_3
# 2624 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_4
# 2627 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_5
# 2629 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_6
# 2632 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_2:
# 2619 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLANGING_SCALES, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE, 2, FALSE, TYPE_FAIRY, 10
# 2620 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_3:
# 2622 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 204, 0, 0, 228, 76, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLANGOROUS_SOUL, MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, 2, FALSE, TYPE_FAIRY, 10
# 2623 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_4:
# 2625 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BOLD, 1, 0, 212, 0, 196, 52, 44, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_AURA_SPHERE, 2, FALSE, TYPE_STEEL, 10
# 2626 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_5:
# 2628 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1_6:
# 2630 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kommo_O_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1::
# 2638 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Koraidon_Page1
# 2639 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2641 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_2
# 2644 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_3
# 2647 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_4
# 2649 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_5
# 2652 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_2:
# 2642 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 108, 116, 4, 212, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 2643 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_3:
# 2645 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 2646 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_4:
# 2648 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1_5:
# 2650 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Koraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1::
# 2658 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kyogre_Page1
# 2659 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2661 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_2
# 2664 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_3
# 2667 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_4
# 2670 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_5
# 2672 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_6
# 2675 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_2:
# 2662 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 132, 44, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 2663 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_3:
# 2665 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 164, 12, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 2666 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_4:
# 2668 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_SCALD, MOVE_THUNDER, 2, FALSE, FALSE, 10
# 2669 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_5:
# 2671 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1_6:
# 2673 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1::
# 2681 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kyurem_White_Page1
# 2682 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2684 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1_2
# 2687 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1_3
# 2690 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1_4
# 2692 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1_5
# 2695 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1_2:
# 2685 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYUREM_WHITE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_BLIZZARD, MOVE_DRACO_METEOR, MOVE_FUSION_FLARE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GHOST, 10
# 2686 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1_3:
# 2688 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYUREM_WHITE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 68, 0, 4, 252, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_FUSION_FLARE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GHOST, 10
# 2689 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1_4:
# 2691 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1_5:
# 2693 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kyurem_White_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1::
# 2701 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Iron_Hands_Page1
# 2702 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2704 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_2
# 2707 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_3
# 2710 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_4
# 2712 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_5
# 2715 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_2:
# 2705 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 100, 156, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 2706 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_3:
# 2708 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 2709 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_4:
# 2711 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1_5:
# 2713 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Hands_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1::
# 2721 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kangaskhan_Page1
# 2722 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2724 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_2
# 2727 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_3
# 2730 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_4
# 2732 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_5
# 2735 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_2:
# 2725 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 36, 196, 20, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2726 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_3:
# 2728 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_SILK_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 52, 196, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_LAST_RESORT, MOVE_FAKE_OUT, MOVE_NONE, MOVE_NONE, 2, FALSE, TYPE_NORMAL, 10
# 2729 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_4:
# 2731 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1_5:
# 2733 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1::
# 2741 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kartana_Page1
# 2742 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2744 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_2
# 2747 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_3
# 2750 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_4
# 2753 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_5
# 2755 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_6
# 2758 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_2:
# 2745 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 116, 4, 4, 252, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_SMART_STRIKE, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH, 2, FALSE, TYPE_FIRE, 10
# 2746 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_3:
# 2748 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_DETECT, 2, FALSE, TYPE_FIRE, 10
# 2749 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_4:
# 2751 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_GRASSIUM_Z, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 84, 84, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_DETECT, MOVE_SUBSTITUTE, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, 2, FALSE, TYPE_FIRE, 10
# 2752 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_5:
# 2754 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1_6:
# 2756 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kartana_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1::
# 2764 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Keldeo_Resolute_Page1
# 2765 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2767 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_2
# 2770 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_3
# 2773 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_4
# 2775 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_5
# 2778 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_2:
# 2768 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KELDEO_RESOLUTE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 20, 0, 4, 252, 228, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SECRET_SWORD, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, 2, FALSE, TYPE_GRASS, 10
# 2769 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_3:
# 2771 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KELDEO_RESOLUTE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SECRET_SWORD, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, 2, FALSE, TYPE_GHOST, 10
# 2772 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_4:
# 2774 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1_5:
# 2776 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Keldeo_Resolute_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1::
# 2784 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Kilowattrel_Page1
# 2785 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2787 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1_2
# 2790 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1_3
# 2792 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1_4
# 2795 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1_2:
# 2788 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KILOWATTREL, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_AIR_SLASH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GHOST, 10
# 2789 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1_3:
# 2791 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1_4:
# 2793 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Kilowattrel_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1::
# 2801 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Hydreigon_Page1
# 2802 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2804 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_2
# 2807 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_3
# 2810 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_4
# 2813 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_5
# 2816 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_6
# 2818 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_7
# 2821 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_2:
# 2805 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_DARK_PULSE, 2, FALSE, TYPE_STEEL, 10
# 2806 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_3:
# 2808 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_SCOPE_LENS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOCUS_ENERGY, MOVE_DRACO_METEOR, MOVE_HEAT_WAVE, 2, FALSE, TYPE_FIRE, 10
# 2809 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_4:
# 2811 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_TRICK, 2, FALSE, TYPE_STEEL, 10
# 2812 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_5:
# 2814 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_FLAMETHROWER, 2, FALSE, TYPE_STEEL, 10
# 2815 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_6:
# 2817 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1_7:
# 2819 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hydreigon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1::
# 2827 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Incineroar_Page1
# 2828 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2830 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_2
# 2833 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_3
# 2836 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_4
# 2839 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_5
# 2841 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_6
# 2844 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_2:
# 2831 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2832 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_3:
# 2834 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 4, 236, 4, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_WILL_O_WISP, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2835 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_4:
# 2837 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 244, 36, 4, 4, 0, 220, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2838 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_5:
# 2840 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1_6:
# 2842 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Incineroar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1::
# 2850 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Indeedee_Page1
# 2851 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2853 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_2
# 2856 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_3
# 2858 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_4
# 2861 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_2:
# 2854 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_EXPANDING_FORCE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FIGHTING, 10
# 2855 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_3:
# 2857 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1_4:
# 2859 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1::
# 2867 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Indeedee_F_Page1
# 2868 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2870 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_2
# 2873 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_3
# 2875 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_4
# 2878 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_2:
# 2871 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE_F, 65, ITEM_PSYCHIC_SEED, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 252, 0, 204, 4, 4, 44, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 2872 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_3:
# 2874 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1_4:
# 2876 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Indeedee_F_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1::
# 2884 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Iron_Bundle_Page1
# 2885 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2887 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_2
# 2890 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_3
# 2892 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_4
# 2895 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_2:
# 2888 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_BUNDLE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_GRASS, 10
# 2889 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_3:
# 2891 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1_4:
# 2893 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Iron_Bundle_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1::
# 2901 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Groudon_Page1
# 2902 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2904 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_2
# 2907 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_3
# 2910 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_4
# 2913 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_5
# 2915 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_6
# 2918 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_2:
# 2905 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, 2, FALSE, TYPE_FIRE, 10
# 2906 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_3:
# 2908 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2909 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_4:
# 2911 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_ROAR, 2, FALSE, TYPE_FIRE, 10
# 2912 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_5:
# 2914 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1_6:
# 2916 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1::
# 2924 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gyarados_Page1
# 2925 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2927 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_2
# 2930 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_3
# 2933 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_4
# 2936 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_5
# 2939 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_6
# 2941 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_7
# 2944 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_2:
# 2928 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 172, 36, 116, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_WATERFALL, 2, FALSE, TYPE_GRASS, 10
# 2929 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_3:
# 2931 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 44, 196, 12, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_GRASS, 10
# 2932 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_4:
# 2934 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 44, 196, 12, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, 2, FALSE, TYPE_GROUND, 10
# 2935 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_5:
# 2937 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_GYARADOSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 52, 196, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, 2, FALSE, TYPE_GRASS, 10
# 2938 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_6:
# 2940 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1_7:
# 2942 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gyarados_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1::
# 2950 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Hatterene_Page1
# 2951 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2953 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_2
# 2956 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_3
# 2958 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_4
# 2961 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_2:
# 2954 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HATTERENE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 2, 1, 212, 0, 84, 0, 188, 20, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 2955 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_3:
# 2957 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1_4:
# 2959 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hatterene_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1::
# 2967 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Heatran_Page1
# 2968 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2970 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_2
# 2973 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_3
# 2976 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_4
# 2978 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_5
# 2981 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_2:
# 2971 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 244, 0, 4, 20, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, 2, FALSE, TYPE_GRASS, 10
# 2972 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_3:
# 2974 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 36, 36, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_TERA_BLAST, MOVE_HEAT_WAVE, 2, FALSE, TYPE_GRASS, 10
# 2975 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_4:
# 2977 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1_5:
# 2979 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Heatran_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1::
# 2987 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Hitmontop_Page1
# 2988 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2990 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_2
# 2993 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_3
# 2996 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_4
# 2998 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_5
# 3001 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_2:
# 2991 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HITMONTOP, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 4, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_WIDE_GUARD, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2992 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_3:
# 2994 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HITMONTOP, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 0, 252, 4, 92, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_WIDE_GUARD, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 2995 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_4:
# 2997 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1_5:
# 2999 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Hitmontop_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1::
# 3007 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Glastrier_Page1
# 3008 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3010 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1_2
# 3013 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1_3
# 3016 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1_4
# 3018 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1_5
# 3021 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1_2:
# 3011 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GLASTRIER, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 196, 0, 0, 0, 60, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, 2, FALSE, TYPE_FIRE, 10
# 3012 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1_3:
# 3014 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GLASTRIER, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 196, 4, 4, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, 2, FALSE, TYPE_FIRE, 10
# 3015 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1_4:
# 3017 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1_5:
# 3019 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Glastrier_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1::
# 3027 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Glimmora_Page1
# 3028 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3030 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_2
# 3033 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_3
# 3036 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_4
# 3039 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_5
# 3041 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_6
# 3044 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_2:
# 3031 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GLIMMORA, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_SLUDGE_BOMB, MOVE_METEOR_BEAM, MOVE_EARTH_POWER, 2, FALSE, TYPE_GRASS, 10
# 3032 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_3:
# 3034 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GLIMMORA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_SLUDGE_BOMB, MOVE_POWER_GEM, MOVE_EARTH_POWER, 2, FALSE, TYPE_GRASS, 10
# 3035 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_4:
# 3037 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GLIMMORA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 92, 76, 84, 31, 31, 31, 31, 31, 31, MOVE_MORTAL_SPIN, MOVE_SLUDGE_BOMB, MOVE_POWER_GEM, MOVE_EARTH_POWER, 2, FALSE, TYPE_GRASS, 10
# 3038 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_5:
# 3040 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1_6:
# 3042 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Glimmora_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1::
# 3050 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gothitelle_Page1
# 3051 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3053 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_2
# 3056 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_3
# 3059 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_4
# 3062 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_5
# 3064 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_6
# 3067 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_2:
# 3054 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 244, 0, 180, 4, 4, 76, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 3055 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_3:
# 3057 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 244, 0, 108, 0, 0, 156, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 3058 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_4:
# 3060 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 0, 244, 0, 28, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 3061 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_5:
# 3063 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1_6:
# 3065 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gothitelle_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1::
# 3073 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Great_Tusk_Page1
# 3074 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3076 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1_2
# 3079 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1_3
# 3082 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1_4
# 3084 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1_5
# 3087 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1_2:
# 3077 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GREAT_TUSK, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 228, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, 2, FALSE, TYPE_GROUND, 10
# 3078 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1_3:
# 3080 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GREAT_TUSK, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 228, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_GROUND, 10
# 3081 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1_4:
# 3083 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1_5:
# 3085 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Great_Tusk_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1::
# 3093 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Grimmsnarl_Page1
# 3094 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3096 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_2
# 3099 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_3
# 3102 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_4
# 3104 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_5
# 3107 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_2:
# 3097 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 236, 0, 156, 0, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 3098 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_3:
# 3100 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 244, 4, 196, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_SPIRIT_BREAK, 2, FALSE, TYPE_GHOST, 10
# 3101 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_4:
# 3103 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1_5:
# 3105 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Grimmsnarl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1::
# 3113 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Garganacl_Page1
# 3114 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3116 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_2
# 3119 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_3
# 3122 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_4
# 3124 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_5
# 3127 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_2:
# 3117 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_SASSY, 0, 0, 252, 0, 20, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 3118 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_3:
# 3120 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 252, 4, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 3121 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_4:
# 3123 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1_5:
# 3125 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garganacl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1::
# 3133 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gastrodon_Page1
# 3134 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3136 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_2
# 3139 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_3
# 3142 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_4
# 3144 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_5
# 3147 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_2:
# 3137 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 172, 0, 108, 4, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 3138 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_3:
# 3140 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 172, 0, 116, 0, 220, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 3141 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_4:
# 3143 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1_5:
# 3145 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gastrodon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1::
# 3153 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Genesect_Page1
# 3154 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3156 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1_2
# 3159 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1_3
# 3161 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1_4
# 3164 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1_2:
# 3157 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENESECT, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 236, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_IRON_HEAD, MOVE_EXTREME_SPEED, MOVE_EXPLOSION, 2, FALSE, TYPE_GHOST, 10
# 3158 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1_3:
# 3160 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1_4:
# 3162 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Genesect_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1::
# 3170 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gengar_Page1
# 3171 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3173 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_2
# 3176 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_3
# 3179 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_4
# 3182 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_5
# 3185 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_6
# 3187 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_7
# 3190 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_2:
# 3174 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_DARK, 10
# 3175 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_3:
# 3177 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 68, 180, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, 2, FALSE, TYPE_WATER, 10
# 3178 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_4:
# 3180 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_DARK, 10
# 3181 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_5:
# 3183 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 76, 0, 28, 180, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, 2, FALSE, TYPE_WATER, 10
# 3184 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_6:
# 3186 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1_7:
# 3188 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1::
# 3196 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gholdengo_Page1
# 3197 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3199 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_2
# 3202 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_3
# 3205 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_4
# 3208 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_5
# 3210 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_6
# 3213 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_2:
# 3200 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 212, 0, 4, 60, 212, 20, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 3201 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_3:
# 3203 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 36, 212, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 3204 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_4:
# 3206 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 36, 0, 4, 252, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_STEEL_BEAM, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 3207 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_5:
# 3209 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1_6:
# 3211 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gholdengo_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1::
# 3219 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Flamigo_Page1
# 3220 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3222 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1_2
# 3225 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1_3
# 3227 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1_4
# 3230 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1_2:
# 3223 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLAMIGO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, 2, FALSE, TYPE_GHOST, 10
# 3224 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1_3:
# 3226 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1_4:
# 3228 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flamigo_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1::
# 3236 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Flutter_Mane_Page1
# 3237 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3239 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_2
# 3242 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_3
# 3245 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_4
# 3248 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_5
# 3250 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_6
# 3253 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_2:
# 3240 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 3241 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_3:
# 3243 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 116, 0, 156, 196, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_ICY_WIND, 2, FALSE, TYPE_FAIRY, 10
# 3244 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_4:
# 3246 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 228, 0, 204, 68, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 3247 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_5:
# 3249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1_6:
# 3251 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Flutter_Mane_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1::
# 3259 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gallade_Page1
# 3260 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3262 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_2
# 3265 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_3
# 3268 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_4
# 3270 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_5
# 3273 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_2:
# 3263 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GALLADE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 1, 0, 204, 116, 188, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, 2, FALSE, TYPE_WATER, 10
# 3264 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_3:
# 3266 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GALLADE, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 1, 0, 252, 116, 140, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_WIDE_GUARD, MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, 2, FALSE, TYPE_WATER, 10
# 3267 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_4:
# 3269 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1_5:
# 3271 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gallade_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1::
# 3279 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Garchomp_Page1
# 3280 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3282 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_2
# 3285 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_3
# 3288 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_4
# 3291 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_5
# 3293 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_6
# 3296 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_2:
# 3283 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 108, 172, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_FIRE, 10
# 3284 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_3:
# 3286 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 156, 4, 252, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_DRAGON_CLAW, 2, FALSE, TYPE_FIRE, 10
# 3287 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_4:
# 3289 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_GROUND, 10
# 3290 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_5:
# 3292 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1_6:
# 3294 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Garchomp_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1::
# 3302 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Gardevoir_Page1
# 3303 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3305 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_2
# 3308 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_3
# 3311 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_4
# 3313 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_5
# 3316 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_2:
# 3306 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 3307 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_3:
# 3309 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_TRICK, 2, FALSE, TYPE_GHOST, 10
# 3310 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_4:
# 3312 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1_5:
# 3314 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1::
# 3322 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dusclops_Page1
# 3323 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3325 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_2
# 3328 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_3
# 3331 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_4
# 3333 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_5
# 3336 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_2:
# 3326 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DUSCLOPS, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_NIGHT_SHADE, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 3327 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_3:
# 3329 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DUSCLOPS, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_RELAXED, 2, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_NIGHT_SHADE, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 3330 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_4:
# 3332 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1_5:
# 3334 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dusclops_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Entei_Page1::
# 3342 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Entei_Page1
# 3343 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3345 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_2
# 3348 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_3
# 3350 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_4
# 3353 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_2:
# 3346 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ENTEI, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_SACRED_FIRE, MOVE_STONE_EDGE, MOVE_EXTREME_SPEED, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_NORMAL, 10
# 3347 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_3:
# 3349 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Entei_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Entei_Page1_4:
# 3351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Entei_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1::
# 3359 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Excadrill_Page1
# 3360 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3362 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_2
# 3365 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_3
# 3368 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_4
# 3370 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_5
# 3373 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_2:
# 3363 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, 2, FALSE, TYPE_GROUND, 10
# 3364 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_3:
# 3366 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 28, 196, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, 2, FALSE, TYPE_WATER, 10
# 3367 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_4:
# 3369 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1_5:
# 3371 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Excadrill_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1::
# 3379 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Farigiraf_Page1
# 3380 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3382 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_2
# 3385 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_3
# 3387 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_4
# 3390 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_2:
# 3383 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FARIGIRAF, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 228, 0, 116, 4, 4, 156, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_HYPER_VOICE, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 3384 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_3:
# 3386 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1_4:
# 3388 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Farigiraf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1::
# 3396 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ferrothorn_Page1
# 3397 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3399 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_2
# 3402 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_3
# 3405 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_4
# 3408 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_5
# 3410 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_6
# 3413 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_2:
# 3400 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 220, 0, 100, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 3401 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_3:
# 3403 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 1, 220, 0, 228, 0, 0, 60, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 3404 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_4:
# 3406 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 220, 204, 0, 0, 0, 84, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 3407 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_5:
# 3409 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1_6:
# 3411 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ferrothorn_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1::
# 3419 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dondozo_Page1
# 3420 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3422 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1_2
# 3425 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1_3
# 3427 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1_4
# 3430 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1_2:
# 3423 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DONDOZO, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 252, 4, 36, 4, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_YAWN, MOVE_WAVE_CRASH, MOVE_BODY_PRESS, 2, FALSE, TYPE_GRASS, 10
# 3424 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1_3:
# 3426 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1_4:
# 3428 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dondozo_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1::
# 3436 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dracovish_Page1
# 3437 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3439 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_2
# 3442 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_3
# 3445 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_4
# 3447 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_5
# 3450 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_2:
# 3440 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRACOVISH, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FISHIOUS_REND, MOVE_STONE_EDGE, MOVE_OUTRAGE, MOVE_CRUNCH, 2, FALSE, TYPE_WATER, 10
# 3441 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_3:
# 3443 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRACOVISH, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 236, 4, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FISHIOUS_REND, MOVE_STONE_EDGE, MOVE_OUTRAGE, MOVE_CRUNCH, 2, FALSE, TYPE_WATER, 10
# 3444 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_4:
# 3446 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1_5:
# 3448 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dracovish_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1::
# 3456 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dragapult_Page1
# 3457 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3459 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_2
# 3462 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_3
# 3465 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_4
# 3468 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_5
# 3470 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_6
# 3473 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_2:
# 3460 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 252, 4, 44, 164, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DARTS, MOVE_LIGHT_SCREEN, MOVE_WILL_O_WISP, 2, FALSE, TYPE_WATER, 10
# 3461 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_3:
# 3463 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 28, 196, 4, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_PHANTOM_FORCE, MOVE_DRAGON_CLAW, 2, FALSE, TYPE_WATER, 10
# 3464 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_4:
# 3466 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_OUTRAGE, 2, FALSE, TYPE_DRAGON, 10
# 3467 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_5:
# 3469 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1_6:
# 3471 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragapult_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1::
# 3479 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dragonite_Page1
# 3480 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3482 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_2
# 3485 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_3
# 3488 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_4
# 3490 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_5
# 3493 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_2:
# 3483 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_NORMAL, 10
# 3484 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_3:
# 3486 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_LOADED_DICE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HAZE, MOVE_SCALE_SHOT, 2, FALSE, TYPE_FAIRY, 10
# 3487 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_4:
# 3489 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1_5:
# 3491 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dragonite_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1::
# 3499 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Drifblim_Page1
# 3500 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3502 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_2
# 3505 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_3
# 3508 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_4
# 3511 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_5
# 3513 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_6
# 3516 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_2:
# 3503 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRIFBLIM, 65, ITEM_ELECTRIC_SEED, ITEM_POKE_BALL, NATURE_TIMID, 1, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_HAZE, 2, FALSE, TYPE_DARK, 10
# 3504 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_3:
# 3506 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRIFBLIM, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_JOLLY, 1, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_PHANTOM_FORCE, MOVE_ACROBATICS, MOVE_FLY, 2, FALSE, TYPE_DARK, 10
# 3507 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_4:
# 3509 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRIFBLIM, 65, ITEM_ELECTRIC_SEED, ITEM_POKE_BALL, NATURE_JOLLY, 1, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_ACROBATICS, MOVE_WILL_O_WISP, MOVE_HAZE, 2, FALSE, TYPE_DARK, 10
# 3510 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_5:
# 3512 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1_6:
# 3514 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Drifblim_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1::
# 3522 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Comfey_Page1
# 3523 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3525 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_2
# 3528 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_3
# 3530 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_4
# 3533 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_2:
# 3526 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_COMFEY, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_CALM, 1, 0, 180, 0, 0, 0, 0, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_FLORAL_HEALING, MOVE_DRAINING_KISS, 2, FALSE, TYPE_WATER, 10
# 3527 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_3:
# 3529 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1_4:
# 3531 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Comfey_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1::
# 3539 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Conkeldurr_Page1
# 3540 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3542 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_2
# 3545 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_3
# 3548 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_4
# 3551 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_5
# 3554 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_6
# 3556 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_7
# 3559 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_2:
# 3543 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 228, 236, 0, 0, 0, 44, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_POISON_JAB, 2, FALSE, TYPE_FIRE, 10
# 3544 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_3:
# 3546 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 2, 1, 228, 236, 0, 0, 0, 44, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 3547 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_4:
# 3549 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_POISON_JAB, 2, FALSE, TYPE_FIRE, 10
# 3550 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_5:
# 3552 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 3553 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_6:
# 3555 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1_7:
# 3557 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Conkeldurr_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1::
# 3565 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Corviknight_Page1
# 3566 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3568 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_2
# 3571 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_3
# 3573 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_4
# 3576 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_2:
# 3569 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CORVIKNIGHT, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_IMPISH, 2, 1, 244, 4, 116, 4, 0, 140, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_IRON_HEAD, 2, FALSE, TYPE_DRAGON, 10
# 3570 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_3:
# 3572 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1_4:
# 3574 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Corviknight_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1::
# 3582 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Cresselia_Page1
# 3583 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3585 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_2
# 3588 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_3
# 3591 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_4
# 3594 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_5
# 3596 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_6
# 3599 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_2:
# 3586 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 1, 252, 0, 156, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 3587 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_3:
# 3589 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 1, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 3590 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_4:
# 3592 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_SASSY, 0, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 3593 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_5:
# 3595 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1_6:
# 3597 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cresselia_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1::
# 3605 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Darkrai_Page1
# 3606 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3608 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1_2
# 3611 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1_3
# 3614 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1_4
# 3616 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1_5
# 3619 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1_2:
# 3609 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DARKRAI, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 28, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_GHOST, 10
# 3610 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1_3:
# 3612 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DARKRAI, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_GHOST, 10
# 3613 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1_4:
# 3615 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1_5:
# 3617 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Darkrai_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1::
# 3625 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chien_Pao_Page1
# 3626 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3628 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_2
# 3631 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_3
# 3633 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_4
# 3636 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_2:
# 3629 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHIEN_PAO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICICLE_CRASH, MOVE_SACRED_SWORD, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 3630 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_3:
# 3632 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1_4:
# 3634 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chien_Pao_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1::
# 3642 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Cinderace_Page1
# 3643 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3645 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_2
# 3648 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_3
# 3651 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_4
# 3653 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_5
# 3656 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_2:
# 3646 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CINDERACE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, 2, FALSE, TYPE_GHOST, 10
# 3647 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_3:
# 3649 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CINDERACE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, 2, FALSE, TYPE_GHOST, 10
# 3650 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_4:
# 3652 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1_5:
# 3654 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Cinderace_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1::
# 3662 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Clefable_Page1
# 3663 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3665 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1_2
# 3668 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1_3
# 3670 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1_4
# 3673 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1_2:
# 3666 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFABLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 236, 0, 188, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_WATER, 10
# 3667 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1_3:
# 3669 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1_4:
# 3671 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefable_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1::
# 3679 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Clefairy_Page1
# 3680 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3682 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_2
# 3685 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_3
# 3688 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_4
# 3691 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_5
# 3693 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_6
# 3696 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_2:
# 3683 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 140, 0, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 3684 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_3:
# 3686 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 220, 0, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 3687 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_4:
# 3689 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 60, 0, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 3690 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_5:
# 3692 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1_6:
# 3694 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Clefairy_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1::
# 3702 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Coalossal_Gmax_Page1
# 3703 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3705 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_2
# 3708 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_3
# 3711 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_4
# 3713 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_5
# 3716 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_2:
# 3706 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_COALOSSAL, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 116, 0, 4, 228, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_METEOR_BEAM, MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, 2, TRUE, TYPE_FIRE, 10
# 3707 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_3:
# 3709 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_COALOSSAL, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_METEOR_BEAM, MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, 2, TRUE, TYPE_FIRE, 10
# 3710 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_4:
# 3712 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1_5:
# 3714 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Coalossal_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1::
# 3722 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Ceruledge_Page1
# 3723 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3725 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1_2
# 3728 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1_3
# 3731 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1_4
# 3733 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1_5
# 3736 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1_2:
# 3726 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CERULEDGE, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_IMPISH, 0, 1, 244, 4, 156, 4, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_BITTER_BLADE, 2, FALSE, TYPE_GRASS, 10
# 3727 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1_3:
# 3729 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CERULEDGE, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 52, 196, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_BITTER_BLADE, 2, FALSE, TYPE_GRASS, 10
# 3730 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1_4:
# 3732 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1_5:
# 3734 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Ceruledge_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1::
# 3742 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chandelure_Page1
# 3743 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3745 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_2
# 3748 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_3
# 3751 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_4
# 3753 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_5
# 3756 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_2:
# 3746 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHANDELURE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 228, 0, 84, 0, 196, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, 2, FALSE, TYPE_GRASS, 10
# 3747 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_3:
# 3749 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHANDELURE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_OVERHEAT, 2, FALSE, TYPE_FIRE, 10
# 3750 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_4:
# 3752 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1_5:
# 3754 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chandelure_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1::
# 3762 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Charizard_Page1
# 3763 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3765 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_2
# 3768 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_3
# 3771 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_4
# 3773 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_5
# 3776 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_2:
# 3766 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, 2, FALSE, TYPE_GRASS, 10
# 3767 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_3:
# 3769 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 236, 44, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_ROOST, 2, FALSE, TYPE_GRASS, 10
# 3770 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_4:
# 3772 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1_5:
# 3774 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1::
# 3782 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Charizard_Gmax_Page1
# 3783 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3785 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_2
# 3788 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_3
# 3790 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_4
# 3793 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_2:
# 3786 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARTI_BERRY, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 4, 252, 244, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BLAST_BURN, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH, 2, TRUE, FALSE, 10
# 3787 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_3:
# 3789 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1_4:
# 3791 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Charizard_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1::
# 3799 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Chi_Yu_Page1
# 3800 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3802 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_2
# 3805 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_3
# 3808 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_4
# 3810 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_5
# 3813 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_2:
# 3803 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_OVERHEAT, 2, FALSE, TYPE_GHOST, 10
# 3804 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_3:
# 3806 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GHOST, 10
# 3807 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_4:
# 3809 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1_5:
# 3811 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Chi_Yu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1::
# 3819 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Basculegion_Page1
# 3820 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3822 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_2
# 3825 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_3
# 3828 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_4
# 3831 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_5
# 3834 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_6
# 3836 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_7
# 3839 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_2:
# 3823 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 220, 124, 156, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 3824 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_3:
# 3826 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 3827 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_4:
# 3829 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 3830 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_5:
# 3832 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 3833 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_6:
# 3835 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1_7:
# 3837 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Basculegion_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1::
# 3845 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Baxcalibur_Page1
# 3846 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3848 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_2
# 3851 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_3
# 3853 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_4
# 3856 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_2:
# 3849 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BAXCALIBUR, 65, ITEM_LOADED_DICE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCALE_SHOT, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, 2, FALSE, TYPE_FAIRY, 10
# 3850 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_3:
# 3852 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1_4:
# 3854 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Baxcalibur_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1::
# 3862 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Bronzong_Page1
# 3863 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3865 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_2
# 3868 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_3
# 3871 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_4
# 3873 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_5
# 3876 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_2:
# 3866 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 252, 0, 188, 0, 0, 68, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, MOVE_GYRO_BALL, 2, FALSE, TYPE_WATER, 10
# 3867 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_3:
# 3869 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_MENTAL_HERB, ITEM_POKE_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, MOVE_GYRO_BALL, 2, FALSE, TYPE_WATER, 10
# 3870 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_4:
# 3872 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1_5:
# 3874 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Bronzong_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1::
# 3882 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Calyrex_Page1
# 3883 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3885 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_2
# 3888 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_3
# 3891 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_4
# 3894 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_5
# 3897 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_6
# 3899 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_7
# 3902 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_2:
# 3886 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_GHOST, 10
# 3887 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_3:
# 3889 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 20, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_DARK, 10
# 3890 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_4:
# 3892 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 116, 0, 0, 0, 140, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 3893 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_5:
# 3895 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 116, 4, 12, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 3896 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_6:
# 3898 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1_7:
# 3900 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Calyrex_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1::
# 3908 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Celesteela_Page1
# 3909 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3911 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_2
# 3914 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_3
# 3917 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_4
# 3919 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_5
# 3922 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_2:
# 3912 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 20, 4, 180, 52, 31, 0, 31, 31, 31, 31, MOVE_AIR_SLASH, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_GIGA_DRAIN, 2, FALSE, TYPE_DRAGON, 10
# 3913 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_3:
# 3915 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 68, 84, 4, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_HEAVY_SLAM, 2, FALSE, TYPE_DRAGON, 10
# 3916 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_4:
# 3918 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1_5:
# 3920 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Celesteela_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1::
# 3928 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Arcanine_Page1
# 3929 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3931 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_2
# 3934 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_3
# 3937 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_4
# 3939 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_5
# 3942 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_2:
# 3932 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 236, 68, 4, 196, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EXTREME_SPEED, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 3933 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_3:
# 3935 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 252, 68, 4, 76, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, MOVE_SNARL, 2, FALSE, TYPE_WATER, 10
# 3936 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_4:
# 3938 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1_5:
# 3940 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1::
# 3948 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Arcanine_Hisui_Page1
# 3949 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3951 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_2
# 3954 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_3
# 3956 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_4
# 3959 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_2:
# 3952 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE_HISUI, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EXTREME_SPEED, MOVE_HEAD_SMASH, 2, FALSE, TYPE_NORMAL, 10
# 3953 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_3:
# 3955 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1_4:
# 3957 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Arcanine_Hisui_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1::
# 3965 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Archaludon_Page1
# 3966 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3968 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_2
# 3971 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_3
# 3974 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_4
# 3976 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_5
# 3979 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_2:
# 3969 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, 2, FALSE, TYPE_ELECTRIC, 10
# 3970 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_3:
# 3972 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 4, 4, 44, 204, 31, 31, 31, 31, 31, 31, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_BODY_PRESS, 2, FALSE, TYPE_GRASS, 10
# 3973 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_4:
# 3975 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1_5:
# 3977 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Archaludon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1::
# 3985 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Armarouge_Page1
# 3986 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3988 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_2
# 3991 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_3
# 3994 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_4
# 3996 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_5
# 3999 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_2:
# 3989 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARMAROUGE, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENDURE, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_FIRE, 10
# 3990 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_3:
# 3992 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARMAROUGE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 0, 1, 228, 0, 0, 0, 196, 84, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_GRASS, 10
# 3993 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_4:
# 3995 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1_5:
# 3997 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Armarouge_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1::
# 4005 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Azumarill_Page1
# 4006 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4008 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_2
# 4011 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_3
# 4014 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_4
# 4016 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_5
# 4019 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_2:
# 4009 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 204, 236, 4, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_KNOCK_OFF, 2, FALSE, TYPE_WATER, 10
# 4010 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_3:
# 4012 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_KNOCK_OFF, 2, FALSE, TYPE_WATER, 10
# 4013 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_4:
# 4015 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1_5:
# 4017 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Azumarill_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1::
# 4025 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Aegislash_Page1
# 4026 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4028 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_2
# 4031 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_3
# 4034 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_4
# 4037 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_5
# 4039 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_6
# 4042 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_2:
# 4029 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, 2, FALSE, FALSE, 10
# 4030 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_3:
# 4032 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, 2, FALSE, TYPE_WATER, 10
# 4033 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_4:
# 4035 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 252, 0, 4, 0, 180, 68, 31, 0, 31, 0, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, 2, FALSE, FALSE, 10
# 4036 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_5:
# 4038 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1_6:
# 4040 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aegislash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1::
# 4048 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Aerodactyl_Page1
# 4049 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4051 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_2
# 4054 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_3
# 4057 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_4
# 4059 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_5
# 4062 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_2:
# 4052 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AERODACTYL, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_WIDE_GUARD, MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, 2, FALSE, TYPE_GHOST, 10
# 4053 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_3:
# 4055 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AERODACTYL, 65, ITEM_AERODACTYLITE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 132, 116, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, 2, FALSE, TYPE_WATER, 10
# 4056 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_4:
# 4058 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1_5:
# 4060 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Aerodactyl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1::
# 4068 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Amoonguss_Page1
# 4069 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4071 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_2
# 4074 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_3
# 4077 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_4
# 4080 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_5
# 4083 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_6
# 4085 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_7
# 4088 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_2:
# 4072 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_RELAXED, 2, 1, 236, 0, 236, 0, 0, 36, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 4073 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_3:
# 4075 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 244, 0, 108, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 4076 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_4:
# 4078 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_SPORE, MOVE_RAGE_POWDER, 2, FALSE, TYPE_WATER, 10
# 4079 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_5:
# 4081 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 20, 0, 0, 236, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 4082 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_6:
# 4084 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1_7:
# 4086 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Amoonguss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1::
# 4094 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Annihilape_Page1
# 4095 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4097 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_2
# 4100 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_3
# 4103 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_4
# 4105 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_5
# 4108 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_2:
# 4098 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 180, 68, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 4099 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_3:
# 4101 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_FINAL_GAMBIT, 2, FALSE, TYPE_FIGHTING, 10
# 4102 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_4:
# 4104 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1_5:
# 4106 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Annihilape_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1::
# 4114 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Araquanid_Page1
# 4115 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4117 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_2
# 4120 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_3
# 4122 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_4
# 4125 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_2:
# 4118 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARAQUANID, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 236, 20, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_BUG_BITE, MOVE_LIQUIDATION, 2, FALSE, TYPE_WATER, 10
# 4119 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_3:
# 4121 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1_4:
# 4123 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Araquanid_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
# 5 "data/scripts/sample_sets_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                               B: Go Back$"

Auto_Text_Sample_Sets_Page1::
# 4129 "data/scripts/sample_sets_options.pory"
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page1::
# 4136 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "AERODACTYL$"
	.string "AMOONGUSS$"
	.string "ANNIHILAPE$"
	.string "ARAQUANID$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page2::
# 4147 "data/scripts/sample_sets_options.pory"
	.string "ARCANINE$"
	.string "ARCANINE-HISUI$"
	.string "ARCHALUDON$"
	.string "ARMAROUGE$"
	.string "AZUMARILL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page3::
# 4158 "data/scripts/sample_sets_options.pory"
	.string "BASCULEGION$"
	.string "BAXCALIBUR$"
	.string "BRONZONG$"
	.string "CALYREX$"
	.string "CELESTEELA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page4::
# 4169 "data/scripts/sample_sets_options.pory"
	.string "CERULEDGE$"
	.string "CHANDELURE$"
	.string "CHARIZARD$"
	.string "CHARIZARD-GMAX$"
	.string "CHI-YU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page5::
# 4180 "data/scripts/sample_sets_options.pory"
	.string "CHIEN-PAO$"
	.string "CINDERACE$"
	.string "CLEFABLE$"
	.string "CLEFAIRY$"
	.string "COALOSSAL-GMAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page6::
# 4191 "data/scripts/sample_sets_options.pory"
	.string "COMFEY$"
	.string "CONKELDURR$"
	.string "CORVIKNIGHT$"
	.string "CRESSELIA$"
	.string "DARKRAI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page7::
# 4202 "data/scripts/sample_sets_options.pory"
	.string "DONDOZO$"
	.string "DRACOVISH$"
	.string "DRAGAPULT$"
	.string "DRAGONITE$"
	.string "DRIFBLIM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page8::
# 4213 "data/scripts/sample_sets_options.pory"
	.string "DUSCLOPS$"
	.string "ENTEI$"
	.string "EXCADRILL$"
	.string "FARIGIRAF$"
	.string "FERROTHORN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page9::
# 4224 "data/scripts/sample_sets_options.pory"
	.string "FLAMIGO$"
	.string "FLUTTER MANE$"
	.string "GALLADE$"
	.string "GARCHOMP$"
	.string "GARDEVOIR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page10::
# 4235 "data/scripts/sample_sets_options.pory"
	.string "GARGANACL$"
	.string "GASTRODON$"
	.string "GENESECT$"
	.string "GENGAR$"
	.string "GHOLDENGO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page11::
# 4246 "data/scripts/sample_sets_options.pory"
	.string "GLASTRIER$"
	.string "GLIMMORA$"
	.string "GOTHITELLE$"
	.string "GREAT TUSK$"
	.string "GRIMMSNARL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page12::
# 4257 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "GYARADOS$"
	.string "HATTERENE$"
	.string "HEATRAN$"
	.string "HITMONTOP$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page13::
# 4268 "data/scripts/sample_sets_options.pory"
	.string "HYDREIGON$"
	.string "INCINEROAR$"
	.string "INDEEDEE$"
	.string "INDEEDEE-F$"
	.string "IRON BUNDLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page14::
# 4279 "data/scripts/sample_sets_options.pory"
	.string "IRON HANDS$"
	.string "KANGASKHAN$"
	.string "KARTANA$"
	.string "KELDEO-RESOLUTE$"
	.string "KILOWATTREL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page15::
# 4290 "data/scripts/sample_sets_options.pory"
	.string "KINGAMBIT$"
	.string "KOMMO-O$"
	.string "KORAIDON$"
	.string "KYOGRE$"
	.string "KYUREM-WHITE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page16::
# 4301 "data/scripts/sample_sets_options.pory"
	.string "LANDO-T$"
	.string "LANDORUS$"
	.string "LAPRAS-GMAX$"
	.string "LATIAS$"
	.string "LUDICOLO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page17::
# 4312 "data/scripts/sample_sets_options.pory"
	.string "LUNALA$"
	.string "MANAPHY$"
	.string "MANECTRIC$"
	.string "MAROWAK-ALOLA$"
	.string "MAUSHOLD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page18::
# 4323 "data/scripts/sample_sets_options.pory"
	.string "MAWILE$"
	.string "MEOWSCARADA$"
	.string "METAGROSS$"
	.string "MIENSHAO$"
	.string "MILOTIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page19::
# 4334 "data/scripts/sample_sets_options.pory"
	.string "MIMIKYU$"
	.string "MIRAIDON$"
	.string "MOLTRES-GALAR$"
	.string "MUK-ALOLA$"
	.string "MURKROW$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page20::
# 4345 "data/scripts/sample_sets_options.pory"
	.string "NECROZMA-DAWN-WINGS$"
	.string "NECROZMA-DUSK-MANE$"
	.string "NIHILEGO$"
	.string "NINETALES-ALOLA$"
	.string "OGERPON-CS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page21::
# 4356 "data/scripts/sample_sets_options.pory"
	.string "OGERPON-HF$"
	.string "OGERPON-WS$"
	.string "ORANGURU$"
	.string "PALAFIN$"
	.string "PELIPPER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page22::
# 4367 "data/scripts/sample_sets_options.pory"
	.string "POLITOED$"
	.string "PORYGON2$"
	.string "PRIMARINA$"
	.string "RAGING BOLT$"
	.string "RAICHU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page23::
# 4378 "data/scripts/sample_sets_options.pory"
	.string "RAYQUAZA$"
	.string "REGIDRAGO$"
	.string "REGIELEKI$"
	.string "RHYPERIOR$"
	.string "RILLABOOM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page24::
# 4389 "data/scripts/sample_sets_options.pory"
	.string "ROARING MOON$"
	.string "ROTOM-FROST$"
	.string "ROTOM-HEAT$"
	.string "ROTOM-MOW$"
	.string "ROTOM-WASH$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page25::
# 4400 "data/scripts/sample_sets_options.pory"
	.string "SABLEYE$"
	.string "SALAMENCE$"
	.string "SCIZOR$"
	.string "SCREAM TAIL$"
	.string "SINISTCHA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page26::
# 4411 "data/scripts/sample_sets_options.pory"
	.string "SKELEDIRGE$"
	.string "SNEASLER$"
	.string "SNORLAX$"
	.string "STAKATAKA$"
	.string "SYLVEON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page27::
# 4422 "data/scripts/sample_sets_options.pory"
	.string "TALONFLAME$"
	.string "TAPU BULU$"
	.string "TAPU FINI$"
	.string "TAPU KOKO$"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page28::
# 4433 "data/scripts/sample_sets_options.pory"
	.string "TATSUGIRI$"
	.string "THUNDURUS$"
	.string "TING-LU$"
	.string "TINKATON$"
	.string "TOGEKISS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page29::
# 4444 "data/scripts/sample_sets_options.pory"
	.string "TORKOAL$"
	.string "TORNADUS$"
	.string "TOXTRICITY$"
	.string "TSAREENA$"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page30::
# 4455 "data/scripts/sample_sets_options.pory"
	.string "URSALUNA$"
	.string "URSALUNA-BLOODMOON$"
	.string "URSHIFU-RS$"
	.string "URSHIFU-SS$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page31::
# 4466 "data/scripts/sample_sets_options.pory"
	.string "VENUSAUR-GMAX$"
	.string "VOLCARONA$"
	.string "WEAVILE$"
	.string "WEEZING-GALAR$"
	.string "WHIMSICOTT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page32::
# 4477 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "YVELTAL$"
	.string "ZACIAN$"
	.string "ZAMAZENTA$"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Xerneas_Page1::
# 4488 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+$"
	.string "44/0-/20/188/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Yveltal_Page1::
# 4496 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (ORB)$"
	.string "4/244/4/0-/4/252+ (DARK Z)$"
	.string "4/244/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Zacian_Page1::
# 4505 "data/scripts/sample_sets_options.pory"
	.string "252/76+/4/0-/12/164 (GROUND)$"
	.string "252/76+/4/0-/12/164 (STELLAR)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Zamazenta_Page1::
# 4513 "data/scripts/sample_sets_options.pory"
	.string "76/0/244+/0-/0/188$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Zapdos_Page1::
# 4520 "data/scripts/sample_sets_options.pory"
	.string "244/0-/84/116+/36/28 (SITRUS)$"
	.string "252/0-/76/116+/36/28 (GOGGLES)$"
	.string "28/0-/0/228/0/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Venusaur_Gmax_Page1::
# 4529 "data/scripts/sample_sets_options.pory"
	.string "156/0-/36/172+/20/116 (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Volcarona_Page1::
# 4536 "data/scripts/sample_sets_options.pory"
	.string "252/0-/108/36+/4/108 (TERA)$"
	.string "252/0-/188/36+/4/28 (SUPPORT)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Weavile_Page1::
# 4544 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Weezing_Galar_Page1::
# 4552 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/196+/52/4 (SPECS)$"
	.string "252/0-/76+/4/172/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Whimsicott_Page1::
# 4560 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/0/0/252+ (CLOAK)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ursaluna_Page1::
# 4568 "data/scripts/sample_sets_options.pory"
	.string "140/236+/0/0/132/0-$"
	.string "140/236+/4/0-/116/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ursaluna_Bloodmoon_Page1::
# 4576 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/196+/52/12 (ORB)$"
	.string "244/0/0/196+/68/0- (ORB)$"
	.string "4/0-/4/196+/52/252 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Urshifu_Rs_Page1::
# 4585 "data/scripts/sample_sets_options.pory"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "12/156+/4/0-/84/252 (MYSTIC)$"
	.string "12/156+/4/0-/84/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Urshifu_Ss_Page1::
# 4594 "data/scripts/sample_sets_options.pory"
	.string "0/236+/0/0-/20/252 (BAND)$"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Venusaur_Page1::
# 4602 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Torkoal_Page1::
# 4609 "data/scripts/sample_sets_options.pory"
	.string "204/0/0/196+/108/0-$"
	.string "204/0/0/196+/108/0- (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tornadus_Page1::
# 4617 "data/scripts/sample_sets_options.pory"
	.string "196/0-/228+/4/76/4 (CLOAK)$"
	.string "196/0-/228+/4/76/4 (HELMET)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Toxtricity_Page1::
# 4626 "data/scripts/sample_sets_options.pory"
	.string "44/0-/4/204+/4/252 (SCARF)$"
	.string "44/0-/4/204+/4/252 (SPECS)$"
	.string "44/0-/4/204+/4/252 (SPRAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tsareena_Page1::
# 4635 "data/scripts/sample_sets_options.pory"
	.string "228/236+/4/0-/36/4 (SITRUS)$"
	.string "252/236+/4/0-/12/4 (VEST)$"
	.string "4/252+/0/0-/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tyranitar_Page1::
# 4644 "data/scripts/sample_sets_options.pory"
	.string "188/204+/0/0/116/0- (LIFE ORB)$"
	.string "188/204+/4/0-/108/4 (LIFE ORB)$"
	.string "252/204+/0/0/52/0- (LUM BERRY)$"
	.string "252/204+/0/0/52/0- (MEGA)$"
	.string "252/204+/4/0-/44/4 (LUM BERRY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tyranitar_Page2::
# 4655 "data/scripts/sample_sets_options.pory"
	.string "252/204+/4/0-/44/4 (MEGA)$"
	.string "4/244/4/0-/4/252+ (SCARF)$"
	.string "44/164/20/0-/28/252+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tatsugiri_Page1::
# 4664 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252 (SCARF)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Thundurus_Page1::
# 4672 "data/scripts/sample_sets_options.pory"
	.string "228/0-/28/12/172+/68$"
	.string "36/212/4/0-/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "4/236/4/0-/12/252+ (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ting_Lu_Page1::
# 4683 "data/scripts/sample_sets_options.pory"
	.string "52/4/196+/0-/252/4 (HELMET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tinkaton_Page1::
# 4690 "data/scripts/sample_sets_options.pory"
	.string "180/172/100/0-/44+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Togekiss_Page1::
# 4697 "data/scripts/sample_sets_options.pory"
	.string "228/0-/196+/4/76/4 (LENS)$"
	.string "236/0-/196+/4/12/60 (BABIRI)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Talonflame_Page1::
# 4705 "data/scripts/sample_sets_options.pory"
	.string "4/252+/0/0-/0/252 (BANDED)$"
	.string "4/252+/0/0-/0/252 (LIFE ORB)$"
	.string "4/252/0/0-/0/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Bulu_Page1::
# 4714 "data/scripts/sample_sets_options.pory"
	.string "124/140/4/0-/12/228+ (SCARF)$"
	.string "252/4/36+/0-/212/4 (LEFTYS)$"
	.string "252/76+/0/0-/0/180 (GRASS Z)$"
	.string "28/236/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Fini_Page1::
# 4724 "data/scripts/sample_sets_options.pory"
	.string "252/0-/100/4/4+/148 (SUPPORT)$"
	.string "252/0-/12/4/4/236+ (SUPPORT)$"
	.string "252/0-/172/4/76+/4 (CALM MIND)$"
	.string "252/0-/4/196+/4/52 (SPECS)$"
	.string "4/0-/4/196+/52/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Koko_Page1::
# 4735 "data/scripts/sample_sets_options.pory"
	.string "172/0-/12/36/196/92+ (VEST)$"
	.string "28/0-/4/196+/28/252 (ELEC Z)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "4/0-/4/244/4/252+ (ELEC Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Tapu_Lele_Page1::
# 4745 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "12/0-/4/236+/4/252 (PSYCH Z)$"
	.string "12/0-/4/236+/4/252 (SCARF)$"
	.string "252/0-/108/76+/4/68 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Skeledirge_Page1::
# 4755 "data/scripts/sample_sets_options.pory"
	.string "236/0-/60/12/196+/4 (LEFTYS)$"
	.string "252/0-/4/156+/92/4 (SPRAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sneasler_Page1::
# 4763 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (COACHING)$"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "4/244/4/0-/4/252+ (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Snorlax_Page1::
# 4772 "data/scripts/sample_sets_options.pory"
	.string "228/76+/196/0-/4/4 (DRUM)$"
	.string "228/76+/204/0/0/0- (DRUM)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Stakataka_Page1::
# 4780 "data/scripts/sample_sets_options.pory"
	.string "252/0/68+/0/188/0- (HERB)$"
	.string "252/252+/0-/0/4/0 (ORB)$"
	.string "252/68+/0/0/188/0- (ROCK Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sylveon_Page1::
# 4789 "data/scripts/sample_sets_options.pory"
	.string "180/0-/244/76+/4/4 (LEFTYS)$"
	.string "252/0-/172/76+/4/4 (PLATE)$"
	.string "252/0-/92/156+/4/4 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sableye_Page1::
# 4798 "data/scripts/sample_sets_options.pory"
	.string "252/0-/116+/0/140/0 (CLAY)$"
	.string "252/0-/36+/0/220/0 (CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Salamence_Page1::
# 4806 "data/scripts/sample_sets_options.pory"
	.string "0/44/0/252/0-/212+ (MEGA)$"
	.string "252/36+/4/0-/124/92 (MEGA)$"
	.string "4/0-/0/252/0/252+ (DRAGON Z)$"
	.string "4/0-/4/244+/4/252 (MEGA)$"
	.string "4/0-/4/244+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Salamence_Page2::
# 4817 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Scizor_Page1::
# 4824 "data/scripts/sample_sets_options.pory"
	.string "188/236+/4/0-/76/4 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Scream_Tail_Page1::
# 4831 "data/scripts/sample_sets_options.pory"
	.string "228/0-/20/4/4/252+ (BOOSTER)$"
	.string "228/4/20/0-/4/252+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sinistcha_Page1::
# 4839 "data/scripts/sample_sets_options.pory"
	.string "236/0-/188+/4/76/4 (SITRUS)$"
	.string "236/0/188+/0/84/0- (SITRUS)$"
	.string "244/0-/188+/4/68/4 (LEFTYS)$"
	.string "244/0/188+/0/76/0- (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Roaring_Moon_Page1::
# 4849 "data/scripts/sample_sets_options.pory"
	.string "4/220/28/0-/4/252+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rotom_Frost_Page1::
# 4856 "data/scripts/sample_sets_options.pory"
	.string "52/0-/4/196+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rotom_Heat_Page1::
# 4863 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/116+/4/132 (SITRUS)$"
	.string "252/0-/44/60/148+/4 (SITRUS)$"
	.string "52/0-/4/196+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rotom_Mow_Page1::
# 4872 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/116+/4/132 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rotom_Wash_Page1::
# 4879 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/116+/4/132 (SITRUS)$"
	.string "252/0-/44/60/148+/4 (SITRUS)$"
	.string "52/0-/4/196+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rayquaza_Page1::
# 4888 "data/scripts/sample_sets_options.pory"
	.string "4/252/0/0-/0/252+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Regidrago_Page1::
# 4895 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Regieleki_Page1::
# 4902 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (MAGNET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rhyperior_Page1::
# 4909 "data/scripts/sample_sets_options.pory"
	.string "12/236+/4/0-/252/4 (POLICY)$"
	.string "20/236+/0/0/252/0- (POLICY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Rillaboom_Page1::
# 4917 "data/scripts/sample_sets_options.pory"
	.string "140/116+/12/0-/236/4 (VEST)$"
	.string "140/196+/12/0-/156/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Politoed_Page1::
# 4925 "data/scripts/sample_sets_options.pory"
	.string "220/0-/196/4/76+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Porygon2_Page1::
# 4932 "data/scripts/sample_sets_options.pory"
	.string "244/0-/92/116+/52/4 (TERA)$"
	.string "244/0/92/116+/52/0- (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Primarina_Page1::
# 4940 "data/scripts/sample_sets_options.pory"
	.string "180/0-/108/188+/4/28 (SPRAY)$"
	.string "236/0-/132/108+/4/28 (SPRAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Raging_Bolt_Page1::
# 4948 "data/scripts/sample_sets_options.pory"
	.string "148/0-/36/100+/44/180 (ORB)$"
	.string "244/0-/124/100+/36/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Raichu_Page1::
# 4956 "data/scripts/sample_sets_options.pory"
	.string "140/0-/188/0/0/180+ (VEST)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Hf_Page1::
# 4965 "data/scripts/sample_sets_options.pory"
	.string "188/76+/52/0-/4/188$"
	.string "28/220/4/0-/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Ws_Page1::
# 4973 "data/scripts/sample_sets_options.pory"
	.string "220/60/44/0-/4/180+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Oranguru_Page1::
# 4980 "data/scripts/sample_sets_options.pory"
	.string "252/0/180/0/76+/0- (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Palafin_Page1::
# 4987 "data/scripts/sample_sets_options.pory"
	.string "252/156+/4/0-/92/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Pelipper_Page1::
# 4994 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Necrozma_Dawn_Wings_Page1::
# 5001 "data/scripts/sample_sets_options.pory"
	.string "252/0/156/100+/0/0- (LUNA Z)$"
	.string "60/0-/4/180+/4/252 (NECRO Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Necrozma_Dusk_Mane_Page1::
# 5009 "data/scripts/sample_sets_options.pory"
	.string "252/20+/0/0/236/0- (AMULET)$"
	.string "252/20+/4/0-/228/4 (AMULET)$"
	.string "60/0-/4/180+/4/252 (NECRO Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Nihilego_Page1::
# 5018 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (HERB)$"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "36/0-/4/212/4/252+ (ORB)$"
	.string "68/0-/4/180+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ninetales_Alola_Page1::
# 5028 "data/scripts/sample_sets_options.pory"
	.string "212/0-/100/4/4/188+ (CLAY)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ogerpon_Cs_Page1::
# 5036 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mimikyu_Page1::
# 5043 "data/scripts/sample_sets_options.pory"
	.string "252/236+/20/0/0/0- (MIMI Z)$"
	.string "4/0-/0/252+/0/252 (GHOST Z)$"
	.string "4/252+/0/0-/0/252 (GHOST Z)$"
	.string "4/252+/0/0-/0/252 (MIMI Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Miraidon_Page1::
# 5053 "data/scripts/sample_sets_options.pory"
	.string "92/0-/4/196+/4/212 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Moltres_Galar_Page1::
# 5060 "data/scripts/sample_sets_options.pory"
	.string "28/0-/4/220/4/252+ (ORB)$"
	.string "92/0-/4/156+/4/252 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Muk_Alola_Page1::
# 5068 "data/scripts/sample_sets_options.pory"
	.string "220/36+/108/0-/140/4 (FIGY)$"
	.string "228/4/116/0-/156+/4 (MINIMIZE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Murkrow_Page1::
# 5076 "data/scripts/sample_sets_options.pory"
	.string "252/0-/116/0/140+/0$"
	.string "252/0-/140+/0/116/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mawile_Page1::
# 5084 "data/scripts/sample_sets_options.pory"
	.string "156/196+/0/0/156/0- (MEGA)$"
	.string "156/196+/4/0-/148/4 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Meowscarada_Page1::
# 5092 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "4/244/4/0-/4/252+ (BAND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Metagross_Page1::
# 5100 "data/scripts/sample_sets_options.pory"
	.string "124/116+/4/0-/12/252 (MEGA)$"
	.string "124/196+/12/0-/36/140 (MEGA)$"
	.string "204/4/156+/0-/4/140 (MEGA)$"
	.string "4/244/4/0-/4/252+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mienshao_Page1::
# 5110 "data/scripts/sample_sets_options.pory"
	.string "0/252/0/0-/4/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Milotic_Page1::
# 5117 "data/scripts/sample_sets_options.pory"
	.string "180/0-/204/4/116+/4 (COIL)$"
	.string "244/0-/220/4/36+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Lunala_Page1::
# 5125 "data/scripts/sample_sets_options.pory"
	.string "140/0-/132/180+/4/52 (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Manaphy_Page1::
# 5132 "data/scripts/sample_sets_options.pory"
	.string "228/0-/172/76+/4/28$"
	.string "68/0-/4/180+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Manectric_Page1::
# 5140 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/36/4/220+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Marowak_Alola_Page1::
# 5147 "data/scripts/sample_sets_options.pory"
	.string "252/156+/0/0/100/0-$"
	.string "252/156+/4/0-/0/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Maushold_Page1::
# 5155 "data/scripts/sample_sets_options.pory"
	.string "252/0-/156/0/0/100+ (BEAT UP)$"
	.string "252/0-/236+/0/20/0 (GOGGLES)$"
	.string "4/244/4/0-/4/252+ (LENS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Lando_T_Page1::
# 5164 "data/scripts/sample_sets_options.pory"
	.string "12/196+/4/0-/44/252 (SCARF)$"
	.string "12/196+/4/0-/44/252 (VEST)$"
	.string "156/116+/36/0-/108/92 (GROUND Z)$"
	.string "20/164+/4/0-/68/252 (GROUND Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Landorus_Page1::
# 5174 "data/scripts/sample_sets_options.pory"
	.string "132/0-/4/116+/4/252 (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Lapras_Gmax_Page1::
# 5182 "data/scripts/sample_sets_options.pory"
	.string "108/0-/172/196+/4/28 (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Latias_Page1::
# 5189 "data/scripts/sample_sets_options.pory"
	.string "252/0-/60/76+/12/108 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ludicolo_Page1::
# 5196 "data/scripts/sample_sets_options.pory"
	.string "188/0-/148/76+/4/92 (VEST)$"
	.string "252/0-/4/156+/4/92 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kingambit_Page1::
# 5204 "data/scripts/sample_sets_options.pory"
	.string "204/196+/4/0-/92/12$"
	.string "204/196+/4/0-/92/12 (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kommo_O_Page1::
# 5212 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252 (KOMMO Z)$"
	.string "204/0-/0/76+/0/228 (LEFTYS)$"
	.string "212/0-/196+/44/4/52 (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Koraidon_Page1::
# 5221 "data/scripts/sample_sets_options.pory"
	.string "108/116+/4/0-/68/212 (ORB)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kyogre_Page1::
# 5229 "data/scripts/sample_sets_options.pory"
	.string "252/0-/132/76+/4/44 (MYSTIC)$"
	.string "252/0-/164/76+/4/12 (PRIMAL)$"
	.string "4/0-/4/244+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kyurem_White_Page1::
# 5238 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252 (SCARF)$"
	.string "68/0-/4/180/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Iron_Hands_Page1::
# 5246 "data/scripts/sample_sets_options.pory"
	.string "100/156+/0/0/252/0- (VEST)$"
	.string "60/156+/36/0-/252/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kangaskhan_Page1::
# 5254 "data/scripts/sample_sets_options.pory"
	.string "36/196+/20/0-/236/20 (MEGA)$"
	.string "52/196+/4/0-/4/252 (LAST RESORT)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kartana_Page1::
# 5262 "data/scripts/sample_sets_options.pory"
	.string "116/4/4/0-/132/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (FOCUS SASH)$"
	.string "84/84/4/0-/84/252+ (GRASS Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Keldeo_Resolute_Page1::
# 5271 "data/scripts/sample_sets_options.pory"
	.string "20/0-/4/228/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Kilowattrel_Page1::
# 5279 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Hydreigon_Page1::
# 5286 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236/4/252+ (ORB)$"
	.string "52/0-/4/196+/4/252 (LENS)$"
	.string "52/0-/4/196+/4/252 (SCARF)$"
	.string "52/0-/4/196+/4/252 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Incineroar_Page1::
# 5296 "data/scripts/sample_sets_options.pory"
	.string "236/36+/4/0-/204/28 (SITRUS)$"
	.string "236/4+/236/0-/28/4 (HELMET)$"
	.string "244/36+/4/0-/220/4 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Indeedee_Page1::
# 5305 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Indeedee_F_Page1::
# 5312 "data/scripts/sample_sets_options.pory"
	.string "252/0-/204/4/44+/4 (SEED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Iron_Bundle_Page1::
# 5319 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Groudon_Page1::
# 5326 "data/scripts/sample_sets_options.pory"
	.string "252/156+/4/0-/84/12 (AMULET)$"
	.string "252/156+/4/0-/84/12 (PRIMAL)$"
	.string "4/0-/4/244/4/252+ (PRIMAL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gyarados_Page1::
# 5335 "data/scripts/sample_sets_options.pory"
	.string "172/36+/116/0-/4/180 (SUPPORT)$"
	.string "44/196+/12/0-/4/252 (GRASS)$"
	.string "44/196+/12/0-/4/252 (GROUND)$"
	.string "52/196+/4/0-/4/252 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Hatterene_Page1::
# 5345 "data/scripts/sample_sets_options.pory"
	.string "212/0/84/188+/20/0- (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Heatran_Page1::
# 5352 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/236+/4/20 (SHUCA)$"
	.string "252/0-/36/180+/4/36 (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Hitmontop_Page1::
# 5360 "data/scripts/sample_sets_options.pory"
	.string "252/36+/4/0-/212/4 (AMULET)$"
	.string "252/4/92/0-/156+/4 (AMULET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Glastrier_Page1::
# 5368 "data/scripts/sample_sets_options.pory"
	.string "252/196+/0/0/60/0- (AMULET)$"
	.string "252/196+/4/0-/52/4 (AMULET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Glimmora_Page1::
# 5376 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252/4/252+ (HERB)$"
	.string "0/0-/0/252/4/252+ (SASH)$"
	.string "252/0-/4/76/84/92+ (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gothitelle_Page1::
# 5385 "data/scripts/sample_sets_options.pory"
	.string "244/0-/180/4/76+/4 (SITRUS)$"
	.string "244/0/108/0/156+/0- (SITRUS)$"
	.string "244/0/28/0/236+/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Great_Tusk_Page1::
# 5394 "data/scripts/sample_sets_options.pory"
	.string "4/228+/4/0-/20/252 (AMULET)$"
	.string "4/228+/4/0-/20/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Grimmsnarl_Page1::
# 5402 "data/scripts/sample_sets_options.pory"
	.string "236/0-/156/0/116+/0 (LIGHT CLAY)$"
	.string "244/4/196+/0-/60/4 (LIGHT CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Garganacl_Page1::
# 5410 "data/scripts/sample_sets_options.pory"
	.string "252/0/20/0/236+/0-$"
	.string "252/4/12/0-/236+/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gastrodon_Page1::
# 5418 "data/scripts/sample_sets_options.pory"
	.string "172/0-/108/220+/4/4 (SITRUS)$"
	.string "172/0/116/220+/0/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Genesect_Page1::
# 5426 "data/scripts/sample_sets_options.pory"
	.string "12/236+/4/0-/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gengar_Page1::
# 5433 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "252/0-/68/4/4/180+ (PERISH)$"
	.string "4/0-/4/244/4/252+ (GHOST Z)$"
	.string "76/0-/28/220/4/180+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gholdengo_Page1::
# 5443 "data/scripts/sample_sets_options.pory"
	.string "212/0-/4/212+/20/60 (ORB)$"
	.string "244/0-/4/212+/12/36 (LEFTYS)$"
	.string "36/0-/4/212+/4/252 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Flamigo_Page1::
# 5452 "data/scripts/sample_sets_options.pory"
	.string "0/252/0/0-/4/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Flutter_Mane_Page1::
# 5459 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "116/0-/156/36+/4/196 (SPECS)$"
	.string "228/0-/204/4/4/68+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gallade_Page1::
# 5468 "data/scripts/sample_sets_options.pory"
	.string "204/116+/188/0/0/0- (ORB)$"
	.string "252/116+/140/0/0/0- (AMULET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Garchomp_Page1::
# 5476 "data/scripts/sample_sets_options.pory"
	.string "108/172+/4/0-/4/220 (GROUND Z)$"
	.string "4/156/4/0-/92/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Gardevoir_Page1::
# 5485 "data/scripts/sample_sets_options.pory"
	.string "244/0-/196/36+/4/28 (MEGA)$"
	.string "4/0-/52/196+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dusclops_Page1::
# 5493 "data/scripts/sample_sets_options.pory"
	.string "252/0/100/0/156+/0-$"
	.string "252/0/156+/0/100/0-$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Entei_Page1::
# 5501 "data/scripts/sample_sets_options.pory"
	.string "4/196+/4/0-/52/252 (BAND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Excadrill_Page1::
# 5508 "data/scripts/sample_sets_options.pory"
	.string "0/252+/4/0-/0/252 (SASH)$"
	.string "28/196+/28/0-/4/252 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Farigiraf_Page1::
# 5516 "data/scripts/sample_sets_options.pory"
	.string "228/0-/116/4/156+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ferrothorn_Page1::
# 5523 "data/scripts/sample_sets_options.pory"
	.string "220/0/100+/0/188/0- (LEFTYS)$"
	.string "220/0/228+/0/60/0- (LEFTYS)$"
	.string "220/204+/0/0/84/0- (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dondozo_Page1::
# 5532 "data/scripts/sample_sets_options.pory"
	.string "252/4/36+/0-/212/4 (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dracovish_Page1::
# 5539 "data/scripts/sample_sets_options.pory"
	.string "0/252/0/0-/4/252+ (BAND)$"
	.string "4/236+/4/0-/12/252 (BAND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dragapult_Page1::
# 5547 "data/scripts/sample_sets_options.pory"
	.string "252/4/44/0-/44/164+ (SUPPORT)$"
	.string "28/196/4/0-/28/252+ (ORB)$"
	.string "4/244/4/0-/4/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dragonite_Page1::
# 5556 "data/scripts/sample_sets_options.pory"
	.string "44/204+/4/0-/4/252 (BANDED)$"
	.string "44/204+/4/0-/4/252 (DICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Drifblim_Page1::
# 5564 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (SEED)$"
	.string "4/244/4/0-/4/252+ (POLICY)$"
	.string "4/244/4/0-/4/252+ (SEED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Comfey_Page1::
# 5573 "data/scripts/sample_sets_options.pory"
	.string "180/0-/0/0/76+/0 (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Conkeldurr_Page1::
# 5580 "data/scripts/sample_sets_options.pory"
	.string "228/236+/0/0/44/0- (GUTS)$"
	.string "228/236+/0/0/44/0- (ORB)$"
	.string "228/236+/4/0-/36/4 (GUTS)$"
	.string "228/236+/4/0-/36/4 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Corviknight_Page1::
# 5590 "data/scripts/sample_sets_options.pory"
	.string "244/4/116+/0-/140/4 (FIGY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Cresselia_Page1::
# 5597 "data/scripts/sample_sets_options.pory"
	.string "252/0-/156+/4/76/4 (HELMET)$"
	.string "252/0-/172/4/76+/4 (GOGGLES)$"
	.string "252/0/180/0/76+/0- (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Darkrai_Page1::
# 5606 "data/scripts/sample_sets_options.pory"
	.string "28/0-/4/220/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chien_Pao_Page1::
# 5614 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Cinderace_Page1::
# 5621 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Clefable_Page1::
# 5629 "data/scripts/sample_sets_options.pory"
	.string "236/0-/188/4/76+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Clefairy_Page1::
# 5636 "data/scripts/sample_sets_options.pory"
	.string "252/0-/140/0/116+/0$"
	.string "252/0-/220/0/36+/0$"
	.string "252/0-/60/0/196+/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Coalossal_Gmax_Page1::
# 5645 "data/scripts/sample_sets_options.pory"
	.string "116/0-/4/156+/4/228 (GMAX)$"
	.string "12/0-/4/236+/4/252 (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Ceruledge_Page1::
# 5653 "data/scripts/sample_sets_options.pory"
	.string "244/4/156+/0-/100/4 (AMULET)$"
	.string "52/196+/4/0-/4/252 (AMULET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chandelure_Page1::
# 5661 "data/scripts/sample_sets_options.pory"
	.string "228/0/84/196+/0/0- (SITRUS)$"
	.string "4/0-/0/252/0/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Charizard_Page1::
# 5669 "data/scripts/sample_sets_options.pory"
	.string "204/0-/108/4+/4/188 (MEGA Y)$"
	.string "236/44/4/0-/4/220+ (MEGA X)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Charizard_Gmax_Page1::
# 5677 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/0/252+ (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Chi_Yu_Page1::
# 5684 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "52/0-/4/196+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Basculegion_Page1::
# 5692 "data/scripts/sample_sets_options.pory"
	.string "4/220+/124/0-/4/156 (BULKY)$"
	.string "4/220+/28/0-/4/252 (BAND)$"
	.string "4/220+/28/0-/4/252 (RAIN)$"
	.string "4/220+/28/0-/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Baxcalibur_Page1::
# 5702 "data/scripts/sample_sets_options.pory"
	.string "4/196+/4/0-/52/252 (DICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Bronzong_Page1::
# 5709 "data/scripts/sample_sets_options.pory"
	.string "252/0/188+/0/68/0- (HERB)$"
	.string "252/0/68/0/188+/0- (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Calyrex_Page1::
# 5717 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SHADOW)$"
	.string "20/0-/4/220/4/252+ (SHADOW)$"
	.string "252/116+/0/0/140/0- (ICE)$"
	.string "252/116+/4/0-/124/12 (ICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Celesteela_Page1::
# 5727 "data/scripts/sample_sets_options.pory"
	.string "252/0-/20/180+/52/4 (VEST)$"
	.string "252/68+/84/0-/100/4 (FIGY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Arcanine_Page1::
# 5735 "data/scripts/sample_sets_options.pory"
	.string "236/68/4/0-/4/196+ (GOGGLES)$"
	.string "252/68+/4/0-/108/76 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Arcanine_Hisui_Page1::
# 5743 "data/scripts/sample_sets_options.pory"
	.string "12/196+/4/0-/44/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Archaludon_Page1::
# 5750 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252+/4/252 (HERB)$"
	.string "252/0-/4/44+/204/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Armarouge_Page1::
# 5758 "data/scripts/sample_sets_options.pory"
	.string "212/0-/4/36+/4/252 (POLICY)$"
	.string "228/0/0/196+/84/0- (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Azumarill_Page1::
# 5766 "data/scripts/sample_sets_options.pory"
	.string "204/236+/4/0-/60/4 (VEST)$"
	.string "228/236+/4/0-/36/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Aegislash_Page1::
# 5774 "data/scripts/sample_sets_options.pory"
	.string "140/0-/0/252+/0/116 (GHOST Z)$"
	.string "236/0-/0/252+/0/20 (LEFTYS)$"
	.string "252/0/4/180+/68/0- (POLICY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Aerodactyl_Page1::
# 5783 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "132/116+/4/0-/4/252 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Amoonguss_Page1::
# 5791 "data/scripts/sample_sets_options.pory"
	.string "236/0/236+/0/36/0- (HELMET)$"
	.string "244/0/108/0/156+/0- (SITRUS)$"
	.string "252/0/180/0/76+/0- (EJECT)$"
	.string "252/0/20/0/236+/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Annihilape_Page1::
# 5801 "data/scripts/sample_sets_options.pory"
	.string "180/68/4/0-/4/252+ (SITRUS)$"
	.string "252/4/0/0-/0/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Araquanid_Page1::
# 5809 "data/scripts/sample_sets_options.pory"
	.string "252/236+/20/0/0/0- (AMULET)$"
	.string "Go Back$"
	.string "$"
