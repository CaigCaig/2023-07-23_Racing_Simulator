#pragma once
#include "transport vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class Camel : public Transport_Vehicle {
	public:
		TVLIB_API Camel();
		TVLIB_API double Calc_Time(int dist);
	};
}