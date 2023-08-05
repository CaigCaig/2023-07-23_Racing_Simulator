#include <iostream>
#include <Windows.h>
#include "use_dll.h"
#include "racing.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Racing racing;
	
	do {
		racing.Init();
		racing.Select_Racing_Type();
		racing.Set_Distance();
		racing.Vehicles_Registration();
		racing.Start_Racing();
	} while (racing.Next_Racing() == 1);

	system("pause");
}