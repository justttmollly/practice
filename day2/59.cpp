#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int one = a/1000;
    int two = (a - one * 1000) / 100;
    int three = ((a - one * 1000) - two * 100) / 10;
    int four = a % 10;
    if(one > two && one > three && one > four && two > three && two > four && three > four) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}