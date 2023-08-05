#pragma once
#include "transport vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class Eagle : public Transport_Vehicle {
	public:
		TVLIB_API Eagle();
		TVLIB_API double Calc_Time(int dist);
	};
}