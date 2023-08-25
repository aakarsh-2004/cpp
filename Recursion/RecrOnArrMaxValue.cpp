#include<iostream>
using namespace std;

int f(int arr[], int idx, int n) {
    if (idx == (n-1)) return arr[idx];
    return max(arr[idx], f(arr, idx+1, n));
}

int main() {
    int n = 5;
    int arr[] = {20, 1, 2, 3, 11, 4, 5};
    int res = f(arr, 0, n);
    cout << res << endl;
    return 0;
}