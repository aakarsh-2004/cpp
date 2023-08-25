#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    // Prefix sum problem
    // int newArr[] = {1, 2, 3, 4};
    // int length = sizeof(newArr) / sizeof(int);
    // int count = 0; 
    // for (int i = 0; i < length; i++) {
    //     count += newArr[i];
    //     newArr[i] = count;
    // };
    // for (int i: newArr) {
    //     cout << i << " ";
    // };



    // Check if prefix sum is equal to the suffix sum
    int newArr[] = {1, 2, 1};
    int length = sizeof(newArr) / sizeof(int);
    vector<int> prefixVector(length);
    vector<int> suffixVector(length);
    int countOne = 0; 
    int countTwo = 0; 
    for (int i = 0; i < length; i++) {
        countOne += newArr[i];
        prefixVector.push_back(countOne);
    };
    for (int i = length-1; i >= 0; i--) {
        countTwo += newArr[i];
        suffixVector.push_back(countTwo);
    };
    
    for (int i = 0; i < prefixVector.size(); i++) {
        cout << prefixVector[i] << " ";
    };

    cout << endl;

    for (int i = 0; i < suffixVector.size(); i++) {
        cout << suffixVector[i] << " ";
    };

    cout << endl;

    if (prefixVector == suffixVector) {
        cout << "Matched!!";
    } else {
        cout << "Not Matched!!";
    };
    return 0;
}