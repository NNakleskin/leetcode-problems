// Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.


class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : 2 * n;
    }
};
