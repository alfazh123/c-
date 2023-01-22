#include <iostream>
#include <bits./stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, pa, harga, jmla, jmlpa;
    float d;

    cout << "masukkan harga : ";
    cin  >> harga;

    cout << "masukkan harga barang si-a :";
    cin  >> a;

    cout << "masukkan harga barang si-pa : ";
    cin  >> pa;

    cout << "masukkan diskon dari toko : ";
    cin  >> d;

    for( int i=1 ; i>=0 ; i++ ){
        if(harga>a){
            a*=i;
            if(a>=harga){
                jmla=i;
            }
        }
        
    }

    for(int j=1 ; j>=0 ; j++){
        if(harga > pa){
            pa*=j;
            if( pa >= harga){
                jmlpa=j;
            }
        }
    }
    cout << "jumlah pembelian a = " << jmla << endl;
    cout << "jumlah pembelian pa = " << jmlpa << endl;
    cout << "diskon harga = "<< harga*d;
    return 0;
}
