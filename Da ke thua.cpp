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

class FourWheeler
{
public:
	FourWheeler()
	{
		cout << "This is a 4 wheeler vehicle" << endl;
	}
};

class Car : public vehicle, public FourWheeler
{
};


int main()
{
	Car obj;
	return 0;
}