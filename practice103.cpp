#include <iostream>
using namespace std;
int main (){
    int a,b,c,d,s;
    for(int i=100; i<999; i++) {
        a =  i/ 100;
        b = (i/ 10 ) % 10;
        c = i % 10;
        s=a*a*a+b*b*b+c*c*c;
        if(i==s)
            cout<<i<<" ";
}
}

