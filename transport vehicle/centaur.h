#pragma once
#include "transport vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class Centaur : public Transport_Vehicle {
	public:
		TVLIB_API Centaur();
		TVLIB_API double Calc_Time(int dist);
	};
}