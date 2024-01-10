/*
Problem Title: Convert an Array Into a 2D Array With Conditions
Problem Link: https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions
*/

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> umap;
        int colSize = 0, k = 1, rowPosition = 0;
        
        for(auto num : nums)
            colSize = max(colSize, ++umap[num]);
       
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans(colSize);
        vector<int> temp;

        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i] == nums[i-1]){
                rowPosition = k++;   
            }
            else{
                rowPosition = 0;
                k = 1;
            }
            
            temp.push_back(nums[i]);
            for(auto it: temp) ans[rowPosition].push_back(it);
            temp.clear();
        }

        return ans;
    }
};