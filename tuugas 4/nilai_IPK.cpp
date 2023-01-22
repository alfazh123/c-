#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float ipk;
    
    cout << "CONTOH MEMASUKKAN IPK = 4.00,3.8,3.69" <<endl;
    cout << "masukkan nilai IPK = ";
    cin >>ipk;

    if (ipk>=0.0 && ipk<=0.99)
    {
        cout << "Tidak Lulus ";
    }
    else if (ipk>=1.0 && ipk<=1.99)
    {
        cout << "Mengulang ";
    }
    else if (ipk>=2.0 && ipk<=2.99)
    {
        cout << "Baik ";
    }
    else if (ipk>=3.0 && ipk<=3.49)
    {
        cout << "Sangat Baik ";
    }
    else if (ipk>=3.5 && ipk<=4.00)
    {
        cout << "Sempurna ";
    }
    
    cout << " Terimakasih" <<endl;

    return 0;
}

