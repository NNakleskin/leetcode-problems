/*
 *An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), the string representation of the integer n in base b is palindromic.

Given an integer n, return true if n is strictly palindromic and false otherwise.

A string is palindromic if it reads the same forward and backward.
 */

class Solution {
public:
    std::vector<int> get_number(int base, int n) {
        std::vector<int> result;
        while(n > base - 1) {
            result.push_back(n % base);
            n /= base;
        }
        result.push_back(n);
        return result;
    }

    bool verify(int base, int n) {
        auto num = get_number(base, n);
        auto it1 = num.begin();
        auto it2 = num.rbegin();
        while(it1 < it2.base()) {
            if(*it1 != *it2) { return false; }
            it1++; it2++;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        for(int i = 2; i < n - 1; i++) {
            if (!verify(i, n)) { return false; }
        }
        return true;
    }
};
