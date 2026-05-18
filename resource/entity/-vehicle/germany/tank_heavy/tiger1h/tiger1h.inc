	(include "/properties/tank.ext")
	
	(include "/properties/selection/vehicle_big.inc" scale(0.9))
	{props "tiger1h" "heavy" "vision_lev05" "muzzle_85mm_93mm_sides" "shield" "smoke" "nwg" "detect_tank_heavy"}
	{extension "tiger1h.mdl"}
	(include "tiger1h.ext")
	{targetclass "tank_heavy"}
	{targetSelector "tank_heavy"}
	{collider "tank.heavy"}
	{PatherId "tiger"}

	{extender "enumerator"
		{digit_folder "ger"}
	}

	{sensor
		{visor "main"
			{vision "tank_range_TZF5"}
		}
		{Visor "driver"
			{vision "tank_driver_PzVI"}
		}
		{Visor "around"
			{vision "tank_cupola_DTiger"}
		}
	}

	("crew_5_human_extended")
	("commander_visible")

	{boarder
		{anm "driver"
			{forward	{begin	"board_pz4_driver"} {end "seat_gunner_stand"} {base "open_driver"}}
			{reverse 	{end	"board_pz4_driver" -1} {base "open_driver" -1}}
		}
		{anm "left"
			{forward	{begin	"board_pz-6"} {end "seat_commander_hatch"}}
			{reverse 	{end	"emit_tank_2_hold"}}
		}
		{anm "right"
			{forward	{begin	"board_pz-6"} {end "seat_commander_hatch"}}
			{reverse 	{end	"emit_tank_2_hold"}}
		}
		{anm "armor"
			{forward	{begin	"board_HighArmor"} 	{end "pose_seat_armor_1"}}
			{reverse 	{end	"emit_tank_1"}}
		}
	}

	("seat_human" place(seat1) bone(seat01) door(emit3)  animation(armor))
	("seat_human" place(seat2) bone(seat02) door(emit4)  animation(armor))
	("seat_human" place(seat3) bone(seat03) door(emit5)  animation(armor))
	("seat_human" place(seat4) bone(seat04) door(emit6)  animation(armor))

	{extender "shield"{on}}

	{extender "smokescreen"
		{cooldown 20}
		{itemTags "grenade nbks"}
	}

	{##extender "inventory"
		{box
			{item "bulletger_88_l56 apcbche" 33} 	; 92 rounds
			{item "bulletger_88_l56 he" 46}
			;{item "bulletger_88_l56 apcr" 3}
			{item "bulletger_88_l56 heat" 12}
			{item "ammo mgun_ger belt" 4500}		; 32 belts (150 rounds each)
			{item "geballteladung_3kg" 1}
			{item "nbks grenade" 2}
		}
	}

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "88mm_kwk36_25" filling "ammo bulletger_88_l56 apcbche" 1} ; had 2.5x
			{gunner "gunner"}
			{charger "charger"}
			("abm_dymamic"
				zeroing(5.0)
				dispersion(0.25)
			)
		}
		{place "mgun2"
			{type "coaxial"}
			{weapon "mg34_tank" filled}
			{foresight "foresight5"}
			{gunner "gunner"}
			{charger "charger"}
			("abm_mgun")
			{basic}
		}
		{place "mgun1"
			{type "hull"}
			{weapon "mg34_tank" filled}
			{foresight "foresight4"}
			{gunner "gunner3"}
			{charger "gunner3"}
			("abm_mgun")
			{basic}
			{ai_in_manual}
		}
		{place "mgun"
			{type "commander"}
			{weapon "commander_vision"}
			{foresight "vision_rot"}
			{gunner "commander"}
			{basic}
			{ai_in_manual}
		}
	}

	{mass 57250} ; http://www.alanhamby.com/technical.shtml
	{Chassis
		("tank_trace" fx("tracks_big") step(0.47) len(0.91))
		("mobility_spearhead"
			speed(45.5)			;Max speed when fully accelerated on road, km/h. 45/12 at 3000 rpm, 38/10 at 2500
			reverse(12.14)		;Max speed in reverse on road, km/h.
			mass(54.00)			;Mass, in metric tons.
			power(650) 			;Engine Power
			contact(3.605)		;Track-ground contact length, in m
			wheelbase(2.822)	;Distance between center of left and right side roadwheels, in m
			pressure(1.09)		;Ground pressure on road, in kg/cm^2
			coeff_accel(5)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(5)	;Modifier for steering rate, (0,10]
			coeff_steer_eff(7)	;Modifier for steering efficiency, (0,10]
			fuel(540) 			;Fuel capacity in Litres.
			type(fuel)			;Fuel type. (diesel OR fuel)
			range(85) 			;Range in km, off-road.
			maxslope(70)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -8 15}
		{speed2 4}
	}
	{bone "turret"
		("turret_heavy" power_traverse(12))
	}
	{bone "commander_rot"
		{speed2 180}
	}