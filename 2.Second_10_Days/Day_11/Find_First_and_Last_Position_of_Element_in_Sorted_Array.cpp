/*
Problem Title: Find First and Last Position of Element in Sorted Array
Problem Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(!binary_search(nums.begin(), nums.end(), target))
            return {-1,-1};
        
        int lower = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int upper = upper_bound(nums.begin(), nums.end(), target) - nums.begin() -1;
        
        return {lower, upper};
    }
};