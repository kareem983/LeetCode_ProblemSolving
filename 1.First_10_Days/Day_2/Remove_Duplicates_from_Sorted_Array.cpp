/*
Problem Title: Remove Duplicates from Sorted Array
Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s; int i=0;
        for(i =0 ;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        set<int>::iterator it;
        for(it = s.begin(), i=0;it!=s.end();it++, i++){
            nums[i] = *it;
        }
        
        return s.size();
    }
};
 