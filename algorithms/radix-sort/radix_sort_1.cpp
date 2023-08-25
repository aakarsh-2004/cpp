#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void countSort(vector<int> &v, int pos) {
    int n = v.size();
    // create freq arr
    vector<int> freq(10, 0);
    for (int i = 0; i < n; i++) {
        freq[(v[i]/pos)%10]++;
    }

    // cumulative freq
    for (int i = 1; i < 10; i++) {
        freq[i] += freq[i-1];
    }

    // ans array
    vector<int> ans(n);
    for (int i = n-1; i >= 0; i--) {
        ans[--freq[(v[i]/pos)%10]] = v[i];
    }

    for (int i = 0; i < n; i++) {
        v[i] = ans[i];
    }
}

void radixSort(vector<int> &v, int n) {
    int maxEle = INT8_MIN;
    for (int i = 0; i < n; i++) {
        maxEle = max(v[i], maxEle);
    }

    for (int pos = 1; maxEle/pos > 0; pos *= 10) {
        countSort(v, pos);
    }
}

int main() {
    vector<int> v = {34, 429, 12, 1, 55};
    int n = v.size();
    radixSort(v, n);

    for (int i: v) {
        cout << i << " ";
    }
    return 0;
}