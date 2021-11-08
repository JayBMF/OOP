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

class Bus : public vehicle
{
};

class Car : public vehicle
{
};


int main()
{
	Car obj1;
	Bus obj2;
	return 0;
}