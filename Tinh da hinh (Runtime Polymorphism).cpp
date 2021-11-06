#include <iostream>
using namespace std;

class Mayvitinh{  
	public: 	 	 	
	virtual void show(){
	    cout << "mayvitinh" << endl;
	}
}; 
class mayAcer: public Mayvitinh{  	
    public: 	 	 	
    void show(){
        cout << "mayAcer" << endl;
    }
}; 

int main(){
    mayAcer may1; 
    Mayvitinh *tenmay = &may1;
    tenmay->show(); 
}
