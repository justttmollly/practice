#include <iostream>
using namespace std;
int main () {
    int n,s;
    cin>>n;
    for(int i = 1; i <= n; i++){
        s=0;
        for(int j = 1; j < i/2 + 1; j++){
            if(i % j == 0)
                s+=j;
        }
        if(s==i)
            cout<<i<<endl;
    }
 return 0;
}
