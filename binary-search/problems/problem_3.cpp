// given an array of integers 'a' that is sorted in non decreasing order. Find the first and last position of the given target element in the sorted array. Follow the 0 based indexing
// If 'target' is not found in the array return [-1, 1]
#include<iostream>
#include<vector>
using namespace std;

int upperbound(vector<int> v, int target) {
    // finding the element just greater than the target element
    int lo = 0;
    int hi = v.size()-1;
    int cand;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        if (v[mid] > target) {
            hi = mid-1; // discard the right side
            cand = mid;
        } else if (v[mid] <= target) {
            lo = mid+1; // discard the left side
        }
    }
    if (v[cand-1] != target) {
        cand = -1;
    } else {
        cand = cand-1;
    }
    return cand;
}

int lowerbound(vector<int> v, int target) {
    // finding the first occurrence element
    int lo = 0;
    int hi = v.size()-1;
    int cand;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        if (v[mid] >= target) {
            hi = mid-1; // discard the right side
            if (v[mid] == target) {
                cand = mid;
            }
        } else if (v[mid] < target) {
            lo = mid+1; // discard the left side
        }
    }
    if (v[cand] != target) {
        cand = -1;
    }
    return cand;
}

int main() {
    vector<int> v = {1, 2, 3, 3, 3, 5, 11};
    int target = 3;

    int n1 = lowerbound(v, target);
    int n2 = upperbound(v, target);
    vector<int> res = {n1, n2};
    for (int i: res) {
        cout << i << " ";
    }
    return 0;
}