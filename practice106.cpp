#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
   for(int i=1; i<=3; i++){
       int j=i*n;
       while(j--){
          cout<<i;
        }
      cout<<' ';
   }
 return 0;
}
