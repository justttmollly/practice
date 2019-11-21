#include <iostream>
using namespace std;

int main(){
	
	int day , month , year , day2 , month2, year2;
	
	bool check = false;
	
	cin >> day >> month >> year >> day2 >> month2 >> year2 ;
	
	if ( day < 1 || month > 12 || year < 0 || day2 < 1 || month2 > 12 || year2 < 0){
		cout << "Invalid date";
		return 0;
	}
	
	if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		if ( day > 0 && day < 32 ) check = true;
		else {
			cout << "Invalid date";
			return 0;
	}
}
	else if ( month == 4 || month == 6 || month == 9 || month == 11 ){
		if ( day > 0 && day < 31 ) check = true;
		else {
			cout << "Invalid date";
			return 0;
	}
}
	else if ( month == 2 ){
		if ( day > 0 && day < 29 ) check = true;
		else {
			cout << "Invalid date";
			return 0;
	}
}

	if ( month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12){
		if ( day2 > 0 && day2 < 32 ) check = true;
		else {
			cout << "Invalid date";
			return 0;
	}
}
	else if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11 ){
		if ( day2 > 0 && day2 < 31 ) check = true;
		else {
			cout << "Invalid date";
			return 0;
	}
}
	else if (month2 == 2){
		if ( day2 > 0 && day2 < 29 ) check = true;
		else {
			cout << "Invalid date";
			return 0;
	}
}
	
	if (check){
		if ( year < year2) cout << "Yes";
		else {
			if ( month < month2) cout << "Yes";
			else {
				if ( day < day2) cout << "Yes";
					else cout << "No";
			}
		}
	}
	return 0;
}
