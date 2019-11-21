#include<iostream>
using namespace std;

int main(){
	
	int day , month , year;
	
	cin >> day >> month >> year;
	
	if ( day < 1 || month > 12 || year < 0){
		cout << "Invalid date";
		return 0;
	}
	
	if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		if ( day > 0 && day < 32) cout << "Yes";
		else cout << "No";
	}
	else if ( month == 4 || month == 6 || month == 9 || month == 11 ){
		if ( day > 0 && day < 31) cout << "Yes";
		else cout << "No";
	}
	else if ( month == 2){
		if ( day > 0 && day < 29) cout << "Yes";
		else  cout << "No";
	}
	return 0;
}
