#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int x,y;

    
    
    cout << "masukkan bilangan pertama dan kedua" <<endl;
    cin >> x >> y;
    

    if (x>y)
    {
        cout << "bilangan pertama lebih besar dari bilangan kedua, urutannya = " <<x<<","<<y<<endl;
    }
    else if (y>x)
    {
        cout << "bilangan kedua lebih besar dari bilangan pertama, urutannya = " <<y<<","<<x<<endl;
    }
    else if (x=y)
    {
        cout << "besar bilangan pertama dan kedua sama " <<x<<" = "<<y<<endl;
    }
    
    
    
    return 0;
}
