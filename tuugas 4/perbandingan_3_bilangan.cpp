#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c;

    cout << "masukkan bilangan pertama = ";
    cin >> a;
    cout << "masukkan bilangan kedua = ";
    cin >> b;
    cout << "masukkan bilangan ketiga = ";
    cin >> c;

    if (a>b>c)
    {
        cout << "bilangan pertama" <<a<< "lebih besar dari bilangan kedua dan ketiga = " <<b<<"dan"<<c;
    }
    else if (b>a>c)
    {
        cout << "bilangan kedua" <<b<< "lebih besar dari bilangan pertama dan ketiga = " <<a<<"dan"<<c;
    }
    else if (c>b>a)
    {
        cout << "bilangan ketiga" <<c<< "lebih besar dari bilangan pertama dan kedua = " <<a<<"dan"<<b;
    }
    
    
    
    
    return 0;
}
