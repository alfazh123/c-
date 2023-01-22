#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    
    cout<<"masukkan bilangan pertama = ";
    cin>>a;
    cout<<"masukkan bilangan ke dua = ";
    cin>>b;

    if (a<b)
    {
        cout<<"bilangan "<<a<<" yang terkecil"<<endl;
    }else if (b<a)
    {
        cout<<"bilangan "<<b<<" yang terkecil"<<endl;
    }
    
    
    return 0;
}
