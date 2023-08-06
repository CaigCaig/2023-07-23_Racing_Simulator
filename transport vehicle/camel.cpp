#include "pch.h"
#include <iostream>
#include "camel.h"

namespace Transport_Vehicles
{
	double Camel::Calc_Time(int dist)
	{
		double time = 0;
		if (registration == true)
		{
			int speed = 10;
			int rest_period = 30;
			int interval = speed * rest_period;
			int n_rests = dist / interval;
			double remains = dist % interval;
			time = static_cast<double>(dist) / speed;
			if (n_rests > 1)
			{
				time += 8 * (n_rests - 2) + 5;
				if (remains > 0)
				{
					time += 8;
				}
			}
			else if (n_rests == 1)
			{
				if (remains != 0)
				{
					time += 5;
				}
			}
		}
		return time;
	};
	Camel::Camel()
	{
		this->name = "Верблюд";
		this->vehicle_type = Vehicles::TV_GROUND;
		this->registration = false;
	};
}