#include <iostream>
using namespace std;

int main(){
	
	int x , y , z;
	cin >> x >> y >> z;
	
	if ( x > 10 && y > 10 && z > 10 && x % 3 == 0 && y % 3 == 0) cout << "Yes";
	else cout << "No";
	
	return 0;
}
