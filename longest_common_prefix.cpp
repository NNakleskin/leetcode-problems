/*
 Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
 */


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string res = strs[0];
        for(auto it = strs.begin() + 1; it < strs.end(); it++) {
            if(res.size() < (*it).size()) {
                for(int i = 0; i < res.size(); i++) {
                    if(res[i] != (*it)[i]) { res = res.substr(0, i); }
                }
            } else {
                res = res.substr(0, (*it).size());
                for(int i = 0; i < res.size(); i++) {
                    if(res[i] != (*it)[i]) { res = res.substr(0, i); }
                }
            }
        }
        return res;
    }
};
