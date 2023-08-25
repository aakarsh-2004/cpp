// recursive solution of the binary search algorithm
// Time Complexity: 0(logN)
// Space Complexity: 0(logN)
#include<iostream>
#include<vector>
using namespace std;

int binarySearchRecr(vector<int> input, int lo, int hi, int target) {
    // base case
    if (lo > hi) return -1;
    // assumption
    // this mid can help prevent overflow
    // int mid = lo + (hi - lo) / 2;
    int mid = (hi+lo)/2;
    if (input[mid] == target) return mid;
    else if (input[mid] > target) {
        return binarySearchRecr(input, lo, mid-1, target);
    } else {
        return binarySearchRecr(input, mid+1, hi, target);
    }
}

int main() {
    vector<int> input = {2, 4, 5, 7, 15, 24, 45, 50};
    int target = 5;
    int lo = 0;
    int hi = input.size()-1;
    cout << binarySearchRecr(input, lo, hi, target);
}