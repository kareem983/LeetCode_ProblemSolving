/*
Problem Title: Merge Strings Alternately
Problem Link: https://leetcode.com/problems/merge-strings-alternately/
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.size(), m = word2.size(), p1 = 0, p2 = 0;
        
        while(p1 < n && p2 < m){
            ans.push_back(word1[p1++]);
            ans.push_back(word2[p2++]);
        }

        if(p1 >= n)
            for(int i = p2;i<m;i++)
                ans.push_back(word2[i]);
        if(p2 >= m)
            for(int i = p1;i<n;i++)
                ans.push_back(word1[i]);

        return ans;
    }
};