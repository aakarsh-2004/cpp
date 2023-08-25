#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void myFunc(string s) {
    int firstIdx;
    string lastWord = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' '&& isalpha(s[i+1])) {
            firstIdx = i;
        }
    }
    for (int i = firstIdx; i < s.size(); i++) {
        if (isalpha(s[i])) {
            lastWord += s[i];
        }
    }
    cout << lastWord;
}

int main() {
    myFunc("Hello World");
    return 0;
}