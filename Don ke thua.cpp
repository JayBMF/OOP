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

class Car : public vehicle
{
};


int main()
{
	Car obj;
	return 0;
}