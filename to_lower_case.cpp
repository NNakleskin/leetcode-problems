// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.


class Solution {
public:
    string toLowerCase(string s) {
        for(auto it = s.begin(); it < s.end(); it++) {
            if(*it < 91 && *it > 64) { *it = *it + 32; }
        }
        return s;
    }
};
