/*
Problem Title: Minimum Number of Operations to Make Array Empty
Problem Link: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty
*/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> umap;
        int ans = 0;

        for(auto num : nums)
            umap[num]++;
        
        for(auto it : umap){
            if(it.second == 1)
                return -1;
            ans+= (it.second + 2) / 3;
        }

        return ans;
    }
};