// Given a binary string and an integer k, return the maximum number of consecutive 1's in the string if you can flip at most k 0's

// Sliding window technique have been used here
// Time Complexity: O(N)

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int longestLen(string str, int k) {
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_len = 0;
    for (end; end < str.size(); end++) {

        if (str[end] == '0') {
            zero_count++;
        }

        while (zero_count > k) {
            if (str[start] == '0') zero_count--;
            start++;
        }
        max_len = max(max_len, end-start+1);
    }
    return max_len;
}

int main() {
    string str = "0001101011";
    int k = 2;
    cout << longestLen(str, k);
    return 0;
}
