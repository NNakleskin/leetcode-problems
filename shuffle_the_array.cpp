/*
 *Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].
 */

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> res;
        for(auto it = nums.begin(); (it + n) != nums.end(); it++) {
            res.push_back(*it);
            res.push_back(*(it + n));
        }
        return res;
    }
};
