// given a mountain array 'a' pg length greater than 3, return the index 'i' such that arr[0] < arr[1] < ... < arr[i-1] <arr[i] > arr[i+1] ...

#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int> v) {
    int lo = 0;
    int hi = v.size()-1;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        if (v[mid] < v[mid+1]) return mid+1;
        if (v[mid] > v[mid-1]) return mid;
        if (v[mid] > v[lo]) {
            lo = mid+1;
        } else {
            hi = mid-1;
        }
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 3, 2, 0}; 
    cout << findMin(v);
    return 0;
}