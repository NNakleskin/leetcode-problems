/*
 Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".
 */

class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string res;
        for(auto elem: address) {
            if(elem == '.') {
                res += "[.]";
            } else {
                res += elem;
            }
        }
        return res;
    }
};

