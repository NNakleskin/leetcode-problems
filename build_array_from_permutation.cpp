/*
Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).
*/


class Solution {
public:
    std::vector<int> buildArray(std::vector<int>& nums) {
        std::vector<int> res;
        int n = nums.size();
        for(auto elem: nums) {
            res.push_back(nums[elem]);
        }
        return res;
    }
};
