#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string user,pass,u,p;

    cout << "NAMA  : AHMD MUFAHRAS LI ALFAZH ASSARDEW" <<endl;
    cout << "KELAS : TI A 2022" <<endl;
    cout << "NIM   : 22051204020" <<endl;

    cout << "pertama buatlah akun dan password";
    cout << "buat username = ";
    cin >> user;
    cout << "buat password = ";
    cin >> pass;

    cout << "KONFIRMASI AKUN"<<endl;
    cout << "masukkan username = ";
    cin >>u;
    cout << "masukkan password = ";
    cin >>p;

    while (user!=u && pass!=p)
    {
        cout <<"USERNAME DAN PASSWORD SALAH"<<endl;

        cout << "masukkan username = ";
        cin >>u;
        cout << "masukkan password = ";
        cin >>p;

    }
    cout <<"LOGIN BERHASIL";
    
    
    return 0;
}
