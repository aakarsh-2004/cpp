// find the first occurrence of a given element x, given that the array is sorted. If no occurrence of x is found then return -1

#include<iostream>
#include<vector>
using namespace std;

int f(vector<int> v, int lo, int hi, int x) {
    if (lo > hi) return -1;
    int mid = lo + (hi-lo)/2;

    if (v[mid] == x) return mid;
    else if (v[mid] > x) {
        return f(v, lo, mid-1, x);
    } else {
        return f(v, mid+1, hi, x);
    }
}

int main() {
    vector<int> v = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int x = 3;
    int lo = 0;
    int hi = v.size()-1;
    cout << f(v, lo, hi, x);
    return 0;
}