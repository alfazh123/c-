#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pilihan;
    int kubus,s,lingkaran,r,volume,t;
    float phi=3.14;

    cout <<"pilih mau menghitung apa"<<endl;
    cout <<"ketik '1' jika ingin menghitung volume kubus"<<endl;
    cout <<"ketik '2' jika ingin menghitung luas lingkaran"<<endl;
    cout <<"ketik '3' jika ingin menghitung volume silinder"<<endl;
    cout <<"masukkan pilihan = ";
    cin >>pilihan;

    while(pilihan<1||pilihan>3)
    {
    switch (pilihan){
        case 1:
        cout <<"masukkan sisi = ";
        cin >>s;
        kubus=s*s*s;
        cout <<kubus;
        break;

        case 2:
        cout <<"masukkan jari-jari = ";
        cin >>r;
        lingkaran=phi*r*r;
        cout <<lingkaran;
        break;


        case 3:
        cout <<"masukkan jari-jari = ";
        cin >>r;
        cout <<"masukkan tinggi silinder = ";
        cin >>t;
        volume=phi*r*r*t;
        cout <<volume;
        break;

        default:
        cout <<"MOHON MASUKKAN SESUAI DENGAN YANG TERSEDIA"<<endl;
        cout <<"masukkan pilihan = ";
        cin >>pilihan;

    }
    }    

    switch (pilihan){
        case 1:
        cout <<"masukkan sisi = ";
        cin >>s;
        kubus=s*s*s;
        cout <<kubus;
        break;

        case 2:
        cout <<"masukkan jari-jari = ";
        cin >>r;
        lingkaran=phi*r*r;
        cout <<lingkaran;
        break;

        case 3:
        cout <<"masukkan jari-jari = ";
        cin >>r;
        cout <<"masukkan tinggi silinder = ";
        cin >>t;
        volume=phi*r*r*t;
        cout <<volume;
        break;
    }
    return 0;
}
