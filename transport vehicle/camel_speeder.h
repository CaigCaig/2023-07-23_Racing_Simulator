#pragma once
#include "transport vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class Camel_Speeder : public Transport_Vehicle {
	public:
		TVLIB_API Camel_Speeder();
		TVLIB_API double Calc_Time(int dist);
	};
}