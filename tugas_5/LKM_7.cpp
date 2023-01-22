#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=10;

    cout<<"  "<<"1 2 3 4 5 6 7 8 9 10"<<endl;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=10; j++){
        cout<<i*j;
        }cout<<endl;
    };
    return 0;
}
