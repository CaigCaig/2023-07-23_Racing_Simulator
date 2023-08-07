#pragma once
#include "declspec.h"

using namespace std;

namespace Transport_Vehicles
{
	enum class Vehicles {TV_GROUND, TV_AERIAL};
	class TVLIB_API Transport_Vehicle {
	protected:
		Vehicles vehicle_type;
		bool registration;
		string name;
		Transport_Vehicle();
	public:
		Vehicles get_vehicle_type();
		string get_name();
		void set_registration(bool reg);
		virtual double Calc_Time(int dist);
	};
}