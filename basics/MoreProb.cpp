#include<iostream>
#include<vector>
using namespace std;

int main() {
    int r,c;
    cin >> r >>c;
    // vector<vector <int>> newArr(r, vector<int>(c));
    int newArr[r][c];
    // taking input for the matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> newArr[i][j];
        };
    };

    vector<int> resultArr = {0};
    for (int i = 0; i < r; i++) {
        int count = 0;
        for (int j = 0; j < c; j++) {
            if (newArr[i][j] == 1) {
                count += 1;
                resultArr[i] = count;
            }
        }
    }
    // looping through result array
    for (int i = 0; i < resultArr.size(); i++) {
        cout << resultArr[i] << endl;
    };
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << newArr[i][j] << " ";
        };
        cout << endl;
    };
    return 0;
}