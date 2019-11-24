#include <iostream>
using namespace std;
int main (){
 int n;
    int k;
    int sum = 0;
    bool b = true;
    cin >> n >> k;
    for (int i = 1; i <=n ; i++) {
        sum += i;
        if (sum == k) {
            b = false;
            break;
        }
    }
    if (b == true) cout << "Not exist";
    else cout << "Exist";
    return 0;
}
