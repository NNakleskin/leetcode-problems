/*
 *You are given an integer array arr. Sort the integers in the array in ascending order by the number of 1's in their binary representation and in case of two or more integers have the same number of 1's you have to sort them in ascending order.

Return the array after sorting it.


Constraints:

1 <= arr.length <= 500
0 <= arr[i] <= 104

 */

int get_bin_count(int num) {
    int bin_count = 0;
    int tmp = num;
    for (; tmp; bin_count++) {
        tmp &= (tmp - 1);
    }
    return bin_count;
}

int comp(int a, int b) {
    int count_a = get_bin_count(a);
    int count_b = get_bin_count(b);
    if(count_a == count_b) {
        return a < b;
    } else {
        return count_a < count_b;
    }
}

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};
