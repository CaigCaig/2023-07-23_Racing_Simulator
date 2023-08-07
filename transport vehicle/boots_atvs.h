#pragma once
#include "transport_vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class TVLIB_API Boots_ATVs : public Transport_Vehicle {
	public:
		Boots_ATVs();
		double Calc_Time(int dist) override;
	};
}