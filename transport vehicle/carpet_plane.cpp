#include "pch.h"
#include <iostream>
#include "carpet_plane.h"

namespace Transport_Vehicles
{
	double Carpet_Plane::Calc_Time(int dist)
	{
		double time = 0;
		if (registration == true)
		{
			time = static_cast<double>(dist) / 10;
			if ((dist >= 1000) && (dist < 5000))
			{
				time *= 0.97;
			}
			else if ((dist >= 5000) && (dist < 10000))
			{
				time *= 0.9;
			}
			else if (dist >= 10000)
			{
				time *= 0.95;
			}
		}
		return time;
	}
	Carpet_Plane::Carpet_Plane()
	{
		this->name = "Ковёр-самолёт";
		this->vehicle_type = Vehicles::TV_GROUND;
		this->registration = false;
	};
}