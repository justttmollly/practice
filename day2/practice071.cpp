#include <iostream>
using namespace std;
int main (){
	    int a, b;
    cin >> a>> b;
  
  double angle = (( a + ( b / 60)) * 30) - (b * 6);
  
  if ( angle > 180 ) angle -= 180;
  
  cout << angle;
}
