#include<iostream>
#include<vector>
using namespace std;

int main() {
    int firstRow, firstCol, secondRow, secondCol;
    cin >> firstRow >>firstCol;
    cin >> secondRow >> secondCol;
    int firstMatrix[firstRow][firstCol];
    int secondMatrix[secondRow][secondCol];

    // First matrix
    for (int i = 0; i < firstRow; i++) {
        for (int j = 0; j < firstCol; j++) {
            cin >> firstMatrix[i][j];
        }
    }

    // second matrix
    for (int i = 0; i < secondRow; i++) {
        for (int j = 0; j < secondCol; j++) {
            cin >> secondMatrix[i][j];
        }
    }

    // final matrix 
    int finalMat[firstRow][secondCol];
    for (int i = 0; i < firstRow; i++) {
        for (int j = 0; j < secondCol; j++) {
            finalMat[i][j] = 0;
            for (int k = 0; k < secondRow; k++) {
                finalMat[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
    for (int i = 0; i < firstRow; i++) {
        for (int j = 0; j < secondCol; j++) {
            cout << finalMat[i][j] << " ";
        };
        cout << endl;
    }
    return 0;
}