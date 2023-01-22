#include <bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        float per;
        cout<<"jumlah peserta = ";
        cin >> n ;
        cout<<"minimal prosentase = ";
        cin >> per;
        
        int batas;
        cout<<"batas terlambat = ";
        cin >> batas;
        int penentu = 0;
        for(int i=0;i<n;i++){
            int x;
            cout<<"waktu masuk peserta "<<i<<" : ";
            cin >> x;
            if(x>= batas){
                penentu++;
            }
        }
        int a = n * per;
        cout << "jumlah siswa hadir tepat waktu "<<penentu << endl;
        cout << "jumlah peserta minimal "<<a << endl;


        if(penentu>=a){
            cout << "Kelas dilanjutkan" << endl;
        }else{
            cout << "Kelas dihentikan" << endl;
        }
    }
    return 0;
}
