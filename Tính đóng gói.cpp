#include <iostream>
using namespace std;
class mayvitinh {
private:
    string mausac;
    int chieudai, chieurong;
public:
    void input()
    {
        cout << "Nhap mau sac may: ";
        fflush(stdin);
        getline(cin, this->mausac);
        cout << "Nhap chieu dai may: ";
        cin >> this->chieudai;
        cout << "Nhap chieu rong may: ";
        cin >> this->chieurong;
    }
    void output()
    {
        cout << "Mau sac may: " << this->mausac << endl;
        cout << "Chieu dai may: " << this->chieudai << endl;
        cout << "Chieu rong may: " << this->chieurong << endl;
    }
};
int main()
{
	mayvitinh a;
	a.input();
	a.output();
}
