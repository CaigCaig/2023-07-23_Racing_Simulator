#pragma once
#include "declspec.h"

namespace Transport_Vehicles
{
	enum class Vehicles {TV_GROUND, TV_AERIAL};
	class Transport_Vehicle {
	protected:
		Vehicles vehicle_type;
		bool registration;
		std::string name;
	public:
		TVLIB_API Vehicles get_vehicle_type();
		TVLIB_API std::string get_name();
		TVLIB_API void set_registration(bool reg);
	};
}