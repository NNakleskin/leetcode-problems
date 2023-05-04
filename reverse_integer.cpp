/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Constraints:

-231 <= x <= 231 - 1

*/

class Solution {
public:
    int reverse(int x) {
        bool sign;
        if(x >= 0) {
            sign = true;
        } else {
            sign = false;
            x = abs(x);
        }
        std::string str = std::to_string(x);
        if(!sign) {
            str += '-';
        }
        std::reverse(str.begin(),str.end());
        int res = 0;
        errno = 0;
        try {
            res = stoi(str);
        } catch(...) {
            return 0;
        }
        return res;
    } 
};
