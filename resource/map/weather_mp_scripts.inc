	{Helpers
		{triggers
			{"service/mp_weather/normal"
				{condition
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"environment"
						{name "m10/krimea_0600"}
						{time -1}
						{apply}
					}
					{"delay"
						{time 140}
					}
					{"environment"
						{name "m10/krimea_1300"}
						{time 150}
						{apply}
					}
					{"delay"
						{time 300}
					}
					{"environment"
						{name "m14/m14_18_00"}
						{time 150}
						{apply}
					}
					{"delay"
						{time 300}
					}
					{"environment"
						{name "single/4-snake_head/snake_head_03_00"}
						{time 150}
						{apply}
					}
					{"delay"
						{time 300}
					}
					{"environment"
						{name "m10/krimea_0600"}
						{time 150}
						{apply}
					}
					{"delay"
						{time 160}
					}
					{"trigger"
						{name "service/mp_weather/normal"}
					}
				}
			}
		}
	}