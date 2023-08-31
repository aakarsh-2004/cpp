// given two strings s and t, determine if they are isomorphic

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isIsomorphic(string &s, string &t) {
    vector<int> v1(128, -1);
    vector<int> v2(128, -1);
    if (s.size() != t.size()) return false;
    for (int i = 0; i < s.size(); i++) {
        // checking if the value of character at idx match in both arr
        if (v1[s[i]] != v2[t[i]]) return false;
        v1[s[i]] = v2[t[i]] = i; // storing string position in vectors for char at index i
    }
    return true;
}

int main() {
    string s = "egg";
    string t = "agg";
    cout << isIsomorphic(s, t);
    return 0;
}