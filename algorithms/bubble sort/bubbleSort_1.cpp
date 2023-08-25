#include<iostream>
#include<vector>
using namespace std;

void bubbleSort (vector<int> &v) {
    // using the bubble sort
    int i = 0;
    int n = v.size();
    // time complexity iski bhi n^2 hai prolly
    while (i < n-1) {
        // optimizing the array with flag variable
        bool flag = false;
        for (int j = 0; j < n-i-1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
                flag = true;
            };
        };
        if (!flag) break;
        i++;
    };
};

int main() {
    vector<int> v = {10, 6, 11, 2, 20, 1};
    // calling the function
    bubbleSort(v);
    // seeing the modified array
    for (int j = 0; j < v.size(); j++) {
        cout << v[j] << " ";
    };
};