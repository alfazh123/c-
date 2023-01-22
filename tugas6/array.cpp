#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"masukkan banyak bilangan : ";
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cout<<"masukkan bilangan = ";
        cin>>a[n];
    }

    cout<<a[n];
    return 0;
}
