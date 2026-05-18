	(include "/properties/tank.ext")
	
	(include "/properties/selection/vehicle_big.inc" scale(1.0))
	{props "tiger2h" "heavy" "vision_lev05" "muzzle_85mm_93mm_sides" "shield" "smoke" "nvw" "detect_tank_heavy"}
	{extension "tiger2h.mdl"}
	(include "tiger2h.ext")
	{targetclass "tank_heavy"}
	{targetSelector "tank_heavy"}
	{collider "tank.heavy"}
	{PatherId "tiger_b"}

	{extender "enumerator"
		{digit_folder "ger"}
	}

	{sensor
		{visor "main"
			{vision "tank_range_TZF12"}
		}
		{Visor "driver"
			{vision "tank_driver_PzVI"}
		}
		{Visor "around"
			{vision "tank_cupola_Tiger"}
		}
	}

	("crew_5_human_extended")
	("commander_visible")

	{boarder
		{anm "driver"
			{forward {begin "board_pz4_driver"} {end "seat_gunner_stand"} {base "open_driver"}}
			{reverse {end "board_pz4_driver" -1} {base "open_driver" -1}}
		}
		{anm "left"
			{forward {begin "board_Kv"} {end "seat_commander_hatch"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "right"
			{forward {begin "board_tank_right"} {end "seat_commander_hatch"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "armor"
			{forward {begin "board_HighArmor"} {end "pose_seat_armor_1"}}
			{reverse {end "emit_tank_1"}}
		}
	}

	("seat_human" place(seat1) bone(seat01) door(emit3)  animation(armor))
	("seat_human" place(seat2) bone(seat02) door(emit4)  animation(armor))
	("seat_human" place(seat3) bone(seat03) door(emit5)  animation(armor))
	("seat_human" place(seat4) bone(seat04) door(emit6)  animation(armor))

	{extender "shield" {on}}

	{extender "smokescreen"
		{cooldown 5}
		{itemTags "grenade nbks"}
	}

	{##extender "inventory"
		;{weapon "mgun" {mask "mountable"}}
		{box
			{item "bulletger_88_l71 apcbche" 42}	; 86 rounds
			{item "bulletger_88_l71 he" 43}
			{item "ammo mgun_ger belt" 4500}		; 32 belts (150 rounds each)
			;{item "mg34_drum" filled {user "mgun"}}
			{item "geballteladung_3kg" 1}
			{item "nbks grenade" 6}
		}
	}

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "88mm_kwk43" filling "bulletger_88_l71 apcbche" 1}
			{gunner "gunner"}
			{charger "charger"}
			("abm_dymamic"
				zeroing(5.0)
				dispersion(0.20)
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

	{mass 69800}
	{Chassis
		("tank_trace" fx("tracks_big") step(0.47) len(1.16))
		("mobility_spearhead"
			speed(34.6)			;Max speed when fully accelerated on road, km/h.
			reverse(9.20)			;Max speed in reverse on road, km/h.
			mass(69.8)			;Mass, in metric tons.
			power(600) 			;Engine Power
			contact(4.12)		;Track-ground contact length, in m
			wheelbase(2.79)		;Distance between center of left and right side roadwheels, in m
			pressure(1.03)		;Ground pressure on road, in kg/cm^2
			coeff_accel(8)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(9)	;Modifier for steering rate, (0,10]
			coeff_steer_eff(9)	;Modifier for steering efficiency, (0,10]
			fuel(860) 			;Fuel capacity in Litres.
			type(fuel)			;Fuel type. (diesel OR fuel)
			range(90) 			;Range in km, off-road.
			maxslope(70)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -8 15}
		{speed2 4}
	}
	{bone "turret"
		("turret_heavy" power_traverse(13.3))
	}
	{bone "commander_rot"
		{speed2 180}
	}

	{texmod "camo"}