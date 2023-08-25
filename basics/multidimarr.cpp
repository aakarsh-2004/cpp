#include<iostream>
#include<vector>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter number of rows => ";
    cin >> rows;
    cout << "Enter number of columns => ";
    cin >> columns;
    int myArr[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> myArr[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << myArr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}