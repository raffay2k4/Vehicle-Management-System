#include "MotorcycleVehicle.h"

MotorcycleVehicle::MotorcycleVehicle(string b, string m, bool a, bool sc) :Vehicle(b, m, a)
{
	hasSideCar = sc;
}

MotorcycleVehicle::MotorcycleVehicle()
{
	hasSideCar = 0;
}


void MotorcycleVehicle::displayDetails()const 
{
	cout << "-<---MOTORCYCLE DETAILS----" << endl;
	cout << "Motorcylce Brand: " << brand << endl;
	cout << "Motorcycle Model: " << model << endl;
	cout << "Is Motorcycle Available?: ";
	
	if (isavailable == 1)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	cout << " Does Motorcycle has Sidecar?:";
	if (hasSideCar == 1)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

void MotorcycleVehicle::performOperation()
{
	cout << "Perform any Motorcycle related operation" << endl;
}

MotorcycleVehicle MotorcycleVehicle::operator=(const MotorcycleVehicle& obj)
{
	MotorcycleVehicle temp;
	brand = obj.brand;
	model = obj.model;
	isavailable = obj.isavailable;
	hasSideCar = obj.hasSideCar;
	return temp;
}
