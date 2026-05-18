Purchases["late.usa"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			
			-- Generic
				-- Infantry
					---[[
					--{priority = 0.5, type = {"Class3", "Infantry", "Team", "AT",}, unit = "single_at(usa)"},
					--{priority = 0.5, type = {"Class3", "Infantry", "Team",}, unit = "single_riflegrenade(usa)"},
					--{priority = 0.5, type = {"Class3", "Infantry", "Team",}, unit = "single_flamer(usa)"},
					--{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_medic(usa)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_sniper(usa)"},
					--]]
			
			-- Infantry Doctrine
				-- Infantry
					---[[
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rep_rifle_late_inf_1(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rep_rifle_late_inf_2(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rep_rifle_late_inf_3(usa)"},
					
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_inf_1(usa)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_inf_2(usa)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_inf_3(usa)"},
					
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_inf_4(usa)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_inf_5(usa)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_inf_6(usa)"},
					
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_29_inf_1(usa)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_29_inf_2(usa)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_late_29_inf_3(usa)"},
					
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_eng_late_inf_1(usa)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_eng_late_inf_2(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_rifle_late_inf_1(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_rifle_late_inf_2(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_rifle_late_inf_3(usa)"},
					
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_1st_rifle_late_inf_1(usa)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_1st_rifle_late_inf_2(usa)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_1st_rifle_late_inf_3(usa)"},
					
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_ranger_assault_sub_late_inf(usa)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_ranger_assault_late_inf(usa)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_ranger_special_late_inf(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_mg_inf(usa)"},
					--]]
					
				-- Emplacements
					---[[
					{priority = 1.0, type = {"Class3", "Cannon", "MG",}, unit = "m1917_30cal(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "m2_30cal_tripod(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Cannon", "MG",}, unit = "m2_50cal_tripod(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AA",}, unit = "50cal_quad_m45(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "40mm_m1(late_usa_inf)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "37mm_m3a1(late_usa_inf)"},
					{priority = 1.5, type = {"Class1", "Cannon", "AT",}, unit = "57mm_m1(late_usa_inf)"},
					{priority = 1.5, type = {"Class1", "Cannon", "AT",}, unit = "76mm_m5_m6(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "90mm_m1a1(late_usa_inf)"},
					
					--{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "75mm_m3a3(late_usa_inf)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "75mm_m1a1(late_usa_inf)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "105mm_m3(late_usa_inf)"},

					{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "60mm_m2_late(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "81mm_m1(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Mortar",}, unit = "107mm_m2(late_usa_inf)"},
					
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_m2a1(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "114mm_m1(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_m1(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_m1a1_longtom(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "203mm_m1(late_usa_inf)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "willys_mb_30cal(late_usa_inf)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "willys_mb_50cal(late_usa_inf)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "wc52_50cal(late_usa_inf)"},
					
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "m3a1_scout(late_usa_inf)"},
					{priority = 0.5, type = {"Class3", "Armored", "MG",}, unit = "m2_halftrack(late_usa_inf)"},
					{priority = 0.5, type = {"Class3", "Armored", "MG", "Transport",}, unit = "m3a1_halftrack(late_usa_inf)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "AT",}, unit = "m3a1_gmc(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Armored", "Mortar",}, unit = "m4a1_mortar_carrier(late_usa_inf)"},
					{priority = 0.5, type = {"Class3", "Armored", "Mortar",}, unit = "m21_mortar_carrier(late_usa_inf)"},
					{priority = 0.5, type = {"Class3", "Armored", "Artillery",}, unit = "t19_hmc(late_usa_inf)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "AA",}, unit = "m13_mgmc(late_usa_inf)"},
					{priority = 0.5, type = {"Class3", "Armored", "AA",}, unit = "m15a1_cgmc(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "m16_mgmc(late_usa_inf)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "MG",}, unit = "m20(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Armored", "AT",}, unit = "m8_greyhound(late_usa_inf)"},
					--]]
				
				-- Armored Vehicles
					---[[
					--{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "m5a1_stuart(late_usa_inf)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Light", "Support",}, unit = "m8_hmc(late_usa_inf)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "m24_chaffee(late_usa_inf)"},
					
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4_75_late(late_usa_inf)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a1_75_late(late_usa_inf)"},
					{priority = 1.5, type = {"Class2", "Tank", "Medium",}, unit = "m4a3_75_late(late_usa_inf)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_75w(late_usa_inf)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium", "Support",}, unit = "m4a3_75w_e4_5(late_usa_inf)"},
					
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a1_76w_mid(late_usa_inf)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a1_76w_mid_2(late_usa_inf)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_76w(late_usa_inf)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_76w_2(late_usa_inf)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "m4a3_76w_late(late_usa_inf)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "m4a3_76w_hvss(late_usa_inf)"},
					
					{priority = 1.5, type = {"Class2", "Tank", "Medium", "Support",}, unit = "m4_105(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "Support",}, unit = "m4a3_105(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "m4a3_105_hvss(late_usa_inf)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "m4a3e2_75(late_usa_inf)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "m4a3e2_76(late_usa_inf)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field1(late_usa_inf)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field2(late_usa_inf)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field3(late_usa_inf)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Heavy", "Artillery",}, unit = "m4a3_calliope(late_usa_inf)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "m26_pershing(late_usa_inf)"},
					
					{priority = 1.5, type = {"Class1", "Tank", "Medium", "AT",}, unit = "m10_gmc(late_usa_inf)"},
					{priority = 1.5, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m10_gmc_late(late_usa_inf)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium", "AT",}, unit = "m18_hellcat(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m18_hellcat_late(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36_gmc(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m36_gmc_late(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m36_gmc_t33(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m36b1_gmc_late(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m36b1_gmc_t33(late_usa_inf)"},
					
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "m7b1_hmc(late_usa_inf)"},
					--{priority = 0.5, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "m12_gmc(late_usa_inf)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 0.5, type = {"Class3", "Doctrine", "Tier1", "MG",}, unit = "doctrine_mg_section(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_squad_1st_infantry(late_usa_inf)"},
					
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Mortar",}, unit = "doctrine_60mm_mortar_troop(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_76mm_m5_m6_section_towed(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Mortar",}, unit = "doctrine_107mm_mortar_troop(late_usa_inf)"},
					
					{priority = 0.5, type = {"Class2", "Doctrine", "Tier3", "Medium", "Artillery",}, unit = "doctrine_m12_gmc(late_usa_inf)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_203mm_m1_towed(late_usa_inf)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Medium", "Artillery",}, unit = "doctrine_m4a3_calliope_section(late_usa_inf)"},
					--]]
			
			-- Armor Doctrine
				-- Infantry
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_arm_rep_rifle_late_ad(usa)"},
					
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_arm_recon_late_ad(usa)"},
					
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_arm_rifle_late_ad_1(usa)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_arm_rifle_late_ad_2(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_arm_rifle_mech_late_ad_1(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_arm_rifle_mech_late_ad_2(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_arm_rifle_mech_late_ad_3(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_arm_rifle_mech_late_ad_4(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_arm_rifle_mech_late_ad_5(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_arm_rifle_mech_late_ad_6(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_late_ad_1(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_eng_late_ad_2(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_2nd_arm_recon_late_ad(usa)"},
					
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_2nd_arm_rifle_mech_late_ad_1(usa)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_2nd_arm_rifle_mech_late_ad_2(usa)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_2nd_arm_rifle_mech_late_ad_3(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_mg_ad(usa)"},
					--]]
					
				-- Emplacements
					---[[
					--{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "m1917_30cal(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Cannon", "MG",}, unit = "m2_30cal_tripod(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Cannon", "MG",}, unit = "m2_50cal_tripod(late_usa_ad)"},
					{priority = 0.5, type = {"Class3", "Cannon", "AA",}, unit = "50cal_quad_m45(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "AA",}, unit = "40mm_m1(late_usa_ad)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "37mm_m3a1(late_usa_ad)"},
					{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "57mm_m1(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "76mm_m5_m6(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "90mm_m1a1(late_usa_ad)"},
					
					--{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "75mm_m3a3(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "75mm_m1a1(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "105mm_m3(late_usa_ad)"},

					{priority = 1.0, type = {"Class3", "Cannon", "Mortar",}, unit = "60mm_m2_late(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Mortar",}, unit = "81mm_m1(late_usa_ad)"},
					--{priority = 0.5, type = {"Class3", "Cannon", "Mortar",}, unit = "107mm_m2(late_usa_ad)"},
					
					{priority = 0.5, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_m2a1(late_usa_ad)"},
					{priority = 0.5, type = {"Class3", "Cannon", "Artillery",}, unit = "114mm_m1(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_m1(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_m1a1_longtom(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "203mm_m1(late_usa_ad)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "willys_mb_30cal(late_usa_ad)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "willys_mb_50cal(late_usa_ad)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "wc52_50cal(late_usa_ad)"},
					
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "m3a1_scout(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Armored", "MG",}, unit = "m2_halftrack(late_usa_ad)"},
					{priority = 0.5, type = {"Class3", "Armored", "MG", "Transport",}, unit = "m3a1_halftrack(late_usa_ad)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "AT",}, unit = "m3a1_gmc(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Armored", "Mortar",}, unit = "m4a1_mortar_carrier(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Armored", "Mortar",}, unit = "m21_mortar_carrier(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Armored", "Artillery",}, unit = "t19_hmc(late_usa_ad)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "m13_mgmc(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "m15a1_cgmc(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Armored", "AA",}, unit = "m16_mgmc(late_usa_ad)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "MG",}, unit = "m20(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Armored", "AT",}, unit = "m8_greyhound(late_usa_ad)"},
					--]]
				
				-- Armored Vehicles
					---[[
					{priority = 2.0, type = {"Class1", "Tank", "Light",}, unit = "m5a1_stuart(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Tank", "Light", "Support",}, unit = "m8_hmc(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "m24_chaffee(late_usa_ad)"},
					
					{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "m4_75_late(late_usa_ad)"},
					{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "m4a1_75_late(late_usa_ad)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_75_late(late_usa_ad)"},
					{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_75w(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "Support",}, unit = "m4a3_75w_e4_5(late_usa_ad)"},
					
					{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "m4a1_76w_mid(late_usa_ad)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a1_76w_mid_2(late_usa_ad)"},
					{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_76w(late_usa_ad)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_76w_2(late_usa_ad)"},
					
					{priority = 2.0, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_76w_late(late_usa_ad)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_76w_hvss(late_usa_ad)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "Support",}, unit = "m4_105(late_usa_ad)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium", "Support",}, unit = "m4a3_105(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "Support",}, unit = "m4a3_105_hvss(late_usa_ad)"},
					
					{priority = 2.0, type = {"Class1", "Tank", "Heavy",}, unit = "m4a3e2_75(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Tank", "Heavy",}, unit = "m4a3e2_76(late_usa_ad)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field1(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "m4a3_76w_field2(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field3(late_usa_ad)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Heavy", "Artillery",}, unit = "m4a3_calliope(late_usa_ad)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Heavy",}, unit = "m26_pershing(late_usa_ad)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m10_gmc(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m10_gmc_late(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m18_hellcat(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m18_hellcat_late(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36_gmc(late_usa_ad)"},
					{priority = 2.0, type = {"Class1", "Tank", "Medium", "AT",}, unit = "m36_gmc_late(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36_gmc_t33(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36b1_gmc_late(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m36b1_gmc_t33(late_usa_ad)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "m7b1_hmc(late_usa_ad)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "m12_gmc(late_usa_ad)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Vehicle", "MG",}, unit = "doctrine_recon_jeep(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_squad_2nd_armored(late_usa_ad)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_57mm_m1_towed(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Medium",}, unit = "doctrine_m4_75_late(late_usa_ad)"},
					
					{priority = 2.0, type = {"Class1", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_m4a3_76w_commander(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium", "AT",}, unit = "doctrine_m36b1_veteran(late_usa_ad)"},
					
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_m4a3_76w_fe_ace(late_usa_ad)"},
					{priority = 2.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_m4a3_76w_section(late_usa_ad)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_t26e4(late_usa_ad)"},
					--]]

			-- Airborne Doctrine
				-- Infantry
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_eng_late_ab_1(usa)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_eng_late_ab_2(usa)"},
					
					--{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_82nd_glider_pio_late_ab(usa)"},
					
					--{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_82nd_glider_late_ab_1(usa)"},
					--{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_82nd_glider_late_ab_1(usa)"},
					--{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_82nd_glider_late_ab_3(usa)"},
					
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_101st_glider_late_ab_1(usa)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_101st_glider_late_ab_2(usa)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_101st_glider_late_ab_3(usa)"},
					
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_101st_pathfinder_late_ab(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_101st_eng_late_ab(usa)"},
					
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_101st_late_ab_1(usa)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_101st_late_ab_2(usa)"},
					
					--{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_82nd_recon_late_ab(usa)"},
					
					--{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_82nd_pathfinder_late_ab(usa)"},
					
					--{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_82nd_demo_late_ab(usa)"},
					
					--{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_82nd_late_ab_1(usa)"},
					--{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_82nd_late_ab_2(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_mg_ab(usa)"},
					--]]
					
				-- Emplacements
					---[[
					{priority = 0.5, type = {"Class3", "Cannon", "MG",}, unit = "m1917_30cal(late_usa_ab)"},
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "m2_30cal_tripod(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Cannon", "MG",}, unit = "m2_50cal_tripod(late_usa_ab)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "50cal_quad_m45(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AA",}, unit = "40mm_m1(late_usa_ab)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "37mm_m3a1(late_usa_ab)"},
					{priority = 1.5, type = {"Class1", "Cannon", "AT",}, unit = "57mm_m1(late_usa_ab)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "76mm_m5_m6(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "90mm_m1a1(late_usa_ab)"},
					
					--{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "75mm_m3a3(late_usa_ab)"},
					{priority = 1.5, type = {"Class1", "Cannon", "Support",}, unit = "75mm_m1a1(late_usa_ab)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Support",}, unit = "105mm_m3(late_usa_ab)"},

					{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "60mm_m2_late(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Mortar",}, unit = "81mm_m1(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Mortar",}, unit = "107mm_m2(late_usa_ab)"},
					
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_m2a1(late_usa_ab)"},
					{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "114mm_m1(late_usa_ab)"},
					{priority = 0.5, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_m1(late_usa_ab)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_m1a1_longtom(late_usa_ab)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "203mm_m1(late_usa_ab)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 1.0, type = {"Class3", "Vehicle", "MG",}, unit = "willys_mb_30cal(late_usa_ab)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "willys_mb_50cal(late_usa_ab)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "wc52_50cal(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class3", "Vehicle", "MG",}, unit = "m3a1_scout(late_usa_ab)"},
					--{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "m2_halftrack(late_usa_ab)"},
					--{priority = 1.0, type = {"Class2", "Armored", "MG", "Transport",}, unit = "m3a1_halftrack(late_usa_ab)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "AT",}, unit = "m3a1_gmc(late_usa_ab)"},
					{priority = 0.5, type = {"Class3", "Armored", "Mortar",}, unit = "m4a1_mortar_carrier(late_usa_ab)"},
					--{priority = 1.0, type = {"Class2", "Armored", "Mortar",}, unit = "m21_mortar_carrier(late_usa_ab)"},
					--{priority = 1.0, type = {"Class2", "Armored", "Artillery",}, unit = "t19_hmc(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "m13_mgmc(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "m15a1_cgmc(late_usa_ab)"},
					{priority = 1.0, type = {"Class2", "Armored", "AA",}, unit = "m16_mgmc(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "MG",}, unit = "m20(late_usa_ab)"},
					{priority = 1.0, type = {"Class1", "Armored", "AT",}, unit = "m8_greyhound(late_usa_ab)"},
					--]]
				
				-- Armored Vehicles
					---[[
					{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "m5a1_stuart(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Light", "Support",}, unit = "m8_hmc(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "m24_chaffee(late_usa_ab)"},
					
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4_75_late(late_usa_ab)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a1_75_late(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_75_late(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_75w(late_usa_ab)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium", "Support",}, unit = "m4a3_75w_e4_5(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a1_76w_mid(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a1_76w_mid_2(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_2(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_late(late_usa_ab)"},
					{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "m4a3_76w_hvss(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "m4_105(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "m4a3_105(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "m4a3_105_hvss(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Heavy",}, unit = "m4a3e2_75(late_usa_ab)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "m4a3e2_76(late_usa_ab)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field1(late_usa_ab)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field2(late_usa_ab)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field3(late_usa_ab)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy", "Artillery",}, unit = "m4a3_calliope(late_usa_ab)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "m26_pershing(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m10_gmc(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m10_gmc_late(late_usa_ab)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium", "AT",}, unit = "m18_hellcat(late_usa_ab)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium", "AT",}, unit = "m18_hellcat_late(late_usa_ab)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36_gmc(late_usa_ab)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m36_gmc_late(late_usa_ab)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36_gmc_t33(late_usa_ab)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36b1_gmc_late(late_usa_ab)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m36b1_gmc_t33(late_usa_ab)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "m7b1_hmc(late_usa_ab)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "m12_gmc(late_usa_ab)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Vehicle", "MG",}, unit = "doctrine_recon_jeep(late_usa_ab)"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_squad_101st_airborne(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Armored", "AA",}, unit = "doctrine_m15a1_cgmc(late_usa_ab)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Armored",}, unit = "doctrine_m8_greyhound_section(late_usa_ab)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Artillery",}, unit = "doctrine_155mm_m1_towed(late_usa_ab)"},
					
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium", "AT",}, unit = "doctrine_m18_hellcat_late_section(late_usa_ab)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "AT",}, unit = "doctrine_57mm_m1_battery(late_usa_ab)"},
					{priority = 1.5, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_m4a3e2_75_section(late_usa_ab)"},
					--]]

			-- Mountain Doctrine
				-- Infantry
					---[[
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rep_rifle_late_mtn_1(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rep_rifle_late_mtn_2(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rep_rifle_late_mtn_3(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_cav_late_mtn_1(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_cav_late_mtn_2(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_late_mtn_1(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_late_mtn_2(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_late_mtn_3(usa)"},
					
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_rifle_late_mtn_4(usa)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_rifle_late_mtn_5(usa)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_rifle_late_mtn_6(usa)"},
					
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_eng_late_mtn_1(usa)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_eng_late_mtn_2(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_rifle_late_mtn_1(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_rifle_late_mtn_2(usa)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_vet_rifle_late_mtn_3(usa)"},
					
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_10th_mountain_late_mtn_1(usa)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_10th_mountain_late_mtn_2(usa)"},
					{priority = 1.5, type = {"Class1", "Infantry", "Squad",}, unit = "squad_10th_mountain_late_mtn_3(usa)"},
					
					{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_mg_mtn(usa)"},
					--]]
					
				-- Emplacements
					---[[
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "m1917_30cal(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "m2_30cal_tripod(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "m2_50cal_tripod(late_usa_mtn)"},
					{priority = 0.5, type = {"Class3", "Cannon", "AA",}, unit = "50cal_quad_m45(late_usa_mtn)"},
					{priority = 1.0, type = {"Class1", "Cannon", "AA",}, unit = "40mm_m1(late_usa_mtn)"},
	
					{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "37mm_m3a1(late_usa_mtn)"},
					{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "57mm_m1(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "76mm_m5_m6(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "90mm_m1a1(late_usa_mtn)"},
					
					{priority = 1.5, type = {"Class1", "Cannon", "Support",}, unit = "75mm_m3a3(late_usa_mtn)"},
					{priority = 1.5, type = {"Class1", "Cannon", "Support",}, unit = "75mm_m1a1(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Support",}, unit = "105mm_m3(late_usa_mtn)"},

					{priority = 1.0, type = {"Class2", "Cannon", "Mortar",}, unit = "60mm_m2_late(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Mortar",}, unit = "81mm_m1(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Mortar",}, unit = "107mm_m2(late_usa_mtn)"},
					
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_m2a1(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "114mm_m1(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_m1(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "155mm_m1a1_longtom(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "203mm_m1(late_usa_mtn)"},
					--]]
				
				-- Light Vehicles
					---[[
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "willys_mb_30cal(late_usa_mtn)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "willys_mb_50cal(late_usa_mtn)"},
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "wc52_50cal(late_usa_mtn)"},
					
					{priority = 0.5, type = {"Class3", "Vehicle", "MG",}, unit = "m3a1_scout(late_usa_mtn)"},
					{priority = 0.5, type = {"Class3", "Armored", "MG",}, unit = "m2_halftrack(late_usa_mtn)"},
					{priority = 0.5, type = {"Class3", "Armored", "MG", "Transport",}, unit = "m3a1_halftrack(late_usa_mtn)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "AT",}, unit = "m3a1_gmc(late_usa_mtn)"},
					{priority = 0.5, type = {"Class2", "Armored", "Mortar",}, unit = "m4a1_mortar_carrier(late_usa_mtn)"},
					{priority = 0.5, type = {"Class2", "Armored", "Mortar",}, unit = "m21_mortar_carrier(late_usa_mtn)"},
					{priority = 0.5, type = {"Class3", "Armored", "Artillery",}, unit = "t19_hmc(late_usa_mtn)"},
					
					{priority = 0.5, type = {"Class3", "Armored", "AA",}, unit = "m13_mgmc(late_usa_mtn)"},
					{priority = 0.5, type = {"Class3", "Armored", "AA",}, unit = "m15a1_cgmc(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "m16_mgmc(late_usa_mtn)"},
					
					{priority = 1.0, type = {"Class3", "Armored", "MG",}, unit = "m20(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Armored", "AT",}, unit = "m8_greyhound(late_usa_mtn)"},
					--]]
				
				-- Armored Vehicles
					---[[
					{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "m5a1_stuart(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Tank", "Light", "Support",}, unit = "m8_hmc(late_usa_mtn)"},
					{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "m24_chaffee(late_usa_mtn)"},
					
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4_75_late(late_usa_mtn)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium",}, unit = "m4a1_75_late(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_75_late(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_75w(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "m4a3_75w_e4_5(late_usa_mtn)"},
					
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "m4a1_76w_mid(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "m4a1_76w_mid_2(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_2(late_usa_mtn)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_late(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_hvss(late_usa_mtn)"},
					
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "m4_105(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "m4a3_105(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Tank", "Medium", "Support",}, unit = "m4a3_105_hvss(late_usa_mtn)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "m4a3e2_75(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "m4a3e2_76(late_usa_mtn)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field1(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field2(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "m4a3_76w_field3(late_usa_mtn)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy", "Artillery",}, unit = "m4a3_calliope(late_usa_mtn)"},
					
					--{priority = 1.0, type = {"Class3", "Tank", "Heavy",}, unit = "m26_pershing(late_usa_mtn)"},
					
					{priority = 1.5, type = {"Class1", "Tank", "Medium", "AT",}, unit = "m10_gmc(late_usa_mtn)"},
					{priority = 1.5, type = {"Class1", "Tank", "Medium", "AT",}, unit = "m10_gmc_late(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m18_hellcat(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m18_hellcat_late(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36_gmc(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m36_gmc_late(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36_gmc_t33(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "m36b1_gmc_late(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "AT",}, unit = "m36b1_gmc_t33(late_usa_mtn)"},
					
					{priority = 0.5, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "m7b1_hmc(late_usa_mtn)"},
					--{priority = 1.0, type = {"Class3", "Tank", "Medium", "Artillery",}, unit = "m12_gmc(late_usa_mtn)"},
					--]]
				
				-- Doctrine Units
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "MG",}, unit = "doctrine_mg_section(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Infantry", "Squad",}, unit = "doctrine_squad_10th_mountain(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_m24_chaffee(late_usa_mtn)"},
					
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Cannon", "Support",}, unit = "doctrine_75mm_m1a1_section(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium", "Artillery",}, unit = "doctrine_m7b1_hmc(late_usa_mtn)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Mortar",}, unit = "doctrine_107mm_mortar_troop(late_usa_mtn)"},
					
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Artillery",}, unit = "doctrine_105mm_m2a1_section_towed(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Medium", "AT",}, unit = "doctrine_m10_gmc_late_section(late_usa_mtn)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Artillery",}, unit = "doctrine_155mm_m1a1_longtom_section_towed(late_usa_mtn)"},
					--]]
			--]====]
		}
	}
}
