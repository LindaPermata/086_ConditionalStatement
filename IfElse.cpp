#include <iostream>
using namespace std;

int main (){
    int nBilangan;
    string Status;
    srand (time(0));

   
    nBilangan = rand() % 10;
    cout << "Nilainya adalah = " << nBilangan << endl;

    if (nBilangan % 2 == 0){
        Status = "genap";
    }
    else {
        Status = "ganjil";
    }
    cout << "Statusnya adalah = " << Status << endl;

    return 0;

    }