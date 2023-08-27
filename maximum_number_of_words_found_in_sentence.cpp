/*A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.
*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result = 0;
        for(auto sentence: sentences) {
            int tmp = 1;
            for(auto ch: sentence) {
                if(ch == ' ') { tmp++; }
            }
            if(tmp > result) { result = tmp; }
        }
        return result;
    }
};
