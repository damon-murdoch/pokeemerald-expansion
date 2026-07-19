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
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_3:
# 33 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_4:
# 35 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_5:
# 37 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_6:
# 39 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_7:
# 41 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_8:
# 43 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page1::
# 51 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page1
# 52 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 54 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page1_2
# 56 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page1_3
# 58 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page1_4
# 60 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page1_5
# 62 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page1_6
# 64 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page1_7
# 66 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page1_8
# 69 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page1_2:
# 55 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page1_3:
# 57 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page1_4:
# 59 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page1_5:
# 61 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page1_6:
# 63 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page1_7:
# 65 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page1_8:
# 67 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page2::
# 75 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page2
# 76 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 78 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page2_2
# 80 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page2_3
# 82 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page2_4
# 84 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page2_5
# 86 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page2_6
# 88 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page2_7
# 90 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page2_8
# 93 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page2_2:
# 79 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page2_3:
# 81 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page2_4:
# 83 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page2_5:
# 85 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page2_6:
# 87 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page2_7:
# 89 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page2_8:
# 91 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page3
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page3::
# 99 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page3
# 100 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 102 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page3_2
# 104 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page3_3
# 106 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page3_4
# 108 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page3_5
# 110 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page3_6
# 112 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page3_7
# 114 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page3_8
# 117 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page3_2:
# 103 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page3_3:
# 105 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page3_4:
# 107 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page3_5:
# 109 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page3_6:
# 111 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page3_7:
# 113 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page3_8:
# 115 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page4
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page4::
# 123 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page4
# 124 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 126 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page4_2
# 128 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page4_3
# 130 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page4_4
# 132 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page4_5
# 134 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page4_6
# 136 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page4_7
# 138 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page4_8
# 141 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page4_2:
# 127 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page4_3:
# 129 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page4_4:
# 131 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page4_5:
# 133 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page4_6:
# 135 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page4_7:
# 137 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page4_8:
# 139 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page5
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page5::
# 147 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page5
# 148 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 150 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page5_2
# 152 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page5_3
# 154 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page5_4
# 156 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page5_5
# 158 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page5_6
# 160 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page5_7
# 162 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page5_8
# 165 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page5_2:
# 151 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page5_3:
# 153 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page5_4:
# 155 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page5_5:
# 157 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page5_6:
# 159 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page5_7:
# 161 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page5_8:
# 163 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page6
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page6::
# 171 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page6
# 172 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 174 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page6_2
# 176 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page6_3
# 178 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page6_4
# 180 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page6_5
# 182 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page6_6
# 184 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page6_7
# 186 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page6_8
# 189 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page6_2:
# 175 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page6_3:
# 177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page6_4:
# 179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page6_5:
# 181 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page6_6:
# 183 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page6_7:
# 185 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page6_8:
# 187 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page7
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page7::
# 195 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page7
# 196 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 198 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page7_2
# 200 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page7_3
# 202 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page7_4
# 204 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page7_5
# 206 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page7_6
# 208 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page7_7
# 210 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page7_8
# 213 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page7_2:
# 199 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page7_3:
# 201 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page7_4:
# 203 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page7_5:
# 205 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page7_6:
# 207 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page7_7:
# 209 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page7_8:
# 211 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page8
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page8::
# 219 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page8
# 220 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 222 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page8_2
# 224 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page8_3
# 226 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page8_4
# 228 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page8_5
# 230 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page8_6
# 232 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page8_7
# 234 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page8_8
# 237 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page8_2:
# 223 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page8_3:
# 225 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page8_4:
# 227 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page8_5:
# 229 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page8_6:
# 231 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page8_7:
# 233 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page8_8:
# 235 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page9
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page9::
# 243 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page9
# 244 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 246 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page9_2
# 248 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page9_3
# 250 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page9_4
# 252 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page9_5
# 254 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page9_6
# 256 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page9_7
# 258 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page9_8
# 261 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page9_2:
# 247 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page9_3:
# 249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page9_4:
# 251 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page9_5:
# 253 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page9_6:
# 255 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page9_7:
# 257 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page9_8:
# 259 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page10
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page10::
# 267 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page10
# 268 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 270 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page10_2
# 272 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page10_3
# 274 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page10_4
# 276 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page10_5
# 278 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page10_6
# 280 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page10_7
# 282 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page10_8
# 285 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page10_2:
# 271 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page10_3:
# 273 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page10_4:
# 275 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page10_5:
# 277 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page10_6:
# 279 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page10_7:
# 281 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page10_8:
# 283 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page11
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page11::
# 291 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page11
# 292 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 294 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page11_2
# 296 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page11_3
# 298 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page11_4
# 300 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page11_5
# 302 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page11_6
# 304 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page11_7
# 306 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page11_8
# 309 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page11_2:
# 295 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page11_3:
# 297 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page11_4:
# 299 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page11_5:
# 301 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page11_6:
# 303 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page11_7:
# 305 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page11_8:
# 307 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page12
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page12::
# 315 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page12
# 316 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 318 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page12_2
# 320 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page12_3
# 322 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page12_4
# 324 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page12_5
# 326 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page12_6
# 328 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page12_7
# 330 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page12_8
# 333 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page12_2:
# 319 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page12_3:
# 321 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page12_4:
# 323 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page12_5:
# 325 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page12_6:
# 327 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page12_7:
# 329 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page12_8:
# 331 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page13
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page13::
# 339 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page13
# 340 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 342 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page13_2
# 344 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page13_3
# 346 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page13_4
# 348 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page13_5
# 350 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page13_6
# 352 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page13_7
# 354 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page13_8
# 357 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page13_2:
# 343 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page13_3:
# 345 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page13_4:
# 347 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page13_5:
# 349 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page13_6:
# 351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page13_7:
# 353 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page13_8:
# 355 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page14
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page14::
# 363 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page14
# 364 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 366 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page14_2
# 368 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page14_3
# 370 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page14_4
# 372 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page14_5
# 374 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page14_6
# 376 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page14_7
# 378 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page14_8
# 381 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page14_2:
# 367 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page14_3:
# 369 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page14_4:
# 371 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page14_5:
# 373 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page14_6:
# 375 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page14_7:
# 377 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page14_8:
# 379 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page15
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page15::
# 387 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page15
# 388 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 390 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page15_2
# 392 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page15_3
# 394 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page15_4
# 396 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page15_5
# 398 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page15_6
# 400 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page15_7
# 402 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page15_8
# 405 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page15_2:
# 391 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page15_3:
# 393 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page15_4:
# 395 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page15_5:
# 397 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page15_6:
# 399 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page15_7:
# 401 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page15_8:
# 403 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page16
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page16::
# 411 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page16
# 412 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 414 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page16_2
# 416 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page16_3
# 418 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page16_4
# 420 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page16_5
# 422 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page16_6
# 424 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page16_7
# 426 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page16_8
# 429 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page16_2:
# 415 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page16_3:
# 417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page16_4:
# 419 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page16_5:
# 421 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page16_6:
# 423 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page16_7:
# 425 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page16_8:
# 427 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page17
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page17::
# 435 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page17
# 436 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 438 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page17_2
# 440 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page17_3
# 442 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page17_4
# 444 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page17_5
# 446 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Page17_6
# 448 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page17_7
# 450 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page17_8
# 453 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page17_2:
# 439 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page17_3:
# 441 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page17_4:
# 443 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page17_5:
# 445 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page17_6:
# 447 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page17_7:
# 449 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page17_8:
# 451 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page18
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Page18::
# 459 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Page18
# 460 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 462 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Page18_2
# 464 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Page18_3
# 466 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Page18_4
# 468 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Page18_5
# 470 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page18_6
# 472 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Page18_7
# 475 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page18_2:
# 463 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page18_3:
# 465 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page18_4:
# 467 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page18_5:
# 469 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page18_6:
# 471 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Page18_7:
# 473 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1::
# 481 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Venusaur_Page1
# 482 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 484 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1_2
# 487 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1_3
# 489 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1_4
# 492 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1_2:
# 485 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, 2, FALSE, TYPE_GHOST, 10
# 486 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1_3:
# 488 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1_4:
# 490 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Venusaur_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1::
# 498 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Volcarona_Page1
# 499 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 501 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1_2
# 504 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1_3
# 507 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1_4
# 509 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1_5
# 512 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1_2:
# 502 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 108, 108, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FAIRY, 10
# 503 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1_3:
# 505 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 188, 28, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_STRUGGLE_BUG, MOVE_HEAT_WAVE, 2, FALSE, TYPE_WATER, 10
# 506 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1_4:
# 508 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1_5:
# 510 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Volcarona_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1::
# 518 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Whimsicott_Page1
# 519 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 521 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1_2
# 524 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1_3
# 527 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1_4
# 529 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1_5
# 532 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1_2:
# 522 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_TEARS, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_DARK, 10
# 523 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1_3:
# 525 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, 2, FALSE, TYPE_GHOST, 10
# 526 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1_4:
# 528 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1_5:
# 530 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Whimsicott_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1::
# 538 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Zapdos_Page1
# 539 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 541 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_2
# 544 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_3
# 547 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_4
# 550 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_5
# 552 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_6
# 555 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page18
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_2:
# 542 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 84, 28, 116, 36, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GRASS, 10
# 543 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_3:
# 545 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 76, 28, 116, 36, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 546 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_4:
# 548 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 28, 0, 0, 252, 228, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_HIDDEN_POWER, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_GHOST, 10
# 549 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_5:
# 551 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1_6:
# 553 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Zapdos_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1::
# 561 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Tyranitar_Page1
# 562 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 564 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_2
# 567 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_3
# 570 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_4
# 573 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_5
# 576 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_6
# 579 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_7
# 581 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_8
# 584 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_2:
# 565 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 1, 188, 204, 0, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 566 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_3:
# 568 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 204, 4, 4, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 569 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_4:
# 571 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 204, 0, 0, 0, 52, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 572 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_5:
# 574 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LUM_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 204, 4, 4, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, 2, FALSE, TYPE_GHOST, 10
# 575 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_6:
# 577 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_ASSURANCE, MOVE_ICE_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 578 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_7:
# 580 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1_8:
# 582 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1::
# 590 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Ursaluna_Page1
# 591 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 593 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1_2
# 596 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1_3
# 599 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1_4
# 601 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1_5
# 604 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1_2:
# 594 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 140, 236, 0, 0, 0, 132, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 595 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1_3:
# 597 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 140, 236, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_HEADLONG_RUSH, 2, FALSE, TYPE_GHOST, 10
# 598 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1_4:
# 600 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1_5:
# 602 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1::
# 610 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1
# 611 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 613 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_2
# 616 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_3
# 619 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_4
# 622 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_5
# 624 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_6
# 627 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_2:
# 614 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 12, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 615 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_3:
# 617 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 244, 0, 0, 0, 196, 68, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 618 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_4:
# 620 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_BLOOD_MOON, 2, FALSE, TYPE_NORMAL, 10
# 621 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_5:
# 623 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1_6:
# 625 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1::
# 633 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1
# 634 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 636 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_2
# 639 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_3
# 642 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_4
# 645 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_5
# 647 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_6
# 650 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_2:
# 637 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 638 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_3:
# 640 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 641 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_4:
# 643 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 156, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, 2, FALSE, TYPE_WATER, 10
# 644 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_5:
# 646 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1_6:
# 648 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1::
# 656 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1
# 657 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 659 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1_2
# 662 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1_3
# 665 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1_4
# 667 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1_5
# 670 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page17
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1_2:
# 660 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 0, 236, 0, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 661 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1_3:
# 663 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 664 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1_4:
# 666 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1_5:
# 668 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1::
# 676 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Ting_Lu_Page1
# 677 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 679 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1_2
# 682 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1_3
# 684 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1_4
# 687 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1_2:
# 680 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TING_LU, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 52, 4, 196, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SAND_TOMB, MOVE_RUINATION, MOVE_BODY_PRESS, 2, FALSE, TYPE_POISON, 10
# 681 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1_3:
# 683 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1_4:
# 685 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ting_Lu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1::
# 693 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Tinkaton_Page1
# 694 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 696 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1_2
# 699 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1_3
# 701 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1_4
# 704 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1_2:
# 697 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TINKATON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 180, 172, 100, 12, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_FEINT, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 698 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1_3:
# 700 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1_4:
# 702 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tinkaton_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1::
# 710 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Togekiss_Page1
# 711 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 713 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1_2
# 716 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1_3
# 719 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1_4
# 721 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1_5
# 724 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1_2:
# 714 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_SCOPE_LENS, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 228, 0, 196, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_YAWN, MOVE_FOLLOW_ME, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 715 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1_3:
# 717 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_BABIRI_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 2, 0, 236, 0, 196, 60, 4, 12, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_YAWN, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 718 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1_4:
# 720 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1_5:
# 722 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Togekiss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1::
# 730 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Torkoal_Page1
# 731 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 733 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1_2
# 736 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1_3
# 739 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1_4
# 741 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1_5
# 744 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1_2:
# 734 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHARCOAL, ITEM_POKE_BALL, NATURE_QUIET, 1, 1, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 735 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1_3:
# 737 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 204, 0, 0, 0, 196, 108, 31, 0, 31, 0, 31, 31, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_WEATHER_BALL, MOVE_EARTH_POWER, 2, FALSE, TYPE_FIRE, 10
# 738 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1_4:
# 740 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1_5:
# 742 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Torkoal_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1::
# 750 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Tornadus_Page1
# 751 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 753 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_2
# 756 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_3
# 759 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_4
# 762 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_5
# 764 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_6
# 767 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page16
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_2:
# 754 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_COVERT_CLOAK, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 755 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_3:
# 757 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 196, 0, 228, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 758 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_4:
# 760 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_RAIN_DANCE, MOVE_BLEAKWIND_STORM, 2, FALSE, TYPE_DARK, 10
# 761 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_5:
# 763 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1_6:
# 765 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tornadus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1::
# 773 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Tapu_Fini_Page1
# 774 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 776 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_2
# 779 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_3
# 782 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_4
# 785 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_5
# 788 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_6
# 791 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_7
# 793 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_8
# 796 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_2:
# 777 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 100, 148, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 778 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_3:
# 780 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 12, 236, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, 2, FALSE, TYPE_STEEL, 10
# 781 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_4:
# 783 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MUDDY_WATER, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 784 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_5:
# 786 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_TRICK, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 787 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_6:
# 789 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 196, 52, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SCALD, MOVE_SOAK, MOVE_ICE_BEAM, 2, FALSE, TYPE_STEEL, 10
# 790 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_7:
# 792 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1_8:
# 794 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Fini_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1::
# 802 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Tapu_Koko_Page1
# 803 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 805 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_2
# 808 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_3
# 811 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_4
# 814 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_5
# 817 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_6
# 819 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_7
# 822 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_2:
# 806 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 172, 0, 12, 92, 36, 196, 31, 31, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_SKY_DROP, MOVE_VOLT_SWITCH, 2, FALSE, TYPE_WATER, 10
# 807 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_3:
# 809 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 28, 0, 4, 252, 196, 28, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 810 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_4:
# 812 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 813 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_5:
# 815 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, 2, FALSE, TYPE_WATER, 10
# 816 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_6:
# 818 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1_7:
# 820 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Koko_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1::
# 828 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Tapu_Lele_Page1
# 829 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 831 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_2
# 834 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_3
# 837 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_4
# 840 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_5
# 843 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_6
# 845 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_7
# 848 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_2:
# 832 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_PSYCHIC, 10
# 833 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_3:
# 835 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_PSYCHIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 836 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_4:
# 838 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_MAGIC_ROOM, 2, FALSE, TYPE_WATER, 10
# 839 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_5:
# 841 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 108, 68, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_MOONBLAST, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 842 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_6:
# 844 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1_7:
# 846 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tapu_Lele_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1::
# 854 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Tatsugiri_Page1
# 855 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 857 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1_2
# 860 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1_3
# 863 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1_4
# 865 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1_5
# 868 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1_2:
# 858 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TATSUGIRI, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_TAUNT, 2, FALSE, TYPE_STELLAR, 10
# 859 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1_3:
# 861 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TATSUGIRI, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, 2, FALSE, TYPE_STELLAR, 10
# 862 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1_4:
# 864 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1_5:
# 866 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Tatsugiri_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1::
# 874 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Thundurus_Page1
# 875 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 877 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_2
# 880 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_3
# 883 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_4
# 886 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_5
# 888 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_6
# 891 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page15
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_2:
# 878 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 228, 0, 28, 68, 12, 172, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 879 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_3:
# 881 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 882 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_4:
# 884 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_TAUNT, 2, FALSE, TYPE_DARK, 10
# 885 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_5:
# 887 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1_6:
# 889 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Thundurus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1::
# 897 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Sinistcha_Page1
# 898 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 900 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_2
# 903 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_3
# 906 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_4
# 909 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_5
# 912 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_6
# 914 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_7
# 917 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_2:
# 901 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 236, 0, 188, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 902 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_3:
# 904 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 236, 0, 188, 0, 0, 84, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 905 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_4:
# 907 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 244, 0, 188, 4, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 908 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_5:
# 910 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SINISTCHA, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_MATCHA_GOTCHA, MOVE_RAGE_POWDER, MOVE_LIFE_DEW, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 911 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_6:
# 913 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1_7:
# 915 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sinistcha_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1::
# 923 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Sneasler_Page1
# 924 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 926 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_2
# 929 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_3
# 932 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_4
# 935 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_5
# 937 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_6
# 940 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_2:
# 927 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_COACHING, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 928 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_3:
# 930 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_DARK, 10
# 931 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_4:
# 933 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNEASLER, 65, ITEM_WHITE_HERB, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, 2, FALSE, TYPE_STELLAR, 10
# 934 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_5:
# 936 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1_6:
# 938 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sneasler_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1::
# 946 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Snorlax_Page1
# 947 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 949 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1_2
# 952 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1_3
# 955 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1_4
# 957 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1_5
# 960 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1_2:
# 950 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 228, 76, 196, 4, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_RETURN, 2, FALSE, TYPE_GHOST, 10
# 951 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1_3:
# 953 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 2, 1, 228, 76, 204, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_RETURN, 2, FALSE, TYPE_GHOST, 10
# 954 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1_4:
# 956 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1_5:
# 958 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Snorlax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1::
# 966 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Sylveon_Page1
# 967 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 969 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_2
# 972 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_3
# 975 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_4
# 978 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_5
# 980 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_6
# 983 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_2:
# 970 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 180, 0, 244, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_WATER, 10
# 971 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_3:
# 973 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_PIXIE_PLATE, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 172, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_QUICK_ATTACK, 2, FALSE, TYPE_WATER, 10
# 974 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_4:
# 976 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 252, 0, 92, 4, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_MOONBLAST, MOVE_PSYSHOCK, 2, FALSE, TYPE_FAIRY, 10
# 977 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_5:
# 979 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1_6:
# 981 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sylveon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1::
# 989 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Talonflame_Page1
# 990 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 992 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_2
# 995 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_3
# 998 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_4
# 1001 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_5
# 1003 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_6
# 1006 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page14
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_2:
# 993 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_SLEEP_TALK, MOVE_U_TURN, 2, FALSE, TYPE_FLYING, 10
# 994 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_3:
# 996 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_GUARD, MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 997 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_4:
# 999 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_TAUNT, 2, FALSE, TYPE_FLYING, 10
# 1000 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_5:
# 1002 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1_6:
# 1004 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Talonflame_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1::
# 1012 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Regieleki_Page1
# 1013 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1015 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1_2
# 1018 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1_3
# 1020 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1_4
# 1023 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1_2:
# 1016 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIELEKI, 65, ITEM_MAGNET, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_THUNDERBOLT, 2, FALSE, TYPE_ELECTRIC, 10
# 1017 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1_3:
# 1019 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1_4:
# 1021 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Regieleki_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1::
# 1029 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Rillaboom_Page1
# 1030 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1032 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1_2
# 1035 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1_3
# 1038 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1_4
# 1040 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1_5
# 1043 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1_2:
# 1033 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 116, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1034 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1_3:
# 1036 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 140, 196, 12, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, 2, FALSE, TYPE_FIRE, 10
# 1037 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1_4:
# 1039 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1_5:
# 1041 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Rillaboom_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1::
# 1049 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Roaring_Moon_Page1
# 1050 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1052 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1_2
# 1055 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1_3
# 1057 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1_4
# 1060 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1_2:
# 1053 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROARING_MOON, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_ACROBATICS, MOVE_KNOCK_OFF, 2, FALSE, TYPE_FLYING, 10
# 1054 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1_3:
# 1056 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1_4:
# 1058 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Roaring_Moon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1::
# 1066 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Rotom_Wash_Page1
# 1067 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1069 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1_2
# 1072 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1_3
# 1075 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1_4
# 1077 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1_5
# 1080 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1_2:
# 1070 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 132, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, 2, FALSE, TYPE_STEEL, 10
# 1071 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1_3:
# 1073 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 252, 0, 44, 4, 60, 148, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_STEEL, 10
# 1074 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1_4:
# 1076 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1_5:
# 1078 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Rotom_Wash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1::
# 1086 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Sableye_Page1
# 1087 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1089 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1_2
# 1092 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1_3
# 1095 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1_4
# 1097 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1_5
# 1100 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page13
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1_2:
# 1090 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 116, 0, 0, 140, 31, 0, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_STEEL, 10
# 1091 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1_3:
# 1093 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 36, 0, 0, 220, 31, 0, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_STEEL, 10
# 1094 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1_4:
# 1096 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1_5:
# 1098 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Sableye_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1::
# 1106 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Porygon2_Page1
# 1107 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1109 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1_2
# 1112 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1_3
# 1115 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1_4
# 1117 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1_5
# 1120 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1_2:
# 1110 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 244, 0, 92, 4, 116, 52, 31, 0, 31, 31, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1111 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1_3:
# 1113 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 244, 0, 92, 0, 116, 52, 31, 0, 31, 0, 31, 31, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER, 2, FALSE, TYPE_FLYING, 10
# 1114 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1_4:
# 1116 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1_5:
# 1118 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Porygon2_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1::
# 1126 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Primarina_Page1
# 1127 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1129 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1_2
# 1132 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1_3
# 1135 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1_4
# 1137 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1_5
# 1140 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1_2:
# 1130 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PRIMARINA, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 180, 0, 108, 28, 188, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HAZE, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1131 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1_3:
# 1133 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PRIMARINA, 65, ITEM_THROAT_SPRAY, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 236, 0, 132, 28, 108, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HAZE, MOVE_HYPER_VOICE, MOVE_MOONBLAST, 2, FALSE, TYPE_STEEL, 10
# 1134 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1_4:
# 1136 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1_5:
# 1138 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Primarina_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1::
# 1146 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Raging_Bolt_Page1
# 1147 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1149 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1_2
# 1152 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1_3
# 1155 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1_4
# 1157 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1_5
# 1160 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1_2:
# 1150 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 148, 0, 36, 180, 100, 44, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1151 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1_3:
# 1153 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAGING_BOLT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 124, 4, 100, 36, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_THUNDERCLAP, 2, FALSE, TYPE_ELECTRIC, 10
# 1154 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1_4:
# 1156 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1_5:
# 1158 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Raging_Bolt_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1::
# 1166 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Raichu_Page1
# 1167 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1169 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_2
# 1172 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_3
# 1175 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_4
# 1178 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_5
# 1180 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_6
# 1183 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_2:
# 1170 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 140, 0, 188, 180, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_ENDEAVOR, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1171 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_3:
# 1173 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_TACKLE, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1174 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_4:
# 1176 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_ENCORE, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1177 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_5:
# 1179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1_6:
# 1181 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Raichu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1::
# 1189 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Regidrago_Page1
# 1190 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1192 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1_2
# 1195 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1_3
# 1197 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1_4
# 1200 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page12
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1_2:
# 1193 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REGIDRAGO, 65, ITEM_DRAGON_FANG, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, 2, FALSE, TYPE_STEEL, 10
# 1194 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1_3:
# 1196 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1_4:
# 1198 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Regidrago_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1::
# 1206 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1
# 1207 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1209 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1_2
# 1212 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1_3
# 1215 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1_4
# 1217 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1_5
# 1220 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1_2:
# 1210 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 188, 76, 52, 188, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 1211 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1_3:
# 1213 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME, 65, ITEM_HEARTHFLAME_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_WOOD_HAMMER, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_FIRE, 10
# 1214 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1_4:
# 1216 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1_5:
# 1218 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1::
# 1226 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1
# 1227 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1229 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1_2
# 1232 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1_3
# 1234 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1_4
# 1237 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1_2:
# 1230 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_WELLSPRING, 65, ITEM_WELLSPRING_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 220, 60, 44, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, 2, FALSE, TYPE_WATER, 10
# 1231 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1_3:
# 1233 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1_4:
# 1235 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1::
# 1243 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Palafin_Page1
# 1244 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1246 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1_2
# 1249 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1_3
# 1251 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1_4
# 1254 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1_2:
# 1247 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PALAFIN, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 252, 156, 4, 4, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_JET_PUNCH, MOVE_WAVE_CRASH, 2, FALSE, TYPE_WATER, 10
# 1248 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1_3:
# 1250 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1_4:
# 1252 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Palafin_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1::
# 1260 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Pelipper_Page1
# 1261 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1263 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1_2
# 1266 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1_3
# 1268 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1_4
# 1271 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1_2:
# 1264 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PELIPPER, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_WEATHER_BALL, MOVE_HURRICANE, 2, FALSE, TYPE_GHOST, 10
# 1265 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1_3:
# 1267 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1_4:
# 1269 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Pelipper_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1::
# 1277 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Politoed_Page1
# 1278 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1280 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1_2
# 1283 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1_3
# 1285 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1_4
# 1288 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page11
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1_2:
# 1281 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 220, 0, 196, 12, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENCORE, MOVE_PERISH_SONG, MOVE_SCALD, 2, FALSE, TYPE_GRASS, 10
# 1282 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1_3:
# 1284 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1_4:
# 1286 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Politoed_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1::
# 1294 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Mimikyu_Page1
# 1295 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1297 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_2
# 1300 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_3
# 1303 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_4
# 1306 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_5
# 1309 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_6
# 1311 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_7
# 1314 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_2:
# 1298 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_MIMIKIUM_Z, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 236, 20, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1299 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_3:
# 1301 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, 2, FALSE, TYPE_WATER, 10
# 1302 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_4:
# 1304 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, 2, FALSE, TYPE_WATER, 10
# 1305 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_5:
# 1307 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_MIMIKIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_WATER, 10
# 1308 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_6:
# 1310 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1_7:
# 1312 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Mimikyu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1::
# 1320 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Moltres_Galar_Page1
# 1321 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1323 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1_2
# 1326 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1_3
# 1329 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1_4
# 1331 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1_5
# 1334 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1_2:
# 1324 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 28, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_FIERY_WRATH, 2, FALSE, TYPE_POISON, 10
# 1325 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1_3:
# 1327 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 92, 0, 4, 252, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_FIERY_WRATH, 2, FALSE, TYPE_POISON, 10
# 1328 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1_4:
# 1330 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1_5:
# 1332 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Moltres_Galar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1::
# 1340 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Murkrow_Page1
# 1341 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1343 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1_2
# 1346 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1_3
# 1349 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1_4
# 1351 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1_5
# 1354 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1_2:
# 1344 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MURKROW, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 116, 0, 0, 140, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 1345 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1_3:
# 1347 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MURKROW, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_BOLD, 2, 1, 252, 0, 140, 0, 0, 116, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 1348 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1_4:
# 1350 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1_5:
# 1352 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Murkrow_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1::
# 1360 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1
# 1361 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1363 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1_2
# 1366 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1_3
# 1369 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1_4
# 1371 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1_5
# 1374 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1_2:
# 1364 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NINETALES_ALOLA, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_TIMID, 2, 1, 212, 0, 100, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_BLIZZARD, 2, FALSE, TYPE_WATER, 10
# 1365 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1_3:
# 1367 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NINETALES_ALOLA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_BLIZZARD, 2, FALSE, TYPE_GHOST, 10
# 1368 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1_4:
# 1370 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1_5:
# 1372 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1::
# 1380 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1
# 1381 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1383 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1_2
# 1386 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1_3
# 1388 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1_4
# 1391 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page10
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1_2:
# 1384 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_CORNERSTONE, 65, ITEM_CORNERSTONE_MASK, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_POWER_WHIP, MOVE_IVY_CUDGEL, 2, FALSE, TYPE_ROCK, 10
# 1385 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1_3:
# 1387 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1_4:
# 1389 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1::
# 1397 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Lando_T_Page1
# 1398 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1400 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_2
# 1403 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_3
# 1406 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_4
# 1409 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_5
# 1412 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_6
# 1414 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_7
# 1417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_2:
# 1401 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FLYING, 10
# 1402 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_3:
# 1404 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 1405 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_4:
# 1407 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_WATER, 10
# 1408 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_5:
# 1410 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, 2, FALSE, TYPE_WATER, 10
# 1411 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_6:
# 1413 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1_7:
# 1415 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Lando_T_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1::
# 1423 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Landorus_Page1
# 1424 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1426 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1_2
# 1429 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1_3
# 1432 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1_4
# 1434 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1_5
# 1437 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1_2:
# 1427 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 132, 0, 4, 252, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 1428 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1_3:
# 1430 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SANDSEAR_STORM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_POISON, 10
# 1431 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1_4:
# 1433 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1_5:
# 1435 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Landorus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1::
# 1443 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Maushold_Page1
# 1444 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1446 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_2
# 1449 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_3
# 1452 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_4
# 1455 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_5
# 1457 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_6
# 1460 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_2:
# 1447 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 156, 100, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BEAT_UP, MOVE_FOLLOW_ME, MOVE_SUPER_FANG, 2, FALSE, TYPE_GHOST, 10
# 1448 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_3:
# 1450 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_BOLD, 0, 0, 252, 0, 236, 0, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_SUPER_FANG, 2, FALSE, TYPE_GHOST, 10
# 1451 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_4:
# 1453 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAUSHOLD, 65, ITEM_WIDE_LENS, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_BITE, MOVE_POPULATION_BOMB, 2, FALSE, TYPE_NORMAL, 10
# 1454 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_5:
# 1456 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1_6:
# 1458 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Maushold_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1::
# 1466 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Meowscarada_Page1
# 1467 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1469 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1_2
# 1472 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1_3
# 1475 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1_4
# 1477 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1_5
# 1480 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1_2:
# 1470 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MEOWSCARADA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 1471 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1_3:
# 1473 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MEOWSCARADA, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 1474 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1_4:
# 1476 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1_5:
# 1478 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Meowscarada_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1::
# 1486 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Milotic_Page1
# 1487 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1489 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1_2
# 1492 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1_3
# 1495 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1_4
# 1497 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1_5
# 1500 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page9
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1_2:
# 1490 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CALM, 1, 0, 180, 0, 204, 4, 4, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_COIL, MOVE_HYPNOSIS, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 1491 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1_3:
# 1493 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 244, 0, 220, 4, 4, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RECOVER, MOVE_ICY_WIND, MOVE_MUDDY_WATER, 2, FALSE, TYPE_GRASS, 10
# 1494 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1_4:
# 1496 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1_5:
# 1498 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Milotic_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1::
# 1506 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Indeedee_F_Page1
# 1507 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1509 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1_2
# 1512 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1_3
# 1514 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1_4
# 1517 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1_2:
# 1510 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE_F, 65, ITEM_PSYCHIC_SEED, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 252, 0, 204, 4, 4, 44, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 1511 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1_3:
# 1513 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1_4:
# 1515 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_F_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1::
# 1523 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Iron_Bundle_Page1
# 1524 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1526 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1_2
# 1529 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1_3
# 1531 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1_4
# 1534 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1_2:
# 1527 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_BUNDLE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, 2, FALSE, TYPE_GRASS, 10
# 1528 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1_3:
# 1530 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1_4:
# 1532 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Bundle_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1::
# 1540 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Iron_Hands_Page1
# 1541 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1543 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1_2
# 1546 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1_3
# 1549 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1_4
# 1551 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1_5
# 1554 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1_2:
# 1544 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 100, 156, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 1545 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1_3:
# 1547 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, 2, FALSE, TYPE_GRASS, 10
# 1548 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1_4:
# 1550 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1_5:
# 1552 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Iron_Hands_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1::
# 1560 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Kartana_Page1
# 1561 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1563 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_2
# 1566 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_3
# 1569 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_4
# 1572 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_5
# 1574 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_6
# 1577 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_2:
# 1564 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 116, 4, 4, 252, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_SMART_STRIKE, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH, 2, FALSE, TYPE_FIRE, 10
# 1565 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_3:
# 1567 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_DETECT, 2, FALSE, TYPE_FIRE, 10
# 1568 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_4:
# 1570 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_GRASSIUM_Z, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 84, 84, 4, 252, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_DETECT, MOVE_SUBSTITUTE, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, 2, FALSE, TYPE_FIRE, 10
# 1571 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_5:
# 1573 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1_6:
# 1575 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Kartana_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1::
# 1583 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Kingambit_Page1
# 1584 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1586 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1_2
# 1589 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1_3
# 1592 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1_4
# 1594 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1_5
# 1597 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page8
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1_2:
# 1587 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_BLACK_GLASSES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_DARK, 10
# 1588 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1_3:
# 1590 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KINGAMBIT, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 204, 196, 4, 12, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, MOVE_TERA_BLAST, MOVE_IRON_HEAD, 2, FALSE, TYPE_FLYING, 10
# 1591 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1_4:
# 1593 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1_5:
# 1595 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Kingambit_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1::
# 1603 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Hatterene_Page1
# 1604 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1606 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1_2
# 1609 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1_3
# 1611 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1_4
# 1614 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1_2:
# 1607 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HATTERENE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 2, 1, 212, 0, 84, 0, 188, 20, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_WATER, 10
# 1608 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1_3:
# 1610 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1_4:
# 1612 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Hatterene_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1::
# 1620 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Heatran_Page1
# 1621 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1623 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1_2
# 1626 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1_3
# 1629 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1_4
# 1631 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1_5
# 1634 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1_2:
# 1624 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 244, 0, 4, 20, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, 2, FALSE, TYPE_GRASS, 10
# 1625 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1_3:
# 1627 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 36, 36, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_TERA_BLAST, MOVE_HEAT_WAVE, 2, FALSE, TYPE_GRASS, 10
# 1628 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1_4:
# 1630 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1_5:
# 1632 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Heatran_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1::
# 1640 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Hydreigon_Page1
# 1641 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1643 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_2
# 1646 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_3
# 1649 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_4
# 1652 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_5
# 1655 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_6
# 1657 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_7
# 1660 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_2:
# 1644 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_DARK_PULSE, 2, FALSE, TYPE_STEEL, 10
# 1645 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_3:
# 1647 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_SCOPE_LENS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOCUS_ENERGY, MOVE_DRACO_METEOR, MOVE_HEAT_WAVE, 2, FALSE, TYPE_FIRE, 10
# 1648 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_4:
# 1650 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_TRICK, 2, FALSE, TYPE_STEEL, 10
# 1651 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_5:
# 1653 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HYDREIGON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_FLAMETHROWER, 2, FALSE, TYPE_STEEL, 10
# 1654 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_6:
# 1656 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1_7:
# 1658 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Hydreigon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1::
# 1666 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Incineroar_Page1
# 1667 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1669 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_2
# 1672 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_3
# 1675 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_4
# 1678 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_5
# 1680 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_6
# 1683 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_2:
# 1670 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1671 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_3:
# 1673 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 236, 4, 236, 4, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_WILL_O_WISP, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1674 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_4:
# 1676 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 0, 244, 36, 4, 4, 0, 220, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 1677 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_5:
# 1679 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1_6:
# 1681 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Incineroar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1::
# 1689 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Indeedee_Page1
# 1690 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1692 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1_2
# 1695 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1_3
# 1697 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1_4
# 1700 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page7
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1_2:
# 1693 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 2, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_EXPANDING_FORCE, MOVE_TERA_BLAST, 2, FALSE, TYPE_FIGHTING, 10
# 1694 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1_3:
# 1696 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1_4:
# 1698 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Indeedee_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1::
# 1706 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Gengar_Page1
# 1707 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1709 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1_2
# 1712 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1_3
# 1715 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1_4
# 1717 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1_5
# 1720 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1_2:
# 1710 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_DARK, 10
# 1711 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1_3:
# 1713 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, 2, FALSE, TYPE_DARK, 10
# 1714 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1_4:
# 1716 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1_5:
# 1718 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1::
# 1726 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Gholdengo_Page1
# 1727 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1729 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_2
# 1732 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_3
# 1735 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_4
# 1738 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_5
# 1740 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_6
# 1743 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_2:
# 1730 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 212, 0, 4, 60, 212, 20, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 1731 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_3:
# 1733 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 36, 212, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, 2, FALSE, TYPE_WATER, 10
# 1734 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_4:
# 1736 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GHOLDENGO, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 36, 0, 4, 252, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_STEEL_BEAM, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_STEEL, 10
# 1737 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_5:
# 1739 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1_6:
# 1741 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gholdengo_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1::
# 1749 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Gothitelle_Page1
# 1750 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1752 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_2
# 1755 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_3
# 1758 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_4
# 1761 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_5
# 1763 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_6
# 1766 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_2:
# 1753 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 2, 1, 244, 0, 180, 4, 4, 76, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 1754 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_3:
# 1756 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 244, 0, 108, 0, 0, 156, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 1757 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_4:
# 1759 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 0, 244, 0, 28, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FAKE_OUT, 2, FALSE, TYPE_WATER, 10
# 1760 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_5:
# 1762 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1_6:
# 1764 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gothitelle_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1::
# 1772 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Grimmsnarl_Page1
# 1773 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1775 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1_2
# 1778 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1_3
# 1781 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1_4
# 1783 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1_5
# 1786 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1_2:
# 1776 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_CALM, 0, 0, 236, 0, 156, 0, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, 2, FALSE, TYPE_GHOST, 10
# 1777 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1_3:
# 1779 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GRIMMSNARL, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 244, 4, 196, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_SPIRIT_BREAK, 2, FALSE, TYPE_GHOST, 10
# 1780 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1_4:
# 1782 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1_5:
# 1784 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Grimmsnarl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1::
# 1792 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Gyarados_Page1
# 1793 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1795 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_2
# 1798 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_3
# 1801 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_4
# 1804 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_5
# 1806 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_6
# 1809 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page6
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_2:
# 1796 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 172, 36, 116, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_WATERFALL, 2, FALSE, TYPE_GRASS, 10
# 1797 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_3:
# 1799 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 44, 196, 12, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_GRASS, 10
# 1800 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_4:
# 1802 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 44, 196, 12, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, 2, FALSE, TYPE_GROUND, 10
# 1803 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_5:
# 1805 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1_6:
# 1807 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gyarados_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1::
# 1815 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Ferrothorn_Page1
# 1816 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1818 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_2
# 1821 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_3
# 1824 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_4
# 1827 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_5
# 1829 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_6
# 1832 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_2:
# 1819 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 0, 220, 0, 100, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 1820 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_3:
# 1822 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_RELAXED, 0, 1, 220, 0, 228, 0, 0, 60, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 1823 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_4:
# 1825 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 220, 204, 0, 0, 0, 84, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, 2, FALSE, TYPE_WATER, 10
# 1826 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_5:
# 1828 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1_6:
# 1830 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Ferrothorn_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1::
# 1838 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Flutter_Mane_Page1
# 1839 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1841 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_2
# 1844 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_3
# 1847 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_4
# 1850 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_5
# 1852 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_6
# 1855 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_2:
# 1842 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 1843 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_3:
# 1845 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 116, 0, 156, 196, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_ICY_WIND, 2, FALSE, TYPE_FAIRY, 10
# 1846 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_4:
# 1848 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_BOOSTER_ENERGY, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 228, 0, 204, 68, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, 2, FALSE, TYPE_FAIRY, 10
# 1849 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_5:
# 1851 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1_6:
# 1853 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Flutter_Mane_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1::
# 1861 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Garchomp_Page1
# 1862 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1864 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_2
# 1867 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_3
# 1870 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_4
# 1873 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_5
# 1875 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_6
# 1878 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_2:
# 1865 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_GROUNDIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 108, 172, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, 2, FALSE, TYPE_FIRE, 10
# 1866 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_3:
# 1868 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 156, 4, 252, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_DRAGON_CLAW, 2, FALSE, TYPE_FIRE, 10
# 1869 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_4:
# 1871 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARCHOMP, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_GROUND, 10
# 1872 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_5:
# 1874 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1_6:
# 1876 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Garchomp_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1::
# 1884 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Garganacl_Page1
# 1885 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1887 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1_2
# 1890 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1_3
# 1893 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1_4
# 1895 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1_5
# 1898 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1_2:
# 1888 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_SASSY, 0, 0, 252, 0, 20, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 1889 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1_3:
# 1891 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARGANACL, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_CAREFUL, 0, 1, 252, 4, 12, 4, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_SALT_CURE, MOVE_RECOVER, 2, FALSE, TYPE_GHOST, 10
# 1892 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1_4:
# 1894 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1_5:
# 1896 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Garganacl_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1::
# 1904 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Gastrodon_Page1
# 1905 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1907 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1_2
# 1910 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1_3
# 1913 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1_4
# 1915 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1_5
# 1918 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page5
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1_2:
# 1908 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 1, 1, 172, 0, 108, 4, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 1909 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1_3:
# 1911 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_QUIET, 1, 0, 172, 0, 116, 0, 220, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, 2, FALSE, TYPE_FIRE, 10
# 1912 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1_4:
# 1914 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1_5:
# 1916 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Gastrodon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1::
# 1924 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Dragapult_Page1
# 1925 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1927 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1_2
# 1930 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1_3
# 1933 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1_4
# 1935 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1_5
# 1938 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1_2:
# 1928 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 252, 4, 44, 164, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DARTS, MOVE_LIGHT_SCREEN, MOVE_WILL_O_WISP, 2, FALSE, TYPE_WATER, 10
# 1929 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1_3:
# 1931 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_OUTRAGE, 2, FALSE, TYPE_DRAGON, 10
# 1932 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1_4:
# 1934 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1_5:
# 1936 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Dragapult_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1::
# 1944 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Dragonite_Page1
# 1945 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1947 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1_2
# 1950 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1_3
# 1953 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1_4
# 1955 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1_5
# 1958 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1_2:
# 1948 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_NORMAL, 10
# 1949 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1_3:
# 1951 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGONITE, 65, ITEM_LOADED_DICE, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 44, 204, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HAZE, MOVE_SCALE_SHOT, 2, FALSE, TYPE_FAIRY, 10
# 1952 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1_4:
# 1954 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1_5:
# 1956 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Dragonite_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1::
# 1964 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Dusclops_Page1
# 1965 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1967 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1_2
# 1970 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1_3
# 1973 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1_4
# 1975 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1_5
# 1978 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1_2:
# 1968 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DUSCLOPS, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_NIGHT_SHADE, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1969 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1_3:
# 1971 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DUSCLOPS, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_RELAXED, 2, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_NIGHT_SHADE, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, 2, FALSE, TYPE_WATER, 10
# 1972 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1_4:
# 1974 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1_5:
# 1976 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Dusclops_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1::
# 1984 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Excadrill_Page1
# 1985 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1987 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1_2
# 1990 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1_3
# 1993 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1_4
# 1995 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1_5
# 1998 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1_2:
# 1988 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, 2, FALSE, TYPE_GROUND, 10
# 1989 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1_3:
# 1991 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 28, 196, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, 2, FALSE, TYPE_WATER, 10
# 1992 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1_4:
# 1994 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1_5:
# 1996 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Excadrill_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1::
# 2004 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Farigiraf_Page1
# 2005 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2007 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1_2
# 2010 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1_3
# 2012 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1_4
# 2015 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page4
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1_2:
# 2008 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FARIGIRAF, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_CALM, 1, 1, 228, 0, 116, 4, 4, 156, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_HYPER_VOICE, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 2009 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1_3:
# 2011 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1_4:
# 2013 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Farigiraf_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1::
# 2021 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Chien_Pao_Page1
# 2022 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2024 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1_2
# 2027 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1_3
# 2029 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1_4
# 2032 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1_2:
# 2025 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHIEN_PAO, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICICLE_CRASH, MOVE_SACRED_SWORD, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_GHOST, 10
# 2026 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1_3:
# 2028 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1_4:
# 2030 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Chien_Pao_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1::
# 2038 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Clefairy_Page1
# 2039 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2041 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_2
# 2044 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_3
# 2047 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_4
# 2050 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_5
# 2052 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_6
# 2055 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_2:
# 2042 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 140, 0, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 2043 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_3:
# 2045 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 220, 0, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 2046 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_4:
# 2048 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_POKE_BALL, NATURE_CALM, 2, 0, 252, 0, 60, 0, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ICY_WIND, 2, FALSE, TYPE_WATER, 10
# 2049 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_5:
# 2051 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1_6:
# 2053 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Clefairy_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1::
# 2061 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Conkeldurr_Page1
# 2062 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2064 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_2
# 2067 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_3
# 2070 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_4
# 2073 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_5
# 2076 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_6
# 2078 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_7
# 2081 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_2:
# 2065 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 228, 236, 0, 0, 0, 44, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_POISON_JAB, 2, FALSE, TYPE_FIRE, 10
# 2066 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_3:
# 2068 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_BRAVE, 2, 1, 228, 236, 0, 0, 0, 44, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2069 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_4:
# 2071 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_FLAME_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_POISON_JAB, 2, FALSE, TYPE_FIRE, 10
# 2072 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_5:
# 2074 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 2, 1, 228, 236, 4, 4, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2075 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_6:
# 2077 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1_7:
# 2079 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Conkeldurr_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1::
# 2087 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Corviknight_Page1
# 2088 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2090 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1_2
# 2093 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1_3
# 2095 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1_4
# 2098 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1_2:
# 2091 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CORVIKNIGHT, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_IMPISH, 2, 1, 244, 4, 116, 4, 0, 140, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_IRON_HEAD, 2, FALSE, TYPE_DRAGON, 10
# 2092 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1_3:
# 2094 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1_4:
# 2096 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Corviknight_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1::
# 2104 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Cresselia_Page1
# 2105 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2107 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_2
# 2110 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_3
# 2113 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_4
# 2116 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_5
# 2118 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_6
# 2121 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_2:
# 2108 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_BOLD, 0, 1, 252, 0, 156, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2109 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_3:
# 2111 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_CALM, 0, 1, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2112 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_4:
# 2114 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_SASSY, 0, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_MOONBLAST, 2, FALSE, TYPE_FAIRY, 10
# 2115 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_5:
# 2117 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1_6:
# 2119 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Cresselia_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1::
# 2127 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Archaludon_Page1
# 2128 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2130 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1_2
# 2133 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1_3
# 2136 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1_4
# 2138 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1_5
# 2141 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1_2:
# 2131 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, 2, FALSE, TYPE_ELECTRIC, 10
# 2132 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1_3:
# 2134 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCHALUDON, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 4, 4, 44, 204, 31, 31, 31, 31, 31, 31, MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_BODY_PRESS, 2, FALSE, TYPE_GRASS, 10
# 2135 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1_4:
# 2137 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1_5:
# 2139 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Archaludon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1::
# 2147 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Armarouge_Page1
# 2148 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2150 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1_2
# 2153 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1_3
# 2156 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1_4
# 2158 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1_5
# 2161 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1_2:
# 2151 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARMAROUGE, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ENDURE, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_FIRE, 10
# 2152 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1_3:
# 2154 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARMAROUGE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_QUIET, 0, 1, 228, 0, 0, 0, 196, 84, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, 2, FALSE, TYPE_GRASS, 10
# 2155 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1_4:
# 2157 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1_5:
# 2159 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Armarouge_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1::
# 2167 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Basculegion_Page1
# 2168 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2170 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_2
# 2173 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_3
# 2176 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_4
# 2179 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_5
# 2182 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_6
# 2184 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_7
# 2187 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_2:
# 2171 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 220, 124, 156, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2172 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_3:
# 2174 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2175 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_4:
# 2177 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2178 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_5:
# 2180 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BASCULEGION, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 4, 220, 28, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, 2, FALSE, TYPE_WATER, 10
# 2181 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_6:
# 2183 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1_7:
# 2185 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Basculegion_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1::
# 2193 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Celesteela_Page1
# 2194 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2196 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1_2
# 2199 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1_3
# 2202 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1_4
# 2204 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1_5
# 2207 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1_2:
# 2197 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 20, 4, 180, 52, 31, 0, 31, 31, 31, 31, MOVE_AIR_SLASH, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_GIGA_DRAIN, 2, FALSE, TYPE_DRAGON, 10
# 2198 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1_3:
# 2200 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_FIGY_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 68, 84, 4, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_HEAVY_SLAM, 2, FALSE, TYPE_DRAGON, 10
# 2201 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1_4:
# 2203 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1_5:
# 2205 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Celesteela_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1::
# 2213 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Chi_Yu_Page1
# 2214 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2216 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1_2
# 2219 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1_3
# 2222 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1_4
# 2224 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1_5
# 2227 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1_2:
# 2217 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_SNARL, 2, FALSE, TYPE_GHOST, 10
# 2218 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1_3:
# 2220 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHI_YU, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 252, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GHOST, 10
# 2221 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1_4:
# 2223 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1_5:
# 2225 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Chi_Yu_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1::
# 2233 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Aegislash_Page1
# 2234 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2236 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_2
# 2239 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_3
# 2242 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_4
# 2245 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_5
# 2247 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_6
# 2250 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_2:
# 2237 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, 2, FALSE, FALSE, 10
# 2238 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_3:
# 2240 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, 2, FALSE, TYPE_WATER, 10
# 2241 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_4:
# 2243 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_POKE_BALL, NATURE_QUIET, 0, 0, 252, 0, 4, 0, 180, 68, 31, 0, 31, 0, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, 2, FALSE, FALSE, 10
# 2244 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_5:
# 2246 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1_6:
# 2248 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Aegislash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1::
# 2256 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Amoonguss_Page1
# 2257 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2259 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_2
# 2262 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_3
# 2265 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_4
# 2268 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_5
# 2271 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_6
# 2273 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_7
# 2276 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_2:
# 2260 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_POKE_BALL, NATURE_RELAXED, 2, 1, 236, 0, 236, 0, 0, 36, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 2261 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_3:
# 2263 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 244, 0, 108, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 2264 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_4:
# 2266 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 180, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_SPORE, MOVE_RAGE_POWDER, 2, FALSE, TYPE_WATER, 10
# 2267 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_5:
# 2269 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_SASSY, 2, 1, 252, 0, 20, 0, 0, 236, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, 2, FALSE, TYPE_WATER, 10
# 2270 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_6:
# 2272 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1_7:
# 2274 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Amoonguss_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1::
# 2282 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Annihilape_Page1
# 2283 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2285 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1_2
# 2288 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1_3
# 2291 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1_4
# 2293 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1_5
# 2296 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1_2:
# 2286 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 180, 68, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2287 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1_3:
# 2289 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ANNIHILAPE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_FINAL_GAMBIT, 2, FALSE, TYPE_FIGHTING, 10
# 2290 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1_4:
# 2292 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1_5:
# 2294 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Annihilape_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1::
# 2302 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Arcanine_Page1
# 2303 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2305 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1_2
# 2308 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1_3
# 2311 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1_4
# 2313 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1_5
# 2316 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1_2:
# 2306 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 236, 68, 4, 196, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EXTREME_SPEED, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FLYING, 10
# 2307 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1_3:
# 2309 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 1, 252, 68, 4, 76, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, MOVE_SNARL, 2, FALSE, TYPE_WATER, 10
# 2310 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1_4:
# 2312 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1_5:
# 2314 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1::
# 2322 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1
# 2323 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2325 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1_2
# 2328 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1_3
# 2330 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1_4
# 2333 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1_2:
# 2326 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE_HISUI, 65, ITEM_CHOICE_BAND, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 12, 196, 4, 252, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EXTREME_SPEED, MOVE_HEAD_SMASH, 2, FALSE, TYPE_NORMAL, 10
# 2327 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1_3:
# 2329 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1_4:
# 2331 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1::
# 2339 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Page1
# 2340 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2342 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_2
# 2344 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_3
# 2346 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_4
# 2348 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_5
# 2350 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_6
# 2352 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_7
# 2354 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_8
# 2357 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_2:
# 2343 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_3:
# 2345 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_4:
# 2347 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_5:
# 2349 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_6:
# 2351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_7:
# 2353 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1_8:
# 2355 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2::
# 2363 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Page2
# 2364 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2366 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2_2
# 2368 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2_3
# 2370 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2_4
# 2373 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2_2:
# 2367 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2_3:
# 2369 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2_4:
# 2371 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1::
# 2379 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1
# 2380 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2382 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1_2
# 2385 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1_3
# 2387 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1_4
# 2390 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1_2:
# 2383 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 2, 1, 156, 0, 36, 116, 172, 20, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, 2, TRUE, FALSE, 10
# 2384 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1_3:
# 2386 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1_4:
# 2388 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1::
# 2396 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1
# 2397 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2399 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1_2
# 2402 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1_3
# 2404 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1_4
# 2407 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1_2:
# 2400 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARTI_BERRY, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 4, 0, 4, 252, 244, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BLAST_BURN, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH, 2, TRUE, FALSE, 10
# 2401 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1_3:
# 2403 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1_4:
# 2405 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1::
# 2413 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Dragapult_Page1
# 2414 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2416 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_2
# 2419 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_3
# 2421 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_4
# 2424 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_2:
# 2417 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRAGAPULT, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 28, 196, 4, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_PHANTOM_FORCE, MOVE_DRAGON_CLAW, 2, FALSE, TYPE_WATER, 10
# 2418 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_3:
# 2420 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1_4:
# 2422 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Dragapult_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1::
# 2430 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1
# 2431 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2433 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1_2
# 2436 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1_3
# 2438 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1_4
# 2441 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1_2:
# 2434 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LAPRAS, 65, ITEM_LIGHT_CLAY, ITEM_POKE_BALL, NATURE_MODEST, 1, 0, 108, 0, 172, 28, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, 2, TRUE, FALSE, 10
# 2435 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1_3:
# 2437 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1_4:
# 2439 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1::
# 2447 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1
# 2448 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2450 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1_2
# 2453 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1_3
# 2455 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1_4
# 2458 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1_2:
# 2451 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 132, 116, 4, 31, 0, 31, 31, 31, 31, MOVE_NASTY_PLOT, MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_THUNDERBOLT, 2, FALSE, TYPE_STEEL, 10
# 2452 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1_3:
# 2454 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1_4:
# 2456 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1::
# 2464 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Dynamax_Thundurus_Page1
# 2465 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2467 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_2
# 2470 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_3
# 2473 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_4
# 2475 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_5
# 2478 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_2:
# 2468 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 36, 212, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_FLY, 2, FALSE, TYPE_FIRE, 10
# 2469 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_3:
# 2471 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 50, ITEM_ASSAULT_VEST, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 236, 4, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_FLY, 2, FALSE, TYPE_FIRE, 10
# 2472 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_4:
# 2474 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1_5:
# 2476 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Dynamax_Thundurus_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Page1::
# 2484 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Page1
# 2485 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2487 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_2
# 2489 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_3
# 2491 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_4
# 2493 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_5
# 2495 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_6
# 2497 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_7
# 2499 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_8
# 2502 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_2:
# 2488 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_3:
# 2490 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_4:
# 2492 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_5:
# 2494 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_6:
# 2496 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_7:
# 2498 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page1_8:
# 2500 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Page2::
# 2508 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Page2
# 2509 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2511 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_2
# 2513 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_3
# 2515 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_4
# 2517 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_5
# 2519 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_6
# 2521 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_7
# 2523 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_8
# 2526 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_2:
# 2512 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_3:
# 2514 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_4:
# 2516 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_5:
# 2518 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_6:
# 2520 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_7:
# 2522 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page2_8:
# 2524 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page3
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Page3::
# 2532 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Page3
# 2533 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2535 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_2
# 2537 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_3
# 2539 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_4
# 2542 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_2:
# 2536 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_3:
# 2538 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Page3_4:
# 2540 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1::
# 2548 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Tyranitar_Page1
# 2549 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2551 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_2
# 2554 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_3
# 2556 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_4
# 2559 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_2:
# 2552 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 1, 44, 164, 20, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT, 2, FALSE, FALSE, 10
# 2553 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_3:
# 2555 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1_4:
# 2557 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1::
# 2565 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Latias_Page1
# 2566 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2568 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_2
# 2571 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_3
# 2573 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_4
# 2576 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_2:
# 2569 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LATIAS, 65, ITEM_LATIASITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 252, 0, 60, 108, 76, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_RECOVER, 2, FALSE, FALSE, 10
# 2570 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_3:
# 2572 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1_4:
# 2574 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Latias_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1::
# 2582 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Manectric_Page1
# 2583 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2585 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_2
# 2588 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_3
# 2590 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_4
# 2593 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_2:
# 2586 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_POKE_BALL, NATURE_TIMID, 1, 1, 244, 0, 4, 220, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SNARL, 2, FALSE, TYPE_GRASS, 10
# 2587 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_3:
# 2589 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1_4:
# 2591 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1::
# 2599 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Mawile_Page1
# 2600 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2602 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_2
# 2605 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_3
# 2608 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_4
# 2610 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_5
# 2613 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_2:
# 2603 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_BRAVE, 1, 1, 156, 196, 0, 0, 0, 156, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2604 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_3:
# 2606 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 156, 196, 4, 4, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_FIRE, 10
# 2607 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_4:
# 2609 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1_5:
# 2611 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Mawile_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1::
# 2619 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Metagross_Page1
# 2620 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2622 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_2
# 2625 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_3
# 2627 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_4
# 2630 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_2:
# 2623 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, 2, FALSE, TYPE_FIRE, 10
# 2624 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_3:
# 2626 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1_4:
# 2628 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1::
# 2636 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Salamence_Page1
# 2637 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2639 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_2
# 2642 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_3
# 2645 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_4
# 2648 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_5
# 2650 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_6
# 2653 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_2:
# 2640 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_NAIVE, 0, 0, 0, 44, 0, 212, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, 2, FALSE, TYPE_WATER, 10
# 2641 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_3:
# 2643 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 92, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, 2, FALSE, TYPE_WATER, 10
# 2644 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_4:
# 2646 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DRACO_METEOR, 2, FALSE, TYPE_WATER, 10
# 2647 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_5:
# 2649 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1_6:
# 2651 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Salamence_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1::
# 2659 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Charizard_Page1
# 2660 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2662 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_2
# 2665 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_3
# 2668 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_4
# 2670 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_5
# 2673 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_2:
# 2663 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_POKE_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, 2, FALSE, TYPE_GRASS, 10
# 2664 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_3:
# 2666 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 236, 44, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_ROOST, 2, FALSE, TYPE_GRASS, 10
# 2667 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_4:
# 2669 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1_5:
# 2671 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Charizard_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1::
# 2679 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Gardevoir_Page1
# 2680 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2682 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_2
# 2685 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_3
# 2687 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_4
# 2690 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_2:
# 2683 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, 2, FALSE, TYPE_WATER, 10
# 2684 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_3:
# 2686 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1_4:
# 2688 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1::
# 2696 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Gengar_Page1
# 2697 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2699 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_2
# 2702 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_3
# 2705 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_4
# 2707 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_5
# 2710 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_2:
# 2700 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 252, 0, 68, 180, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, 2, FALSE, TYPE_WATER, 10
# 2701 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_3:
# 2703 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_POKE_BALL, NATURE_TIMID, 0, 1, 76, 0, 28, 180, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, 2, FALSE, TYPE_WATER, 10
# 2704 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_4:
# 2706 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1_5:
# 2708 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1::
# 2716 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Gyarados_Page1
# 2717 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2719 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_2
# 2722 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_3
# 2724 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_4
# 2727 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_2:
# 2720 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GYARADOS, 65, ITEM_GYARADOSITE, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 52, 196, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, 2, FALSE, FALSE, 10
# 2721 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_3:
# 2723 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1_4:
# 2725 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Gyarados_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1::
# 2733 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
# 2734 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2736 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_2
# 2739 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_3
# 2741 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_4
# 2744 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_2:
# 2737 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 1, 36, 196, 20, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, 2, FALSE, TYPE_GHOST, 10
# 2738 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_3:
# 2740 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1_4:
# 2742 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mega_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1::
# 2750 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mythical_Page1
# 2751 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2753 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_2
# 2755 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_3
# 2757 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_4
# 2759 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_5
# 2762 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_2:
# 2754 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_3:
# 2756 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_4:
# 2758 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1_5:
# 2760 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1::
# 2768 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1
# 2769 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2771 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_2
# 2774 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_3
# 2777 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_4
# 2779 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_5
# 2782 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_2:
# 2772 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KELDEO_RESOLUTE, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 20, 0, 4, 252, 228, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SECRET_SWORD, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, 2, FALSE, TYPE_GRASS, 10
# 2773 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_3:
# 2775 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KELDEO_RESOLUTE, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SECRET_SWORD, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, 2, FALSE, TYPE_GHOST, 10
# 2776 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_4:
# 2778 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1_5:
# 2780 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1::
# 2788 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Mythical_Manaphy_Page1
# 2789 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2791 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_2
# 2794 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_3
# 2797 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_4
# 2799 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_5
# 2802 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_2:
# 2792 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANAPHY, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 228, 0, 172, 28, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAIL_GLOW, MOVE_DAZZLING_GLEAM, MOVE_SCALD, 2, FALSE, TYPE_FAIRY, 10
# 2793 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_3:
# 2795 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANAPHY, 65, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 68, 0, 4, 252, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAIL_GLOW, MOVE_DAZZLING_GLEAM, MOVE_SCALD, 2, FALSE, TYPE_FAIRY, 10
# 2796 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_4:
# 2798 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1_5:
# 2800 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Mythical_Manaphy_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1::
# 2808 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Page1
# 2809 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2811 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_2
# 2813 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_3
# 2815 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_4
# 2817 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_5
# 2819 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_6
# 2821 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_7
# 2823 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_8
# 2826 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_2:
# 2812 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_3:
# 2814 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_4:
# 2816 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_5:
# 2818 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_6:
# 2820 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_7:
# 2822 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1_8:
# 2824 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2::
# 2832 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Page2
# 2833 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2835 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_2
# 2837 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_3
# 2839 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_4
# 2841 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_5
# 2843 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_6
# 2845 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_7
# 2847 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_8
# 2850 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_2:
# 2836 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_3:
# 2838 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_4:
# 2840 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_5:
# 2842 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_6:
# 2844 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_7:
# 2846 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2_8:
# 2848 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3::
# 2856 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Page3
# 2857 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2859 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_2
# 2861 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_3
# 2863 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_4
# 2866 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_2:
# 2860 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_3:
# 2862 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3_4:
# 2864 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1::
# 2872 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
# 2873 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2875 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_2
# 2878 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_3
# 2880 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_4
# 2883 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page3
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_2:
# 2876 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAMAZENTA, 65, ITEM_RUSTED_SHIELD, ITEM_POKE_BALL, NATURE_IMPISH, 0, 0, 76, 0, 244, 188, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WIDE_GUARD, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, 2, FALSE, TYPE_DRAGON, 10
# 2877 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_3:
# 2879 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1_4:
# 2881 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zamazenta_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1::
# 2889 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Miraidon_Page1
# 2890 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2892 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_2
# 2895 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_3
# 2897 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_4
# 2900 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_2:
# 2893 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIRAIDON, 65, ITEM_CHOICE_SPECS, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 92, 0, 4, 212, 196, 4, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_ELECTRO_DRIFT, MOVE_DRACO_METEOR, MOVE_DAZZLING_GLEAM, 2, FALSE, TYPE_FAIRY, 10
# 2894 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_3:
# 2896 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1_4:
# 2898 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Miraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1::
# 2906 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
# 2907 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2909 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_2
# 2912 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_3
# 2914 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_4
# 2917 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_2:
# 2910 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, 2, FALSE, FALSE, 10
# 2911 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_3:
# 2913 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1_4:
# 2915 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Rayquaza_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1::
# 2923 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Xerneas_Page1
# 2924 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2926 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_2
# 2929 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_3
# 2932 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_4
# 2934 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_5
# 2937 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_2:
# 2927 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, 2, FALSE, FALSE, 10
# 2928 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_3:
# 2930 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, 2, FALSE, FALSE, 10
# 2931 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_4:
# 2933 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1_5:
# 2935 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Xerneas_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1::
# 2943 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Yveltal_Page1
# 2944 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2946 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_2
# 2949 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_3
# 2952 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_4
# 2955 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_5
# 2957 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_6
# 2960 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_2:
# 2947 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SNARL, MOVE_FOUL_PLAY, MOVE_DARK_PULSE, 2, FALSE, TYPE_POISON, 10
# 2948 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_3:
# 2950 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_POISON, 10
# 2951 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_4:
# 2953 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, 2, FALSE, TYPE_POISON, 10
# 2954 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_5:
# 2956 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1_6:
# 2958 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Yveltal_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1::
# 2966 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Zacian_Page1
# 2967 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2969 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_2
# 2972 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_3
# 2975 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_4
# 2977 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_5
# 2980 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_2:
# 2970 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BEHEMOTH_BLADE, MOVE_PLAY_ROUGH, MOVE_TERA_BLAST, 2, FALSE, TYPE_GROUND, 10
# 2971 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_3:
# 2973 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZACIAN, 65, ITEM_RUSTED_SWORD, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 164, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_SACRED_SWORD, MOVE_PLAY_ROUGH, 2, FALSE, TYPE_STELLAR, 10
# 2974 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_4:
# 2976 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1_5:
# 2978 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Zacian_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1::
# 2986 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Calyrex_Page1
# 2987 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2989 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_2
# 2992 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_3
# 2995 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_4
# 2998 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_5
# 3001 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_6
# 3003 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_7
# 3006 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_2:
# 2990 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_FOCUS_SASH, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_GHOST, 10
# 2991 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_3:
# 2993 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 20, 0, 4, 252, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_NONE, 2, FALSE, TYPE_DARK, 10
# 2994 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_4:
# 2996 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_BRAVE, 0, 0, 252, 116, 0, 0, 0, 140, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 2997 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_5:
# 2999 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CALYREX, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 116, 4, 12, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_NONE, 2, FALSE, TYPE_FIRE, 10
# 3000 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_6:
# 3002 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1_7:
# 3004 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Calyrex_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1::
# 3012 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Groudon_Page1
# 3013 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3015 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_2
# 3018 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_3
# 3021 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_4
# 3024 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_5
# 3026 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_6
# 3029 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_2:
# 3016 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_CLEAR_AMULET, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BULK_UP, MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, 2, FALSE, TYPE_FIRE, 10
# 3017 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_3:
# 3019 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 252, 156, 4, 12, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, 2, FALSE, FALSE, 10
# 3020 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_4:
# 3022 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_POKE_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_ROAR, 2, FALSE, FALSE, 10
# 3023 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_5:
# 3025 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1_6:
# 3027 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1::
# 3035 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Koraidon_Page1
# 3036 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3038 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_2
# 3041 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_3
# 3044 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_4
# 3046 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_5
# 3049 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_2:
# 3039 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_ADAMANT, 0, 0, 108, 116, 4, 212, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 3040 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_3:
# 3042 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KORAIDON, 65, ITEM_LIFE_ORB, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 28, 220, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLAME_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, 2, FALSE, TYPE_FIRE, 10
# 3043 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_4:
# 3045 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1_5:
# 3047 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Koraidon_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1::
# 3055 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Kyogre_Page1
# 3056 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3058 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_2
# 3061 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_3
# 3064 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_4
# 3067 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_5
# 3069 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_6
# 3072 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_2:
# 3059 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_MYSTIC_WATER, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 132, 44, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 3060 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_3:
# 3062 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 252, 0, 164, 12, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, 2, FALSE, TYPE_GRASS, 10
# 3063 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_4:
# 3065 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_SCALD, MOVE_THUNDER, 2, FALSE, FALSE, 10
# 3066 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_5:
# 3068 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1_6:
# 3070 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1::
# 3078 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Restricted_Lunala_Page1
# 3079 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3081 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_2
# 3084 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_3
# 3086 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_4
# 3089 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_2:
# 3082 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_POWER_HERB, ITEM_POKE_BALL, NATURE_MODEST, 0, 0, 140, 0, 132, 52, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_WIDE_GUARD, MOVE_MOONGEIST_BEAM, MOVE_METEOR_BEAM, MOVE_TRICK_ROOM, 2, FALSE, TYPE_DARK, 10
# 3083 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_3:
# 3085 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1_4:
# 3087 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Restricted_Lunala_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
# 5 "data/scripts/sample_sets_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                               B: Go Back$"

Auto_Text_Sample_Sets_Page1::
# 3093 "data/scripts/sample_sets_options.pory"
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page1::
# 3100 "data/scripts/sample_sets_options.pory"
	.string "COMMON$"
	.string "DYNAMAX$"
	.string "MEGA$"
	.string "MYTHICAL$"
	.string "RESTRICTED$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page1::
# 3111 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "AMOONGUSS$"
	.string "ANNIHILAPE$"
	.string "ARCANINE$"
	.string "ARCANINE-HISUI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page2::
# 3122 "data/scripts/sample_sets_options.pory"
	.string "ARCHALUDON$"
	.string "ARMAROUGE$"
	.string "BASCULEGION$"
	.string "CELESTEELA$"
	.string "CHI-YU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page3::
# 3133 "data/scripts/sample_sets_options.pory"
	.string "CHIEN-PAO$"
	.string "CLEFAIRY$"
	.string "CONKELDURR$"
	.string "CORVIKNIGHT$"
	.string "CRESSELIA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page4::
# 3144 "data/scripts/sample_sets_options.pory"
	.string "DRAGAPULT$"
	.string "DRAGONITE$"
	.string "DUSCLOPS$"
	.string "EXCADRILL$"
	.string "FARIGIRAF$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page5::
# 3155 "data/scripts/sample_sets_options.pory"
	.string "FERROTHORN$"
	.string "FLUTTER MANE$"
	.string "GARCHOMP$"
	.string "GARGANACL$"
	.string "GASTRODON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page6::
# 3166 "data/scripts/sample_sets_options.pory"
	.string "GENGAR$"
	.string "GHOLDENGO$"
	.string "GOTHITELLE$"
	.string "GRIMMSNARL$"
	.string "GYARADOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page7::
# 3177 "data/scripts/sample_sets_options.pory"
	.string "HATTERENE$"
	.string "HEATRAN$"
	.string "HYDREIGON$"
	.string "INCINEROAR$"
	.string "INDEEDEE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page8::
# 3188 "data/scripts/sample_sets_options.pory"
	.string "INDEEDEE-F$"
	.string "IRON BUNDLE$"
	.string "IRON HANDS$"
	.string "KARTANA$"
	.string "KINGAMBIT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page9::
# 3199 "data/scripts/sample_sets_options.pory"
	.string "LANDO-T$"
	.string "LANDORUS$"
	.string "MAUSHOLD$"
	.string "MEOWSCARADA$"
	.string "MILOTIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page10::
# 3210 "data/scripts/sample_sets_options.pory"
	.string "MIMIKYU$"
	.string "MOLTRES-GALAR$"
	.string "MURKROW$"
	.string "NINETALES-ALOLA$"
	.string "OGERPON-CS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page11::
# 3221 "data/scripts/sample_sets_options.pory"
	.string "OGERPON-HF$"
	.string "OGERPON-WS$"
	.string "PALAFIN$"
	.string "PELIPPER$"
	.string "POLITOED$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page12::
# 3232 "data/scripts/sample_sets_options.pory"
	.string "PORYGON2$"
	.string "PRIMARINA$"
	.string "RAGING BOLT$"
	.string "RAICHU$"
	.string "REGIDRAGO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page13::
# 3243 "data/scripts/sample_sets_options.pory"
	.string "REGIELEKI$"
	.string "RILLABOOM$"
	.string "ROARING MOON$"
	.string "ROTOM-WASH$"
	.string "SABLEYE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page14::
# 3254 "data/scripts/sample_sets_options.pory"
	.string "SINISTCHA$"
	.string "SNEASLER$"
	.string "SNORLAX$"
	.string "SYLVEON$"
	.string "TALONFLAME$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page15::
# 3265 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "TAPU KOKO$"
	.string "TAPU LELE$"
	.string "TATSUGIRI$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page16::
# 3276 "data/scripts/sample_sets_options.pory"
	.string "TING-LU$"
	.string "TINKATON$"
	.string "TOGEKISS$"
	.string "TORKOAL$"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page17::
# 3287 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "URSALUNA$"
	.string "URSALUNA-BLOODMOON$"
	.string "URSHIFU-RS$"
	.string "URSHIFU-SS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Page18::
# 3298 "data/scripts/sample_sets_options.pory"
	.string "VENUSAUR$"
	.string "VOLCARONA$"
	.string "WHIMSICOTT$"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Venusaur_Page1::
# 3308 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Volcarona_Page1::
# 3315 "data/scripts/sample_sets_options.pory"
	.string "252/0-/108/36+/4/108 (TERA)$"
	.string "252/0-/188/36+/4/28 (SUPPORT)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Whimsicott_Page1::
# 3323 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/0/0/252+ (CLOAK)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Zapdos_Page1::
# 3331 "data/scripts/sample_sets_options.pory"
	.string "244/0-/84/116+/36/28 (SITRUS)$"
	.string "252/0-/76/116+/36/28 (GOGGLES)$"
	.string "28/0-/0/228/0/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Tyranitar_Page1::
# 3340 "data/scripts/sample_sets_options.pory"
	.string "188/204+/0/0/116/0- (LIFE ORB)$"
	.string "188/204+/4/0-/108/4 (LIFE ORB)$"
	.string "252/204+/0/0/52/0- (LUM BERRY)$"
	.string "252/204+/4/0-/44/4 (LUM BERRY)$"
	.string "4/244/4/0-/4/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Ursaluna_Page1::
# 3351 "data/scripts/sample_sets_options.pory"
	.string "140/236+/0/0/132/0-$"
	.string "140/236+/4/0-/116/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Ursaluna_Bloodmoon_Page1::
# 3359 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/196+/52/12 (ORB)$"
	.string "244/0/0/196+/68/0- (ORB)$"
	.string "4/0-/4/196+/52/252 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Urshifu_Rs_Page1::
# 3368 "data/scripts/sample_sets_options.pory"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "12/156+/4/0-/84/252 (MYSTIC)$"
	.string "12/156+/4/0-/84/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Urshifu_Ss_Page1::
# 3377 "data/scripts/sample_sets_options.pory"
	.string "0/236+/0/0-/20/252 (BAND)$"
	.string "0/252+/0/0-/4/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Ting_Lu_Page1::
# 3385 "data/scripts/sample_sets_options.pory"
	.string "52/4/196+/0-/252/4 (HELMET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Tinkaton_Page1::
# 3392 "data/scripts/sample_sets_options.pory"
	.string "180/172/100/0-/44+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Togekiss_Page1::
# 3399 "data/scripts/sample_sets_options.pory"
	.string "228/0-/196+/4/76/4 (LENS)$"
	.string "236/0-/196+/4/12/60 (BABIRI)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Torkoal_Page1::
# 3407 "data/scripts/sample_sets_options.pory"
	.string "204/0/0/196+/108/0-$"
	.string "204/0/0/196+/108/0- (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Tornadus_Page1::
# 3415 "data/scripts/sample_sets_options.pory"
	.string "196/0-/228+/4/76/4 (CLOAK)$"
	.string "196/0-/228+/4/76/4 (HELMET)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Tapu_Fini_Page1::
# 3424 "data/scripts/sample_sets_options.pory"
	.string "252/0-/100/4/4+/148 (SUPPORT)$"
	.string "252/0-/12/4/4/236+ (SUPPORT)$"
	.string "252/0-/172/4/76+/4 (CALM MIND)$"
	.string "252/0-/4/196+/4/52 (SPECS)$"
	.string "4/0-/4/196+/52/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Tapu_Koko_Page1::
# 3435 "data/scripts/sample_sets_options.pory"
	.string "172/0-/12/36/196/92+ (VEST)$"
	.string "28/0-/4/196+/28/252 (ELEC Z)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "4/0-/4/244/4/252+ (ELEC Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Tapu_Lele_Page1::
# 3445 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "12/0-/4/236+/4/252 (PSYCH Z)$"
	.string "12/0-/4/236+/4/252 (SCARF)$"
	.string "252/0-/108/76+/4/68 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Tatsugiri_Page1::
# 3455 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252 (SCARF)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Thundurus_Page1::
# 3463 "data/scripts/sample_sets_options.pory"
	.string "228/0-/28/12/172+/68$"
	.string "4/0-/0/252/0/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Sinistcha_Page1::
# 3472 "data/scripts/sample_sets_options.pory"
	.string "236/0-/188+/4/76/4 (SITRUS)$"
	.string "236/0/188+/0/84/0- (SITRUS)$"
	.string "244/0-/188+/4/68/4 (LEFTYS)$"
	.string "244/0/188+/0/76/0- (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Sneasler_Page1::
# 3482 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (COACHING)$"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "4/244/4/0-/4/252+ (HERB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Snorlax_Page1::
# 3491 "data/scripts/sample_sets_options.pory"
	.string "228/76+/196/0-/4/4 (DRUM)$"
	.string "228/76+/204/0/0/0- (DRUM)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Sylveon_Page1::
# 3499 "data/scripts/sample_sets_options.pory"
	.string "180/0-/244/76+/4/4 (LEFTYS)$"
	.string "252/0-/172/76+/4/4 (PLATE)$"
	.string "252/0-/92/156+/4/4 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Talonflame_Page1::
# 3508 "data/scripts/sample_sets_options.pory"
	.string "4/252+/0/0-/0/252 (BANDED)$"
	.string "4/252+/0/0-/0/252 (LIFE ORB)$"
	.string "4/252/0/0-/0/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Regieleki_Page1::
# 3517 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (MAGNET)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Rillaboom_Page1::
# 3524 "data/scripts/sample_sets_options.pory"
	.string "140/116+/12/0-/236/4 (VEST)$"
	.string "140/196+/12/0-/156/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Roaring_Moon_Page1::
# 3532 "data/scripts/sample_sets_options.pory"
	.string "4/220/28/0-/4/252+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Rotom_Wash_Page1::
# 3539 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/116+/4/132$"
	.string "252/0-/44/60/148+/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Sableye_Page1::
# 3547 "data/scripts/sample_sets_options.pory"
	.string "252/0-/116+/0/140/0 (CLAY)$"
	.string "252/0-/36+/0/220/0 (CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Porygon2_Page1::
# 3555 "data/scripts/sample_sets_options.pory"
	.string "244/0-/92/116+/52/4 (TERA)$"
	.string "244/0/92/116+/52/0- (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Primarina_Page1::
# 3563 "data/scripts/sample_sets_options.pory"
	.string "180/0-/108/188+/4/28 (SPRAY)$"
	.string "236/0-/132/108+/4/28 (SPRAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Raging_Bolt_Page1::
# 3571 "data/scripts/sample_sets_options.pory"
	.string "148/0-/36/100+/44/180 (ORB)$"
	.string "244/0-/124/100+/36/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Raichu_Page1::
# 3579 "data/scripts/sample_sets_options.pory"
	.string "140/0-/188/0/0/180+ (VEST)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Regidrago_Page1::
# 3588 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Ogerpon_Hf_Page1::
# 3595 "data/scripts/sample_sets_options.pory"
	.string "188/76+/52/0-/4/188$"
	.string "28/220/4/0-/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Ogerpon_Ws_Page1::
# 3603 "data/scripts/sample_sets_options.pory"
	.string "220/60/44/0-/4/180+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Palafin_Page1::
# 3610 "data/scripts/sample_sets_options.pory"
	.string "252/156+/4/0-/92/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Pelipper_Page1::
# 3617 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252+/0/252 (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Politoed_Page1::
# 3624 "data/scripts/sample_sets_options.pory"
	.string "220/0-/196/4/76+/12$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Mimikyu_Page1::
# 3631 "data/scripts/sample_sets_options.pory"
	.string "252/236+/20/0/0/0- (MIMI Z)$"
	.string "4/0-/0/252+/0/252 (GHOST Z)$"
	.string "4/252+/0/0-/0/252 (GHOST Z)$"
	.string "4/252+/0/0-/0/252 (MIMI Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Moltres_Galar_Page1::
# 3641 "data/scripts/sample_sets_options.pory"
	.string "28/0-/4/220/4/252+ (ORB)$"
	.string "92/0-/4/156+/4/252 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Murkrow_Page1::
# 3649 "data/scripts/sample_sets_options.pory"
	.string "252/0-/116/0/140+/0$"
	.string "252/0-/140+/0/116/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Ninetales_Alola_Page1::
# 3657 "data/scripts/sample_sets_options.pory"
	.string "212/0-/100/4/4/188+ (CLAY)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Ogerpon_Cs_Page1::
# 3665 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Lando_T_Page1::
# 3672 "data/scripts/sample_sets_options.pory"
	.string "12/196+/4/0-/44/252 (SCARF)$"
	.string "12/196+/4/0-/44/252 (VEST)$"
	.string "156/116+/36/0-/108/92 (GROUND Z)$"
	.string "20/164+/4/0-/68/252 (GROUND Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Landorus_Page1::
# 3682 "data/scripts/sample_sets_options.pory"
	.string "132/0-/4/116+/4/252 (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Maushold_Page1::
# 3690 "data/scripts/sample_sets_options.pory"
	.string "252/0-/156/0/0/100+ (BEAT UP)$"
	.string "252/0-/236+/0/20/0 (GOGGLES)$"
	.string "4/244/4/0-/4/252+ (LENS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Meowscarada_Page1::
# 3699 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "4/244/4/0-/4/252+ (BAND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Milotic_Page1::
# 3707 "data/scripts/sample_sets_options.pory"
	.string "180/0-/204/4/116+/4 (COIL)$"
	.string "244/0-/220/4/36+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Indeedee_F_Page1::
# 3715 "data/scripts/sample_sets_options.pory"
	.string "252/0-/204/4/44+/4 (SEED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Iron_Bundle_Page1::
# 3722 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Iron_Hands_Page1::
# 3729 "data/scripts/sample_sets_options.pory"
	.string "100/156+/0/0/252/0- (VEST)$"
	.string "60/156+/36/0-/252/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Kartana_Page1::
# 3737 "data/scripts/sample_sets_options.pory"
	.string "116/4/4/0-/132/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (FOCUS SASH)$"
	.string "84/84/4/0-/84/252+ (GRASS Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Kingambit_Page1::
# 3746 "data/scripts/sample_sets_options.pory"
	.string "204/196+/4/0-/92/12$"
	.string "204/196+/4/0-/92/12 (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Hatterene_Page1::
# 3754 "data/scripts/sample_sets_options.pory"
	.string "212/0/84/188+/20/0- (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Heatran_Page1::
# 3761 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/236+/4/20 (SHUCA)$"
	.string "252/0-/36/180+/4/36 (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Hydreigon_Page1::
# 3769 "data/scripts/sample_sets_options.pory"
	.string "12/0-/4/236/4/252+ (ORB)$"
	.string "52/0-/4/196+/4/252 (LENS)$"
	.string "52/0-/4/196+/4/252 (SCARF)$"
	.string "52/0-/4/196+/4/252 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Incineroar_Page1::
# 3779 "data/scripts/sample_sets_options.pory"
	.string "236/36+/4/0-/204/28 (SITRUS)$"
	.string "236/4+/236/0-/28/4 (HELMET)$"
	.string "244/36+/4/0-/220/4 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Indeedee_Page1::
# 3788 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (TERA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Gengar_Page1::
# 3795 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "4/0-/4/244/4/252+ (GHOST Z)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Gholdengo_Page1::
# 3803 "data/scripts/sample_sets_options.pory"
	.string "212/0-/4/212+/20/60 (ORB)$"
	.string "244/0-/4/212+/12/36 (LEFTYS)$"
	.string "36/0-/4/212+/4/252 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Gothitelle_Page1::
# 3812 "data/scripts/sample_sets_options.pory"
	.string "244/0-/180/4/76+/4 (SITRUS)$"
	.string "244/0/108/0/156+/0- (SITRUS)$"
	.string "244/0/28/0/236+/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Grimmsnarl_Page1::
# 3821 "data/scripts/sample_sets_options.pory"
	.string "236/0-/156/0/116+/0 (LIGHT CLAY)$"
	.string "244/4/196+/0-/60/4 (LIGHT CLAY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Gyarados_Page1::
# 3829 "data/scripts/sample_sets_options.pory"
	.string "172/36+/116/0-/4/180 (SUPPORT)$"
	.string "44/196+/12/0-/4/252 (GRASS)$"
	.string "44/196+/12/0-/4/252 (GROUND)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Ferrothorn_Page1::
# 3838 "data/scripts/sample_sets_options.pory"
	.string "220/0/100+/0/188/0- (LEFTYS)$"
	.string "220/0/228+/0/60/0- (LEFTYS)$"
	.string "220/204+/0/0/84/0- (LEFTYS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Flutter_Mane_Page1::
# 3847 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SASH)$"
	.string "116/0-/156/36+/4/196 (SPECS)$"
	.string "228/0-/204/4/4/68+ (BOOSTER)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Garchomp_Page1::
# 3856 "data/scripts/sample_sets_options.pory"
	.string "108/172+/4/0-/4/220 (GROUND Z)$"
	.string "4/156/4/0-/92/252+ (VEST)$"
	.string "4/252/0/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Garganacl_Page1::
# 3865 "data/scripts/sample_sets_options.pory"
	.string "252/0/20/0/236+/0-$"
	.string "252/4/12/0-/236+/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Gastrodon_Page1::
# 3873 "data/scripts/sample_sets_options.pory"
	.string "172/0-/108/220+/4/4 (SITRUS)$"
	.string "172/0/116/220+/0/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Dragapult_Page1::
# 3881 "data/scripts/sample_sets_options.pory"
	.string "252/4/44/0-/44/164+ (SUPPORT)$"
	.string "4/244/4/0-/4/252+ (BANDED)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Dragonite_Page1::
# 3889 "data/scripts/sample_sets_options.pory"
	.string "44/204+/4/0-/4/252 (BANDED)$"
	.string "44/204+/4/0-/4/252 (DICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Dusclops_Page1::
# 3897 "data/scripts/sample_sets_options.pory"
	.string "252/0/100/0/156+/0-$"
	.string "252/0/156+/0/100/0-$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Excadrill_Page1::
# 3905 "data/scripts/sample_sets_options.pory"
	.string "0/252+/4/0-/0/252 (SASH)$"
	.string "28/196+/28/0-/4/252 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Farigiraf_Page1::
# 3913 "data/scripts/sample_sets_options.pory"
	.string "228/0-/116/4/156+/4 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Chien_Pao_Page1::
# 3920 "data/scripts/sample_sets_options.pory"
	.string "0/252/4/0-/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Clefairy_Page1::
# 3927 "data/scripts/sample_sets_options.pory"
	.string "252/0-/140/0/116+/0$"
	.string "252/0-/220/0/36+/0$"
	.string "252/0-/60/0/196+/0$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Conkeldurr_Page1::
# 3936 "data/scripts/sample_sets_options.pory"
	.string "228/236+/0/0/44/0- (GUTS)$"
	.string "228/236+/0/0/44/0- (ORB)$"
	.string "228/236+/4/0-/36/4 (GUTS)$"
	.string "228/236+/4/0-/36/4 (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Corviknight_Page1::
# 3946 "data/scripts/sample_sets_options.pory"
	.string "244/4/116+/0-/140/4 (FIGY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Cresselia_Page1::
# 3953 "data/scripts/sample_sets_options.pory"
	.string "252/0-/156+/4/76/4 (HELMET)$"
	.string "252/0-/172/4/76+/4 (GOGGLES)$"
	.string "252/0/180/0/76+/0- (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Archaludon_Page1::
# 3962 "data/scripts/sample_sets_options.pory"
	.string "0/0-/0/252+/4/252 (HERB)$"
	.string "252/0-/4/44+/204/4 (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Armarouge_Page1::
# 3970 "data/scripts/sample_sets_options.pory"
	.string "212/0-/4/36+/4/252 (POLICY)$"
	.string "228/0/0/196+/84/0- (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Basculegion_Page1::
# 3978 "data/scripts/sample_sets_options.pory"
	.string "4/220+/124/0-/4/156 (BULKY)$"
	.string "4/220+/28/0-/4/252 (BAND)$"
	.string "4/220+/28/0-/4/252 (RAIN)$"
	.string "4/220+/28/0-/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Celesteela_Page1::
# 3988 "data/scripts/sample_sets_options.pory"
	.string "252/0-/20/180+/52/4 (VEST)$"
	.string "252/68+/84/0-/100/4 (FIGY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Chi_Yu_Page1::
# 3996 "data/scripts/sample_sets_options.pory"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "52/0-/4/196+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Aegislash_Page1::
# 4004 "data/scripts/sample_sets_options.pory"
	.string "140/0-/0/252+/0/116 (GHOST Z)$"
	.string "236/0-/0/252+/0/20 (LEFTYS)$"
	.string "252/0/4/180+/68/0- (POLICY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Amoonguss_Page1::
# 4013 "data/scripts/sample_sets_options.pory"
	.string "236/0/236+/0/36/0- (HELMET)$"
	.string "244/0/108/0/156+/0- (SITRUS)$"
	.string "252/0/180/0/76+/0- (EJECT)$"
	.string "252/0/20/0/236+/0- (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Annihilape_Page1::
# 4023 "data/scripts/sample_sets_options.pory"
	.string "180/68/4/0-/4/252+ (SITRUS)$"
	.string "252/4/0/0-/0/252+ (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Arcanine_Page1::
# 4031 "data/scripts/sample_sets_options.pory"
	.string "236/68/4/0-/4/196+ (GOGGLES)$"
	.string "252/68+/4/0-/108/76 (GOGGLES)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Common_Arcanine_Hisui_Page1::
# 4039 "data/scripts/sample_sets_options.pory"
	.string "12/196+/4/0-/44/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Page1::
# 4046 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD-GMAX$"
	.string "DRAGAPULT$"
	.string "LAPRAS-GMAX$"
	.string "ROTOM-WASH$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Page2::
# 4057 "data/scripts/sample_sets_options.pory"
	.string "VENUSAUR-GMAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Venusaur_Gmax_Page1::
# 4064 "data/scripts/sample_sets_options.pory"
	.string "156/0-/36/172+/20/116 (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Charizard_Gmax_Page1::
# 4071 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/0/252+ (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Dragapult_Page1::
# 4078 "data/scripts/sample_sets_options.pory"
	.string "28/196/4/0-/28/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Lapras_Gmax_Page1::
# 4085 "data/scripts/sample_sets_options.pory"
	.string "108/0-/172/196+/4/28 (GMAX)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Rotom_Wash_Page1::
# 4092 "data/scripts/sample_sets_options.pory"
	.string "252/0-/4/116+/4/132 (SITRUS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Dynamax_Thundurus_Page1::
# 4099 "data/scripts/sample_sets_options.pory"
	.string "36/212/4/0-/4/252+ (ORB)$"
	.string "4/236/4/0-/12/252+ (VEST)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Page1::
# 4107 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD$"
	.string "GARDEVOIR$"
	.string "GENGAR$"
	.string "GYARADOS$"
	.string "KANGASKHAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Page2::
# 4118 "data/scripts/sample_sets_options.pory"
	.string "LATIAS$"
	.string "MANECTRIC$"
	.string "MAWILE$"
	.string "METAGROSS$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Page3::
# 4129 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Tyranitar_Page1::
# 4136 "data/scripts/sample_sets_options.pory"
	.string "44/164/20/0-/28/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Latias_Page1::
# 4143 "data/scripts/sample_sets_options.pory"
	.string "252/0-/60/76+/12/108$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Manectric_Page1::
# 4150 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/36/4/220+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Mawile_Page1::
# 4157 "data/scripts/sample_sets_options.pory"
	.string "156/196+/0/0/156/0- (MEGA)$"
	.string "156/196+/4/0-/148/4 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Metagross_Page1::
# 4165 "data/scripts/sample_sets_options.pory"
	.string "124/196+/12/0-/36/140 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Salamence_Page1::
# 4172 "data/scripts/sample_sets_options.pory"
	.string "0/44/0/252/0-/212+ (MEGA)$"
	.string "252/36+/4/0-/124/92 (MEGA)$"
	.string "4/0-/4/244+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Charizard_Page1::
# 4181 "data/scripts/sample_sets_options.pory"
	.string "204/0-/108/4+/4/188 (MEGA Y)$"
	.string "236/44/4/0-/4/220+ (MEGA X)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Gardevoir_Page1::
# 4189 "data/scripts/sample_sets_options.pory"
	.string "244/0-/196/36+/4/28 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Gengar_Page1::
# 4196 "data/scripts/sample_sets_options.pory"
	.string "252/0-/68/4/4/180+ (PERISH)$"
	.string "76/0-/28/220/4/180+ (CONTROL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Gyarados_Page1::
# 4204 "data/scripts/sample_sets_options.pory"
	.string "52/196+/4/0-/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mega_Kangaskhan_Page1::
# 4211 "data/scripts/sample_sets_options.pory"
	.string "36/196+/20/0-/236/20 (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mythical_Page1::
# 4218 "data/scripts/sample_sets_options.pory"
	.string "KELDEO-RESOLUTE$"
	.string "MANAPHY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mythical_Keldeo_Resolute_Page1::
# 4226 "data/scripts/sample_sets_options.pory"
	.string "20/0-/4/228/4/252+ (ORB)$"
	.string "4/0-/0/252/0/252+ (SASH)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Mythical_Manaphy_Page1::
# 4234 "data/scripts/sample_sets_options.pory"
	.string "228/0-/172/76+/4/28$"
	.string "68/0-/4/180+/4/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Page1::
# 4242 "data/scripts/sample_sets_options.pory"
	.string "CALYREX$"
	.string "GROUDON$"
	.string "KORAIDON$"
	.string "KYOGRE$"
	.string "LUNALA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Page2::
# 4253 "data/scripts/sample_sets_options.pory"
	.string "MIRAIDON$"
	.string "RAYQUAZA$"
	.string "XERNEAS$"
	.string "YVELTAL$"
	.string "ZACIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Page3::
# 4264 "data/scripts/sample_sets_options.pory"
	.string "ZAMAZENTA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Zamazenta_Page1::
# 4271 "data/scripts/sample_sets_options.pory"
	.string "76/0/244+/0-/0/188$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Miraidon_Page1::
# 4278 "data/scripts/sample_sets_options.pory"
	.string "92/0-/4/196+/4/212 (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Rayquaza_Page1::
# 4285 "data/scripts/sample_sets_options.pory"
	.string "4/252/0/0-/0/252+ (MEGA)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Xerneas_Page1::
# 4292 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+$"
	.string "44/0-/20/188/4/252+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Yveltal_Page1::
# 4300 "data/scripts/sample_sets_options.pory"
	.string "4/0-/4/244/4/252+ (ORB)$"
	.string "4/244/4/0-/4/252+ (DARK Z)$"
	.string "4/244/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Zacian_Page1::
# 4309 "data/scripts/sample_sets_options.pory"
	.string "252/76+/4/0-/12/164 (GROUND)$"
	.string "252/76+/4/0-/12/164 (STELLAR)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Calyrex_Page1::
# 4317 "data/scripts/sample_sets_options.pory"
	.string "0/0-/4/252/0/252+ (SHADOW)$"
	.string "20/0-/4/220/4/252+ (SHADOW)$"
	.string "252/116+/0/0/140/0- (ICE)$"
	.string "252/116+/4/0-/124/12 (ICE)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Groudon_Page1::
# 4327 "data/scripts/sample_sets_options.pory"
	.string "252/156+/4/0-/84/12 (AMULET)$"
	.string "252/156+/4/0-/84/12 (PRIMAL)$"
	.string "4/0-/4/244/4/252+ (PRIMAL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Koraidon_Page1::
# 4336 "data/scripts/sample_sets_options.pory"
	.string "108/116+/4/0-/68/212 (ORB)$"
	.string "28/220/4/0-/4/252+ (ORB)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Kyogre_Page1::
# 4344 "data/scripts/sample_sets_options.pory"
	.string "252/0-/132/76+/4/44 (MYSTIC)$"
	.string "252/0-/164/76+/4/12 (PRIMAL)$"
	.string "4/0-/4/244+/4/252 (SCARF)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Restricted_Lunala_Page1::
# 4353 "data/scripts/sample_sets_options.pory"
	.string "140/0-/132/180+/4/52 (HERB)$"
	.string "Go Back$"
	.string "$"
