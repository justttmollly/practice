#include <iostream>
using namespace std;

int main(){
	
	int a;
    cin >> a;
    if (a > 100 || a < -100)
    a = 0;
    else a += 1;
    cout << a;
	
	return 0;
}
