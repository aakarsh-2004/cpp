#include<iostream>
#include<vector>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    vector<vector<int>> newArr(r, vector<int>(c));
    for (int i= 0; i < newArr.size(); i++) {
        for (int j = 0; j < newArr.size(); j++) {
            cin >> newArr[i][j];
        }
    }


    vector<vector<int>> finalArr(r, vector<int>(c));
    for (int i = 0; i < newArr.size(); i++) {
        for (int j = 0; j < newArr.size(); j++) {
            finalArr[i][j] = newArr[c-1-j][i];
        }
    }




    for (int i= 0; i < newArr.size(); i++) {
        for (int j = 0; j < newArr.size(); j++) {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i= 0; i < finalArr.size(); i++) {
        for (int j = 0; j < finalArr.size(); j++) {
            cout << finalArr[i][j] << " ";
        }
        cout << endl;
    }
}