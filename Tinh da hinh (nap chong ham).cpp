#include <iostream>
using namespace std;
 
class inDuLieu 
{
   public:
      void hamIn(int i) {
        cout << "In so nguyen: " << i << endl;
      }

      void hamIn(double  f) {
        cout << "In so thuc: " << f << endl;
      }

      void hamIn(string s) {
        cout << "In chuoi: " << s << endl;
      }
};

int main(void)
{
   inDuLieu idl;
 
   // Goi ham hamIn de in so nguyen
   idl.hamIn(1235);
   // Goi ham hamIn de in so thuc
   idl.hamIn(67.02);
   // Goi ham hamIn de in chuoi
   idl.hamIn("Codelearn.io");
 
   return 0;
}

