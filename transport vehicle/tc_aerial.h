#pragma once
#include "declspec.h"
#include "transport vehicle.h"

namespace Transport_Vehicles
{
	class TC_Aerial : public Transport_Vehicle {
	/*protected:
		int drc_1, drc_2, drc_3, drc_4;
		int dist_1, dist_2, dist_3;*/
	public:
		TVLIB_API TC_Aerial();
		/*TVLIB_API int get_drc_1();
		TVLIB_API int get_drc_2();
		TVLIB_API int get_drc_3();
		TVLIB_API int get_dist_1();
		TVLIB_API int get_dist_2();
		TVLIB_API int get_dist_3();*/
	};
}