#include <iostream>
#include <string>
#include "racing.h"

using namespace std;

Transport_Vehicles::Boots_ATVs boots;
Transport_Vehicles::Broom broom;
Transport_Vehicles::Camel camel;
Transport_Vehicles::Centaur centaur;
Transport_Vehicles::Eagle eagle;
Transport_Vehicles::Camel_Speeder camel_fast;
Transport_Vehicles::Carpet_Plane carpet_plane;

void Racing::Select_Racing_Type()
{
	int n;
	do {
		system("cls");
		cout << "Добро пожаловать в гоночный симулятор!" << endl;
		cout << "1. Гонка для наземного транспорта" << endl;
		cout << "2. Гонка для воздушного транспорта" << endl;
		cout << "3. Гонка для наземного и воздушного транспорта" << endl;
		cout << "Выберите тип гонки: ";
		cin >> n;
	} while (n != 1 && n != 2 && n != 3);
	switch (n) {
	case 1:
		racing_type = RACING_TYPE::GROUND;
		break;
	case 2:
		racing_type = RACING_TYPE::AERIAL;
		break;
	case 3:
		racing_type = RACING_TYPE::MIXED;
		break;
	}
	cout << endl;
}

int Racing::Next_Racing()
{
	int n = 0;
	do {
		cout << "1. Провести ещё одну гонку" << endl;
		cout << "2. Выйти" << endl;
		cout << "Выберите действие: ";
		cin >> n;
	} while (n != 1 && n != 2);
	return n;
}

void Racing::Set_Distance()
{
	system("cls");
	cout << "Укажите длину дистанции (должна быть положительна): ";
	cin >> this->distance;
	cout << endl;
}

void Racing::Start_Racing(void)
{
	system("cls");
	cout << "Результаты гонки:" << endl;
	double time[TOTAL_VEHICLES] = { 0 };
	time[0] = boots.Calc_Time(distance);
	time[1] = broom.Calc_Time(distance);
	time[2] = camel.Calc_Time(distance);
	time[3] = centaur.Calc_Time(distance);
	time[4] = eagle.Calc_Time(distance);
	time[5] = camel_fast.Calc_Time(distance);
	time[6] = carpet_plane.Calc_Time(distance);
	int tv[7] = { 1,2,3,4,5,6,7 };
	for (auto j = TOTAL_VEHICLES - 1; j > 0; --j) {
		for (auto i = TOTAL_VEHICLES - 1; i > TOTAL_VEHICLES - 1 - j; --i) {
			if (time[i] < time[i - 1])
			{
				swap(time[i], time[i - 1]);
				swap(tv[i], tv[i - 1]);
			}
		}
	}
	int x = 1;
	for (int i = 0; i < TOTAL_VEHICLES; i++) {
		if (time[i] > 0) {
			cout << x << ". ";
			switch (tv[i]) {
			case 1:
				cout << boots.get_name() << ". Время: " << time[i];
				break;
			case 2:
				cout << broom.get_name() << ". Время: " << time[i];
				break;
			case 3:
				cout << camel.get_name() << ". Время: " << time[i];
				break;
			case 4:
				cout << centaur.get_name() << ". Время: " << time[i];
				break;
			case 5:
				cout << eagle.get_name() << ". Время: " << time[i];
				break;
			case 6:
				cout << camel_fast.get_name() << ". Время: " << time[i];
				break;
			case 7:
				cout << carpet_plane.get_name() << ". Время: " << time[i];
				break;
			}
			cout << endl;
			x++;
		}
	}
	cout << endl;
}

void Racing::Init(void)
{
	boots.set_registration(false);
	broom.set_registration(false);
	camel.set_registration(false);
	centaur.set_registration(false);
	eagle.set_registration(false);
	camel_fast.set_registration(false);
	carpet_plane.set_registration(false);
	distance = 0;
	reg_vehicles = 0;
	for (int i = 0; i < TOTAL_VEHICLES; i++) reg_arr[i] = false;
	n = 1000;
}

void Racing::Vehicles_Registration(void)
{
	int x = NOT_REGISTRATION;
	const string str = "1. Зарегистрировать транспорт";
	do
	{
		system("cls");
		if (reg_vehicles < 2) {
			cout << "Должно быть зарегистрированно хотя бы 2 транспортных средства" << endl;
			cout << str << endl;
		}
		else
		{
			cout << str << endl;
			cout << "2. Начать гонку" << endl;
		}
		cout << "Выберите действие: ";
		cin >> x;
		if (x == REGISTRATION)
		{
			Racing::Vehicle_Registration();
			x = NOT_REGISTRATION;
		}
		if (reg_vehicles < 2)
		{
			x = NOT_REGISTRATION;
		}
	} while (x != START_RACING);
}

void Racing::Vehicle_Registration()
{
	int x = 0;
	bool reg_f = true;
	string name;

	do {
		system("cls");
		if ((x > 0) && (x <= TOTAL_VEHICLES))
		{
			if (reg_arr[x - 1] == true)
			{
				cout << name << " уже зарегистрирован!" << endl;
			}
			else
			{
				reg_f = false;
				switch (x)
				{
				case 1:
					if ((this->racing_type == RACING_TYPE::GROUND) || (this->racing_type == RACING_TYPE::MIXED))
					{
						reg_f = true;
						boots.set_registration(true);
					}
					break;
				case 2:
					if ((this->racing_type == RACING_TYPE::AERIAL) || (this->racing_type == RACING_TYPE::MIXED))
					{
						reg_f = true;
						broom.set_registration(true);
					}
					break;
				case 3:
					if ((this->racing_type == RACING_TYPE::GROUND) || (this->racing_type == RACING_TYPE::MIXED))
					{
						reg_f = true;
						camel.set_registration(true);
					}
					break;
				case 4:
					if ((this->racing_type == RACING_TYPE::GROUND) || (this->racing_type == RACING_TYPE::MIXED))
					{
						reg_f = true;
						centaur.set_registration(true);
					}
					break;
				case 5:
					if ((this->racing_type == RACING_TYPE::AERIAL) || (this->racing_type == RACING_TYPE::MIXED))
					{
						reg_f = true;
						eagle.set_registration(true);
					}
					break;
				case 6:
					if ((this->racing_type == RACING_TYPE::GROUND) || (this->racing_type == RACING_TYPE::MIXED))
					{
						reg_f = true;
						camel_fast.set_registration(true);
					}
					break;
				case 7:
					if ((this->racing_type == RACING_TYPE::AERIAL) || (this->racing_type == RACING_TYPE::MIXED))
					{
						reg_f = true;
						carpet_plane.set_registration(true);
					}
					break;
				}
				if (reg_f == false)
				{
					cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << endl;
				}
				else
				{
					reg_arr[x - 1] = true;
					reg_vehicles++;
				}
			}
		}
		cout << "Гонка для ";
		switch (racing_type) {
		case RACING_TYPE::GROUND:
			cout << "наземного ";
			break;
		case RACING_TYPE::AERIAL:
			cout << "воздушного ";
			break;
		case RACING_TYPE::MIXED:
			cout << "наземного и воздушного ";
			break;
		}
		cout << "транспорта. Расстояние: " << distance << endl;

		if (reg_vehicles) {
			cout << "Зарегистрированные транспортные средства: ";
			bool etc = false;
			for (int i = 0; i < TOTAL_VEHICLES; i++) {
				if (reg_arr[i]) {
					if (etc) {
						cout << ", ";
					}
					etc = true;
					switch (i) {
					case 0:
						name = boots.get_name();
						cout << name;
						break;
					case 1:
						cout << broom.get_name();
						break;
					case 2:
						name = camel.get_name();
						cout << name;
						break;
					case 3:
						name = centaur.get_name();
						cout << name;
						break;
					case 4:
						name = eagle.get_name();
						cout << name;
						break;
					case 5:
						name = camel_fast.get_name();
						cout << name;
						break;
					case 6:
						name = carpet_plane.get_name();
						cout << name;
						break;
					}
				}
			}
			cout << endl;
		}

		cout << "1. Ботинки-вездеходы" << endl;
		cout << "2. Метла" << endl;
		cout << "3. Верблюд" << endl;
		cout << "4. Кентавр" << endl;
		cout << "5. Орёл" << endl;
		cout << "6. Верблюд-быстроход" << endl;
		cout << "7. Ковёр-самолёт" << endl;
		cout << "0. Закончить регистрацию" << endl;
		cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		cin >> x;
	} while ((x > 0) && (x <= TOTAL_VEHICLES));
}

Racing::Racing()
{
	distance = 0;
	racing_type = RACING_TYPE::MIXED;
	reg_vehicles = 0;
	for (int i = 0; i < TOTAL_VEHICLES; i++) reg_arr[i] = false;
	n = 1000;
}