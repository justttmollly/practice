#include <iostream>
using namespace std;
int left(int *arr, int size)
{
    int l = arr[0];
    for(int i = 1; i < size; i++)
        if(arr[i] > l){
            l = arr[i];
        }
    return l;
}

int right(int *arr, int size)
{
    int r = arr[0];
    for(int i = 1; i < size; i++)
        if(arr[i] < r){
            r = arr[i];
        }
    return r;
}
int main(){
    int x[4], y[4];
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
    cout << right(x, 4) << " " << right(y, 4) << endl << left(x, 4) << " " << left(y, 4) << endl;
    return 0;
}
