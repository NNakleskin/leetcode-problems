/*
    Given the root of a binary tree, return the inorder traversal of its nodes' values.
*/

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
 //b.insert(b.end(), a.begin(), a.end());
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> res;
        if(root == nullptr) { return res; }
        res = inorderTraversal(root->left);
        res.push_back(root->val);
        auto tmp = inorderTraversal(root->right);
        res.insert(res.end(), tmp.begin(), tmp.end());
        return res;
    }
};
