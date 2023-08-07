#pragma once
#include "transport_vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class TVLIB_API Carpet_Plane : public Transport_Vehicle {
	public:
		Carpet_Plane();
		double Calc_Time(int dist) override;
	};
}