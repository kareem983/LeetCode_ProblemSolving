/*
Problem Title: Contains Duplicate
Problem Link: https://leetcode.com/problems/contains-duplicate/
*/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> vals;
        for(int i=0;i<nums.size();i++)
            vals.insert(nums[i]);
        
        if(vals.size() == nums.size())return false;
        return true;
    }
};
