/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.
*/   

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool indicate = false;
        for(auto it = s.rbegin(); it != s.rend(); it++) {
            if(*it == ' ' && !indicate) { continue; }
            indicate = true;
            if(*it != ' ') { len++; } else { return len; }
        }
        return len;
    }
};
