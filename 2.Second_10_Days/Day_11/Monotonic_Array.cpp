/*
Problem Title: Monotonic Array
Problem Link: https://leetcode.com/problems/monotonic-array/
*/


class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<2) return true;
        
        bool isDecreasing, isIncreasing;
        isDecreasing = isIncreasing = true;
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]) isDecreasing = false;
            else if(nums[i] < nums[i-1]) isIncreasing = false;   
        }
        
        return isDecreasing || isIncreasing;
    }
};