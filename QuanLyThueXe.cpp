#include<iostream>
#include<string>
#include<conio.h>
#include <vector>
using namespace std;
int stt = 1, soluong = 0, j = 0, l = 0, kk = 0;
// khai bao lop cha: class XE
class XE
{
protected:
	string HoTenNguoiThue;
	float SoGioThue;
public:
	virtual void NhapThongTin()
	{
		while (getchar() != '\n');
		cout << "\nNhap ho ten nguoi thue: ";
		getline(cin, this->HoTenNguoiThue);
		cout << "\nNhap so gio thue: ";
		cin >> this->SoGioThue;
	}
	virtual void XuatThongTin()
	{
		cout << "Ho ten nguoi thue: " << HoTenNguoiThue;
		cout << "\nSo gio thue: " << SoGioThue;
	}
	virtual float TinhTienThueXe() = 0;

};

// khai bao lop con: class XEDAP ke thua lai class XE
class XEDAP : public XE
{
private:
public:

	float TinhTienThueXe()
	{
		return 10000 + ((this->SoGioThue - 1) * 8000);
	}
};


// khai bao lop con: class XEMAY ke thua lai class XE
class XEMAY : public XE
{
private:

	int LoaiXe;
	string BienSo;

public:

	void NhapThongTin()
	{
		XE::NhapThongTin();
		cout << "\nNhap loai xe can thue(100 - 250 phan khoi): ";
		cin >> this->LoaiXe;
		while (getchar() != '\n');
		cout << "\nNhap bien so: ";
		getline(cin, this->BienSo);
	}
	void XuatThongTin()
	{
		XE::XuatThongTin();
		cout << "\nLoai xe: " << this->LoaiXe;
		cout << "\nBien so: " << this->BienSo;
	}
	float TinhTienThueXe()
	{
		float s = 0;
		if (this->LoaiXe == 100)
		{
			s = 150000;
		}
		else
		{
			s = 200000;
		}
		return s + ((this->SoGioThue - 1) * 100000);
	}

	// GETTER - LOAI XE
	int Getter_LoaiXe()
	{
		return this->LoaiXe;
	}
	void Setter_LoaiXe(int LOAIXE)
	{
		this->LoaiXe = LOAIXE;
	}

};

class QUANLY
{
private:
	vector<XE*> xe;
	int A[100], B[100];
public:
	void nhap()
	{
		cout << "Nhap so xe can thue: ";
		int n;
		cin >> n;
		soluong += n;
		for (int i = 0; i < n; i++)
		{
			system("cls");
			cout << "Thue xe dap (1), Thue xe may (2): ";
			int k;
			cin >> k;
			XE* x;

			if (k == 1)
			{
				x = new XEDAP;
				A[j] = i;
				j++;
			}
			else
			{
				x = new XEMAY;
				B[l] = i;
				l++;
			}
			x->NhapThongTin();
			this->xe.push_back(x);
		}
	}
	void Xuat_Tat_Ca_Thong_Tin_Thue_Xe()
	{
		for (int i = 0; i < this->xe.size(); i++)
		{
			cout << "\nSTT:" << i + 1 << endl;
			this->xe.at(i)->XuatThongTin();
			cout << "\nTien thue:" << (size_t)this->xe.at(i)->TinhTienThueXe();
		}
	}
	void Tinh_Tong_Tien_Thue_Xe()
	{
		float tong = 0;
		for (int i = 1; i < this->xe.size(); i++)
		{
			tong += this->xe.at(i)->TinhTienThueXe();
		}
		cout << (size_t)tong;
	}

	int Tong_Tien_Thue_Xe()
	{
		float tong = 0;
		for (int i = 1; i < this->xe.size(); i++)
		{
			tong += this->xe.at(i)->TinhTienThueXe();
		}
		return (size_t)tong;
	}

	void Xuat_Danh_Sach_Xe_Dap()
	{
		for (int i = 0; i < j; i++)
		{
			cout << "\n";
			this->xe.at(A[i])->XuatThongTin();
			cout << "\nTien thue:" << (size_t)this->xe.at(A[i])->TinhTienThueXe();
			cout << "\n";
		}
	}

	void Xuat_Danh_Sach_Xe_May()
	{
		for (int i = 0; i < l; i++)
		{
			kk = B[i];
			cout << "\n";
			this->xe.at(kk)->XuatThongTin();
			cout << "\nTien thue:" << (size_t)this->xe.at(B[i])->TinhTienThueXe();
			cout << "\n";
		}
	}

};

QUANLY ql[100];
void Menu(QUANLY x)
{
	int luachon;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ====== QUAN LY THUE XE ======";
		cout << "\n\t0. Ket thuc";
		cout << "\n\t1. Nhap danh sach thue xe dap va xe may";
		cout << "\n\t2. Xuat tat ca thong tin thue xe";
		cout << "\n\t3. Tinh tong so tien cho thue xe dap va xe may";
		cout << "\n\t4. Xuat tat ca cac thong tin lien quan den viec cho thue xe dap";
		cout << "\n\t5. Xuat tat ca cac thong tin lien quan den viec cho thue may";
		cout << "\n\t6. Tao nhom nguoi thue";
		cout << "\n\t7. Xem lai cac nhom khach thue xe trong ngay";
		cout << "\n\t8. Tong tien thue xe trong ngay";
		cout << "\n\t\t ============ END ============";

		cout << "\nSTT " << stt;
		cout << "\nNhap lua chon: ";
		cin >> luachon;

		if (luachon == 1)
		{
			x.nhap();
			ql[stt] = x;
			system("pause");
		}
		else if (luachon == 2)
		{
			cout << "\n\n\t\t DANH SACH THUE TAT CA CAC LOAI XE \n";
			x.Xuat_Tat_Ca_Thong_Tin_Thue_Xe();
			cout << "\n";
			system("pause");
		}
		else if (luachon == 3)
		{
			cout << "\n\n\t\tTONG TIEN THUE XE: ";
			x.Tinh_Tong_Tien_Thue_Xe();
			cout << "\n";
			system("pause");
		}
		else if (luachon == 4)
		{
			cout << "\n\n\t\t DANH SACH THUE XE DAP\n";
			x.Xuat_Danh_Sach_Xe_Dap();
			cout << "\n";
			system("pause");
		}
		else if (luachon == 5)
		{

			cout << "\n\n\t\t DANH SACH THUE XE MAY \n";
			x.Xuat_Danh_Sach_Xe_May();
			cout << "\n";
			system("pause");
		}
		else if (luachon == 7)
		{
			cout << "\n\n\t\t DANH SACH THUE XE TRONG NGAY \n";
			cout << "\n\n\t\t SO LUONG THUE XE TRONG NGAY " << soluong << "\n";
			for (int i = 1; i <= stt; i++)
			{
				cout << "\n\n\t\t DANH SACH THUE XE NHOM " << i << "\n";
				ql[i].Xuat_Tat_Ca_Thong_Tin_Thue_Xe();
			}
			cout << "\n";
			system("pause");
		}
		else if (luachon == 8)
		{
			int tongtientrongngay = 0;
			for (int i = 1; i <= stt; i++)
			{
				tongtientrongngay += ql[i].Tong_Tien_Thue_Xe();
			}
			cout << "\n\n\t\t SO LUONG XE MAY TRONG NGAY " << soluong << "\n";
			cout << "\n\n\t\t TONG TIEN THUE XE TRONG NGAY " << tongtientrongngay << "\n";
			cout << "\n";
			system("pause");
		}
		else
		{
			break;
		}
	}
	if (luachon == 6)
	{
		j = 0, l = 0, kk = 0;
		cout << "\n\n\t\t DA TAO NHOM NGUOI THUE MOI THANH CONG \n";
		cout << "\n";
		system("pause");
		stt++;
		Menu(ql[stt]);
	}
	cout << "\n";
}


int main()
{
	QUANLY ql[100];
	Menu(ql[stt]);
	return 0;
}
