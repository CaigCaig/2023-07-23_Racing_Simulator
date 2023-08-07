#pragma once
#include "transport_vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class TVLIB_API Camel_Speeder : public Transport_Vehicle {
	public:
		Camel_Speeder();
		double Calc_Time(int dist) override;
	};
}