{"atgun.l39"
	{clip
		{viewMin		-40	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	100	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 -2 23}
		{nearoffset 0 -2 18}
		{delta 50}
		{ManualAccuracyZoom}
		{blur_strength 2}
		;{hide_hitmarker 1}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
	}
	{level ;1
		{zoom}
		{linkBone "visor"}
		{distanceset 0}
		{distance 50}		; activation distance
		{delta 30 }			; distance delta, effects number of steps in between near and far
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{camera "human_zoom1.5"}
		{offset 3 -8 4.75}
		{blur_strength 10}
	}
}

{"mg.mg08"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	150	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 40}
		{nearoffset -50 0 25}
		{blur_strength 2}
		{disable_fow 0}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sf12"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 18}
		{distanceSet 0}
		{delta 0}
		{offset 14 0 0}
		{camera "zoom1.5"}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{with_owner
			{viewoff "optic"}
		}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"atgun.itk35"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		70	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 -10 45}
		{nearoffset 0 -10 40}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 18}
		{distanceSet 0}
		{delta 0}
		{offset 10 0 2}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"truck.itk35"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		70	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 10 45}
		{nearoffset -20 10 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 18}
		{distanceSet 0}
		{delta 0}
		{offset 10 -4 4}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"atgun.25mm_m37"
	{clip
		{viewMin		-15}	; camera rotate upward limit (looking down)
		{viewMax		20 }	; camera rotate downward limit (looking up)
		{distanceMin	2}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		;{faroffset 0 0 70}
		;{nearoffset -40 0 60}
		{faroffset 0 0 45}
		{nearoffset -75 0 35}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{offset -4 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_l711"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"truck.bofors"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 10 45}
		{nearoffset -20 10 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 18}
		{distanceSet 0}
		{delta 0}
		{offset 4 -3 14}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"atgun.bofors"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 5 65}
		{nearoffset -30 5 45}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		;{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset -2 0 3}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}


{"atgun.k00"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	250	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 45}
		{nearoffset -75 0 35}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "visor"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset -5 0 0}
		{camera "human_zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_rim_light}
	}
}

{"atgun.k44"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 55}
		{nearoffset -50 0 35}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset -1 0 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"atgun.itk31"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 10 65}
		{nearoffset -50 10 45}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 18}
		{distanceSet 0}
		{delta 0}
		{offset 18 10 2}
		{camera "zoom2"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}