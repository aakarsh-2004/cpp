var singleNumber = function(nums) {
    for (let i = 0; i < nums.length; i++) {
        let tempValue = nums[i];
        for (let j = i+1; j < nums.length; j++) {
            if (tempValue == nums[j]) {
                nums[j] = 0;
                nums[i] = 0;
            }
        }
    };
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] != 0) {
            console.log(nums[i]);
        }
    };
    for (const value in nums) {
        console.log(nums);
    };
};

singleNumber([1, 1, 2]);
