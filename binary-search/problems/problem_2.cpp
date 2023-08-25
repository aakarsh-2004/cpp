// find the square root of the given non negative value x. Round it off to the nearest floor integer value

#include<iostream>
#include<cmath>
using namespace std;

// iterative approach
int f(int x) {
    int lo = 1;
    int hi = x;
    int ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        if (mid * mid <= x) {
            ans = mid;
            lo = mid+1;
        } else {
            hi = mid - 1;
        }
    }
    return ans;
}

// recursive approach
int f2(int x, int lo, int hi) {
    if (lo > hi) return -1;

    int mid = lo + (hi-lo)/2;
    if (mid * mid == x) return mid;
    else if (mid * mid < x) return (x, mid+1, hi);
    else return (x, lo, mid-1);
}

int main() {
    int x = 24;
    int lo = 1;
    int hi = x/2;
    cout << f2(x, lo, hi);
    return 0;
}