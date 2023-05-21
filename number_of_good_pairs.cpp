/*
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.
 */



class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for(auto it_1 = nums.begin(); it_1 != nums.end(); it_1++) {
            for(auto it_2 = it_1 + 1; it_2 != nums.end(); it_2++) {
                if(*it_1 == *it_2) {
                    count++;
                }
            }
        }
        return count;
    }
};
