#pragma once
#include "transport_vehicle.h"
#include "declspec.h"

namespace Transport_Vehicles
{
	class TVLIB_API Eagle : public Transport_Vehicle {
	public:
		Eagle();
		double Calc_Time(int dist) override;
	};
}