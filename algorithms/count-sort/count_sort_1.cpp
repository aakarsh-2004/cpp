#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void countSort(vector<int> &v) {
    int n = v.size();

    // finding the max ele
    int maxEle = INT8_MIN;
    for (int i = 0; i < n; i++) {
        maxEle = max(v[i], maxEle);
    }

    // create the freq arr
    vector<int> freq(maxEle+1, 0);
    for (int i = 0; i < n; i++) {
        freq[v[i]]++;
    }

    // calculate cumulative freq
    for (int i = 1; i <= maxEle; i++) {
        freq[i] += freq[i-1];
    }

    // calculate the sorted array
    vector<int> ans(n);
    for (int i = n-1; i >= 0; i--) {
        ans[--freq[v[i]]] = v[i];
    }

    // copy back the ans to original arr
    for (int i = 0; i < n; i++) {
        v[i] = ans[i];
    }
}

int main() {
    vector<int> arr = {4, 10, 2, 1, 12, 20};
    countSort(arr);

    for (int i: arr) {
        cout << i << " ";
    }
    return 0;
}