#include <iostream>
using namespace std;

int main(){
	
	int a , b , c;
	
	cin >> a >> b >> c;
	
	if ( (a > b && b > c) || (b > a && a > c)) cout << a << " "<< b;
	else if ( (a > b && c > b) || (c > a && a > b)) cout << a <<" "<< c;
	else if ( (b > a && c > a) || ( c > b && b > a)) cout << b << " " << c;
	
	return 0;
}
