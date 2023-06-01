    (include "/map/common_mp_scripts.inc")
    (include "/map/weather_mp_scripts.inc")
	{Helpers
		{triggers
			{"service/neutral_zone"
				{condition
				}
				{actions
					{"delay"
						{time 1}
					}
					{"timer"
						{time 240}
						{title " "}
					}
					{"delay"
						{time 240}
					}
					{"timer"
						{hide}
						{title ""}
					}
					{"delete"
						{selector
							{tag invisible_wall_mp_nz}
						}
					}
				}
			}
		}
	}