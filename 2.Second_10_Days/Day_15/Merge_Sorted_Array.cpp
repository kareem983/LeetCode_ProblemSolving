/*
Problem Title: Merge Sorted Array
Problem Link: https://leetcode.com/problems/merge-sorted-array/
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1, p2 = n-1, k = m+n-1;

        while(p1>=0 && p2>=0){
            if(nums1[p1] > nums2[p2])
                nums1[k--] = nums1[p1--];            
            else
                nums1[k--] = nums2[p2--];                        
        }
        while(p2 >=0){
            nums1[k--] = nums2[p2--];    
        }

    }
};