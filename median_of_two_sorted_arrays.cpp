/*
    Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).
*/


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        return nums1.size() % 2 ? nums1.at(n / 2) :
                (double)(nums1.at(n / 2) + nums1.at(n / 2 - 1)) / 2;;
    }
};
