#pragma once
#include "declspec.h"
#include "transport vehicle.h"

namespace Transport_Vehicles
{
	class TC_Ground : public Transport_Vehicle {
	/*protected:
		int driving_time_before_rest;
		double rest_duration_1, rest_duration_2, rest_duration_n;*/
	public:
		TVLIB_API TC_Ground();
		/*TVLIB_API int get_driving_time_before_rest();
		TVLIB_API double get_rest_duration_1();
		TVLIB_API double get_rest_duration_2();
		TVLIB_API double get_rest_duration_n();*/
	};
}