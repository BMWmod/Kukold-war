(define "mp_persistent_pointer"
	{#+ spriteview
		{sprite "$/multiplayer/mp_persistent_%id"
			{timer
				{mode play loop }
				{duration 2.5}
			}
			{scale 1.2
				{peak
					{min 0.4}
					{max 0.5}
				}
			}
			{light 1
				{linear
					{min 1.0}
					{max 0.5}
				}
			}
		}
		{offset 0 0 100}
		{halo {constantsize}}
		{autovisible}
	}
)