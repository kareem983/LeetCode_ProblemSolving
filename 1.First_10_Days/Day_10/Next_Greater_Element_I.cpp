/*
Problem Title: Next Greater Element I
Problem Link: https://leetcode.com/problems/next-greater-element-i/
*/


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int,int> umap;
        vector<int> ans;
        for(int i=0;i<nums2.size();i++)
            umap[nums2[i]] = i;
        
        for(int i=0;i<nums1.size();i++){
            int index = umap.at(nums1[i]);
            bool isOk = false;
            for(int j=index;j<nums2.size();j++){
                if(nums2[j] > nums1[i]){
                    ans.push_back(nums2[j]);
                    isOk = true; 
                    break;
                }
            }
            if(!isOk) ans.push_back(-1);
        }
        
        return ans;
    }
};