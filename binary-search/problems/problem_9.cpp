// Search the "target" value in a 2d integer matrix of dimensions n x m and return 1 if found, else return 0. This matrix has following properties:
// 1. Integers in each row are sorted from left to right
// 2. The first integer of each row is greater than the last integer of the previous row

#include<iostream>
#include<vector>
using namespace std;

int searchIn2dMatrix(vector<vector<int>> v, int target) {
    int n = v.size();
    int m = v[0].size();
    int lo = 0, hi = n*m-1;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        int x = mid/m;
        int y = mid%m;
        if (v[x][y] == target) return true;
        else if (v[x][y] < target) {
            lo = mid+1;
        } else {
            hi = mid-1;
        }
    }
}

int main() {
    vector<vector<int>> v = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}; 
    int target = 30;
    cout << searchIn2dMatrix(v, target);
    return 0;
}