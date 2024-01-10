/*
Problem Title: Range Sum of BST
Problem Link: https://leetcode.com/problems/range-sum-of-bst
*/


class Solution {
public:
    int sum = 0;
    void preOrder(TreeNode* root, int low, int high) {
        if(root == nullptr) return;

        if(root->val >= low && root->val <= high)
            sum+= root->val;

        preOrder(root->left, low, high);
        preOrder(root->right, low, high);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        preOrder(root, low, high);
        
        return sum;
    }
};