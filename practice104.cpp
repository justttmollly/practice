#include <iostream>
using namespace std;
int main () {
    int a,b,c,d,s,k;
    for(int i=1000; i<9999; i++) {
        a =  i/ 1000;
        b = (i/ 100 ) % 10;
        c = ((i / 10) /10)%10;
        d= i % 10;
        s=a+b+c+d;
        if(i==600*s)
        k++;
    }
    cout<<k<<" ";
}
