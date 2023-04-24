/*
Problem Title: Optimal Partition of String
Problem Link: https://leetcode.com/problems/optimal-partition-of-string/
*/

class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int> umap;
        int cnt = 1;
        
        for(int i=0;i<s.size();){
            if(umap.find(s[i]) != umap.end()){ // Found
                umap.clear();
                cnt++;
            }   
            else{
                umap[s[i]]++;
                i++;
            } 
        }

        return cnt;
    }
};