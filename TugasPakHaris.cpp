#include <iostream>
using namespace std;

int main () {
   int nNilMat,nNilFis;
   double nRerata;
   string status;

   cout << "Nilai matematika =";
   cin >> nNilMat;

   cout << "Nilai fisika =";
   cin >> nNilFis;

   nRerata = (nNilMat + nNilFis) / 2;

   if (nRerata > 60){
    status = "Lulus";
    }
   else if  (nNilMat >= 70) {
    status = "Lulus";
   }
   else {
    status = "Tidak Lulus";
   }

   cout << "Status kelulusan = " << status << endl;

   return 0;

    
}