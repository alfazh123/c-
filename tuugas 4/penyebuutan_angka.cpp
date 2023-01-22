#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;

    cout << "masukkan angka = ";
    cin >>a;

    switch (a){
        case 0:
             cout << "NOL"; 
             break;
        case 1: 
             cout << "SATU";
             break;
        case 2:
             cout << "DUA";
             break;
        case 3:
             cout << "TIGA";
             break;
        case 4:
             cout << "EMPAT";
             break;
        case 5:
             cout << "LIMA";
             break;
        case 6:
             cout << "ENAM";
             break;
        case 7:
             cout << "TUJUH";
             break;
        case 8:
             cout << "DELAPAN";
             break;
        case 9:
             cout << "SEMBILAN";
             break;
    }

    cout << "---TERIMAKASIH---" ;
    return 0;
}
