/*
 Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

 Constraints:
1 <= n <= 20
 */

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes){
        *returnColumnSizes = malloc(sizeof(int) * n);
        *returnSize = n;
        int l_up = 0, l_down = 0, r_up = n - 1, r_down = n - 1;
        int num = 1;
        int **matrix = malloc(n * sizeof(int*));
        for(int i = 0; i < n; ++i) {
            (*returnColumnSizes)[i] = n;
            matrix[i] = malloc(n * sizeof(int));
        }
        while(num <= n * n) {
            for(int i = l_down; i <= r_up; ++i) {
                if(num > n * n) { break; }
                matrix[l_up][i] = num;
                num++;
            }
            l_up++;
            for(int i = l_up; i <= r_down; ++i) {
                if(num > n * n) { break; }
                matrix[i][r_up] = num;
                num++;
            }
            r_up--;
            for(int i = r_up; i >= l_down; --i) {
                if(num > n * n) { break; }
                matrix[r_down][i] = num;
                num++;
            }
            r_down--;
            for(int i = r_down; i >= l_up; --i) {
                if(num > n * n) { break; }
                matrix[i][l_down] = num;
                num++;
            }
            l_down++;
        }
        return matrix;
}
