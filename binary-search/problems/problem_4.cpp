// rotation has been performed some number of times on a sorted array, find the index of the minimum element, follow 0 based indexing
// it is guaranteed that all elements are sorted

#include<iostream>
#include<vector>
using namespace std;

int minIndex(vector<int> v) {
    int lo = 0;
    int hi = v.size()-1;
    int curr;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        if (v[mid] > v[mid+1]) return mid+1;
        if (v[mid] < v[mid-1]) return mid;
        if (v[mid] > v[lo]) {
            lo = mid+1;
        } else {
            hi = mid-1;
        }
    }
    return curr;
}

int main() {
    vector<int> v = {4, 5, 1, 2 ,3};
    cout << minIndex(v);
    return 0;
}