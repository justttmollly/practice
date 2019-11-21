#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int fucktion(string a, int count=0){
for(int i=0; i<a.length(); i++){
if((a[i]==65)||(a[i]==69)||(a[i]==73)||(a[i]==79)||(a[i]==85)||(a[i]==89)||(a[i]==97)||(a[i]==101)||(a[i]==105)||(a[i]==111)||(a[i]==117)||(a[i]==123)){
    count=count+1;

}
}
return count;
}
int main(){
string a;
int count=0;
getline(cin, a);
cout<<fucktion(a, count);
}
