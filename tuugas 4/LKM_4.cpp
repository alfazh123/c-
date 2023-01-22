#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;

    cout <<"masukkan angka pertama = ";
    cin  >>a;
    cout <<"masukkan nilai kedua = ";
    cin  >>b;

    if(b==0){
        cout<<"ERROR"<<endl;
    }else{
        cout<<a/b;
    }
    return 0;
}
