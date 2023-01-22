#include <iostream>
using namespace std;

int main(){
    double h, d, m, u;

    cout<<"masukkan banyak uang   : ";
    cin>>u;
    cout<<"masukkan harga barang  : ";
    cin>>h;
    cout<<"masukkan diskon        : ";
    cin>>d;
    cout<<"masukkan harga minimum : ";
    cin>>m;

    int i=0;

    while(u >= h){
        if(h<m){
            h=m;
        }
        u-=h;

        if(h>=m){
            h-=(h*d);
        }

        i++;

    }

    cout<<"banyak barang : "<<i<<endl;

    return 0;
}


