#include<iostream>
#include<vector>
using namespace std;

int f(vector<int> h, int n, int i) {
    // base case
    if (i == n-1) return 0;
    if (i == n-2) return f(h, n, i+1) + abs(h[i] - h[i+1]);
    // assumption
    return min(f(h, n, i+1) + abs(h[i] - h[i+1]), f(h, n, i+2) + abs(h[i] - h[i+2]));
}

int main() {
    vector<int> arr = {10, 30, 40, 20};
    cout << f(arr, arr.size(), 0);
    return 0;
}