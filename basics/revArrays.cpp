#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<int> newArr = {1, 2, 3, 4};
    int targetVal = 2;
    for (int i = 0; i < newArr.size(); i++) {
        for (int j = i+1; j < newArr.size(); j++) {
            if (newArr[j] - newArr[i] == targetVal) {
                cout << "Pair => " << endl;
                cout << newArr[j] << " " << newArr[i];
                cout << endl;
            }
        }
    }
    return 0;
}