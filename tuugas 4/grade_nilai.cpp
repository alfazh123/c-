#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    float e,f,g,h;
    float nilai;

    cout << "CATATAN:" <<endl;
    cout << "--> MENGISI NILAI MENGGUNAKAN BILANGAN BULAT POSITIF <-- " <<endl;
    cout << "--> MENGISI BOBOT NILAI MENGGUNAKAN BILANGAN DESIMAL 0.2,0.6,0.5<-- "<<endl;
    cout << "--> BATAS MENGISI NILAI 0 SAMPAI 100<--"<<endl;
    cout << "--> PENGISIAN BOBOT, JIKA SETIAP BOBOT TUGAS,PARTISIPASI,UTS,UAS MAKA HARUS BERJUMLAH SATU"<<endl;
    
    cout << "masukkan nilai tugas = ";
    cin >> a;
    cout << "masukkan nilai partisipasi = ";
    cin >> b;
    cout << "masukkan nilai uts = ";
    cin >> c;
    cout << "masukkan nilai uas = ";
    cin >> d;

    cout << "PENGISIAN BOBOT"<<endl;
    cout << "masukkan bobot nilai tugas = ";
    cin >> e;
    cout << "masukkan bobot nilai partisipasi = ";
    cin >> f;
    cout << "masukkan bobot nilai uts = ";
    cin >> g;
    cout << "masukkan bobot nilai uas = ";
    cin >> h;

    nilai=(a*e)+ (b*f)+(c*g)+(d*h);
    
    cout << "nilai mata kuliah = " <<nilai<<endl;
    cout << "dengan grade nilai = ";

    if (nilai>=0 && nilai<=50)
    {
        cout << "E" <<endl;
    }
    else if (nilai>=51 && nilai<=67)
    {
        cout << "D" <<endl;
    }
    else if (nilai>=68&&nilai<=85)
    {
        cout << "C" <<endl;
    }
    else if (nilai>=86&&nilai<=90)
    {
        cout << "B" <<endl;
    }
    else if (nilai>=91&&nilai<=100)
    {
        cout << "A" <<endl;
    }

    cout << "terimakasih" ;

    return 0;
}
