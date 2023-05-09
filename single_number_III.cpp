/*
    Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.
*/


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::unordered_map<int, int> nums_map;
        std::vector<int> res;
        for(auto elem: nums) {
            if(nums_map.count(elem) == 0) { nums_map[elem] = 1; } else { nums_map[elem]++; }
        }
        for(auto [elem, count]: nums_map) {
            if(count == 1) { res.push_back(elem); }
        }
        return res;
    }
};
