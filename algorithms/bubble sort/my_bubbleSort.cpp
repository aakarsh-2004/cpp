#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {4, 21, 10, 1, 12};
    vector<int> newArr(v.size());
    // sorting algo created by me
    // time complexity is probably n^2;

    for (int i = 0; i < v.size(); i++) {
        for (int j = i+1; j < v.size(); j++) {
            if (v[i] > v[j]) {
                int tempVal = v[i];
                v[i] = v[j];
                v[j] = tempVal;
            }
        }
    }


    // seeing the result
    for (int i: v) {
        cout << i << " ";
    }
    return 0;
}