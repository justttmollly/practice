#include <iostream>
using namespace std;
int main () {
    int a, b;
    cin >> a >> b;
    int A = a/100 * 100000 + (a - a/100 * 100)/10 * 10000 + a % 10 * 1000;
    cout << A + b;
    return 0;
}