#include <iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    int two = (a - a/10000 * 10000) / 1000;
    int four = (((a - a/10000 * 10000) - two * 1000) - ((a - a/10000 * 10000) - two * 1000)/100 * 100 ) / 10;
    cout << a - two * 1000 - four * 10;
    return 0;
}