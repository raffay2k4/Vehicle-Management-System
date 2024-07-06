#include"Vehicle.h"

class CarVehicle: public Vehicle
{
protected:
	int passengerCapacity;
public:
	CarVehicle(string, string, bool, int);
	CarVehicle();
	void displayDetails()const;
	CarVehicle operator = (const CarVehicle& obj);
	void performOperation();
};

