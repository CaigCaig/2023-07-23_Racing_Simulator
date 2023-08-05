#include "pch.h"
#include <iostream>
#include "eagle.h"

namespace Transport_Vehicles
{
	double Eagle::Calc_Time(int dist)
	{
		double time = 0;
		if (registration == true)
		{
			time = static_cast<double>(dist) / 8 * 0.94;
		}
		return time;
	}
	Eagle::Eagle()
	{
		this->name = "Îð¸ë";
		this->vehicle_type = Vehicles::TV_AERIAL;
		this->registration = false;
	};
}