#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a , b , h;
    cin >> a >> b >> h;
    
    for ( int i = a ; i <= b; i = i + h )
    {
        cout << i << " " << ( i * i ) - sin(i);
        cout << endl;
    }
    
    return 0;
}

