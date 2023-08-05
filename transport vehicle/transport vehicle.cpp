#include "pch.h"
#include <iostream>
#include "transport vehicle.h"

using namespace std;

namespace Transport_Vehicles
{
	Vehicles Transport_Vehicle::get_vehicle_type() { return vehicle_type; }
	//int Transport_Vehicle::get_speed() { return tv_speed; }
	string Transport_Vehicle::get_name() { return this->name; }
	void Transport_Vehicle::set_registration(bool reg) { registration = reg; }
}