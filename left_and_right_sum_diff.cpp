/*
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return the array answer.
*/


class Solution {
public:
    std::vector<int> leftRightDifference(std::vector<int>& nums) {
        std::vector<int> leftSum, rightSum, res;
        for(auto it_1 = nums.begin(); it_1 != nums.end(); it_1++) {
            int sum = 0;
            for(auto it_2 = nums.begin(); it_2 != it_1; it_2++) {
                sum += *it_2;
            }
            leftSum.push_back(sum);
        }
        for(auto it_1 = nums.begin(); it_1 != nums.end(); it_1++) {
            int sum = 0;
            for(auto it_2 = it_1 + 1; it_2 != nums.end(); it_2++) {
                sum += *it_2;
            }
            rightSum.push_back(sum);
        }
        for(int i = 0; i < leftSum.size(); i++) {
            res.push_back(abs(leftSum.at(i) - rightSum.at(i)));
        }
        return res;
    }
};
