/*
 Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
 */

int searchInsert(int* nums, int numsSize, int target){
    int index = numsSize / 2, prew_index = 0;
    printf("%d %d\n", numsSize, index);
    if(nums[numsSize - 1] < target) {
        return numsSize;
    }
    if(nums[0] >= target) {
        return 0;
    }
    int i = 1;
    while(nums[index] != target && index > 0 && index < numsSize) {
        printf("%d\n", index);
        if(nums[index - 1] <= target && nums[index] > target) {
            if(nums[index - 1] == target) {
                return index - 1;
            }
            return index;
        }
        if(nums[index] > target) {
            index -= index / (numsSize / 2 * i);
        } else {
            index += index / (numsSize / 2 * i) - 1;
        }
        if(index == prew_index) {
            index++;
        }
        prew_index = index;
    }
    i++;
    return index;
}
