#pragma once
#include "transport vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class Carpet_Plane : public Transport_Vehicle {
	public:
		TVLIB_API Carpet_Plane();
		TVLIB_API double Calc_Time(int dist);
	};
}