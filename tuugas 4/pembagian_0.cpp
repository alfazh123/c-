#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;

    cout<< "masukkan nilai pertama = ";
    cin >> a;
    cout << "masukkan nilai kedua = ";
    cin >> b;

    if (b==0)
    {
        cout << "tidak dapat dibagi dengan nol" <<endl;
    }
    else{
        cout <<"hasil pembagian = "<< a/b<<endl ;
    }
    
    return 0;
}
