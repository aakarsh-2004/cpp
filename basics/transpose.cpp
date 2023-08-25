#include<iostream>
#include<vector>
using namespace std;

int main() {
    int c,r;
    cin >> r >> c;
    int newArr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> newArr[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << newArr[i][j] << " ";
        };
        cout << endl;
    }
    int finalArr[c][r];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            finalArr[i][j] = newArr[j][i];
        }
    }
    cout << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << finalArr[i][j] << " ";
        };
        cout << endl;
    }

    return 0;
}