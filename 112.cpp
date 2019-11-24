#include <iostream>
using namespace std;
int main (){
  for ( int i = 0 ; i < 100; i++ )
    {
        for ( int j = 0; j < 100; j++ )
        {
            if ( j == i )
            {
                cout << 0 ;
            }
            else cout << 1 ;
        }
        cout << endl;
    }
    return 0;
}

