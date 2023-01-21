/*
Problem Title: Binary Tree Preorder Traversal
Problem Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
*/


class Solution {
public:
    vector<int> ans;
    void preorder(TreeNode* root) {
        if (root != NULL) {            
            ans.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }

    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        
        return ans;
    }
};