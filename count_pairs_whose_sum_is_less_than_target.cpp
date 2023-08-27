/*
 *Given a 0-indexed integer array nums of length n and an integer target, return the number of pairs (i, j) where 0 <= i < j < n and nums[i] + nums[j] < target.
 */


class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(auto it = nums.begin(); it < nums.end(); it++) {
            for(auto it2 = it + 1; it2 < nums.end(); it2++) {
                if(*it + *it2 < target) {
                    count++;
                }
            }
        }
        return count;
    }
};
