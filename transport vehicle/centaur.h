#pragma once
#include "transport_vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class TVLIB_API Centaur : public Transport_Vehicle {
	public:
		Centaur();
		double Calc_Time(int dist) override;
	};
}