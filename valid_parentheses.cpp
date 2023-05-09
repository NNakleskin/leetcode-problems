/* 
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/


class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for(auto elem: s) {
            if(elem == '[' || elem == '{' || elem == '(') {
                st.push(elem);
                continue;
            }
            if(st.empty()) { return false; }
            if((elem == ']' && st.top() != '[') || (elem == '}' && st.top() != '{') || (elem == ')' && st.top() != '(')) {
                return false;
            }
            if((elem == ']' && st.top() == '[') || (elem == '}' && st.top() == '{') || (elem == ')' && st.top() == '(')) {
                st.pop();
                continue;
            }
        }
        if(!st.empty()) {
            return false;
        }
        return true;
    }
};
