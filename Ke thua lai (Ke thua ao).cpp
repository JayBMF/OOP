#include<iostream>
using namespace std;

class vehicle
{
public:
	vehicle()
	{
		cout << "This is a vehicle" << endl;
	}
};

class Fare
{
public:
	Fare()
	{
		cout << "Fare of Vehicle" << endl;
	}
};

class FourWheeler : public vehicle
{
public:
	FourWheeler()
	{
		cout << "This is a 4 wheeler vehicle" << endl;
	}
};

class Bus : public FourWheeler, public Fare
{
};


int main()
{
	Bus obj;
	return 0;
}