	{"marder_roland"
	("marder_sound")
  	
	("radar_lifting90_params" triplex(additional_triplex) visor(visor3) anim_rotate(radar) anim_lift(radar_lift) marker(antirad_generator_rus))	
  	

	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "xmim-115avt1_carrier" "shooter%0"   x}
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
{"s400pu"		
	("custom_multi_vertlauncher"
	weapon(gun) 
	tail(tail) 
	shooter(shooter)
	missile(48n6e2)
	tailfx(proj_jet_sam))		
	{on "_explosion"			
		{bone cut "wires"}			
		{tear "piece_medium_steel" bone "launcher"				
			{impulse up 4 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 6 no_position}				
			{delay_effect 20 5 "stop"}			
		}		
	}	
}

{"baz6402"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("9k72_sound")	  
}

{"tor"		
	("Shilka_sound")	

	("radar_lifting90_params" triplex(additional_triplex) visor(visor3) anim_rotate(radar_loop) anim_lift(radar_lift) marker(antirad_generator_rus))	

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
		
	{on fire "gun2" 			
		(define "fire_barrel"	
			{ani_play "fire%0"}				
			{delay 0.65 						
				{spawn "9m330_carrier" "missile%0"   x}						
				{bone cut "Missile%0"}						
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

	{"9k33_osa_akm"
	("9k72_sound")

	("radar_lifting90_params" triplex(additional_triplex) visor(visor3) anim_rotate(radar) anim_lift(radar_lift) marker(antirad_generator_rus))	
  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
	{add_view	 "flash_gun_big"	"shooter04"	"shooter04"}	{add_view	 "flash_gun_big"	"shooter05"	"shooter05"}	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			
	{add_view	 "startsmoke_big"	"shooter03"	"shooter03"}	
	{add_view	 "startsmoke_big"	"shooter04"	"shooter04"}
	{add_view	 "startsmoke_big"	"shooter05"	"shooter05"}
	}		
	{on fire "gun" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "osa_missile_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				  else ("fire_barrel" args 03)				  else ("fire_barrel" args 04)				  else ("fire_barrel" args 05)				
	}		
	}	
	}

	{"man_patriot"
	("9k72_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			
	{add_view	 "startsmoke_big"	"shooter03"	"shooter03"}	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "patriot_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				  else ("fire_barrel" args 03)				 			
	}		
	}	
	}
	
	{"wiesel_aa"
	("Shilka_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			
	{add_view	 "startsmoke_big"	"shooter03"	"shooter03"}	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "fim-92a_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				  else ("fire_barrel" args 03)				 			
	}		
	}	
	}	


{"btr-4"	
	("atgm_multi_launcher"
 	weapon(gun2)
 	foresight(foresight6)
 	tail(foresight6)
	)
	}



{"tank_avlb"
	("abrams_sound")
	{on "specability" 
		{ani_play "close" 0.1} 
                {delay 40
		{spawn "qm" "qiao" x}
                {delay 0.1
		{bone hide "Mesh08"}
		{bone cut "qiao"}}
                {delay 5
		{ani_play "close" -0.4} }}          
 	}
}
{"tank_mtu"
	("Shilka_sound")	
	{on "specability" 
		{ani_play "most" 0.1} 
                {delay 390
		{spawn "most_m1_wcw" "most1" x}
                {delay 0.1
		{bone hide "Mesh08"}
		{bone cut "most1"}
		{bone cut "most2"}}
                {delay 5
		{ani_play "most" -0.4} }}          
 	}
}


{"chapparal"
	("m113_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			
	{add_view	 "startsmoke_big"	"shooter03"	"shooter03"}	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "aim-9l_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				  else ("fire_barrel" args 03)				 			
	}		
	}	
	}	


{"hawk"
	("m113_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			 	
	}		
	{on fire "ptur1" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "mim23b_ihawk_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				 			
	}		
	}	
	}	


{"zrk_krug"
	("Shilka_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}			
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}		 	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "3m8_carrier" "shooter%0"   x}
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


{"s125x2"
	("Ural375_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}			
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}		 	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "s125_carrier" "shooter%0"   x}
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


{"s125x4"	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			
	{add_view	 "startsmoke_big"	"shooter03"	"shooter03"}	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "s125_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				  else ("fire_barrel" args 03)				 			
	}		
	}	
	}	




{"s75"	  			
	{on fire "gun2" 			
	{spawn "s75_carrier" "shooter00"   x}				
	}	
	}	

{"zrk_kub"
	("Shilka_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			 	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "3m9_kub_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				 			
	}		
	}	
	}	



	{"fv4333_hvm"
	("marder_sound")

	("radar_lifting90_params" triplex(additional_triplex) visor(visor3) anim_rotate(radar) anim_lift(radar_lift) marker(antirad_generator_rus))	

	{on fire "gun2" 			
	{spawn "starstreak_carrier" "shooter00"   x}		
	}	
	}

