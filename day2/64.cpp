#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a = n / 1000;
    int s = n / 100 % 10;
    int d = n / 10 % 10;
    int f = n % 10;
    if (a == f && s == d) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}