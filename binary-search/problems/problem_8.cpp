// A peak element is an element that is strictly greater than it's neighbours. Given a 0 indexed integer array nums, find a peak element and return its index. If the array contains multiple peaks, return the index of any of the peaks. You may imagine that nums[-1] = nums[n] = -infinity. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

#include<iostream>
#include<vector>
using namespace std;

int findPeak(vector<int> &v) {
    int n = v.size();
    int lo = 0;
    int hi = n-1;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        if (mid == 0) {
            if (v[mid] > v[mid+1]) {
                return 0;
            } else {
                return 1;
            }
        } else if (mid == n-1) {
            if (v[mid] > v[mid-1]) {
                return n-1;
            } else {
                return n-2;
            }
        } else {
            if (v[mid] > v[mid+1] && v[mid] > v[mid-1]) {
                return mid;
            } else if (v[mid] > v[mid-1]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> v {3, 4, 5, 1, 9, 10, 2, 6, 8, 2};
    cout << findPeak(v);
    return 0;
}