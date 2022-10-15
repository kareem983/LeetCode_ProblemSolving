/*
Problem Title: two Sum
Problem Link: https://leetcode.com/problems/two-sum/
*/


/************************* Using Hash Table **************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>umap;
        vector <int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(umap.find(target-nums[i])!=umap.end()){ // Found
                ans.push_back(i);
                ans.push_back(umap[target-nums[i]]);
                return ans;
            }
            else
                umap[nums[i]]=i;
        }

        return ans;
    }
};




/************************* Using Two Pointers **************************/

class Solution {
public:
int val1 = 0, val2 = 0;
    
    vector<int> getIndexes(vector<int>& nums) {
        vector<int> ans;
        
        for(int i = 0; i < nums.size() ; i++){
            if(val1 != INT_MAX && val1 == nums[i]){
                 ans.push_back(i);
                 val1 = INT_MAX;
            }
            else if(val2 != INT_MAX && val2 == nums[i]){
                 ans.push_back(i);
                 val2 = INT_MAX;
            }
        }
        
        return ans;
    
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int ptr1 = 0, ptr2 = nums.size()-1;
        vector<int>copy = nums;
        
        sort(copy.begin(), copy.end());
        while(copy[ptr1] + copy[ptr2] != target){
            if(copy[ptr1] + copy[ptr2] > target) ptr2--;
            else ptr1++;
        }
        val1 = copy[ptr1];
        val2 = copy[ptr2];   
        
        return getIndexes(nums);
    }
};