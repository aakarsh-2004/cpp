#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    vector<vector<int>> newArr(r, vector<int>(c));
    for (int i = 0; i < newArr.size(); i++) {
        for (int j = 0; j < newArr.size(); j++) {
            cin >> newArr[i][j];
        }
    }

    int l1, r1, l2, c2;
    cin >> l1 >> r1 >> l2 >> c2;

    
    return 0;
}