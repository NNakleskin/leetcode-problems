/*
Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.
 */


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int mat_len = mat.size();
        int res = 0;
        bool ind = mat_len % 2 == 0 ? false : true;
        if(ind) {
            res -= mat[mat_len / 2][mat_len / 2];
        }
        for(int i = 0; i < mat_len; i++) {
            res += mat[i][i];
            res += mat[i][mat_len - i - 1];
        }
        return res;
    }
};
