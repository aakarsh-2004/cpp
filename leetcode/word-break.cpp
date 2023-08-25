#include<iostream>
#include<vector>
using namespace std;

bool wordBreak(string s, vector<string> wordDict) {
    string toComp = "";
    for (int i = 0; i < wordDict.size(); i++) {
        toComp += wordDict[i];
    }
    bool result;
    for (int i = 0; i < toComp.size(); i++) {
        if (toComp[i] == s[i]) {
            result = true;
        } else {
            result = false;
        }
    }
    return result;
}

int main() {
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};
    cout << wordBreak(s, wordDict);
    return 0;
}