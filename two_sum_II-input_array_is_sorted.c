/*
 Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.

Constraints:

2 <= numbers.length <= 3 * 104
-1000 <= numbers[i] <= 1000
numbers is sorted in non-decreasing order.
-1000 <= target <= 1000
The tests are generated such that there is exactly one solution.

 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 
int* twoSum(int* arr, size_t size, int target, int* returnSize){
    *returnSize = 2;
    int *result = malloc(2 * sizeof(int));
    for(int i = 0; i < size; i++){
        if(target - arr[i] < arr[i]) {
            for(int j = 0; i != j; j++) {
                if(arr[i] + arr[j] == target) {
                    result[0] = j + 1;
                    result[1] = i + 1;
                    return result;
                }
            }
        } else {
            for(int j = i + 1; j < size; j++) {
                if(arr[i] + arr[j] == target && i != j) {
                    result[0] = i + 1;
                    result[1] = j + 1;
                    return result;
                }
            }
        }
        if(arr[i] == arr[i + 1]) {
            int tmp = arr[i];
            while(arr[i] == tmp && i < size - 1) { i++; }
            i--;
        }
    }
    return result;
}
