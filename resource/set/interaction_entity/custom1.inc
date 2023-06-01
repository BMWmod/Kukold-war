



{"vehicle"
	{on spawn
		{if not tagged "ukr"
			{if tex_mod "ukr"
				{tags add "ukr"}
				{if rand 0.25 {delay 0.1 {tex_mod "ukr2"} } }
				{if rand 0.375 {delay 0.1 {tex_mod "ukr3"} } }					
				{if rand 0.375 {delay 0.1 {tex_mod "ukr4"} } }

		} }
		{if not tagged "rus"
			{if tex_mod "rus"
				{tags add "rus"}
				{if rand 0.25 {delay 0.1 {tex_mod "rus2"} } }
				{if rand 0.375 {delay 0.1 {tex_mod "rus3"} } }
				{if rand 0.375 {delay 0.1 {tex_mod "rus4"} } }
		} }
		{if not tagged "dnr"
			{if tex_mod "dnr"
				{tags add "dnr"}
				{if rand 0.25 {delay 0.1 {tex_mod "dnr2"} } }
				{if rand 0.375 {delay 0.1 {tex_mod "dnr3"} } }
				{if rand 0.375 {delay 0.1 {tex_mod "dnr4"} } }
		} }
		{if not tagged "cvk"
			{if tex_mod "cvk"
				{tags add "cvk"}
				{if rand 0.25 {delay 0.1 {tex_mod "cvk2"} } }
				{if rand 0.375 {delay 0.1 {tex_mod "cvk3"} } }
				{if rand 0.375 {delay 0.1 {tex_mod "cvk4"} } }
		} }
	}
}
{"bayraktar_tb2"				
	{on "link_flare_fx" overload}		
	{on "eject_all" overload}		
	{on "add_movement_sound" overload			
		{link_sound "engine_start"		"vehicle/Helicopter/en_start"	}			
		{link_sound "engine_work"		"vehicle/airborne/fw_work"	  	}			
		{link_sound "engine_stop"		"vehicle/Helicopter/en_stop"	}		
	}		
	{on "landing" 			
		{ani_stop "ols_work"}		}		
		{on "u_w_Laser_TD_damaged"			
			{weapon_work "ptur" 0}			
				{tags add "no_missile_control"}		
				}		
		{on "u_w_radarX_damaged"			
			{weapon_work "bomber" 0}		
		}		
		{on "u_w_electronics_damaged"			
			{weapon_work "ptur" 0}			
			{call "fall"}		
		}		
		{on "engine_on"			
			{if not "engine_started"				
				{set "engine_started" 1}				
					{play_sound "engine_start"}				
					{ani_play "engine_start" callback}			
			}		
		}		
		{on animation_end "engine_start"			
					{ani_play "engine_work" loop}			
					{play_sound "engine_work" 1}			
					{ani_play "ols_work" 0.3 loop}		
		}		
		{on engine off overload			
					{call "engine_stop"}			
					{play_sound "engine_stop"}		
		}		
		{on "engine_stop"			
			{kill_delay "engine_stopped"}			
			{if "engine_started"				
				{set "engine_started" 0}				
					{ani_stop "engine_start"}				
					{ani_stop "engine_work"}				
					{ani_play "engine_stop"}				
					{stop_sound "engine_start"}				
					{stop_sound "engine_work"}				
					{stop_sound "fly"}			
		}
	}
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "hellfire_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  				 			
	}		
	}	
	}	

	

{"bayraktar_tb2_bomb"				
	{on "link_flare_fx" overload}		
	{on "eject_all" overload}		
	{on "add_movement_sound" overload			
		{link_sound "engine_start"		"vehicle/Helicopter/en_start"	}			
		{link_sound "engine_work"		"vehicle/airborne/fw_work"	  	}			
		{link_sound "engine_stop"		"vehicle/Helicopter/en_stop"	}		
	}		
	{on "landing" 			
		{ani_stop "ols_work"}		}		
		{on "u_w_Laser_TD_damaged"			
			{weapon_work "ptur" 0}			
				{tags add "no_missile_control"}		
				}		
		{on "u_w_radarX_damaged"			
			{weapon_work "bomber" 0}		
		}		
		{on "u_w_electronics_damaged"			
			{weapon_work "ptur" 0}			
			{call "fall"}		
		}		
		{on "engine_on"			
			{if not "engine_started"				
				{set "engine_started" 1}				
					{play_sound "engine_start"}				
					{ani_play "engine_start" callback}			
			}		
		}		
		{on animation_end "engine_start"			
					{ani_play "engine_work" loop}			
					{play_sound "engine_work" 1}			
					{ani_play "ols_work" 0.3 loop}		
		}		
		{on engine off overload			
					{call "engine_stop"}			
					{play_sound "engine_stop"}		
		}		
		{on "engine_stop"			
			{kill_delay "engine_stopped"}			
			{if "engine_started"				
				{set "engine_started" 0}				
					{ani_stop "engine_start"}				
					{ani_stop "engine_work"}				
					{ani_play "engine_stop"}				
					{stop_sound "engine_start"}				
					{stop_sound "engine_work"}				
					{stop_sound "fly"}			
		}
	}
}
{"an2"				
	{on "link_flare_fx" overload}		
	{on "eject_all" overload}		
	{on "add_movement_sound" overload			
		{link_sound "engine_start"		"vehicle/Helicopter/en_start"	}			
		{link_sound "engine_work"		"vehicle/airborne/fw_work"	  	}			
		{link_sound "engine_stop"		"vehicle/Helicopter/en_stop"	}		
	}		
	{on "landing" 			
		{ani_stop "ols_work"}		}		
		{on "u_w_Laser_TD_damaged"			
			{weapon_work "ptur" 0}			
				{tags add "no_missile_control"}		
				}		
		{on "u_w_radarX_damaged"			
			{weapon_work "bomber" 0}		
		}		
		{on "u_w_electronics_damaged"			
			{weapon_work "ptur" 0}			
			{call "fall"}		
		}		
		{on "engine_on"			
			{if not "engine_started"				
				{set "engine_started" 1}				
					{play_sound "engine_start"}				
					{ani_play "engine_start" callback}			
			}		
		}		
		{on animation_end "engine_start"			
					{ani_play "engine_work" loop}			
					{play_sound "engine_work" 1}			
					{ani_play "ols_work" 0.3 loop}		
		}		
		{on engine off overload			
					{call "engine_stop"}			
					{play_sound "engine_stop"}		
		}		
		{on "engine_stop"			
			{kill_delay "engine_stopped"}			
			{if "engine_started"				
				{set "engine_started" 0}				
					{ani_stop "engine_start"}				
					{ani_stop "engine_work"}				
					{ani_play "engine_stop"}				
					{stop_sound "engine_start"}				
					{stop_sound "engine_work"}				
					{stop_sound "fly"}			
		}
	}
}


	{"saab_j39"
("air_multibarrel_launcher" weapon(ptur2) shooter(shooter)missile(aim-120c7) flashbarrel(shooter))				}

	{"a4_skyhawk"
("air_multibarrel_launcher" weapon(ptur1) shooter(shooter_) missile(agm-65g) flashbarrel(shooter_))				}

{"su24_x59"
("air_multibarrel_launcher" weapon(ptur4) shooter(Shooter_x59_) missile(x59m) flashbarrel(Shooter_x59_))				
}
{"mig-21bis_x59"
("air_multibarrel_launcher" weapon(nar1) shooter(Shooter_0) missile(x59m) flashbarrel(Shooter_x59_))				
}		
{"su24_x31"
("air_multibarrel_launcher" weapon(ptur4) shooter(Shooter_r31_) missile(x31p) flashbarrel(Shooter_r31_))			
}	
{"su24_x25"
("air_multibarrel_launcher" weapon(ptur) shooter(shooter_) missile(x_25ml_su25_ammo) flashbarrel(shooter_))				
}
{"su24_agm88"
("air_multibarrel_launcher" weapon(ptur4) shooter(AGM-86-88_shooter_) missile(agm88) flashbarrel(AGM-86-88_shooter_))			
}
	{"harrier_support"
("air_multibarrel_launcher" weapon(ptur_agm) shooter(shooter_) missile(agm-65g) flashbarrel(shooter_))				}



{"tor"		
	("Shilka_sound")	

	("radar_lifting90_params" triplex(additional_triplex) visor(visor3) anim_rotate(radar_loop) anim_lift(radar_loop) marker(antirad_generator_rus))	

	{on spawn			
		{add_view	 "flash_gun_big"	"shootera1"	"Missile1"}			
		{add_view	 "flash_gun_big"	"shootera2"	"Missile2"}			
		{add_view	 "flash_gun_big"	"shootera3"	"Missile3"}			
		{add_view	 "flash_gun_big"	"shootera4"	"Missile4"}			
		{add_view	 "flash_gun_big"	"shootera5"	"Missile5"}			
		{add_view	 "flash_gun_big"	"shootera6"	"Missile6"}			
		{add_view	 "startsmoke_big"	"shooter1"	"tail1"}			
		{add_view	 "startsmoke_big"	"shooter2"	"tail2"}		
		{add_view	 "startsmoke_big"	"shooter3"	"tail3"}		
		{add_view	 "startsmoke_big"	"shooter4"	"tail4"}		
		{add_view	 "startsmoke_big"	"shooter5"	"tail5"}		
		{add_view	 "startsmoke_big"	"shooter6"	"tail6"}		
	}
		
	{on fire "ptur1" 			
		(define "fire_barrel"	
			{ani_play "fire%0"}				
			{delay 0.65 						
				{spawn "9m330_1_carrier" "missile%0"   x}						
				{bone hide "Missile%0"}						
				{volumes "ammo_storage_main%0" disable contact bullet blast}					
			}		
			{ani_play "cover%0"}					
			{view start "shooter%0"}					
			{delay 0.3						
				{view pause "shooter%0"}						
				{view start "shootera%0"}						
				{delay 0.3							
					{view pause "shootera%0"}						
				}					
			}			
		)				
		{if name "00" ("fire_barrel" args 1)				 
		else name "01" ("fire_barrel" args 2)				  
		else name "02" ("fire_barrel" args 3)				
		else name "03" ("fire_barrel" args 4)				 
		else name "04" ("fire_barrel" args 5)				 
		else name "05" ("fire_barrel" args 6)
		else name "06" ("fire_barrel" args 7)				 
		else name "07" ("fire_barrel" args 8)				
		}		
	}			
}


{"tor_ukr"		
	("Shilka_sound")	

	("radar_lifting90_params" triplex(additional_triplex) visor(visor3) anim_rotate(radar_loop) anim_lift(radar_loop) marker(antirad_generator_usa))	

	{on spawn			
		{add_view	 "flash_gun_big"	"shootera1"	"Missile1"}			
		{add_view	 "flash_gun_big"	"shootera2"	"Missile2"}			
		{add_view	 "flash_gun_big"	"shootera3"	"Missile3"}			
		{add_view	 "flash_gun_big"	"shootera4"	"Missile4"}			
		{add_view	 "flash_gun_big"	"shootera5"	"Missile5"}			
		{add_view	 "flash_gun_big"	"shootera6"	"Missile6"}			
		{add_view	 "startsmoke_big"	"shooter1"	"tail1"}			
		{add_view	 "startsmoke_big"	"shooter2"	"tail2"}		
		{add_view	 "startsmoke_big"	"shooter3"	"tail3"}		
		{add_view	 "startsmoke_big"	"shooter4"	"tail4"}		
		{add_view	 "startsmoke_big"	"shooter5"	"tail5"}		
		{add_view	 "startsmoke_big"	"shooter6"	"tail6"}		
	}
		
	{on fire "ptur1" 			
		(define "fire_barrel"	
			{ani_play "fire%0"}				
			{delay 0.65 						
				{spawn "9m330_1_carrier" "missile%0"   x}						
				{bone hide "Missile%0"}						
				{volumes "ammo_storage_main%0" disable contact bullet blast}					
			}		
			{ani_play "cover%0"}					
			{view start "shooter%0"}					
			{delay 0.3						
				{view pause "shooter%0"}						
				{view start "shootera%0"}						
				{delay 0.3							
					{view pause "shootera%0"}						
				}					
			}			
		)				
		{if name "00" ("fire_barrel" args 1)				 
		else name "01" ("fire_barrel" args 2)				  
		else name "02" ("fire_barrel" args 3)				
		else name "03" ("fire_barrel" args 4)				 
		else name "04" ("fire_barrel" args 5)				 
		else name "05" ("fire_barrel" args 6)
		else name "06" ("fire_barrel" args 7)				 
		else name "07" ("fire_barrel" args 8)				
		}		
	}			
}
