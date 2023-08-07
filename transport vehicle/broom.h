#pragma once
#include "transport_vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class TVLIB_API Broom : public Transport_Vehicle {
	public:
		Broom();
		double Calc_Time(int dist) override;
	};
}