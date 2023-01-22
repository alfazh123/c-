#include <iostream>
#include <bits./stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int jml;
    cout<<"masukkan jumlah kasus : ";
    cin>>jml;

    for(int i=1; i<=jml; i++){
        int n;
        float min;
        
        cout<<"jumlah peserta : ";
        cin>>n;
        cout<<"prosentase jumlah minimal kehadiran pada kelas "<<i<<" : ";
        cin>>min;

        //parameter disini berguna sebagai hasil penentu berapa yang masuk kelas
        int parameter=0;
        for(int j=0; j<n; j++){
            int t;
            cout<<"waktu peserta "<<j+1<<" : ";
            cin>>t;

            if(t>min){
                parameter+=1;
            }

        }

        int x = n * min;
        cout << "jumlah peserta hadir tepat waktu         : "<<parameter<<endl<<endl;
        cout << "jumlah peserta minimal yang harus datang : "<<x        <<endl<<endl;

        if(parameter >= x){
            cout<<"kelas ke-"<<i<<" delanjutkan"<<endl<<endl;
        }else{
            cout<<"kelas ke-"<<i<<" dibatalkan"<<endl<<endl;
        }

    }

    return 0;
}
