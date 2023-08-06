#pragma once
#include "transport vehicle.h"
#include "boots_atvs.h"
#include "broom.h"
#include "camel.h"
#include "centaur.h"
#include "eagle.h"
#include "camel_speeder.h"
#include "carpet_plane.h"

constexpr auto END_REG = 1000;
constexpr auto NOT_REGISTRATION = 0;
constexpr auto REGISTRATION = 1;
constexpr auto START_RACING = 2;
constexpr auto TOTAL_VEHICLES = 7;

class Racing {
private:
	enum class RACING_TYPE {GROUND, AERIAL, MIXED};
	RACING_TYPE racing_type;
	int distance;
	int reg_vehicles;
	bool reg_arr[TOTAL_VEHICLES];
	void Vehicle_Registration(void);
public:
	void Select_Racing_Type(void);
	int Next_Racing(void);
	void Set_Distance(void);
	void Start_Racing(void);
	void Init(void);
	void Vehicles_Registration(void);
	Racing();
};