#pragma once
#include "transport vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class Broom : public Transport_Vehicle {
	public:
		TVLIB_API Broom();
		TVLIB_API double Calc_Time(int dist);
	};
}