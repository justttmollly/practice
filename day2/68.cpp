#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b*b - 4*a*c;
    if(d < 0) {
        cout << "No answer";
    }
    if(d == 0) {
        cout << -b/(2*a);
    }
    if(d > 0) {
        cout << (-b - sqrt(b))/(2*a) << " " << (-b + sqrt(b))/(2*a);
    }
    return 0;
}