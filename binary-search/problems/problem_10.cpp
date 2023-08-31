// chocolates problem

#include<iostream>
#include<vector>
using namespace std;

bool canDistChoco(vector<int> arr, int mid, int s) {
    int studentsReqd = 1;
    int currSum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false;
        }
        if (currSum + arr[i] > mid) {
            studentsReqd++;
            currSum = arr[i];
            if (studentsReqd > s) return false;
        } else {
            currSum += arr[i];
        }
    }
    return true;
}

int distChoco(vector<int> arr, int s) {
    int n = arr.size();
    int lo = arr[0];
    int hi = 0;
    int ans;

    for (int i = 0; i < n; i++) {
        hi += arr[i];
    }

    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        if (canDistChoco(arr, mid, s)) {
            ans = mid;
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }
}

int main() {
    vector<int> boxes = {10, 20, 30};
    int students = 3;
    cout << distChoco(boxes, students);
    return 0;
}