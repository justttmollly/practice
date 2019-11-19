#include <iostream>
#include <cmath>
using namespace std;
int main() {
double x= 3.6,d;
 d = exp(x - 2) + abs(sin(x)) - pow(x, 4) * cos(1 / x);
cout << d;
return 0;
}

