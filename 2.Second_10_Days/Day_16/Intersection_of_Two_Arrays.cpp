/*
Problem Title: Intersection of Two Arrays
Problem Link: https://leetcode.com/problems/intersection-of-two-arrays/
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        vector<int> ans;

        for(auto num: nums1)
            umap[num]++;

        for(auto num: nums2){
            if(umap.find(num) != umap.end() && umap.at(num) > 0){ // Found
                ans.push_back(num);
                umap[num] = 0;
            }
        }

        return ans;
    }
};