/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.
*/

class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        std::vector<int> nums_tmp = nums;
        std::unordered_map<int, int> tmp;
        std::sort(nums_tmp.begin(), nums_tmp.end(), greater<int>());
        for(auto it = nums_tmp.begin(); it < nums_tmp.end(); it++) {
            tmp[*it] = nums_tmp.size() - (it - nums_tmp.begin()) - 1;
        }
        for(auto it = nums.begin(); it < nums.end(); it++) {
            *it = tmp[*it];
        }
        return nums;
    }
};
