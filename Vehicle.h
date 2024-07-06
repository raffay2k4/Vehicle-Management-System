#include<iostream>
using namespace std;

class Vehicle
{
protected:
	string brand;
	string model;
	bool isavailable;

public:
	Vehicle();
	Vehicle(string ,string , bool );
	virtual void displayDetails()const;
	virtual void performOperation();
};

