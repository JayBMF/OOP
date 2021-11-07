#include<iostream>
using namespace std;

class A
{
private:
	int i;
public:
	A(int i)
	{
		this->i = i;
	}
	friend class B;
};

class B
{
public:
	void change(A obj)
	{
		obj.i++;
		cout << obj.i << endl;
	}
};

int main()
{
	A obj = A(5);
	B obj1;
	obj1.change(obj);
	return 0;
}