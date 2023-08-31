// An encoded string (s) is given, and the task is to decode it. The encoding pattern is that the occurrence of the string is given at the starting of the string and each string is enclosed by square brackets.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string decodePattern(string s) {
    int n = s.size();
}

int main() {
    string str = "3[b2[ca]]";
    cout << decodePattern(str);
    return 0;
}