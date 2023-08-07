#pragma once
#include "transport_vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class TVLIB_API Camel : public Transport_Vehicle {
	public:
		Camel();
		double Calc_Time(int dist) override;
	};
}