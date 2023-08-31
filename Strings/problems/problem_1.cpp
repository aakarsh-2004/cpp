// Given a strings str, sort the given string lexicographically.
// the string will only contain alphabets (a-z)

#include<iostream>
#include<vector>
using namespace std;

void sortString(string &str) {
    int n = str.size();
    for (int i = 0; i < n; i++) {
        int ptr = i+1;
        while (ptr < n) {
            if (int(str[i]) > int(str[ptr])) {
                swap(str[i], str[ptr]);
            }
            ptr++;
        }
    }
}

int main() {
    string str = "star";
    sortString(str);
    cout << str;
    return 0;
}