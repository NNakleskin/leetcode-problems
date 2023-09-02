/*
   Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
 */


class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result;
        result.push_back({1});
        for(int i = 0; i < numRows - 1; i++) {
            std::vector<int> tmp;
            tmp.push_back(1);
            for(int j = 0; j < i; j++) {
                tmp.push_back(result[i][j] + result[i][j + 1]);
            }
            tmp.push_back(1);
            result.push_back(tmp);
        }
        return result;
    }
};
