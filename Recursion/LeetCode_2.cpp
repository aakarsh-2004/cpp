#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;


int main() {
    string inpt = "A man, a plan, a canal: Panama";
    string newStr = "";
    string toTest = "";
    for (int i = 0; i < inpt.size(); i++) {
        if (isalnum(inpt[i])) {
            newStr += tolower(inpt[i]);
        }
    };
    for (int i = (newStr.size()-1); i>=0; i--) {
        toTest += newStr[i];
    };
    if (newStr == toTest) {
        cout << true << endl;
    } else {
        cout << false << endl;
    }
    cout << newStr << endl;
    cout << toTest << endl;
    return 0;
}