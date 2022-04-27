/*
Problem Title: 3Sum
Problem Link: https://leetcode.com/problems/3sum/
*/


class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size(), ptr1, ptr2, sum;
        vector<vector<int>> ans;
        
        if(size<3)return ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<size-2;i++){
            if(i>0 && nums[i] == nums[i-1])continue;
            
            ptr1 = i+1; ptr2 = size-1;
            
            while(ptr1 < ptr2){
                sum = nums[i] + nums[ptr1] + nums[ptr2];
            
                if(sum < 0) ptr1++;
                else if(sum > 0)ptr2--;
                else{
                     ans.push_back({nums[ptr1], nums[ptr2], nums[i]});
                     ptr1++;
                }   
                
                while((ptr1>i+1) && ptr1<ptr2 && nums[ptr1] == nums[ptr1-1])ptr1++;
                while((ptr2<size-1) && ptr1<ptr2 && nums[ptr2] == nums[ptr2+1])ptr2--;
                
            }
        }
        
        return ans;
    }
};