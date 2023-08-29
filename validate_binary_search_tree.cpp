/*
 * Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left 
subtree
 of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
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



std::vector<long long> all;


class Solution {
public:
    bool find(TreeNode* root, long long key) {
        while(1) {
            if(root == nullptr) { return false; }
            if(root->val == key) {
                return true;
            }
            if(key > root->val) {
                root = root->right;
            } else { root = root->left; }
        }
        return false;
    }

    bool solve2(TreeNode* root) {
        if(root == nullptr) {
            return true;
        }
        if(root->left != nullptr && root->val <= root->left->val) {
            return false;
        }
        if(root->right != nullptr && root->val >= root->right->val) {
            return false;
        }
        return solve2(root->left) && solve2(root->right);
    }


    bool solve(TreeNode* root, TreeNode* tmp) {
        if(tmp == nullptr) { return true; }
        all.push_back(tmp->val);
        return find(root, tmp->val) && solve(root, tmp->left) && solve(root, tmp->right);
    }

    bool solve3() {
        std::sort(all.begin(), all.end());
        if(all.size() < 2 || all.empty()) { return true; }
        for(auto it = all.begin(); it < all.end() - 1; it++) {
            std::cout << *it;
            if(*it == *(it + 1)) {
                return false;
            }
        }
        return true;
    }

    bool isValidBST(TreeNode* root) {
        int a, b, c;
        all.clear();
        return solve(root, root)&& solve2(root) && solve3();
    }
};
