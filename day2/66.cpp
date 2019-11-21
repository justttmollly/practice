#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int A = (a - a%10) * 10;
    int B = b / 10;
    cout << A + B;
    return 0;
}