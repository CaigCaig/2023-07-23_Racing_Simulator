#include "pch.h"
#include <iostream>
#include "transport_vehicle.h"

using namespace std;

namespace Transport_Vehicles
{
	Transport_Vehicle::Transport_Vehicle()
	{
		this->vehicle_type = Vehicles::TV_GROUND;
		this->registration = false;
		this->name = "";
	};
	Vehicles Transport_Vehicle::get_vehicle_type() { return vehicle_type; }
	string Transport_Vehicle::get_name() { return this->name; }
	void Transport_Vehicle::set_registration(bool reg) { registration = reg; }
	double Transport_Vehicle::Calc_Time(int dist) { return 0; }
}