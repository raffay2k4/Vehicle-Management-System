#include"CarVehicle.h"

class MotorcycleVehicle:public Vehicle
{
protected:
	bool hasSideCar;
public:
	MotorcycleVehicle();
	MotorcycleVehicle(string, string, bool, bool);
	void displayDetails()const;
	MotorcycleVehicle operator=(const MotorcycleVehicle& obj);
	void performOperation();
};

