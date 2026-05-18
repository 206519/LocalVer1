Purchases["late.fin"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry Squads
				--[[
				-- Old Squads
				{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_reserves_late(fin)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_scout_late(fin)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_late(fin)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad", "AT",}, unit = "squad_antitank_late(fin)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_assault(fin)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_cav_late(fin)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_jag_late(fin)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Squad", "AT",}, unit = "squad_jag_antitank_late(fin)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_border_jag_late(fin)"},
				--]]

				-- Jalkaväki Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_reserves_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_fortress_rifle_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_scout_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_penal_late_jalk(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_jalk_1(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_jalk_2(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_jalk_3(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_antitank_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_late_jalk(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_vet_rifle_late_jalk_1(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_rifle_late_jalk_2(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_marksmen_rifle_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pio_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_assault_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_hq_lr_pio_late_jalk(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_elite_rifle_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_swe_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_jag_scout_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_border_jag_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_border_jag_at_late_jalk(fin)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jag_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_jag_antitank_late_jalk(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_hq_lr_recon_late_jalk(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_hq_lr_late_jalk(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_hrr_cav_late_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_jag_late_vet_jalk(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_jag_strike_late_jalk(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_hq_lr_jag_late_jalk(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_urr_cav_late_jalk(fin)"},
					--]]
				-- Panssari Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_scout_late_pans(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_rifle_late_pans_1(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_rifle_late_pans_2(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_rifle_late_pans_3(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_antitank_late_pans(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_late_pans(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_cav_late_pans(fin)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_arm_pio_late_pans(fin)"},
					{priority = 1.5, type = {"Class2", "Infantry", "Squad",}, unit = "squad_arm_pio_late_mot_pans(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_elite_rifle_late_pans(fin)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_vet_cav_late_pans(fin)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_jag_scout_late_pans(fin)"},
					{priority = 2.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_arm_jag_late_pans(fin)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_arm_jag_late_mot_pans(fin)"},
					--]]

			-- Infantry Singles / Teams
				---[[
				--{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_rifle(fin)"},
				{priority = 0.5, type = {"Class3", "Infantry", "Team",}, unit = "single_mg(fin)"},
				--{priority = 1.0, type = {"Class2", "Infantry", "Team", "AT",}, unit = "single_at(fin)"},
				--{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "single_bazooker(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_ap_miner(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_at_miner(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_engineer(fin)"},
				{priority = 0.5, type = {"Class3", "Infantry", "Team",}, unit = "single_flamer(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_tankman(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_medic(fin)"},
				{priority = 0.5, type = {"Class2", "Infantry", "Team",}, unit = "single_sniper(fin)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_officer(fin)"},
				--]]

			-- Jalkaväki Doctrine Cannons
				---[[
				--{priority = 1.0, type = {"Class", "Cannon", "Supply", "Ammo",}, unit = "inf_crate_fin"},
				
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "mg08_fin(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "maxim_m1910_30(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "maxim_m32_33(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "ds39_stand_fin(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "AA",}, unit = "20mm_itk35(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_itk40(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "40mm_itk38b(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "AA", "AT",}, unit = "75mm_itk37(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "AA", "AT",}, unit = "76mm_itk31(late_fin_jalk)"},

				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "20mm_l39(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "37mm_pstk36(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "45mm_pstk32(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "47mm_pstk39(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "50mm_pstk38_late(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "75mm_pstk9738(late_fin_jalk)"},
				{priority = 1.5, type = {"Class1", "Cannon", "AT",}, unit = "75mm_k40(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "75mm_k44(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "76mm_k36(late_fin_jalk)"},

				{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "50mm_krh38(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "81mm_krh36(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "120mm_krh40(late_fin_jalk)"},

				{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "76mm_k02(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "76mm_k02_30_40(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "76mm_rk27_39(late_fin_jalk)"},
				{priority = 1.0, type = {"Class1", "Cannon", "Support",}, unit = "76mm_m1927_fin(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "84mm_k18_late(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_k13(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_k34(late_fin_jalk)"},
				{priority = 1.5, type = {"Class1", "Cannon", "Artillery",}, unit = "105mm_h33(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "107mm_k10(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "114mm_h18_how_late(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "120mm_k78_31(late_fin_jalk)"},
				{priority = 1.5, type = {"Class1", "Cannon", "Artillery",}, unit = "122mm_m1910_fin(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_h40(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_h17(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_k17(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "203mm_h17(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "210mm_h17(late_fin_jalk)"},
				
				{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "150mm_rkh41(late_fin_jalk)"},
				--]]

			-- Panssari Doctrine Cannons
				---[[
				--{priority = 1.0, type = {"Class", "Cannon", "Supply", "Ammo",}, unit = "inf_crate_fin"},
				
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "maxim_m1910_30(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "ds39_stand_fin(late_fin_pans)"},
				{priority = 1.0, type = {"Class3", "Cannon", "AA",}, unit = "20mm_itk35(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_itk40(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "40mm_itk38b(late_fin_pans)"},

				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "20mm_l39(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "50mm_pstk38_late(late_fin_pans)"},
				{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "75mm_k40(late_fin_pans)"},

				{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "81mm_krh36(late_fin_pans)"},

				{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "105mm_h33(late_fin_pans)"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_h40(late_fin_pans)"},
				--]]

			-- Jalkaväki Doctrine Wheeled vehicles
				---[[
				{priority = 1.0, type = {"Class2", "Vehicle",}, unit = "m42_truppenfahrrad(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Vehicle",}, unit = "latil_m2tl6(late_fin_jalk)"},
				--{priority = 1.0, type = {"Class3", "Vehicle",}, unit = "volvo_127d(late_fin_jalk)"},
				{priority = 1.5, type = {"Class1", "Vehicle",}, unit = "volvo_127d_itk40(late_fin_jalk)"},
				--{priority = 1.0, type = {"Class2", "Vehicle", "AA",}, unit = "ford_3ton_breda(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "l182(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Armored",}, unit = "ba6_fin(late_fin_jalk)"},

				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "m42_truppenfahrrad"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "ford_v3000"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "ford_v3000_ammo"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Fuel",}, unit = "ford_v3000_fuel"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Engineer",}, unit = "ford_v3000_eng"},
				--]]

			-- Panssari Doctrine Wheeled vehicles
				---[[
				{priority = 1.0, type = {"Class2", "Vehicle",}, unit = "m42_truppenfahrrad(late_fin_pans)"},
				{priority = 1.0, type = {"Class3", "Vehicle",}, unit = "latil_m2tl6(late_fin_pans)"},
				--{priority = 1.0, type = {"Class3", "Vehicle",}, unit = "volvo_127d(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Vehicle",}, unit = "volvo_127d_itk40(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Vehicle", "AA",}, unit = "ford_3ton_breda(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "l182(late_fin_pans)"},
				{priority = 1.0, type = {"Class3", "Armored",}, unit = "ba6_fin(late_fin_pans)"},
				{priority = 1.0, type = {"Class3", "Armored",}, unit = "ba10_fin(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Armored",}, unit = "ba10m_fin(late_fin_pans)"},
				--]]

			-- Tankettes
				---[[
				{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "t20_fin(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "t20_fin(late_fin_pans)"},
				--]]

			-- Jalkaväki Doctrine Tanks
				---[[
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "t26c(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "t26e_mid(late_fin_jalk)"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "t26_33_fin_mid(late_fin_jalk)"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "bt42(late_fin_jalk)"},
				--]]
			
			-- Panssari Doctrine Tanks
				---[[
				{priority = 1.0, type = {"Class3", "Tank", "Light", "MG",}, unit = "ft17_mg_fin(late_fin_pans)"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "ft17_fin(late_fin_pans)"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "t26c(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "t26e_mid(late_fin_pans)"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "t26_33_fin_mid(late_fin_pans)"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "bt42(late_fin_pans)"},
				{priority = 1.0, type = {"Class3", "Tank", "Light", "AA",}, unit = "l62(late_fin_pans)"},

				{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "t28e_fin_late(late_fin_pans)"},
				{priority = 1.5, type = {"Class1", "Tank", "Medium", "AT",}, unit = "stug3g_fin_early(late_fin_pans)"},
				{priority = 1.5, type = {"Class1", "Tank", "Medium", "AT",}, unit = "stug3g_fin(late_fin_pans)"},
				--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer4j_fin(late_fin_pans)"},
				{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "t3476_41_fin_late(late_fin_pans)"},
				{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "t3485_44_fin(late_fin_pans)"},
				
				{priority = 1.5, type = {"Class2", "Tank", "Heavy",}, unit = "kv1_40e_fin_late(late_fin_pans)"},
				{priority = 1.5, type = {"Class2", "Tank", "Heavy",}, unit = "kv1_42_fin_late(late_fin_pans)"},
				--]]

			-- Doctrine Point Units 
			
				--  Jalkaväki Doctrine
					---[[
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_sissi(late_fin_jalk)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_bt42(late_fin_jalk)"},
					
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_75mm_k40_section_towed(late_fin_jalk)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Mortar",}, unit = "doctrine_300mm_krh42_towed(late_fin_jalk)"},
					
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Mortar",}, unit = "doctrine_120mm_mortar_troop(late_fin_jalk)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_150mm_h40_section_towed(late_fin_jalk)"},
					--]]

				--  Panssari Doctrine
					---[[
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_pio(late_fin_pans)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t26c(late_fin_pans)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_t50_fin(late_fin_pans)"},
					
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_45mm_pstk32_mid_section_towed(late_fin_pans)"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Tank", "Heavy",}, unit = "doctrine_kv1_42_fin_late(late_fin_pans)"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_t3485_44_fin_commander(late_fin_pans)"},
					{priority = 1.5, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy", "AT",}, unit = "doctrine_isu152_fin(late_fin_pans)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Medium", "AT",}, unit = "doctrine_stug3g_fin_section(late_fin_pans)"},
					--]]
			--]====]
		}
	}
}
