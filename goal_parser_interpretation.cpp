/*You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.
*/

class Solution {
public:
    std::string interpret(std::string command) {
        std::string result;
        for(auto it = command.begin(); it < command.end(); it++) {
            if(*it == 'G') { 
                result += 'G'; 
                continue;
            }
            if(*it == '(' && *(it + 1) == ')') { 
                result += 'o';
                it++;
                continue;
            }
            if(*it == '(' && *(it + 1) == 'a' && *(it + 2) == 'l' && *(it + 3) == ')') {
                result += "al";
                it += 3;
                continue;
            }
        }
        return result;
    }
};
