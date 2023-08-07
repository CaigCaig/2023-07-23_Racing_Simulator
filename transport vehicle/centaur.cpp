#include "pch.h"
#include <iostream>
#include "centaur.h"

namespace Transport_Vehicles
{
	double Centaur::Calc_Time(int dist)
	{
		double time = 0;
		if (registration == true)
		{
			int speed = 15;
			int rest_period = 8;
			int interval = speed * rest_period;
			int n_rests = static_cast<int>(dist / interval);
			double remains = static_cast<double>(dist % interval);
			time = static_cast<double>(dist) / speed;
			if (n_rests > 0)
			{
				time += 2 * (static_cast<double>(n_rests) - 1);
				if (remains > 0)
				{
					time += 2;
				}
			}
		}
		return time;
	}
	Centaur::Centaur()
	{
		this->name = "Кентавр";
		this->vehicle_type = Vehicles::TV_GROUND;
		this->registration = false;
	};
}