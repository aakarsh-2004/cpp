#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    vector<vector<int>> newArr(r, vector<int>(c));
    // Taking input to form the matrix
    for (int i = 0; i < r;i++) {
        for (int j = 0; j < c; j++) {
            cin >> newArr[i][j];
        };
    };


    // main calculations
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int resultSum = 0;
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++) {
            resultSum += newArr[i][j];
        }
    }

    cout << resultSum << endl;

    // looping and printing through the array
    for (int i = 0; i < r;i++) {
        for (int j = 0; j < c; j++) {
            cout << newArr[i][j] << " ";
        };
        cout << endl;
    };
    return 0;
}