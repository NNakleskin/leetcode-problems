/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums. 
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int temp = 0;
        for(auto it = nums.begin(); it != nums.end(); it++) {
            temp += *it;
            *it = temp;
        }
        return nums;
    }
};
