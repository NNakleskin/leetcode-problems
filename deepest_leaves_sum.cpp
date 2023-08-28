// Given the root of a binary tree, return the sum of values of its deepest leaves.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode *root){
        if(root == NULL) { return 0; }
        return (max(height(root->left),height(root->right)) + 1);   
    }

    int compute(TreeNode* root, int h, int start) {
        if(root == NULL) { return 0; }
        if(start == h) { return root->val; }
        return compute(root->left, h, start + 1) + compute(root->right, h, start + 1);
    }

    int deepestLeavesSum(TreeNode* root) {
        int h = height(root), start = 1;
        return compute(root, h, start);
    }
};
