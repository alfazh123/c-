#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"masukkan banyak mahasiswa = ";
    cin>>n;

    int nilai[n];
    string nama[n];

    for(int i=0; i<n; i++){
        cout<< i+1 <<". masukkan nama mahasiswa :";
        cin>>nama[i];
        cout<<"   masukkan nilai untuk mahasiswa "<<nama[i]<<" : ";
        cin>>nilai[i];
        
    }

    for(int i=0; i<n; i++){
        if(nilai[i]>50){
        cout<<nama[i]<<" lulus"<<endl;
    }
    }

    
    return 0;
}
