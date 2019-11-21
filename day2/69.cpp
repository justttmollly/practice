#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a+b+c)/2;
    double s = sqrt( p * (p - a) * (p - b) * (p - c));
    if(a + b > c && a + c > b && b + c > a) {
        cout << s;
    }
    else {
        cout << "Not exist";
    }
    return 0;
}