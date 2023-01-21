#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float prosentase=0.3;
    int laba,banyak,harga;
    int rumus1,rumus2;

    cout << "masukkan harga barang = " ;
    cin >> harga ;
    cout << "masukkan banyak barang = " ;
    cin >> banyak ;

    rumus1 = prosentase*harga*banyak;
    rumus2 = prosentase*harga;

    cout << "laba yang didapat dari sejumlah barang adalah = " <<rumus1<< endl;
    cout << "laba dari masing-masing barang adalah = " << rumus2 << endl;
    return 0;
}
