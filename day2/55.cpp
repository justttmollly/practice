#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    if(a > 0) {
        count++;
    }
    if(b > 0) {
        count++;
    }
    if(c > 0) {
        count++;
    }
    cout << count;
    return 0;
}