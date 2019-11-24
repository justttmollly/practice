#include <iostream>
using namespace std;
int main (){
	int n,mx;
    cin>>n;
    mx=n%10;
    n=n/10;
   while(n>0) {
        if (n%10 > mx)
        mx=n%10;
        n=n/10;
   }
   cout<<mx<<endl;
    return 0;
}

