// given the sorted array of integers, which contains distinct elements and an integer target, return the index of the target if it is in the array otherwise return -1

#include<iostream>
#include<vector>
using namespace std;

int findIdx(vector<int> v, int x) {
    int lo = 0;
    int hi = v.size()-1;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        if (v[mid] == x) return mid;
        if (v[mid] >= v[lo]) {
            if (x >= v[lo] && x <= v[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        } else {
            if (x >= v[mid] && x <= v[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
}

int main() {
    vector<int> v = {3, 4, 5, 1, 2};
    int x = 4;
    cout << findIdx(v, x);
    return 0;
}