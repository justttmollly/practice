#include <iostream>
using namespace std;
int main (){
	int  n,a,b;
cin>>n;
a=0;
while (n>0){
b=n%10;
n=n/10;
a=a*10+b;}
cout<<a;
}

