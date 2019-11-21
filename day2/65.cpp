#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	vector <int> number2;
	int number , digit1 , digit2 , digit3, digit4;
	cin >> number;
	
	digit1 =  number / 1000;
	digit2 = (number / 100 ) % 10;
	digit3 = (number / 10) % 10;
	digit4 = number % 10;
	
	if ( digit1 < 5) number2.push_back(digit1);
	if ( digit2 < 5) number2.push_back(digit2);
	if ( digit3 < 5) number2.push_back(digit3);
	if ( digit4 < 5) number2.push_back(digit4);
	
	if ( digit1 > 5) number2.push_back(digit1);
	if ( digit2 > 5) number2.push_back(digit2);
	if ( digit3 > 5) number2.push_back(digit3);
	if ( digit4 > 5) number2.push_back(digit4);
	
	for ( int i = 0 ; i < number2.size(); i++){
		cout << number2[i];
	}
	
	return 0;
}
