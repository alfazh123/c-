#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int a;

    cout<<"masukkan banyak bilangan yang ingin di masukkan = ";
    cin>>a;

    int arr[a];
    for(int i=0; i<a; i++){
        cin>>arr[a];
    }
    if(arr[a]>sum){
        sum=arr[a];
    }
    cout<<"nilai terbesar = "<<sum<<endl;
    return 0;
}