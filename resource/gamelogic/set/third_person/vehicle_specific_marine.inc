
{"marine.lca"
	{clip
		{viewMin		-20	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	400	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset 0 0 65}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_h_rot1"}
		{offset 185 8 9}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 250}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
	}
}

{"marine.goatley"
	{clip
		{viewMin		-20	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	115	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 30}
		{nearoffset 0 0 20}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
	}
}

{"marine.mo4"
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		45	}	; camera rotate downward limit (looking up)
		{distanceMin	250	}	; camera min distance from object. value / 20 = meters
		{distanceMax	600	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 120}
		{nearoffset 0 0 105}
		{camera "zoom0"}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
		{with_owner
			{viewoff "mast"}
			{viewoff "wire"}
			{viewoff "flag"}
		}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{offset 100 -10 5}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 300}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom2"}
		{ManualAccuracyZoom}
		{blur_strength 5}
	}
}

{"marine.mimosa"
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		45	}	; camera rotate downward limit (looking up)
		{distanceMin	250	}	; camera min distance from object. value / 20 = meters
		{distanceMax	500	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 120}
		{nearoffset 0 0 80}
		{camera "zoom0"}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
		{with_owner
		}
	}
}

{"marine.drifter_eng"
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		45	}	; camera rotate downward limit (looking up)
		{distanceMin	300	}	; camera min distance from object. value / 20 = meters
		{distanceMax	600	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 100 140}
		{nearoffset 0 100 120}
		{camera "zoom0"}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
		{with_owner
		}
	}
}


{"marine.boadicea"
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		45	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	1200}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 300}
		{nearoffset 0 0 250}
		{camera "zoom0"}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
		{with_owner
			{viewoff "mast_front_cables"}
			{viewoff "mast_rear_cables"}
			{viewoff "mast_front"}
			{viewoff "mast_rear"}
		}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{offset 0 0 0}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 300}
		{distanceSet 1}
		{delta 0}
		{no_rim_light}
		{camera "zoom2"}
		{ManualAccuracyZoom}
		{blur_strength 5}
	}
}