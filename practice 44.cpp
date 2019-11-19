#include <iostream>
using namespace std;

int main(){
	
	int x , y;
	cin >> x >> y;
	
	if( x != 10 && y != 10 && x % 2 == 0){
		cout << x + y;
	}
	else cout << x * y;
	
	return 0;
}
