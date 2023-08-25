#include<iostream>
#include<vector>
using namespace std;

// insertion sort
void insertionSort(vector<int> &v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        int currEle = v[i];
        // finding the correct position for the current element
        int j = i-1;
        while (j >= 0 && v[j] > currEle) {
            // if an element is greater than the current element we move it sidewards by one position
            v[j+1] = v[j];
            j--;
        }
        // inserting the current element to the right position
        v[j+1] = currEle;
    };
};

int main() {
    vector<int> v = {10, 3, 15, 1, 11, 2};
    insertionSort(v);
    // seeing the resultant array
    for (int i: v) {
        cout << i << " ";
    }
    return 0;
};