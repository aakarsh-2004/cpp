#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    string word;
    char whichAlp;
    int count = 0;
    cin >> word >> whichAlp;
    int firstOcc, lastOcc;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == whichAlp) {
            if (i >= count) {
                firstOcc = i;
                count += INT32_MAX;
            } else {
                lastOcc = i;
            }
        };
    };
    cout << firstOcc << " " << lastOcc << endl;
    return 0;
}