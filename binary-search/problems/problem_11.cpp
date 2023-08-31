// Time complexity: O(1)
// Space Complexity: O(n(log(xn-x1)))

#include<iostream>
#include<vector>
using namespace std;

bool canPlace(vector<int> pos, int s, int mid) {
    int studentsReqd = 1;
    int lastPlace = pos[0];
    for (int i = 1; i < pos.size(); i++) {
        if (pos[i] - lastPlace >= mid) {
            studentsReqd++;
            lastPlace = pos[i];
            if (studentsReqd == s) return true;
        }
    }
    return false;
}

int race(vector<int> pos, int s) {
    int n = pos.size();
    int lo = 1;
    int hi = pos[n-1] - pos[0];
    int ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        if (canPlace(pos, s, mid)) {
            ans = mid;
            lo = mid+1;
        } else {
            hi = mid-1;
        }
    }
    return ans;
}


int main() {
    vector<int> pos = {1, 2, 4, 8, 9};
    int noOfStudents = 3;
    cout << race(pos, noOfStudents);
    return 0;
}