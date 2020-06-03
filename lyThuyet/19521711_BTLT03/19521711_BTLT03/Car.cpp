#include <iostream>
#include <string>
#include "car.h"

using namespace std;
// nhập xe
void car::inputCars(){
	cout << "Input name car: ";
	cin >> nameCar;
	cout << "Input year product: ";
	cin >> yearProduct;
	cout << "Input price car(USD or VND): ";
	cin >> priceCar;
	cout << "Input Wheel" << endl;
	Arr = new wheel[5];
	for (int i = 1; i <= 4; i++)// nhập bánh xe từ lớp Wheel
	{
		cout << "Wheel " << i << endl;
		Arr[i].inputWhell();
	}
}

// xuất xe
void car::outputCars()
{
	cout << nameCar << endl;
	cout << yearProduct << endl;
	cout << priceCar << endl;
	// xuất bánh xe
	for (int i = 1; i <= 4; i++)
	{
		cout << "Wheel " << i << endl;
		Arr[i].outputWhell();
	}
}