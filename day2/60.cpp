#include <iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    int first = a / 100;
    int last = a % 10;
    cout << a - first * 100 - last + last * 100 + first;
    return 0;
}
