/* 
    Given an m x n matrix, return all elements of the matrix in spiral order.
*/

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> res;
        int num = 1, cols = matrix[0].size(), rows = matrix.size();
        int l_up = 0, l_down = 0, r_up = cols - 1, r_down = rows - 1;
        while(num <= rows * cols) {
            for(int i = l_down; i <= r_up; ++i) {
                if(num > rows * cols) { break; }
                res.push_back(matrix[l_up][i]);
                num++;
            }
            l_up++;
            for(int i = l_up; i <= r_down; ++i) {
                if(num > rows * cols) { break; }
                res.push_back(matrix[i][r_up]);
                num++;
            }
            r_up--;
            for(int i = r_up; i >= l_down; --i) {
                if(num > rows * cols) { break; }
                res.push_back(matrix[r_down][i]);
                num++;
            }
            r_down--;
            for(int i = r_down; i >= l_up; --i) {
                if(num > rows * cols) { break; }
                res.push_back(matrix[i][l_down]);
                num++;
            }
            l_down++;
        }
        return res;
    }
};



