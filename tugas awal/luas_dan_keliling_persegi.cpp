#include <iostream>

using namespace std;
//NAMA :AHMD MUFAHRAS LI ALFAZH ASSARDEW
//NIM  :22051204020
//KELAS:TIA2022


int main(int argc, char const *argv[])
{

    int a,b ;
    cout << "masukkan nilai a= " ;
    cin >> a ;
    cout << "masukkan nilai b= " ;
    cin >> b ;
    if ( a>b )
    {
        cout << " a adalah panjang dan b adalah lebar"<< endl;
    }else if ( a<b )
    {
        cout << " a adalah lebar dan b adalah panjang"<< endl;
    }
    
    cout << "luas persegi panjang = " << a*b << endl;
    cout << "keliling persegi = " << 2*a+2*b << endl;
    
    
    
    
    return 0;
}
