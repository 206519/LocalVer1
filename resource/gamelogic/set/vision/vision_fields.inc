; // This script defines the VISION FIELDS of the units. 
; // Units can have several vision fields. For example, a human has the forward main vision field and the peripheral one.
; // 
; // {uncover 15} <- Will spot hidden soldiers in bushes within 15m
; // {h_fov 100}  <- Horizontal field of view arc = 100 degree
; // {v_fov 180}  <- Vertical field of view arc = 180 degree (straight up or down)
; // ("spotting" args 2)  <- Sets the "vision range", defined in generic.inc, so this unit will do spotting twice as far.
; // Or in other terms, the vision distances will be x2


;/*=============== Human Begin ===============*/


{"human"								; // Standard human vision
	{uncover 20}
	{h_fov 100}
	{v_fov 180}
	("spotting" r(1.0))
}

{"human_peripheral"						; // Additional all-round (weaker) situational awareness vision for humans
	{uncover 10}
	{h_fov 240}
	{v_fov 120}
	("spotting" r(0.2))
}

{"human_elite"							; // Soldiers with better vision (elites, officers, snipers)
	{uncover 20}
	{h_fov 120}
	{v_fov 180}
	("spotting" r(1.1))
}

{"human_recon"							; // Soldiers with dedicated best vision (recon soldiers)
	{uncover 20}
	{h_fov 120}
	{v_fov 180}
	("spotting" r(1.25))
}

{"rifle_telescope"						; // Primary vision for sniper scopes
	{uncover 15}
	{h_fov 360}
	{v_fov 120}
	("glass" r(15))
}

{"field_glass"							; // Primary vision for binoculars
	{uncover 30}
	{h_fov 360}
	{v_fov 120}
	("glass" r(30))
}

{"soldier_focused"						; // Secondary vision when soldier is looking through scope or binoculars
	{uncover 10}
	{h_fov 20}
	{v_fov 90}
	("spotting" r(1))					; // Disabled secondary vision when looking through scopes or binoculars
	{wide 2}
}

;/*=============== Human End ===============*/

;/*=============== Cannon Begin ===============*/

{"cannon_main"							; // Standard main gun / gunner vision for cannons
	{uncover 25}
	{h_fov 30}
	{v_fov 170}
	("spotting2" r(1.5) r_human(0.66) veh_vis(60) can_vis(60) can_fire(80))
}

{"cannon_mortar"						; // All mortars
	{uncover 25}
	{h_fov 90}
	{v_fov 170}
	("spotting" r(1))
}

{"cannon_range_200"						; // Gunner Vision - Gun range 200m or less (direct fire only)
	{uncover 25}
	{h_fov 30}
	{v_fov 170}
	("spotting2" r(1.5) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

{"cannon_range_210"						; // Gunner Vision - Gun range 210m (direct fire only)
	{uncover 25}
	{h_fov 30}
	{v_fov 170}
	("spotting2" r(1.5) r_human(0.66) veh_vis(60) can_vis(60) can_fire(80))
}

{"cannon_range_220"						; // Gunner Vision - Gun range 220m (direct fire only)
	{uncover 25}
	{h_fov 30}
	{v_fov 170}
	("spotting2" r(1.5) r_human(0.66) veh_vis(70) can_vis(70) can_fire(90))
}

{"cannon_range_230"						; // Gunner Vision - Gun range 230m (direct fire only)
	{uncover 25}
	{h_fov 30}
	{v_fov 170}
	("spotting2" r(1.5) r_human(0.66) veh_vis(80) can_vis(80) can_fire(100))
}

{"cannon_range_240"						; // Gunner Vision - Gun range 240m (direct fire only)
	{uncover 25}
	{h_fov 8}
	{v_fov 8}
	("spotting2" r(1.5) r_human(0.66) veh_vis(90) can_vis(90) can_fire(110))
}

{"cannon_range_250"						; // Gunner Vision - Gun range 250m (direct fire only)
	{uncover 25}
	{h_fov 7}
	{v_fov 7}
	("spotting2" r(1.5) r_human(0.66) veh_vis(100) can_vis(100) can_fire(120))
}

;/*=============== Cannon End ===============*/

;/*=============== Vehicle Begin ===============*/

{"vehicle_main"							; // Standard vehicle / driver vision
	{uncover 25}
	{h_fov 50}
	{v_fov 100}
	("spotting" r(1))
}

{"vehicle_top_mgun"						; // Top mounted Machine gunners vision (jeeps, halftracks, etc)
	{uncover 25}
	{h_fov 90}
	{v_fov 170}
	("spotting" r(1))
}

{"vehicle_top_turret"					; // Vision for cars with closed top / turret gunner
	{uncover 25}
	{h_fov 30}
	{v_fov 30}
	("spotting" r(0.85))
}

{"vehicle_around"						; // Vehicle peripheral / commander vision
	{uncover 15}
	{h_fov 360}
	{v_fov 170}
	("spotting" r(0.6))
}

{"Varound_poor"						; // Vehicle peripheral / commander vision
	{uncover 15}
	{h_fov 360}
	{v_fov 170}
	("spotting" r(0.45))
}

;/*=============== Vehicle End ===============*/

;/*=============== Tank Begin ===============*/

{"recon_main"							; // Recon gunner vision
	{uncover 25}
	{h_fov 90}
	{v_fov 90}
	("spotting2" r(1.5) r_human(0.85) veh_vis(80) can_vis(80) can_fire(100))
}

{"recon_open"							; // Open Top Recon gunner vision
	{uncover 25}
	{h_fov 90}
	{v_fov 170}
	("spotting" r(1.5))
}

{"tank_main_mg"							; // Gunner vision when main gun is MG
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting" r(1.0))
}

{"tank_main-l"							; // Light tank gunner vision
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting2" r(1.5) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

{"tank_main-m"							; // Medium tank gunner vision
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting2" r(1.5) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

{"tank_main-h"							; // Heavy tank gunner vision
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting2" r(1.5) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

{"tank_main-aa"							; // Tank's that have a AA gun from main weapon
	{uncover 20}
	{h_fov 30}
	{v_fov 170}
	("spotting2" r(1.5) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

{"tank_driver"							; //Tank Driver vision
	{uncover 20}
	{h_fov 45}
	{v_fov 30}
	("spotting" r(0.85))
}


{"tank_driver_PzI"						; //Tank Driver vision
	{uncover 20}
	{h_fov 55}
	{v_fov 20}
	("spotting" r(0.85))
}
{"tank_driver_PzII"						; //Tank Driver vision
	{uncover 20}
	{h_fov 60}
	{v_fov 38}
	("spotting" r(0.85))
}

{"tank_driver_PzIII"						; //Tank Driver vision
	{uncover 20}
	{h_fov 95}
	{v_fov 33}
	("spotting" r(0.85))
}

{"tank_driver_PzIV"						; //Tank Driver vision
	{uncover 20}
	{h_fov 100}
	{v_fov 33}
	("spotting" r(0.85))
}
{"tank_driver_PzV"						; //Tank Driver vision
	{uncover 20}
	{h_fov 120}
	{v_fov 20}
	("spotting" r(0.85))
}
{"tank_driver_PzVI"						; //Tank Driver vision
	{uncover 20}
	{h_fov 65}							; // armored visor down
	{v_fov 20}
	("spotting" r(0.85))
}

{"tank_driver_BT7"						; //Tank Driver vision
	{uncover 20}
	{h_fov 80}
	{v_fov 40}
	("spotting" r(0.85))
}
{"tank_driver_T26"						; //Tank Driver vision
	{uncover 20}
	{h_fov 85}
	{v_fov 35}
	("spotting" r(0.85))
}
{"tank_driver_T60"						; //Tank Driver vision
	{uncover 20}
	{h_fov 60}
	{v_fov 19}
	("spotting" r(0.85))
}
{"tank_driver_T70"						; //Tank Driver vision, includes the periscopes on T70
	{uncover 20}
	{h_fov 80}
	{v_fov 12}
	("spotting" r(0.85))
}
{"tank_driver_T34"						; //Tank Driver vision
	{uncover 20}
	{h_fov 110}
	{v_fov 27}
	("spotting" r(1.00))
}
{"tank_driver_KV"						; //Tank Driver vision
	{uncover 20}
	{h_fov 90}
	{v_fov 35}
	("spotting" r(0.85))
}

{"tank_driver_MaVal"					; //Tank Driver vision
	{uncover 20}
	{h_fov 90}
	{v_fov 38}
	("spotting" r(0.85))
}
{"tank_driver_Stuart"					; //Tank Driver vision
	{uncover 20}
	{h_fov 100}
	{v_fov 25}
	("spotting" r(0.85))
}
{"tank_driver_Stuart5"					; //Tank Driver vision
	{uncover 20}
	{h_fov 60}
	{v_fov 40}
	("spotting" r(0.85))
}

{"tank_driver_Lee"					; //Tank Driver vision
	{uncover 20}
	{h_fov 90}
	{v_fov 60}
	("spotting" r(0.85))
}
{"tank_driver_Sherman"					; //Tank Driver vision
	{uncover 20}
	{h_fov 100}
	{v_fov 30}
	("spotting" r(0.85))
}



{"tank_hull-mg"							; // Tank Hull Machine gunner
	{uncover 20}
	{h_fov 30}
	{v_fov 30}
	("spotting" r(0.85))
}

{"tank_rear-mg"							; // Tank with rear turret machine gun
	{uncover 20}
	{h_fov 40}
	{v_fov 50}
	("spotting" r(0.85))
}

{"tank_hull-mgdt"						; // Tank Hull DT
	{uncover 20}
	{h_fov 15}
	{v_fov 15}
	("spotting" r(1.3))
}


{"tank_back"							; // Tank with rear turret machine gun
	{uncover 20}
	{h_fov 50}
	{v_fov 50}
	("spotting" r(0.85))
}

{"tank_remote-mg"						; // Remote controlled roof Machine gun (Hetzer, Stug3g, etc)
	{uncover 20}
	{h_fov 8}
	{v_fov 8}
	("spotting" r(0.85))
}

{"tank_shielded-mg"						; // Shielded Machine gun (BA-64)
	{uncover 20}
	{h_fov 8}
	{v_fov 30}
	("spotting" r(1))
}


{"tank_around"							; // Tank peripheral / Commander vision
	{uncover 15}
	{h_fov 360}
	{v_fov 170}
	("spotting" r(0.5))
}
{"tank_aroundBad"							; // Tank peripheral / Commander vision
	{uncover 15}
	{h_fov 360}
	{v_fov 22}
	("spotting" r(0.5))
}

{"tank_cupola_38"						; Pz 38(t) cupola (4 slits)
	{uncover 15}
	{h_fov 360}
	{v_fov 18}
	("spotting" r(0.65))
}
{"tank_cupola_Pz34"						; Panzer III and IV cupola (5 slits)
	{uncover 15}
	{h_fov 360}
	{v_fov 30}
	("spotting" r(0.70))
}
{"tank_cupola_DTiger"					;Tiger drum cupola (5 slits)
	{uncover 15}
	{h_fov 360}
	{v_fov 32}
	("spotting" r(0.725))
}
{"tank_cupola_DPanther"					;Panther drum cupola (6 slits)
	{uncover 15}
	{h_fov 360}
	{v_fov 37}
	("spotting" r(0.75))
}
{"tank_cupola_Tiger"					;Tiger cast cupola (7 periscopes)
	{uncover 15}
	{h_fov 360}
	{v_fov 22}
	("spotting" r(0.775))
}
{"tank_slit_BT"							; BT periscope + slits
	{uncover 15}
	{h_fov 240}
	{v_fov 25}
	("spotting" r(0.65))
}
{"tank_slit_T34"						; T-34 periscope + slits
	{uncover 15}
	{h_fov 240}
	{v_fov 12}
	("spotting" r(0.65))
}
{"tank_cupola_T34"						; T-34 cupola (5 periscopes)
	{uncover 15}
	{h_fov 360}
	{v_fov 12}
	("spotting" r(0.70))
}
{"tank_cupola_KV1S"						; KV-1S Cupola (5 periscopes)
	{uncover 15}
	{h_fov 360}
	{v_fov 18}
	("spotting" r(0.725))
}
{"tank_cupolaP_IS"						; IS Cupola (6 periscopes + center periscope)
	{uncover 15}
	{h_fov 360}
	{v_fov 44}
	("spotting" r(0.80))
}

{"tank_cupola_Sherman_split"			; Sherman split hatch cupola (360° periscope)
	{uncover 15}
	{h_fov 100}
	{v_fov 20}
	("spotting" r(0.75))
}
{"tank_cupola_Sherman"					; Sherman cupola (6 windows + 360° periscope)
	{uncover 15}
	{h_fov 360}
	{v_fov 22}
	("spotting" r(0.80))
}
{"tank_around_stuart5"					; Stuart split hatch (no cupola)
	{uncover 15}
	{h_fov 60}
	{v_fov 50}
	("spotting" r(0.70))
}






{"tank_periPT"							; // 2.5x periscope vision
	{uncover 15}
	{h_fov 52}
	{v_fov 52}
	("spotting" r(1.0))
}
{"tank_periM4"							; // 1.0x periscope vision
	{uncover 15}
	{h_fov 18}
	{v_fov 18}
	("spotting" r(1.00))
}
{"tank_periM4A1"						; // 1.44x periscope vision for the 37 & 75 gun, best available to early shermans
	{uncover 15}
	{h_fov 9}
	{v_fov 9}
	("spotting2" r(1.1) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}
{"tank_periM8"							; // 1.8x periscope vision for the 76mm gun
	{uncover 15}
	{h_fov 12}
	{v_fov 12}
	("spotting" r(1.2))
}
{"tank_periM10"							; // 6.0x periscope vision used for gunlaying on 75, 76, 105 tanks
	{uncover 15}
	{h_fov 22}
	{v_fov 22}
	("spotting2" r(1.2) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

;/*=============== Tank End ===============*/

;/*=============== New Setup Begin ===============*/

{"tank_range_200"							; // Gunner Vision - Gun range 200m or less (direct fire only)
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting2" r(1.5) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

{"tank_range_210"							; // Gunner Vision - Gun range 210m (direct fire only)
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting2" r(1.5) r_human(0.66) veh_vis(70) can_vis(70) can_fire(90))
}

{"tank_range_220"							; // Gunner Vision - Gun range 220m (direct fire only)
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting2" r(1.5) r_human(0.66) veh_vis(80) can_vis(80) can_fire(100))
}

{"tank_range_230"							; // Gunner Vision - Gun range 230m (direct fire only)
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting2" r(1.5) r_human(0.66) veh_vis(90) can_vis(90) can_fire(110))
}

{"tank_range_240"							; // Gunner Vision - Gun range 240m (direct fire only)
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting2" r(1.5) r_human(0.66) veh_vis(100) can_vis(100) can_fire(120))
}

{"tank_range_250"							; // Gunner Vision - Gun range 250m (direct fire only)
	{uncover 20}
	{h_fov 15}
	{v_fov 30}
	("spotting2" r(1.5) r_human(0.66) veh_vis(110) can_vis(110) can_fire(130))
}



{"tank_range_TOD"							; // Soviet articulated 2.5x sight of the German type
	{uncover 20}
	{h_fov 26}
	{v_fov 26}
	("spotting2" r(1.5) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

{"tank_range_TMFD"							; // Soviet 2.5x with adjustable range scale
	{uncover 20}
	{h_fov 26}
	{v_fov 26}
	("spotting2" r(1.5) r_human(0.66) veh_vis(70) can_vis(70) can_fire(90))
}

{"tank_range_TSH17"							; // Soviet 4x sight
	{uncover 20}
	{h_fov 16}
	{v_fov 16}
	("spotting2" r(1.7) r_human(0.66) veh_vis(80) can_vis(80) can_fire(100))
}


{"tank_range_TZF5"							; // Gunner Vision - TZF5's with 2.5x magnification
	{uncover 20}
	{h_fov 25}
	{v_fov 25}
	("spotting2" r(1.4) r_human(0.50) veh_vis(50) can_vis(50) can_fire(70))
}
{"tank_range_TZF12"							; // Gunner Vision - 5x magnification
	{uncover 20}
	{h_fov 12}
	{v_fov 12}
	("spotting2" r(1.5) r_human(0.66) veh_vis(80) can_vis(80) can_fire(100))
}


{"tank_range_Zfl3x8"						; // Pak40
	{uncover 20}
	{h_fov 16}
	{v_fov 16}
	("spotting2" r(1.5) r_human(0.66) veh_vis(70) can_vis(70) can_fire(90))
}
{"tank_range_Zfl5x8"						; // Pak40
	{uncover 20}
	{h_fov 16}
	{v_fov 16}
	("spotting2" r(1.5) r_human(0.66) veh_vis(70) can_vis(70) can_fire(90))
}
{"tank_range_Zfl1a"						; // Pak40
	{uncover 20}
	{h_fov 16}
	{v_fov 16}
	("spotting2" r(1.5) r_human(0.66) veh_vis(90) can_vis(90) can_fire(100))
}



{"tank_range_No22"						; // 2pdr, 6 pdr, 17 pdr, 1.9x magnification
	{uncover 20}
	{h_fov 21}
	{v_fov 21}
	("spotting2" r(1.4) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

{"tank_range_No24"						; // late 3x sight
	{uncover 20}
	{h_fov 21}
	{v_fov 21}
	("spotting2" r(1.5) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}

{"tank_range_M40"						; // 1.9x for M3 Stuart
	{uncover 20}
	{h_fov 11}
	{v_fov 11}
	("spotting2" r(1.4) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}
;{"tank_range_M38"						; // early 3x for Sherman
;	{uncover 20}
;	{h_fov 12}
;	{v_fov 12}
;	("spotting2" r(1.3) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
;}
{"tank_range_M55"						; // midwar 3x for Sherman
	{uncover 20}
	{h_fov 12}
	{v_fov 12}
	("spotting2" r(1.4) r_human(0.66) veh_vis(50) can_vis(50) can_fire(70))
}
{"tank_range_M70"						; // 3x for Sherman, 3" GMC M10
	{uncover 20}
	{h_fov 12}
	{v_fov 12}
	("spotting2" r(1.5) r_human(0.66) veh_vis(70) can_vis(70) can_fire(90))
}
{"tank_range_M71"						; // 5x for Sherman 76, M4A1, M4A2, Jumbo
	{uncover 20}
	{h_fov 13}
	{v_fov 13}
	("spotting2" r(1.65) r_human(0.66) veh_vis(70) can_vis(70) can_fire(90))
}
{"tank_range_M76"						; // 3x for 90 mm GMC M36, late Sherman 105
	{uncover 20}
	{h_fov 21.5}
	{v_fov 21.5}
	("spotting2" r(1.4) r_human(0.50) veh_vis(50) can_vis(50) can_fire(70))
}

;// Vive la France
{"tank_range_L710"						; // 3.5x for hull gun Char B1 Bis
	{uncover 20}
	{h_fov 13}
	{v_fov 13}
	("spotting2" r(1.5) r_human(0.66) veh_vis(70) can_vis(70) can_fire(90))
}
{"tank_range_L752"						; // 5x for Sherman 76, M4A1, M4A2
	{uncover 20}
	{h_fov 13}
	{v_fov 13}
	("spotting2" r(1.65) r_human(0.66) veh_vis(70) can_vis(70) can_fire(90))
}


;/*=============== New Setup End ===============*/

;/*=============== Airborne Begin ===============*/

{"airborne_main"						; // Standard plane pilot vision
	{uncover 0} 						; // Planes cannot spot concealed soldiers
	{h_fov 110}
	{v_fov 180}
	("spotting" r(3.5))
}

{"airborne_main_mp"						; // Standard plane pilot vision for multiplayer
	{uncover 0} 						; // Planes cannot spot concealed soldiers
	{h_fov 5}
	{v_fov 180}
	("spotting" r(2.0))
	{wide 2}
}

{"airborne_around"						; // Pilot peripheral vision
	{uncover 0} 						; // Planes cannot spot concealed soldiers
	{h_fov 360}
	{v_fov 360}
	("spotting" r(1))
}

{"airborne_scout"						; // Scout plane vision (better than normal plane)
	{uncover 0} 						; // Planes cannot spot concealed soldiers
	{h_fov 360}
	{v_fov 360}
	("spotting" r(1.5))
}

;/*=============== Airborne End ===============*/

;/*=============== Marine Begin ===============*/

{"marine_main"
	{h_fov 120}
	{v_fov 180}
	("spotting" r(0.85))
}

{"marine_around"
	{h_fov 360}
	{v_fov 180}
	("spotting" r(0.85))
}

{"marine_cannon"
	{h_fov 110}
	{v_fov 110}
	("spotting" r(1.3))
}

{"marine_torpedo"
	{h_fov 40}
	{v_fov 40}
	("spotting" r(0.85))
}

;/*=============== Marine End ===============*/

;/*=============== Other Begin ===============*/

{"noise_detection"								; // hearing aid
	{uncover 5}
	{h_fov 360}
	{v_fov 180}
	("hearing" args 1)
}

{"cover-detector"
	{uncover 5}
	{h_fov 60}
	{v_fov 120}
	("spotting" r(1))
}

{"animal"
	{uncover 2}
	{h_fov 360}
	{v_fov 120}
}

{"searchlight"
	{uncover 100}
	{h_fov 12}
	{v_fov 90}
	("spotting" r(3.0))
}

{"watchtower"
	{h_fov 90}
	{v_fov 90}
	("spotting" r(1))
}

(define "ultra_vision"
	{radius 20}
	{h_fov 360}
	{v_fov 180}
	{uncover %range}
)


{"start_point"	("ultra_vision" range(20))}
{"map_point"	("ultra_vision" range(20))}
{"flag_point"	("ultra_vision" range(20))}

{"none"}