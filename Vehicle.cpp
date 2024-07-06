#include "Vehicle.h"

Vehicle::Vehicle()
{
	brand = '\0';
	model = '\0';
	isavailable = 0;
}

Vehicle::Vehicle(string b, string m, bool a)
{
	brand = b;
	model = m;
	isavailable = a;
}

void Vehicle::displayDetails()const
{
	cout << "-<---VEHICLE DETAILS----" << endl;
	cout << "Vehicle Brand: " << brand << endl;
	cout << "Vehicle Model: " << model << endl;
	cout << "Is Vehicle Available?";
	if (isavailable == 1)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

void Vehicle::performOperation()
{
	cout << "Perform any Vehicle related operation" << endl;
}
