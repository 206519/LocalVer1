	(include "/properties/tank_assaultgun.ext")
	
	(include "/properties/selection/vehicle.inc"  scale(1.1))
	{props "stug3g" "td" "medium" "-turret" "mantlet" "vision_lev03" "muzzle_75mm_76mm_sides" "shield"}
	{extension "stug3g.mdl"}
	(include "stug3g.ext")
	{PatherId "stug3g"}
	{targetclass "tank_medium"}
	{targetSelector "tank_medium"}

	{extender "enumerator"
		{digit_folder "ger"}
	}

	("crew_4_human")
	("charger_visible")

	{boarder
		{anm "left"
			{forward	{begin	"board_tank_left"} {end "pose_mgun_pz6"}}
			{reverse 	{end	"emit_tank_1"}}
		}
		{anm "right"
			{forward	{begin	"board_tank_left"} {end "pose_mgun_pz6"}}
			{reverse 	{end	"emit_tank_2_hold"}}
		}
		{anm "armor"
			{forward	{begin	"board_MiddleArmor"} 	{end "pose_seat_armor_2"}}
			{reverse 	{end	"emit_tank_1"}}
		}
		{anm "armor1"
			{forward	{begin	"board_MiddleArmor"} {end "pose_seat_armor_1"}}
			{reverse 	{end	"emit_tank_1"}}
		}
		{anm "armor2"
			{forward	{begin	"board_lowArmor"} {end "pose_seat_armor_1"}}
			{reverse 	{end	"emit_tank_1"}}
		}
	}

	("seat_human" place(seat1) bone(seat01) door(emit3)  animation(armor))
	("seat_human" place(seat2) bone(seat02) door(emit4)  animation(armor))
	("seat_human" place(seat3) bone(seat03) door(emit5)  animation(armor2))
	("seat_human" place(seat4) bone(seat04) door(emit6)  animation(armor1))

	{sensor
		{visor "main"
			{vision "tank_range_Zfl5x8"}
			{bone "visor1"}
		}
		{Visor "driver"
			{vision "tank_driver_PzII"}
		}
		{visor "around"
			{vision "tank_cupola_Tiger"}
			{bone "visor"}
		}
	}

	{extender "shield" {on}}

	{extender "inventory"
		{weapon "mgun" {mask "mountable"}}
		{box
			{item "bulletger_75_l43 apcbche" 26} 	; 54 rounds
			{item "bulletger_75_l43 he" 27}
			;{item "bulletger_75_l43 apcr" 2}
			;{item "bulletger_75_l43 heatb" 10}
			{item "ammo mgun_ger drum" 550}			; 12 drums (50 rounds each)
			{item "mg34_drum" filling "ammo mgun_ger drum" 50 {user "mgun"}}
			{item "geballteladung_3kg" 1}
		}
	}

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "75mm_stuk40_l48" filling "bulletger_75_l43 apcbche" 1}
			{gunner "gunner"}
			{charger "commander"}
			("abm_dymamic"
				zeroing(5.0)
				dispersion(0.20)
			)
		}
		{place "mgun"
			{type "aa"}
			{gunner "charger"}
			{charger "charger"}
			{LinkBone "mgun_rot"}
			{LinkAnimation "off"}
			("abm_mgun")
			{rotate}
			{basic}
			{ai_in_manual}
		}
	}

	{mass 23900}
	{Chassis
		("tank_trace" fx("tracks_mid") step(0.52) len(1.05))
		("mobility_spearhead"
			speed(40.0)			;Max speed when fully accelerated on road, km/h.
			reverse(5.5)		;Max speed in reverse on road, km/h.
			mass(23.9)			;Mass, in metric tons.
			power(272) 			;Engine Power
			contact(2.86)		;Track-ground contact length, in m
			wheelbase(2.51)		;Distance between center of left and right side roadwheels, in m
			pressure(1.04)		;Ground pressure on road, in kg/cm^2
			coeff_accel(5)		;Modifier for acceleration, (0,10]
			coeff_steer_rate(5)	;Modifier for steering, (0,10]
			coeff_steer_eff(4)	;Modifier for steering, (0,10]
			fuel(310) 			;Fuel capacity in Litres.
			type(fuel)			;Fuel type. (diesel OR fuel)
			range(95) 			;Range in km, off-road.
			maxslope(58)		;Max slope (tan(gradient in degrees) * 100)
		)
	}

	{bone "gun_rot"
		{limits -6 20}
		{speed2 6}
	}
	{bone "turret"
		{limits -10 10}
		{speed2 8}
	}
