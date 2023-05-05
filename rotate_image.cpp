/*
    You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

    You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

    Constraints:

    n == matrix.length == matrix[i].length
    1 <= n <= 20
    -1000 <= matrix[i][j] <= 1000:
 */


class Solution {
public:
    void transpose(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }


    void revert(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n / 2; i++) {
            for(int j = 0; j < n; j++) {
                swap(matrix[i][j], matrix[n - i - 1][j]);
            }
        }
    }


    void rotate(std::vector<std::vector<int>>& matrix) {
        revert(matrix);
        transpose(matrix);
    }
};
