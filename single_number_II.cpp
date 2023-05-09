/*
 * Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.
*/


class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::unordered_map<int, int> nums_map;
        for(auto elem: nums) {
            if(nums_map.count(elem) > 0) { nums_map[elem]++; } else { nums_map[elem] = 1; }
        }
        for(auto [elem, count]: nums_map) {
            if(count == 1) { return elem; }
        }
        return -1;
    }
};
