Purchases["early.fin"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry Squads
				---[[
				---{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_civil_guard_early(fin)"},
				---{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_scout_early(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle_early(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_rifle_lmg_early(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_assault(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_cav_early(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_jaeger_early(fin)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_jaeger_lmg_early(fin)"},
				--]]

				-- Squads used in all doctrines
					---[[	
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_civil_guard_early(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_scout_early(fin)"},
					--]]

				-- All-round Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_all(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mg_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_mg_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_early_all(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_mg_early_all(fin)"},
					--]]
	
				-- Defensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mg_early_def(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_early_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_border_guard_early_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_early_def(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_mg_early_def(fin)"},
					--]]

				-- Irregular Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_irr(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mg_early_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_early_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_mg_early_irr(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_scout_irr(fin)"},
					--]]

				-- Offensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_early_off(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mg_early_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_marksmen_rifle_early_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_early_off(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_mg_early_off(fin)"},
					--]]
		
			-- Infantry Singles / Teams
				---[[
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_rifle(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_smg(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_sa(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_mg2(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_mg(fin)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "single_at(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_at_miner(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_engineer(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_tankman(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_medic(fin)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_sniper(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_officer(fin)"},
				--]]

			-- Cannons
				---[[
				--{priority = 1.0, type = {"Cannon", "Supply", "Ammo",}, unit = "inf_crate_fin"},

				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "ds39_stand_fin"},
				{priority = 1.0, type = {"Cannon", "AA", "Class1",}, unit = "20mm_itk35"},

				{priority = 1.0, type = {"Cannon", "MG", "Class1",}, unit = "maxim_m1910_30"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "40mm_itk38b"},
				{priority = 1.0, type = {"Cannon", "AA", "Class3",}, unit = "75mm_itk37"},

				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "20mm_l39"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "37mm_pstk36"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "76mm_k02"},

				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "45mm_pstk32"},
				{priority = 1.0, type = {"Cannon", "AT", "Class1",}, unit = "47mm_pstk39"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "76mm_k02_30_40"},

				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "50mm_krh38"},
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "81mm_krh36"},

				{priority = 1.0, type = {"Cannon", "Mortar", "Class2",}, unit = "120mm_krh40"},
				{priority = 1.0, type = {"Cannon", "Mortar", "Class3",}, unit = "170mm_minewerfer"},

				{priority = 1.0, type = {"Cannon", "Support", "Class1",}, unit = "76mm_m1927_fin"},
				{priority = 1.0, type = {"Cannon", "Support", "Class2",}, unit = "84mm_k18"},

				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "105mm_k13"},

				{priority = 1.0, type = {"Cannon", "Artillery", "Class1",}, unit = "107mm_k10"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class1",}, unit = "122mm_m1910_fin"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "120mm_k78_31"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "155mm_h17"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "203mm_h17"},
				--]]

			-- Wheeled vehicles
				---[[
				{priority = 1.0, type = {"Armored", "MG", "Class2",},unit = "l182"},
				{priority = 1.0, type = {"Armored", "Class3",}, unit = "ba10_fin"},

				{priority = 1.0, type = {"Vehicle", "AA", "Class1",}, unit = "ford_3ton_breda"},

				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Transport",}, unit = "m42_truppenfahrrad"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Transport",}, unit = "ford_3ton"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "ford_3ton_ammo"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Supply", "Fuel",}, unit = "ford_3ton_fuel"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed","Supply", "Engineer",}, unit = "ford_3ton_eng"},
				--]]

			-- Tankettes
				---[[
				{priority = 1.0, type = {"Armored", "MG", "Class3", "Open",}, unit = "t20_fin"},
				--]]

			-- Tanks
				---[[
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "ft17_mg_fin"},
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "ft17_fin"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "fin_captured_v_t37a"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "fin_captured_v_t26"},
				{priority = 1.0, type = {"Tank", "Light", "Class1",}, unit = "fin_captured_v_bt5"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "vickers_6t_altb"},

				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "t26_33_fin"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "bt5_fin"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "t26e"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "kht130_fin"},

				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "t28_38_fin"},
				--]]

			-- Doctrine Point Units 

				--  All-round Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_assault_early(fin)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "Mortar",}, unit = "doctrine_50mm_krh38_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Armored",}, unit = "doctrine_ba6_fin_early"},
					
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Infantry", "Team",}, unit = "doctrine_squad_signaller_early(fin)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Support",}, unit = "doctrine_76mm_m1927_fin_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_76mm_k02_30_40_allround_early"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_170mm_minewerfer_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_155mm_h17_early"},
					--]]

				--  Defensive Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_engineer_early(fin)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_47mm_pstk39"},
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_heavy_engineer_early(fin)"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_120mm_krh40_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AA",}, unit = "doctrine_40mm_itk38b_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Cannon", "AA", "AT",}, unit = "doctrine_75mm_itk37_early"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_107mm_k10_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_203mm_h17_early"},
					--]]

				--  Irregular Doctrine
					---[[
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_sissi_early(fin)"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_white_death"},
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Cannon", "Spotlight",}, unit = "doctrine_150mm_sw34_early"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Plane", "Airstrike",}, unit = "doctrine_blenheim_small_early"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Tank", "Light",}, unit = "doctrine_ot130_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_76mm_k02_30_40_early"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier3", "Plane", "Airstrike",}, unit = "doctrine_blenheim_early"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_105mm_k34_early"},
					--]]

				--  Offensive Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_command_early(fin)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Vehicle", "AA",}, unit = "doctrine_ford_3ton_breda_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t26e"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "Artillery",}, unit = "doctrine_122mm_m1910_fin_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_84mm_k18_early"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_t28_38_fin"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_120mm_k78_31_early"},
					--]]
			--]====]
		}
	}
}
