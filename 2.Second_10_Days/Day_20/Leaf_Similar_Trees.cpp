/*
Problem Title: Leaf-Similar Trees
Problem Link: https://leetcode.com/problems/leaf-similar-trees
*/


class Solution {
public:
    void inOrder(TreeNode* root, vector<int> & v){
        if(root == nullptr)
            return;
        
        if(root->left == nullptr && root->right == nullptr)
            v.push_back(root->val);

        inOrder(root->left, v);
        inOrder(root->right, v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        inOrder(root1, v1);
        inOrder(root2, v2);

        if(v1.size() != v2.size()) return false;
        for(int i=0;i<v1.size();i++)
            if(v1[i] != v2[i]) return false;
        
        return true;
    }
};