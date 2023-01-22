#include <iostream>

using namespace std;
//NAMA :AHMD MUFAHRAS LI ALFAZH ASSARDEW
//NIM  :22051204020
//KELAS:TIA2022

int main(int argc, char const *argv[])
{
    int panjang,m,cm;
    cout << "masukkan nilai panjang dalam cm = " ;
    cin >> panjang ;
    m=panjang/100;
    cm=panjang%100;
    cout <<m<<"m,"<<cm<<"cm";
    return 0;
}
