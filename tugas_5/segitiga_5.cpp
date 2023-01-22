#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout <<"masukkan banyak bilangan = ";
    cin >>n;
    
    for(int i = 1; i <= n; i++){
        
        for(int j = n; j>=i; j--){
           cout << n - i + 1;
        }

        cout << endl;
        
    }n--;
    
    return 0;
}
