#include "CarVehicle.h"

CarVehicle::CarVehicle()
{
	passengerCapacity = 0;
}

CarVehicle::CarVehicle(string b, string m, bool a, int pc):Vehicle(b,m,a)
{
	passengerCapacity = pc;
}

void CarVehicle::performOperation()
{
	cout << "Perform any Car related operation" << endl;
}

void CarVehicle::displayDetails()const
{
	cout << "----CAR DETAILS----" << endl;
	cout << "Car Brand: " << brand << endl;
	cout << "Car Model: " << model << endl;
	cout << "Is Car Available?: ";
	if (isavailable == 1)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	cout << " Car passenger capacity: " << passengerCapacity << endl;
}

CarVehicle CarVehicle::operator=(const CarVehicle& obj)
{
	CarVehicle temp;
	brand = obj.brand;
	model = obj.model;
	isavailable = obj.isavailable;
	passengerCapacity = obj.passengerCapacity;
	return temp;
}

