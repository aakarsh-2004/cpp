#include<iostream>
#include<vector>
#include<string>
using namespace std;

void f(string s, int n, int idx, string sum, vector<string> &v) {
    if (idx == n) {
        v.push_back(sum);
        return;
    };
    f(s, n, idx+1, sum+s[idx], v); // pick the ith element
    f(s, n, idx+1, sum, v); // do not pick the ith element
}

int main() {
    string str = "abc";
    vector<string> v = {};
    f(str, str.size(), 0, "", v);

    for (string i: v) {
        cout << i << " ";
    };
    return 0;
}