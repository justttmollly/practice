
#include <iostream>
using namespace std;
int main () {
    int s;
    for(int i=10; i>0; i--)
    {
        int j=i;
        s+=i*j;
        for (j=i;j>0;j--){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    cout<<s;
}
