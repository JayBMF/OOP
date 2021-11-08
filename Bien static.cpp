#include<iostream>
using namespace std;

class dosomething
{
public:
	static int count;
	void show()
	{
		cout << count << endl;
		count++;
	}
};

int dosomething::count = 1;

int main()
{
	dosomething s1;
	dosomething s2;
	dosomething s3;

	s1.show();
	s2.show();
	s3.show();
}