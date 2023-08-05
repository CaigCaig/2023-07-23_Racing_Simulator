#include "pch.h"
#include <iostream>
#include "camel_speeder.h"

namespace Transport_Vehicles
{
	double Camel_Speeder::Calc_Time(int dist)
	{
		double time = 0;
		if (registration == true)
		{
			int speed = 40;
			int rest_period = 10;
			int interval = speed * rest_period;
			int n_rests = dist / interval;
			double remains = dist % interval;
			time = static_cast<double>(dist) / speed;
			if (n_rests > 2)
			{
				time +=  5 + 6.5 + 8 * (n_rests - 2);
				if (remains > 0)
				{
					time += 8;
				}
			}
			else if (n_rests == 1)
			{
				if (remains > 0)
				{
					time += 5;
				}
			}
			else if (n_rests == 2)
			{
				time +=  + 5;
				if (remains > 0)
				{
					time += 6.5;
				}
			}
		}
		return time;
	}
	Camel_Speeder::Camel_Speeder()
	{
		/*this->tv_speed = 40;
		this->driving_time_before_rest = 10;
		this->rest_duration_1 = 5;
		this->rest_duration_2 = 6.5;
		this->rest_duration_n = 8;*/
		this->name = "Верблюд-быстроход";
		this->vehicle_type = Vehicles::TV_GROUND;
		this->registration = false;
	};
}