#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    vector<int> finalArr(v.size());
    for (int i = (v.size() - k); i < v.size(); i++) {
        finalArr.push_back(v[i]);
    }
    for (int i = 0; i < v.size() - k; i++) {
        finalArr.push_back(v[i]);
    }
    for (int i = 0; i< finalArr.size(); i++) {
        cout << finalArr[i];
    }
    return 0;
}