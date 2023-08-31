// given two strings s and t, return true if t is an anagram of s, and false otherwise
// constraints: string s and t will only contain lowercase alphabetical characters

#include<iostream>
#include<string>
using namespace std;

string compareStr(string &s, string &t) {
    int n1 = s.size(), n2 = t.size();
    string str = "";
    for (int i = 0; i < n1; i++) {
        char currEle = s[i];
        int ptr = 0;
        while (ptr < n2) {
            if (currEle == t[ptr]) {
                str.push_back(currEle);
            }
            ptr++;
        }
    }
    return str;
}


int main() {
    string s = "anagram";
    string t = "nagaram";
    cout << compareStr(s, t);
    return 0;
}