#include <iostream>
using namespace std;

int main(){
    int nBilA, nBilB;
    string status;
    srand(time(0));

    nBilA = rand () % 10;
    nBilB = rand () % 10;

    cout << "Tampilkan Bilangan A = " << nBilA << endl;
    cout << "Tampilkan Bilangan B = " << nBilB << endl;

    
    if (nBilA == nBilB){
        status = "nilai A dan B sama besar";
    }
    else if(nBilA > nBilB){
        status = "nilai A lebih besar dari B";
    }
    else {
        status = "nilai A lebih kecil dari B";
    }

    cout << "Tampilkan status = " << status << endl;

    return 0;
    
}