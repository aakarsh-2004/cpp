#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<int> newArr = {4, 6, 6, 1, 2, 3, 3, 2, 1};
    for (int i = 0; i < newArr.size(); i++) {
        for (int j = i+1; j < newArr.size(); j++) {
            if (newArr[i] == newArr[j]) {
                newArr.erase(newArr.begin()+j);
            };
        };
    };
    for (int i = 0; i < newArr.size(); i++) {
        for (int j = i+1; j < newArr.size(); j++) {
            if (newArr[i] > newArr[j]) {
                int tempValue = newArr[i];
                newArr[i] = newArr[j];
                newArr[j] = tempValue;
            }
        }
    }
    for (int k: newArr) {
        cout << k << " ";
    };
    return 0;
}