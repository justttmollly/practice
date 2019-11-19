#include <iostream>
using namespace std;

int main(){
	
	int  x , y , z , sum = 0;
	bool check = false;
	cin >> x >> y >> z;
	
	
	if ( x % 5 == 0){
	sum += x;
	check = true;
	}
	else 
	if ( y % 5 == 0){
	sum += y;
	check = true;
	}
	if ( z % 5 == 0) {
	sum += z;
	check = true;
	}
	
	if(check) cout << sum;
	else cout << "Error";
	
	return 0;
}
