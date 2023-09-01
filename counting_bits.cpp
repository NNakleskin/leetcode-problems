// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
//
//
class Solution {
public:
    int get_bits_count(int n) {
        int count = 0;
        while(n) {
            count += n % 2;
            n /= 2;
        }
        return count;
    }


    vector<int> countBits(int n) {
        std::vector<int> result;
        for(int i = 0; i <= n; i++) {
            result.push_back(get_bits_count(i));
        }
        return result;
    }
};
