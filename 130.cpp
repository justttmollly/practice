#include <iostream>
using namespace std;
int sum(int *i){
    int a,b,c,d,e,f,s;
    a =  *i/100000;
    b = (*i/ 10000 ) % 10;
    c = (*i/ 1000) % 10;
    d= (*i/ 100) % 10;
    e= (*i/ 10) % 10;
    f=*i%10;
    s=a+b+c+d+e+f;
    return s;
}
int main () {
    int n,si,sj;
bool b;
    for (int i=100000; i<=999999; i++){
        int j=i+1;
    si=sum(&i);
    sj=sum(&j);
    if(si%13==0 && sj%13==0){
        cout<<"YES, it can: "<<i<<" and "<<j<<endl;
    }
}
    return 0;
}
