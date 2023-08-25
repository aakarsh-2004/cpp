#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &v) {
    int n = v.size();
    // this is selection sort
    for (int i = 0; i < n-1; i++) {
        // assuming the current element to be minimum
        int m = i;
        // finding the minimum element
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[m]) {
                m = j;
            };
        };
        if (m != i) {
            swap(v[i], v[m]);
        };
    };
}

int main() {
    vector<int> v = {10, 5, 1, 15, 20, 4};
    selectionSort(v);

    for (int i: v) {
        cout << i << " ";
    };
    return 0;
}