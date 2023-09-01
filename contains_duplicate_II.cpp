// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(auto it = nums.begin(); it < nums.end(); it++) {
            for(auto it2 = it + 1; it2 < it + k + 1 && it2 < nums.end(); it2++){
                if(*it == *it2 && abs(it2 - it) <= k) {
                    return true;
                }
            }
        }
        return false;
    }
};
