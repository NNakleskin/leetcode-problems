/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104

*/


class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int max = 0;
        auto it1 = height.begin();
        auto it2 = height.rbegin();
        while(it1 != it2.base()) {
            int cur = (*it1 > *it2 ? *it2 : *it1) * (it2.base() - it1 - 1);
            max = max < cur ? cur : max;
            if(*it1 > *it2) {
                it2++;
            } else {
                it1++;
            }
        }
        return max;
    }
};
