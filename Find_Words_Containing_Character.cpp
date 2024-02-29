/*
You are given a 0-indexed array of strings words and a character x.

Return an array of indices representing the words that contain the character x.

Note that the returned array may be in any order.
*/
  
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        std::vector<int> res;
        for(auto it = words.begin(); it < words.end(); it++) {
            for(auto ch: *it){
                if(ch == x){
                    res.push_back(it - words.begin());
                    break;
                }
            }
        }
        return res;
    }
};
