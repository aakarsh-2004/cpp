// given an array of strings, write a program to find the longest common prefix string amongst an array of strings

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string longestPrefix(vector<string> v) {
    int n = v.size();
    string res = "";
    sort(v.begin(), v.end());
    string x1 = v[0];
    string x2 = v[n-1];
    int ptr = 0;
    for (int i = 0; i < min(x1.size(), x2.size()); i++) {
        if (x1[ptr] == x2[ptr]) {
            res += x1[ptr];
            ptr++;
        } else {
            break;
        }
    }
    return res;
}

int main() {
    vector<string> v = {"flower", "flight", "flask"};
    cout << longestPrefix(v);
    return 0;
}