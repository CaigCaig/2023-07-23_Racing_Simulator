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
		//this->tv_speed = 10;
		//this->drc_1 = 0;
		//this->drc_2 = 3;
		//this->drc_3 = 10;
		//this->drc_3 = 5;
		//this->dist_1 = 1000;
		//this->dist_2 = 5000;
		//this->dist_3 = 10000;
		this->name = "Ковёр-самолёт";
		this->vehicle_type = Vehicles::TV_GROUND;
		this->registration = false;
	};
}