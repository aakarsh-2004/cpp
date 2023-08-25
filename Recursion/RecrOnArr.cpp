#include<iostream>
using namespace std;

int f(int arr[], int idx, int n) {
    // base case
    if (n == 0) return 0;
    // self work
    cout << arr[idx] << endl;
    // assumption
    f(arr, idx+1, n-1);
};

int main() {
    int n = 5;
    int newArr[n] = {1, 2, 3, 4, 5};
    f(newArr, 0, n);
    return 0;
};