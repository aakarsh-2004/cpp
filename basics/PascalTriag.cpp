#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> pascal(n);
    for (int i = 0; i < n; i++) {
        pascal[i].resize(i+1);
        for (int j = 0; j < i+1; j++) {
            if (j==0 || j==1) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> myRes;
    myRes = pascalTriangle(n);
    for (int i = 0; i < myRes.size(); i++) {
        for (int j = 0; j < myRes[i].size(); j++) {
            cout << myRes[i][j];
        }
        cout << endl;
    }
    return 0;
}