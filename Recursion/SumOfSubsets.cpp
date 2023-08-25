#include<iostream>
#include<vector>
using namespace std;

void f(vector<int> arr, int n, int idx, int sum, vector<int> &result) {
    if (idx == n) {
        result.push_back(sum);
        return;
    };
    f(arr, n, idx+1, sum+arr[idx], result); // pick the ith element
    f(arr, n, idx+1, sum, result); // do not pick the ith element
}

int main() {
    vector<int> v = {2, 4};
    vector<int> res = {};
    f(v, v.size(), 0, 0, res);

    for (int i: res) {
        cout << i << " ";
    } 
    return 0;
}