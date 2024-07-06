#include"MotorcycleVehicle.h"

int main() {
	// Get user input for CarVehicle
	string carBrand, carModel;
	int carPassengerCapacity;
	bool carAvailability;
	cout << "Enter Car Brand: ";
	cin >> carBrand;
	cout << "Enter Car Model: ";
	cin >> carModel;
	cout << "Enter Car Passenger Capacity: ";
	cin >> carPassengerCapacity;
	cout << "Is Car Available? (1 for Yes, 0 for No): ";
	cin >> carAvailability;

	// Create instance of CarVehicle
	CarVehicle sedan(carBrand, carModel, carAvailability, carPassengerCapacity);

	// Get user input for MotorcycleVehicle
	string motorcycleBrand, motorcycleModel;
	bool motorcycleHasSideCar, motorcycleAvailability;
	cout << "\nEnter Motorcycle Brand: ";
	cin >> motorcycleBrand;
	cout << "Enter Motorcycle Model: ";
	cin >> motorcycleModel;
	cout << "Does Motorcycle Have Sidecar? (1 for Yes, 0 for No): ";
	cin >> motorcycleHasSideCar;
	cout << "Is Motorcycle Available? (1 for Yes, 0 for No): ";
	cin >> motorcycleAvailability;

	// Create instance of MotorcycleVehicle
	MotorcycleVehicle bike(motorcycleBrand, motorcycleModel, motorcycleAvailability,motorcycleHasSideCar);

	// Display details for each vehicle using base class pointer polymorphically
	cout << "\nVehicle Details:" << endl;

	// Using base class pointer polymorphically
	Vehicle* ptr1 = &sedan;
	ptr1->displayDetails();
	cout << "\nVehicle Details:" << endl;

	// Using base class pointer polymorphically
	Vehicle* ptr2 = &bike;
	ptr2->displayDetails();

	// Perform operations for each vehicle
	cout << "\nPerforming Operation for Car:" << endl;
	ptr1->performOperation();
	cout << "\nPerforming Operation for Motorcycle:" << endl;
	ptr2->performOperation();

	// Use assignment operator and display copied vehicle details
	CarVehicle copiedSedan("Copied Car", "", false, 0);
	MotorcycleVehicle copiedBike("Copied Motorcycle", "", false, false);
	copiedSedan = sedan;
	copiedBike = bike;
	cout << "\nCopied Car Details:" << endl;

	// Using base class pointer polymorphically
	Vehicle* ptr3 = &copiedSedan;
	ptr3->displayDetails();
	cout << "\nCopied Motorcycle Details:" << endl;

	// Using base class pointer polymorphically
	Vehicle* ptr4 = &copiedBike;
	ptr4->displayDetails();

	return 0;
}