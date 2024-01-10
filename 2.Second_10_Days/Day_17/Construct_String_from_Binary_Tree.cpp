/*
Problem Title: Construct String from Binary Tree
Problem Link: https://leetcode.com/problems/construct-string-from-binary-tree
*/

class Solution {
public:
    void preorder(TreeNode* root, string & ans) {
        if(root==NULL) return;
        
        ans.push_back('(');
        ans+=to_string(root->val);;
        if(root->left==NULL && root->right!=NULL) ans+="()";
        preorder(root->left, ans);
        preorder(root->right, ans);
        ans.push_back(')');
        
    }

    string tree2str(TreeNode* root) {
        string ans = "";
        preorder(root, ans);
        return ans.substr(1, ans.size()-2);
    }
};