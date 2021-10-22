/*
Problem Title: Remove Element
Problem Link: https://leetcode.com/problems/remove-element/
*/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = 0 ;
        vector<int> arr = nums;
        for(int i=0;i<arr.size();i++){
            if(arr[i]== val ){
                size++;
                arr[i]= -1;
            }
        }
     
     for(int i=0, k=0;i<arr.size();i++){
        if(arr[i]!= -1 ){
            nums[k] = arr[i];
            k++;
        }
    }
        
        return nums.size()-size;
    }
};