#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<string> myVec = {"flower", "flow", "flight"};
    string testCaseOne;
    string testCaseTwo;
    string result = "";
    for (int i = 0; i < myVec.size(); i++) {
        testCaseOne = myVec[i];
        testCaseTwo = myVec[i+1];
        for (int i = 0; i < testCaseOne.size(); i++) {
            for (int j = 0; j < testCaseTwo.size(); j++) {
                if (testCaseOne[i] == testCaseTwo[j]) {
                    result += testCaseTwo[j];
                }
            }
        }
    }
    cout << result << endl;
    for (string i: myVec) {
        cout << i << " ";
    }
}


class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};