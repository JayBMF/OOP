#include <iostream>
using namespace std;

class GiangVien;
class SinhVien
{
private:
	string MaSV;
public:
	SinhVien(string MaSV)
	{
		this->MaSV = MaSV;
	}
	friend void xuat(SinhVien a, GiangVien b);
};

class GiangVien
{
private:
	string MaGV;
public:
	GiangVien(string MaGV)
	{
		this->MaGV = MaGV;
	}

	friend void xuat(SinhVien a, GiangVien b);
};

void xuat(SinhVien a, GiangVien b)
{
	cout << "Ma Sinh Vien: " << a.MaSV << endl;
	cout << "Ma Giao Vien: " << b.MaGV << endl;
}

int main()
{
	SinhVien a = SinhVien("MSV001");
	GiangVien b = GiangVien("MGV001");
	xuat(a, b);
}