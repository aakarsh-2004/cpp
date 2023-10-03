// An encoded string (s) is given, and the task is to decode it. The encoding pattern is that the occurrence of the string is given at the starting of the string and each string is enclosed by square brackets.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;

string decodePattern(string s) {
    int n = s.size();
    string res = "";
    // traversing the encoded string
    for (int i = 0; i < n; i++) {

        if (s[i] != ']') {
            res.push_back(s[i]);
        } else {
            // extract str from result
            string str = "";
            while (!res.empty() && res.back() != '[') {
                str.push_back(res.back());
                res.pop_back();
            }
            // reversing str
            reverse(str.begin(), str.end());

            // remove last char from res which is [
            res.pop_back();

            // extract num from result
            string num = "";
            while (!res.empty() && (res.back() >= '0' && res.back() <= '9')) {
                num.push_back(res.back());
                res.pop_back();
            }
            // reversing the num string
            reverse(num.begin(), num.end());

            // convert string to integer
            int intNum = stoi(num);

            // inserting str in result int_num times
            while (intNum) {
                res += str;
                intNum--;
            }
        }
    }
    return res;
}

int main() {
    string str = "3[b2[ca]]";
    cout << decodePattern(str);
    return 0;
}