/*
Problem Title: Median of Two Sorted Arrays
Problem Link: https://leetcode.com/problems/median-of-two-sorted-arrays/
*/


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(auto num: nums1)
            v.push_back(num);

        for(auto num: nums2)
            v.push_back(num);
        
        sort(v.begin(), v.end());
        int size = v.size();

        if(size % 2 == 1) return v[size/2];
        return (v[(size/2)-1] + v[size/2]) /2.0;
    }
};