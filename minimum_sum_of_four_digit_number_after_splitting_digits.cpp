/*
 *You are given a positive integer num consisting of exactly four digits. Split num into two new integers new1 and new2 by using the digits found in num. Leading zeros are allowed in new1 and new2, and all the digits found in num must be used.

For example, given num = 2932, you have the following digits: two 2's, one 9 and one 3. Some of the possible pairs [new1, new2] are [22, 93], [23, 92], [223, 9] and [2, 329].
Return the minimum possible sum of new1 and new2.
 */

class Solution {
public:
    int minimumSum(int num) {
        std::vector<int> n;
        while(num) {
            n.push_back(num % 10);
            num /= 10;
        }
        std::sort(n.begin(), n.end());
        int num1 = n[0] * 10 + n[2], num2 = n[1] * 10 + n[3];
        return num1 + num2;
    }
};
