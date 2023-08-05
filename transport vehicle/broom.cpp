#include "pch.h"
#include <iostream>
#include "broom.h"

namespace Transport_Vehicles
{
	double Broom::Calc_Time(int dist)
	{
		double time = 0;
		if (registration == true)
		{
			int interval = 1000;
			double k = 1 - 0.01 * static_cast<int>(dist / interval);
			time = static_cast<double>(dist) / 20;
			if (registration == true)
			{
				time *= k;
			}
		}
		return time;
	}
	Broom::Broom()
	{
		this->name = "Метла";
		this->vehicle_type = Vehicles::TV_AERIAL;
		this->registration = false;
	};
}