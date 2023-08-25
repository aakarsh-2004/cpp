#include<iostream>
#include<vector>
using namespace std;

bool f(int n, int x, vector<int>arr, int idx, bool *res) {
    if (idx == n-1) return arr[idx];
    f(n, x, arr, idx+1, res);
    if (arr[idx] == x) (*res) = true;
    return res;
}

int main() {
    vector<int> v = {1, 2, 3, 4};
    int num = 3;
    bool res = false;
    bool *ptr = &res;
    cout << f(v.size(), num, v, 0, ptr);
    return 0;
}