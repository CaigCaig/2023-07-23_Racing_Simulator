#include "pch.h"
#include <iostream>
#include "boots_atvs.h"

namespace Transport_Vehicles
{
	double Boots_ATVs::Calc_Time(int dist)
	{
		double time = 0;
		if (registration == true)
		{
			int speed = 6;
			int rest_period = 60;
			int interval = speed * rest_period;
			int n_rests = static_cast<int>(dist / interval);
			double remains = static_cast<double>(dist % interval);
			time = static_cast<double>(dist) / speed;
			if (n_rests > 1)
			{
				time += 5 * (static_cast<double>(n_rests) - 2) + 10;
				if (remains > 0)
				{
					time += 5;
				}
			}
			else if (n_rests == 1)
			{
				if (remains != 0)
				{
					time += 10;
				}
			}
		}
		return time;
	};
	Boots_ATVs::Boots_ATVs()
	{
		name = "Ботинки-вездеходы";
		vehicle_type = Vehicles::TV_GROUND;
		registration = false;
	};
}