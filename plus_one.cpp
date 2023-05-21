class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        for(auto it = digits.rbegin(); it != digits.rend(); it++) {
            if(*it != 9) {
                *it += 1;
                return digits;
            }
            *it = 0;
        }
        std::vector<int> res;
        res.push_back(1);
        res.insert(res.end(), digits.begin(), digits.end());
        return res;
    }
};
