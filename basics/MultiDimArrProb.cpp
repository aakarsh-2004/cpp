#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Making 2d vectors
    int r,c;
    cin >> r >> c;
    vector<vector<int>> newVec(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> newVec[i][j];
        };
    };

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << newVec[i][j] << " ";
        };
        cout << endl;
    }
    return 0;
}