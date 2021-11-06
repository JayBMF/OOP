#include <iostream>
using namespace std;
class Sinh_vien {
	private:
		int ID_sv;
		string ten;
	public:
	void gan_gia_tri(int a, string b){
		ID_sv = a;
		ten = b;
	}
	int getID(){
		return ID_sv;
	}
	string getTen(){
		return ten;
	}
};

int main(){
	Sinh_vien sv;
	sv.gan_gia_tri(1,"Nguyen A");
	cout <<"Ten sinh vien:" << sv.getTen() << endl;
	cout <<"ID sinh vien:" << sv.getID();
}
