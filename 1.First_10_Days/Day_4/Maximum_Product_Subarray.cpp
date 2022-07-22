/*
Problem Title: Maximum Product Subarray
Problem Link: https://leetcode.com/problems/maximum-product-subarray/
*/


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = 1, curMin = 1, result = *max_element(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                curMax = curMin = 1;
                continue;
            }
            
            int tmp = nums[i]*curMax;
            curMax = max(max(nums[i]*curMax, nums[i]*curMin), nums[i]);
            curMin = min(min(tmp, nums[i]*curMin), nums[i]);
            
            result = max(result, curMax);
        }
        
        return result;
    }
};
