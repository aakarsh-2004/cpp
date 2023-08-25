#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 4};
    int count = 0;
    int leftPtr, rightPtr;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size();j++) {
            if (nums[i] == nums[j]) {
                nums[j] = INT8_MAX;
            }
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == INT8_MAX) {
            count += 1;
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {
                int tempValue = nums[i];
                nums[i] = nums[j];
                nums[j] = tempValue;
            }
        }
    }
    for (int i: nums) {
        cout << i << " ";
    }
    int finalCount = nums.size()-count;
    cout << endl;
    cout << finalCount;
    cout << endl;
    return 0;
}


// answer
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(j; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};