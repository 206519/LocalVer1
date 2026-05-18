Purchases["late.ger"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Generic
				-- Infantry
					---[[
					--{priority = 0.5, type = {"Class3", "Infantry", "Team", "AT",}, unit = "single_bazooker(ger)"},
					--{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_riflegrenade(ger)"},
					--{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_medic(ger)"},
					{priority = 0.5, type = {"Class3", "Infantry", "Team",}, unit = "single_sniper(ger)"},
					--]]

			-- Panzergrenadier Doctrine
				-- Infantry
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pz_recon_late_pzgren(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pz_pio_late_pzgren(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_pzgren_1(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_pzgren_2(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_pzgren_3(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_pzgren_1(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_pzgren_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_pzgren_3(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_begleitgren_late_pzgren(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pz_pio_gd_late_pzgren(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_gd_late_pzgren(ger)"},
					
					{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_mg_pzgren(ger)"},
					--{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_flamer_pzgren(ger)"},
					--]]
					
				-- Emplacements
					---[[
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "mg42_lafette(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flak38(late_ger_pzgren)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "AA",}, unit = "37mm_flak37(late_ger_pzgren)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "50mm_pak38_late(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "75mm_pak40(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "88mm_flak36(late_ger_pzgren)"},

					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "80mm_sgrw34(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Mortar",}, unit = "120mm_sgrw42(late_ger_pzgren)"},
					
					--{priority = 1.0, type = {"Class1", "Cannon", "Support",}, unit = "75mm_leig18(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_lefh18(late_ger_pzgren)"},
					{priority = 0.5, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_sfh18(late_ger_pzgren)"},
					{priority = 0.5, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_nebelwerfer41(late_ger_pzgren)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "bmw_r71(late_ger_pzgren)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kubelwagen_mg(late_ger_pzgren)"},
					
					--{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "blitz3_6_flak30(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz7_1(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz7_2(late_ger_pzgren)"},
					--{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz10_4(late_ger_pzgren)"},
					
					--{priority = 1.0, type = {"Class3", "Armored", "MG", "Transport",}, unit = "sdkfz250a_1(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Armored", "Transport",}, unit = "sdkfz250a_11(late_ger_pzgren)"},
					{priority = 0.5, type = {"Class3", "Armored", "MG", "Transport",}, unit = "sdkfz251d_1(late_ger_pzgren)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "Mortar",}, unit = "sdkfz251c_2(late_ger_pzgren)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "Support",}, unit = "sdkfz251d_16(late_ger_pzgren)"},
					--{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "sdkfz251d_17(late_ger_pzgren)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "AA",}, unit = "sdkfz222a(late_ger_pzgren)"},
					{priority = 0.5, type = {"Class3", "Armored", "AA",}, unit = "sdkfz234_1(late_ger_pzgren)"},
					{priority = 0.5, type = {"Class3", "Armored", "Support",}, unit = "sdkfz234_3(late_ger_pzgren)"},
					--]]
				
				-- Armored Vehicles
					---[[
					{priority = 1.0, type = {"Class3", "Tank", "Light", "AT",}, unit = "marder2(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Tank", "Light", "AT",}, unit = "marder3m(late_ger_pzgren)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light", "Support",}, unit = "grille_k(late_ger_pzgren)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light", "Artillery",}, unit = "wespe(late_ger_pzgren)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g_late(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "stuh42(late_ger_pzgren)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer4g(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "panzer4h(late_ger_pzgren)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer4j(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48_early(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "panzer4_70_v(late_ger_pzgren)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "hummel(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "sturmpanzer4(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4_75_late_ger(late_ger_pzgren)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer5d(late_ger_pzgren)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "panzer5a_1(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer5a_2(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer5g(late_ger_pzgren)"},
					{priority = 1.5, type = {"Class1", "Tank", "Heavy",}, unit = "tiger1e(late_ger_pzgren)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 0.5, type = {"Class3", "Doctrine", "Tier1", "Vehicle", "MG",}, unit = "doctrine_bmw_r71_section(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_squad_pzgren(late_ger_pzgren)"},
					
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Light", "AT",}, unit = "doctrine_marder3m(late_ger_pzgren)"},
					{priority = 0.5, type = {"Class3", "Doctrine", "Tier2", "Armored", "Mortar",}, unit = "doctrine_sdkfz251c_2_section(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_panzer4h(late_ger_pzgren)"},
					
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Medium", "AT",}, unit = "doctrine_jagdpanzer4_l48(late_ger_pzgren)"},
					--{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Medium", "Artillery",}, unit = "doctrine_hummel(late_ger_pzgren)"},
					{priority = 1.5, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_panzer5a_veteran(late_ger_pzgren)"},
					{priority = 1.5, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_tiger1e_veteran(late_ger_pzgren)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Tank", "Medium", "Support",}, unit = "doctrine_grille_k_section(late_ger_pzgren)"},
					--]]
					
			-- Grenadier Doctrine
				-- Infantry
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_ersatz_late_gren(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_fusilier_late_gren(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pio_late_gren(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_gren_late_gren(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_blau_late_gren(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_sturmgren_late_gren_1(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_sturmgren_late_gren_2(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_sturmgren_late_gren_3(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_volksgren_late_gren(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_volksg_sturm_late_gren_1(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_volksg_sturm_late_gren_2(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_volksg_sturm_late_gren_3(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_begleitgren_late_gren(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_begleit_pio_late_gren(ger)"},
					
					{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_mg_gren(ger)"},
					{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_flamer_gren(ger)"},
					--]]
					
				-- Emplacements
					---[[
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "mg42_lafette(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flak38(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AA",}, unit = "20mm_flakvierling38(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AA",}, unit = "37mm_flak37(late_ger_gren)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "50mm_pak38_late(late_ger_gren)"},
					{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "75mm_pak40(late_ger_gren)"},
					{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "88mm_pak4341(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "88mm_flak36(late_ger_gren)"},

					{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "80mm_sgrw34(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "120mm_sgrw42(late_ger_gren)"},
					
					{priority = 1.0, type = {"Class1", "Cannon", "Support",}, unit = "75mm_leig18(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "150mm_sig33_late(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "105mm_lefh18(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_sk18(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "150mm_sfh18(late_ger_gren)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "170mm_k18(late_ger_gren)"},
					--{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "210mm_morser18(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "150mm_nebelwerfer41(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "300mm_nebelwerfer42(late_ger_gren)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Vehicle", "Artillery",}, unit = "600mm_thor(late_ger_gren)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "bmw_r71(late_ger_gren)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kubelwagen_mg(late_ger_gren)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kfz15(late_ger_gren)"},
					
					{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "blitz3_6_flak30(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Vehicle", "AA",}, unit = "sdkfz7_1(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Vehicle", "AA",}, unit = "sdkfz7_2(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Vehicle", "AT",}, unit = "sdkfz10_pak38(late_ger_gren)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "Artillery",}, unit = "panzerwerfer42(late_ger_gren)"},
					--]]
				
				-- Armored Vehicles
					---[[
					--{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "panzer2c(late_ger_gren)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light",}, unit = "panzer2f(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Tank", "Light", "AT",}, unit = "marder2(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Tank", "Light", "AT",}, unit = "marder3m(late_ger_gren)"},
					{priority = 1.0, type = {"Class1", "Tank", "Light", "AT",}, unit = "hetzer(late_ger_gren)"},
					
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "AT",}, unit = "stug3f(late_ger_gren)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium", "AT",}, unit = "stug3g(late_ger_gren)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium", "AT",}, unit = "stug3g_late(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "Support",}, unit = "stuh42(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "sig33b(late_ger_gren)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48_early(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "panzer4_70_v(late_ger_gren)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "AT",}, unit = "nashorn(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "sturmpanzer4(late_ger_gren)"},
					
					{priority = 0.5, type = {"Class3", "Tank", "Heavy",}, unit = "panzerb2(late_ger_gren)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "m4_75_late_ger(late_ger_gren)"},
					
					{priority = 1.5, type = {"Class1", "Tank", "Heavy", "AT",}, unit = "jagdpanther(late_ger_gren)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Heavy", "AT",}, unit = "ferdinand(late_ger_gren)"},
					
					{priority = 1.5, type = {"Class2", "Tank", "Heavy", "AT",}, unit = "jagdtiger(late_ger_gren)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_grenadier(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_75mm_pak40_towed(late_ger_gren)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Medium", "AT",}, unit = "doctrine_stug3g(late_ger_gren)"},
					
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_88mm_pak4341_towed(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Mortar",}, unit = "doctrine_80mm_mortar_troop(late_ger_gren)"},
					
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium", "AT",}, unit = "doctrine_begleitgren_section(late_ger_gren)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Tank", "Heavy", "AT",}, unit = "doctrine_jagdpanther(late_ger_gren)"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy", "AT",}, unit = "doctrine_jagdtiger_veteran(late_ger_gren)"},
					--]]	
					
			-- Jäger Doctrine
				-- Infantry
					---[[
					--{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_ersatz_late_jg(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_fusilier_late_jg(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pio_late_jg(ger)"},
					--{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_gren_late_jg(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jager_late_jg_1(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_jager_late_jg_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_gebirgs_recon_late_jg_1(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_gebirgs_recon_late_jg_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_gebirgs_recon_late_jg_3(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_gebirgs_late_jg(ger)"},
					
					{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_mg_jg(ger)"},
					--{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_flamer_jg(ger)"},
					--]]
					
				-- Emplacements
					---[[
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "mg42_lafette(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flak38(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flakvierling38(late_ger_jg)"},
					{priority = 0.5, type = {"Class3", "Cannon", "AA",}, unit = "37mm_flak37(late_ger_jg)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "50mm_pak38_late(late_ger_jg)"},
					{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "75mm_pak40(late_ger_jg)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "88mm_flak36(late_ger_jg)"},

					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "80mm_sgrw34(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "120mm_sgrw42(late_ger_jg)"},
					
					{priority = 1.0, type = {"Class2", "Cannon", "Support",}, unit = "75mm_legebig18(late_ger_jg)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "150mm_sig33_late(late_ger_jg)"},
					{priority = 1.0, type = {"Class1", "Cannon", "Artillery",}, unit = "105mm_lefh18(late_ger_jg)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_sfh18(late_ger_jg)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_nebelwerfer41(late_ger_jg)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "300mm_nebelwerfer42(late_ger_jg)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 1.0, type = {"Class3", "Vehicle", "MG",}, unit = "bmw_r71(late_ger_jg)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kubelwagen_mg(late_ger_jg)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kfz15(late_ger_jg)"},
					{priority = 0.5, type = {"Class3", "Vehicle",}, unit = "kettenkrad(late_ger_jg)"},
					
					{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "blitz3_6_flak30(late_ger_jg)"},
					{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz7_1(late_ger_jg)"},
					{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz10_4(late_ger_jg)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "AT",}, unit = "sdkfz10_pak38(late_ger_jg)"},
					{priority = 1.0, type = {"Class3", "Armored", "Artillery",}, unit = "panzerwerfer42(late_ger_jg)"},
					--]]
				
				-- Armored Vehicles
					---[[
					{priority = 1.0, type = {"Class2", "Tank", "Light", "AT",}, unit = "marder2(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Tank", "Light", "AT",}, unit = "marder3m(late_ger_jg)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light", "Support",}, unit = "grille_k(late_ger_jg)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "hetzer(late_ger_jg)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "AT",}, unit = "stug3f(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g_late(late_ger_jg)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "Support",}, unit = "stuh42(late_ger_jg)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48_early(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48(late_ger_jg)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "hummel(late_ger_jg)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "sturmpanzer4(late_ger_jg)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "t3476_43_ger(late_ger_jg)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "t3485_44_ger(late_ger_jg)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Vehicle", "Support",}, unit = "doctrine_kettenkrad_goliath(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_jager(late_ger_jg)"},
					
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Support",}, unit = "doctrine_75mm_legebig18_section(late_ger_jg)"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_75mm_pak40_section_towed(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_t3476_43_ger(late_ger_jg)"},
					
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Mortar",}, unit = "doctrine_80mm_mortar_troop(late_ger_jg)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_t3485_44_ger(late_ger_jg)"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium", "AT",}, unit = "doctrine_jagdpanzer4_l48_section(late_ger_jg)"},
					--]]

			-- Luftwaffe Doctrine
				-- Infantry
					---[[
					{priority = 0.5, type = {"Class3", "Infantry", "Squad",}, unit = "squad_ersatz_late_lw(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_fusilier_late_lw(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pz_recon_late_lw(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_recon_late_lw(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_fallschirm_recon_late_lw_1(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_fallschirm_recon_late_lw_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_fallschirm_recon_late_lw_3(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pz_pio_late_lw(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pio_late_lw_1(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pio_late_lw_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_fallschirm_pio_late_lw_1(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_fallschirm_pio_late_lw_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_jager_late_lw_1(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_jager_late_lw_2(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_lw_1(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pzgren_late_lw_2(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pzgren_late_lw_3(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_lw_1(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_lw_2(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_lw_3(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_begleitgren_late_lw(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_fallschirm_late_lw_1(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_fallschirm_late_lw_2(ger)"},
					
					{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_mg_lw(ger)"},
					--{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_flamer_lw(ger)"},
					--]]
					
				-- Emplacements
					---[[
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "mg42_lafette(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flak38(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Cannon", "AA",}, unit = "37mm_flak37(late_ger_lw)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "50mm_pak38_late(late_ger_lw)"},
					{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "75mm_pak40(late_ger_lw)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "88mm_flak36(late_ger_lw)"},

					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "80mm_sgrw34(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "120mm_sgrw42(late_ger_lw)"},
					
					{priority = 1.0, type = {"Class2", "Cannon", "Support",}, unit = "150mm_sig33_late(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "105mm_lefh18(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "105mm_sk18(late_ger_lw)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_sfh18(late_ger_lw)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_nebelwerfer41(late_ger_lw)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "bmw_r71(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kubelwagen_mg(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kfz15(late_ger_lw)"},
					
					{priority = 0.5, type = {"Class3", "Vehicle", "AA",}, unit = "blitz3_6_flak30(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz7_1(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz7_2(late_ger_lw)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "MG", "Transport",}, unit = "sdkfz250a_1(late_ger_lw)"},
					{priority = 1.0, type = {"Class3", "Armored", "AT",}, unit = "sdkfz250a_11(late_ger_lw)"},
					{priority = 1.0, type = {"Class3", "Armored", "MG", "Transport",}, unit = "sdkfz251d_1(late_ger_lw)"},
					
					{priority = 1.0, type = {"Class2", "Armored", "Mortar",}, unit = "sdkfz251c_2(late_ger_lw)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "Support",}, unit = "sdkfz251d_16(late_ger_lw)"},
					
					{priority = 1.0, type = {"Class2", "Armored", "AA",}, unit = "sdkfz234_1(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Armored", "Support",}, unit = "sdkfz234_3(late_ger_lw)"},
					--]]
				
				-- Armored Vehicles
					---[[
					{priority = 1.0, type = {"Class3", "Tank", "Light", "AT",}, unit = "marder2(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Tank", "Light", "AT",}, unit = "marder3m(late_ger_lw)"},
					{priority = 0.5, type = {"Class2", "Tank", "Light", "Support",}, unit = "grille_k(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light", "Artillery",}, unit = "wespe(late_ger_lw)"},
					
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer3h(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer3j(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer3j1(late_ger_lw)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer3l(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "panzer3m(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "panzer3n(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "Support",}, unit = "panzer3_flamm(late_ger_lw)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "AT",}, unit = "stug3f(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g_late(late_ger_lw)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer4f2(late_ger_lw)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer4g(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "panzer4h(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48_early(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48(late_ger_lw)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "nashorn(late_ger_lw)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "hummel(late_ger_lw)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "sturmpanzer4(late_ger_lw)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "t3476_43_ger(late_ger_lw)"},
					
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "panzer5a_1(late_ger_lw)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer5a_2(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "panzer5g(late_ger_lw)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "tiger1e(late_ger_lw)"},
					--{priority = 1.0, type = {"Class1", "Tank", "Heavy", "Support",}, unit = "sturmtiger(late_ger_lw)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_squad_fj(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Light", "AT",}, unit = "doctrine_marder2(late_ger_lw)"},
					
					{priority = 0.5, type = {"Class3", "Doctrine", "Tier2", "Light", "AT",}, unit = "doctrine_panzer3h(late_ger_lw)"},
					--{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Plane", "Airstrike",}, unit = "doctrine_bf110_250(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium", "AT",}, unit = "doctrine_jagdpanzer4_l48_early(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_panzer4j_commander(late_ger_lw)"},
					
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Vehicle", "AA",}, unit = "doctrine_sdkfz7_2_section(late_ger_lw)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_t3476_43_ger_section(late_ger_lw)"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy", "Support",}, unit = "doctrine_sturmtiger(late_ger_lw)"},
					--{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Heavy", "Artillery",}, unit = "doctrine_600mm_thor(late_ger_lw)"},
					--]]
			
			-- Panzer (Heer) Doctrine
				-- Infantry
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pz_recon_late_pz(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pz_pio_late_pz(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_pz_1(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_pz_2(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_pz_3(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_pz_1(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_pz_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_pz_3(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_begleitgren_late_pz(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_begleit_pio_late_pz(ger)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzlehr_recon_late_mech_pz(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzlehr_pio_late_mech_pz(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzlehr_pzgren_late_mech_pz_1(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzlehr_pzgren_late_mech_pz_2(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzlehr_pzgren_late_mech_pz_3(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzlehr_pz_sturmgren_late_mech_pz(ger)"},
					
					{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_mg_pz(ger)"},
					--{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_flamer_pz(ger)"},
					--]]
					
				-- Emplacements
					---[[
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "mg42_lafette(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flak38(late_ger_pz)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "50mm_pak38_late(late_ger_pz)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "75mm_pak40(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Cannon", "AT",}, unit = "88mm_flak36(late_ger_pz)"},

					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "80mm_sgrw34(late_ger_pz)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "120mm_sgrw42(late_ger_pz)"},
					
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_lefh18(late_ger_pz)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_sfh18(late_ger_pz)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "bmw_r71(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kubelwagen_mg(late_ger_pz)"},
					--{priority = 1.0, type = {"Class3", "Vehicle", "MG",}, unit = "kfz15(late_ger_pz)"},
					
					--{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "blitz3_6_flak30(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz7_1(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz7_2(late_ger_pz)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "MG", "Transport",}, unit = "sdkfz250a_1(late_ger_pz)"},
					{priority = 1.0, type = {"Class3", "Armored", "MG", "Transport",}, unit = "sdkfz251d_1(late_ger_pz)"},
					
					{priority = 1.0, type = {"Class2", "Armored", "AA",}, unit = "sdkfz250a_9(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Armored", "Mortar",}, unit = "sdkfz251c_2(late_ger_pz)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "Support",}, unit = "sdkfz251d_16(late_ger_pz)"},
					--{priority = 0.5, type = {"Class3", "Armored", "AA",}, unit = "sdkfz251d_17(late_ger_pz)"},
					--{priority = 0.5, type = {"Class3", "Armored", "AA",}, unit = "sdkfz251d_21(late_ger_pz)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "AT",}, unit = "sdkfz251d_22(late_ger_pz)"},

					{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "sdkfz234_1(late_ger_pz)"},
					{priority = 1.0, type = {"Class3", "Armored", "AT",}, unit = "sdkfz234_2(late_ger_pz)"},
					{priority = 1.0, type = {"Class3", "Armored", "Support",}, unit = "sdkfz234_3(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Armored", "AT",}, unit = "sdkfz234_4(late_ger_pz)"},
					--]]
				
				-- Armored Vehicles
					---[[
					{priority = 0.5, type = {"Class3", "Tank", "Light",}, unit = "panzer2l(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light", "AT",}, unit = "marder2(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light", "AT",}, unit = "marder3m(late_ger_pz)"},
					--{priority = 0.5, type = {"Class3", "Tank", "Light", "Support",}, unit = "grille_k(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light", "Artillery",}, unit = "wespe(late_ger_pz)"},
					
					--{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer3h(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer3j(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer3l(late_ger_pz)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer3m(late_ger_pz)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g(late_ger_pz)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g_late(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "Support",}, unit = "stuh42(late_ger_pz)"},
					
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer4f1(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer4f2(late_ger_pz)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer4g(late_ger_pz)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "panzer4h(late_ger_pz)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer4j(late_ger_pz)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48_early(late_ger_pz)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48(late_ger_pz)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "panzer4_70_v(late_ger_pz)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "hummel(late_ger_pz)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AA",}, unit = "wirbelwind(late_ger_pz)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AA",}, unit = "ostwind(late_ger_pz)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer5d(late_ger_pz)"},
					{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer5a_1(late_ger_pz)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "panzer5a_2(late_ger_pz)"},
					{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer5g(late_ger_pz)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "tiger1h(late_ger_pz)"},
					{priority = 1.5, type = {"Class1", "Tank", "Heavy",}, unit = "tiger1e_mid(late_ger_pz)"},
					{priority = 2.0, type = {"Class1", "Tank", "Heavy",}, unit = "tiger1e(late_ger_pz)"},
					{priority = 1.5, type = {"Class1", "Tank", "Heavy",}, unit = "tiger1hunt(late_ger_pz)"},
					
					{priority = 2.0, type = {"Class1", "Tank", "Heavy",}, unit = "tiger2p(late_ger_pz)"},
					{priority = 2.5, type = {"Class1", "Tank", "Heavy",}, unit = "tiger2h(late_ger_pz)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_gepanzerte_aufklaer(late_ger_pz)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_panzer2l(late_ger_pz)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_gepanzerte_pionier(late_ger_pz)"},
					
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Tank", "Medium", "AA",}, unit = "doctrine_wirbelwind(late_ger_pz)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_panzer4h(late_ger_pz)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Armored", "AT",}, unit = "doctrine_sdkfz234_2_section(late_ger_pz)"},
					
					{priority = 1.5, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_panzer5a_ace(late_ger_pz)"},
					{priority = 1.5, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_tiger1hunt_ace(late_ger_pz)"},
					{priority = 1.5, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_tiger2h_commander(late_ger_pz)"},
					--]]			
			
			-- Panzer (Waffen) Doctrine
				-- Infantry
					---[[
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_ersatz_late_waf(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_landes_late_waf(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pz_recon_late_pz(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_pz_pio_late_waf(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_waf_1(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_waf_2(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pzgren_late_waf_3(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_waf_1(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_waf_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pzgren_late_mech_waf_3(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_begleitgren_late_waf(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_begleit_pio_late_waf(ger)"},
					
					{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_mg_waf(ger)"},
					{priority = 0.5, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_flamer_waf(ger)"},
					--]]
					
				-- Emplacements
					---[[
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "mg42_lafette(late_ger_lw)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flak38(late_ger_waf)"},
					--{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flakvierling38(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Cannon", "AA",}, unit = "37mm_flak37(late_ger_waf)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "50mm_pak38_late(late_ger_waf)"},
					{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "75mm_pak40(late_ger_waf)"},
					--{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "88mm_pak4341(late_ger_waf)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "88mm_flak36(late_ger_waf)"},

					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "80mm_sgrw34(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "120mm_sgrw42(late_ger_waf)"},
					
					{priority = 1.0, type = {"Class2", "Cannon", "Support",}, unit = "150mm_sig33_late(late_ger_waf)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_lefh18(late_ger_waf)"},
					--{priority = 0.5, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_sk18(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_sfh18(late_ger_waf)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "150mm_nebelwerfer41(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Cannon", "Artillery",}, unit = "300mm_nebelwerfer42(late_ger_waf)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "bmw_r71(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kubelwagen_mg(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "kfz15(late_ger_waf)"},
					
					{priority = 0.5, type = {"Class3", "Vehicle", "AA",}, unit = "blitz3_6_flak30(late_ger_waf)"},
					{priority = 1.0, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz7_1(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "AA",}, unit = "sdkfz7_2(late_ger_waf)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "MG", "Transport",}, unit = "sdkfz250a_1(late_ger_waf)"},
					--{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "sdkfz250a_9(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Armored", "AT",}, unit = "sdkfz250a_11(late_ger_waf)"},
					{priority = 1.0, type = {"Class3", "Armored", "MG", "Transport",}, unit = "sdkfz251d_1(late_ger_waf)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "Mortar",}, unit = "sdkfz251c_2(late_ger_waf)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "Support",}, unit = "sdkfz251d_16(late_ger_waf)"},
					--{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "sdkfz251d_17(late_ger_waf)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "AT",}, unit = "sdkfz251d_22(late_ger_waf)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "Artillery",}, unit = "sdkfz251d_1_stuka(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Armored", "Artillery",}, unit = "panzerwerfer42(late_ger_waf)"},

					{priority = 1.0, type = {"Class2", "Armored", "AA",}, unit = "sdkfz222a(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Armored", "AA",}, unit = "sdkfz231(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Armored", "AA",}, unit = "sdkfz234_1(late_ger_waf)"},
					{priority = 1.0, type = {"Class3", "Armored", "AT",}, unit = "sdkfz234_2(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Armored", "Support",}, unit = "sdkfz234_3(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Armored", "AT",}, unit = "sdkfz234_4(late_ger_waf)"},
					--]]
				
				-- Armored Vehicles
					---[[
					{priority = 1.0, type = {"Class3", "Tank", "Light", "AT",}, unit = "marder2(late_ger_waf)"},
					{priority = 1.0, type = {"Class3", "Tank", "Light", "AT",}, unit = "marder3m(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light", "Support",}, unit = "grille_k(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Tank", "Light", "Artillery",}, unit = "wespe(late_ger_waf)"},
					
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer3j(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "panzer3n(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "AT",}, unit = "stug3f(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3g_late(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "Support",}, unit = "stuh42(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "Support",}, unit = "sig33b(late_ger_waf)"},
					
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer4f2(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium",}, unit = "panzer4g(late_ger_waf)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "panzer4h(late_ger_waf)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer4j(late_ger_waf)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48_early(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48(late_ger_waf)"},
					{priority = 1.5, type = {"Class2", "Tank", "Medium", "AT",}, unit = "panzer4_70_v(late_ger_waf)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "hummel(late_ger_waf)"},
					
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "AA",}, unit = "wirbelwind(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "AA",}, unit = "ostwind(late_ger_waf)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "t3476_43_ger(late_ger_waf)"},
					
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "panzer5d(late_ger_waf)"},
					{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer5a_1(late_ger_waf)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer5a_2(late_ger_waf)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "panzer5g(late_ger_waf)"},
					
					{priority = 2.0, type = {"Class1", "Tank", "Heavy",}, unit = "tiger1e(late_ger_waf)"},
					{priority = 1.5, type = {"Class1", "Tank", "Heavy",}, unit = "tiger1hunt(late_ger_waf)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "tiger2p(late_ger_waf)"},
					{priority = 1.5, type = {"Class1", "Tank", "Heavy",}, unit = "tiger2h(late_ger_waf)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_squad_pzgren(late_ger_waf)"},
					{priority = 0.5, type = {"Class3", "Doctrine", "Tier1", "Armored", "AA",}, unit = "doctrine_sdkfz231(late_ger_waf)"},
					
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Armored", "Support",}, unit = "doctrine_sdkfz234_3_section(late_ger_waf)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium", "AT",}, unit = "doctrine_panzer4_70_v(late_ger_waf)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Tank", "Armored", "Support",}, unit = "doctrine_sdkfz251d_1_stuka(late_ger_waf)"},
					
					{priority = 1.5, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_panzer5a_commander(late_ger_waf)"},
					{priority = 1.5, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_tiger2h(late_ger_waf)"},
					--]]			
			--]====]
		}
	}
}
