{"atgun.oerlikon"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		70	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	150	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 15 -5 40}
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
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_eng_aa_bp"}
		;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 18}
		{distanceSet 0}
		{delta 0}
		{offset 10 0 2}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{with_owner
			{viewoff "magazine"} ; removes shield to prevent clipping
		}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"atgun.40mm_qf2"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	0	}	; camera min distance from object. value / 20 = meters
		{distanceMax	250	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -35 0 30}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no19"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{with_owner {viewoff "shield1"}} ; removes shield to prevent clipping
		{soundEffect "opentop_vehicle"}
	}
}

{"atgun.57mm_qf6"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -28 0 30}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no19"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"atgun.57mm_qf6_mk4"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 50}
		{nearoffset -28 0 30}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no22"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"atgun.76mm_qf17_25"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	0	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 55}
		{nearoffset -70 0 45}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no19"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{with_owner {viewoff "shield"}} ; removes shield to prevent clipping
		{soundEffect "opentop_vehicle"}
	}
}

{"atgun.76mm_qf17"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	0	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 55}
		{nearoffset -70 0 45}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no51"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{with_owner {viewoff "shield"}} ; removes shield to prevent clipping
		{soundEffect "opentop_vehicle"}
	}
}

{"atgun.94mm_qf_3_7_aa"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		80	}	; camera rotate downward limit (looking up)
		{distanceMin	0	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -70 0 50}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no19"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 1}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom1.9"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 0}
		{no_rim_light}
		{with_owner {viewoff "shield"}} ; removes shield to prevent clipping
		{soundEffect "opentop_vehicle"}
	}
}