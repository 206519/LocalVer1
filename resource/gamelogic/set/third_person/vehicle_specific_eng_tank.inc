{"vehicle.jeep_mg_eng"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 57}
		{nearoffset -75 0 42}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "basis"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset -21 15 31}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.universal_carrier"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -30 0 45}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "basis"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset -20 0 40}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
	}
}

{"vehicle.universal_carrier_2mg"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -30 0 45}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_a_rot1"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{offset -15 8 9}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
	}
}

{"vehicle.mmg_carrier"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -30 0 45}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_1_rot1"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{offset -15 8 9}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
	}
}

{"vehicle.aec_mk1" ; 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -45 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 3 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no30"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.aec_mk2" ; 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -45 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 3 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no39mk4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.aec_mk3" ; 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -45 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 3 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no50mk2"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.daimler_dingo"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -30 0 35}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset -15 0 8}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
	}
}

{"vehicle.daimler" ; 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		25	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -45 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 3 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no30"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.humber" ; 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		25	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -45 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 3 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no30"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.humber_recon"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		35 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 30}
		{nearoffset -35 0 15}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset -15 0 10}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
	}
}

{"vehicle.humber_scout"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		35 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_h_rot1"}
		{faroffset 0 0 30}
		{nearoffset -35 0 15}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_h_rot1"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset -15 0 10}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
	}
}

{"vehicle.morris_c9_aa"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		70 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 -5 50}
		{nearoffset 0 -5 30}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa_bp"}
		;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset 2 0 0}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.morris_cs9"
	{clip
		{viewMin		-20}	; camera rotate upward limit (looking down)
		{viewMax		35 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 30}
		{nearoffset -35 0 15}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset -15 0 15}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
	}
}

{"vehicle.staghound_mk1" ; 
	{clip
		{viewMin		-10	}	; camera rotate upward limit (looking down)
		{viewMax		40	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -45 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 3 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m54"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.staghound_mk2" ; 
	{clip
		{viewMin		-10	}	; camera rotate upward limit (looking down)
		{viewMax		40	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -45 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 3 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no30"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.staghound_mk3" ; 
	{clip
		{viewMin		-10	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -45 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 3 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no50mk2"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.staghound_aa" ; 
	{clip
		{viewMin		-10	}	; camera rotate upward limit (looking down)
		{viewMax		70	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -45 0 65}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 2 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m18"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		;{soundEffect "enclosed_vehicle"}
	}
}

{"tank.matilda1"
	{clip
		{viewMin		-16	}	; camera rotate upward limit (looking down)
		{viewMax		26	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	275	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset -20 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 -2 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no19"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 60}
		{distanceSet 1}
		{delta 0}
		{no_rim_light}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.vickers_aa"
	{clip
		{viewMin		-11	}	; camera rotate upward limit (looking down)
		{viewMax		67	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	250	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 30}
		{nearoffset 0 0 15}
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
		{offset 14 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa_bp"}
		;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 50}
		{distanceSet 1}
		{delta 0}
		{no_rim_light}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_rim_light}
	}
}

{"tank.light_tank_mk8"
	{clip
		{viewMin		-11	}	; camera rotate upward limit (looking down)
		{viewMax		26	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no33"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 100}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.stuart5_recce"
	{clip
		{viewMin		-16}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -29 0 47}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{ManualAccuracyZoom}
	}
}

{"tank.cruiser_2pdr" ; 
	{clip
		{viewMin		-16	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no24b"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}
{"tank.cruiser_cs" ; 
	{clip
		{viewMin		-16	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no22"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.crusader_aa_mk1"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		71	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 45}
		{nearoffset 0 0 30}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa_bp"}
		;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"tank.crusader_aa_mk2"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		71	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset 0 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 4 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa_bp"}
		;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
		{with_owner
			{viewoff "crosshair"} ; removes to prevent clipping
		}
	}
}

{"tank.matilda2" ; 
	{clip
		{viewMin		-16	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset 0 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no124"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}
{"tank.matilda2_cs" ; 
	{clip
		{viewMin		-16	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset 0 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no22"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.valentine_2pdr" ; 
	{clip
		{viewMin		-10	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset 0 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no30"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.valentine_cs" ; 
	{clip
		{viewMin		-10	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset 0 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no22"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.valentine_6pdr" ; 
	{clip
		{viewMin		-10	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset 0 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no39mk4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
		{with_owner
			{viewoff "mgun_coax"} ; removes shield to prevent clipping
		}
	}
}

{"tank.valentine_75" ; 
	{clip
		{viewMin		-10	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset 0 0 20}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no50mk1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.valentine_17pdr" ; 
	{clip
		{viewMin		-10	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "gun_rot"}
		{faroffset 0 0 30}
		{nearoffset 0 0 15}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no51"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.cromwell" ; 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset -55 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no50mk2"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.cromwell_95" ; 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset -55 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no48"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.comet" ; 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 -3 35}
		{nearoffset -55 -3 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no57"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.challenger" ; 
	{clip
		{viewMin		-12	}	; camera rotate upward limit (looking down)
		{viewMax		20	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset -55 0 30}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no43mk3l"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom6"}
	}
}

{"tank.ram_kangaroo"
	{clip
		{viewMin		-16}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -60 0 60}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{ManualAccuracyZoom}
	}
}

{"tank.churchill_2pdr" ; 
	{clip
		{viewMin		-13	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no30"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.churchill_6pdr_early" ; 
	{clip
		{viewMin		-13	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no39mk2s"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
		{with_owner
			{viewoff "mgun_coax"} ; removes shield to prevent clipping
		}
	}
}

{"tank.churchill_6pdr" ; 
	{clip
		{viewMin		-13	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no39mk4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
		{with_owner
			{viewoff "mgun_coax"} ; removes shield to prevent clipping
		}
	}
}

{"tank.churchill_avre" ; 
	{clip
		{viewMin		-13	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 2 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no39mk4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
		{with_owner
			{viewoff "mgun_coax"} ; removes shield to prevent clipping
		}
	}
}

{"tank.churchill_75" ; 
	{clip
		{viewMin		-13	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no50mk1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
		{with_owner
			{viewoff "mgun_coax"} ; removes shield to prevent clipping
		}
	}
}

{"tank.churchill_95" ; 
	{clip
		{viewMin		-13	}	; camera rotate upward limit (looking down)
		{viewMax		21	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 40}
		{nearoffset 0 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 1 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no48"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 75}
		{distanceSet 1}
		{delta 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
		{with_owner
			{viewoff "mgun_coax"} ; removes shield to prevent clipping
		}
	}
}

{"tank.grant"
	{clip
		{viewMin		-20	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis" }
		{faroffset 0 0 80}
		{nearoffset -50 0 65}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m19a1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{no_rim_light}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.sherman_eng_dv" ; 
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		25 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	300}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset -50 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 0 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m51"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.sherman1b" ; 
	{clip
		{viewMin		-10}	; camera rotate upward limit (looking down)
		{viewMax		35 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	300}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset -50 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 0 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m72d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.sherman_eng_75_early" ; 
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		25 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset -50 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m51"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.sherman_eng_75_late" ; 
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		25 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset -50 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m70f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.sherman_c" ; 
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		25 }	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset -50 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no43mk3l"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;3
		{camera "zoom6"}
	}
}

{"tank.sherman2a" ; 
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		25 }	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 35}
		{nearoffset -50 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 0 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m71d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.m10_sp" ; 
	{clip
		{viewMin		-10}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 -6.5 35}
		{nearoffset -60 -6.5 22}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 0 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m71d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{no_rim_light}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{soundEffect "opentop_vehicle"}
	}
}

{"tank.m10c_sp" ;
	{clip
		{viewMin		-10}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 -6.5 35}
		{nearoffset -60 -6.5 22}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 0 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no43"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{no_rim_light}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 15}
		{soundEffect "opentop_vehicle"}
	}
}