#include<iostream>
#include<vector>
using namespace std;

int findKthLargest(vector<int> nums, int k) {
    for (int l = 0; l < k-1; l++) {
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[i+1] && nums[i] > max) {
                max = nums[i];
            } else if (nums[i+1] > nums[i] && nums[i+1] > max) {
                max = nums[i+1];
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == max) {
                nums[i] = -1;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > nums[i+1] && nums[i] > max) {
            max = nums[i];
        } else if (nums[i+1] > nums[i] && nums[i+1] > max) {
            max = nums[i+1];
        }
    }
    return max;
}

int main() {
    vector<int> nums = {10, 2, 30, 4, 5};
    cout << findKthLargest(nums, 3);
    return 0;
}