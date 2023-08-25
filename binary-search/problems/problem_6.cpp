// seach element in rotated sorted array with duplicate elements. Return 1 if the element is found, else return -1

#include<iostream>
#include<vector>
using namespace std;

void check(vector<int> &v, int target) {
    int leftPtr = 0;
    int rightPtr = v.size()-1;
    while (v[leftPtr] == v[rightPtr]) {
        v.erase(v.begin() + leftPtr);
        leftPtr++;
        rightPtr--;
    }
}

int main() {
    vector<int> v = {0, 0, 0, 1, 1, 1, 2, 0, 0, 0};
    int target = 2;
    check(v, target);
    cout << v.size() << endl;
    for (int i: v) {
        cout << i << " ";
    }
    return 0;
}