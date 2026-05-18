Purchases["mid.fin"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry Squads
				---[[
				---{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reserves_mid(fin)"},
				---{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_scout_mid(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle_mid(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_assault(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_marksmen(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_cav_mid(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_jag_mid(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_border_jag_mid(fin)"},
				--]]

				-- Squads used in all doctrines
					---[[	
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_reserves_mid(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_scout_mid(fin)"},
					--]]

				-- All-round Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_vet_rifle_mid_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_elite_rifle_mid_def(fin)"},
					--]]
	
				-- Defensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_mid_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_flame_mid_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_vet_rifle_mid_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_border_jag_mid_all(fin)"},
					--]]

				-- Irregular Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_irr(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_scout_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_mid_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_vet_cav_mid_irr(fin)"},
					--]]

				-- Lend-Lease Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_len(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_marksmen_rifle_mid_len(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_mid_len(fin)"},
					--]]

			-- Infantry Singles / Teams
				---[[
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_rifle(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_smg(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_sa(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_mg2(fin)"}, --chauchat
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_mg(fin)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "single_at(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_ap_miner(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_at_miner(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_engineer(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_flamer(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_tankman(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_medic(fin)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_sniper(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_officer(fin)"},
				--]]

			-- Cannons
				---[[
				--{priority = 1.0, type = {"Cannon", "Supply", "Ammo",}, unit = "inf_crate_fin"},
				
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "maxim_m1910_30"},
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "ds39_stand_fin"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "20mm_itk35"},

				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "20mm_itk40"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "40mm_itk38b"},
				{priority = 1.0, type = {"Cannon", "AA", "Class3",}, unit = "75mm_itk37"},
				{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "panzernest_krab"},

				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "20mm_l39"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "37mm_pstk36"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "45mm_pstk32"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "76mm_k02"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "75mm_pstk9738"},

				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "47mm_pstk39"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "76mm_k02_30_40"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "76mm_k36"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "75mm_k40"},

				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "50mm_krh38"},
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_krh36"},

				{priority = 1.0, type = {"Cannon", "Mortar", "Class2",}, unit = "100mm_nbw35"},
				{priority = 1.0, type = {"Cannon", "Mortar", "Class3",}, unit = "120mm_krh40"},

				{priority = 1.0, type = {"Cannon", "Support", "Class1",}, unit = "76mm_m1927_fin"},

				{priority = 1.0, type = {"Cannon", "Support", "Class1",}, unit = "84mm_k18_late"},
				{priority = 1.0, type = {"Cannon", "Mortar", "Class3",}, unit = "170mm_minewerfer"},

				{priority = 1.0, type = {"Cannon", "Artillery", "Class1",}, unit = "105mm_k13"},

				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "107mm_k10"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "122mm_m1910_fin"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "120mm_k78_31"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "150mm_h40"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "155mm_h17"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "203mm_h17"},

				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "150mm_rkh41"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "210mm_nebelwerfer42"},
				--]]

			-- Wheeled vehicles
				---[[
				{priority = 1.0, type = {"Vehicle", "AA", "Class1",},unit = "ford_3ton_breda"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",},unit = "l182"},
				{priority = 1.0, type = {"Armored", "Class3",}, unit = "ba10_fin"},

				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Transport",}, unit = "m42_truppenfahrrad"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Transport",}, unit = "ford_v3000"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "ford_v3000_ammo"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Supply", "Fuel",}, unit = "ford_v3000_fuel"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed","Supply", "Engineer",}, unit = "ford_v3000_eng"},
				--]]

			-- Tankettes
				---[[
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "t20_fin"},
				--]]

			-- Tanks
				---[[
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "ft17_mg_fin"},
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "ft17_fin"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "fin_captured_v_t37a"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "fin_captured_v_t26"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "fin_captured_v_bt5"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "vickers_6t_altb"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "t26e"},

				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "t26_33_fin"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "bt5_fin"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "t50_fin"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "l62"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "bt42"},
				{priority = 1.0, type = {"Tank", "Light", "Artillery", "Class3",}, unit = "pz38h_w40"},

				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "t28_38_fin"},

				{priority = 1.0, type = {"Tank", "Medium", "AT", "Class2",}, unit = "stug3g_fin"},

				{priority = 1.0, type = {"Tank", "Heavy", "Class3",}, unit = "kv1_42_fin"},

				--]]
			
			-- Doctrine Point Units 
			
				--  All-round Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_command_mid(fin)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Tank", "Light", "AA",}, unit = "doctrine_l62"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t50_fin"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Infantry", "Team",}, unit = "doctrine_squad_signaller_mid(fin)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Support",}, unit = "doctrine_84mm_k18_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Light",}, unit = "doctrine_bt42"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_120mm_k78_31_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium", "AT",}, unit = "doctrine_stug3g_fin"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_kv1_42_fin"},
					--]]

				--  Defensive Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_engineer_mid(fin)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon", "AA",}, unit = "doctrine_40mm_itk38b_mid"},
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_heavy_engineer_mid(fin)"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_120mm_krh40_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Artillery",}, unit = "doctrine_122mm_m1910_fin_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Cannon", "AA", "AT",}, unit = "doctrine_75mm_itk37_mid"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Cannon", "Artillery",}, unit = "doctrine_107mm_k10_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_155mm_h17_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_203mm_h17_mid"},
					--]]
		
				--  Irregular Doctrine 
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_sissi_mid(fin)"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_white_death_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "AA",}, unit = "doctrine_20mm_itk40_towed"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Plane", "Airstrike",}, unit = "doctrine_blenheim_small_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_170mm_minewerfer_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_76mm_k02_30_40_mid"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier3", "Plane", "Airstrike",}, unit = "doctrine_blenheim_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_210mm_nebelwerfer42_fin"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_105mm_k34_mid"},
					--]]
		
				--  Lend-Lease Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon", "MG",}, unit = "doctrine_panzernest"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Vehicle", "AA",}, unit = "doctrine_sdkfz10_flak38_fin"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "Artillery",}, unit = "doctrine_100mm_nbw35_fin"},
				
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Cannon", "Spotlight",}, unit = "doctrine_150mm_sw34_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Artillery",}, unit = "doctrine_105mm_h33_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_75mm_pak40_fin"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery", }, unit = "doctrine_150mm_sfh18_fin"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Light", "Artillery",}, unit = "doctrine_pz38h_w40"},
					--]]
			--]====]
		}
	}
}
