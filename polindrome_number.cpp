/*
 Given an integer x, return true if x is a 
palindrome, and false otherwise.


Constraints:

-231 <= x <= 231 - 1
 */


class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) { return false; }
        std::string str_num = std::to_string(x);
        auto it1 = str_num.begin();
        auto it2 = str_num.rbegin();
        while(it1 != str_num.end() && it2 != str_num.rend()) {
            if(*it1 != *it2) {
                return false;
            }
            it1++;
            it2++;
        }
        return true;
    }
};
