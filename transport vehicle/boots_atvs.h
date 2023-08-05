#pragma once
#include "transport vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class Boots_ATVs : public Transport_Vehicle {
	public:
		TVLIB_API Boots_ATVs();
		TVLIB_API double Calc_Time(int dist);
	};
}