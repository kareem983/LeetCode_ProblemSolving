/*
Problem Title: Find First and Last Position of Element in Sorted Array
Problem Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/


/************************* Using STLs O(Log(N)) ***************************/
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




/************************ Using Implementation  O(Log(N)) ****************/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower = getlower(0, nums.size()-1, target, nums);
        int upper = getupper(0, nums.size()-1, target, nums);
        
        if(lower == -1 || upper == -1) return {-1,-1};
        return {lower, upper};
    }
    
    
    
    int getlower(int start, int end, int target, vector<int>& nums){
        int mid = (start + end)/2;
        if(start > end) return -1;
        else if(nums[mid] == target){
            if(mid >0 && nums[mid-1] == target)
                return getlower(start, mid-1, target, nums);
            else return mid;
        }
        else if(nums[mid] < target)
            return getlower(mid+1, end, target, nums);
        else 
            return getlower(start, mid-1, target, nums);
    }

    
    int getupper(int start, int end, int target, vector<int>& nums){
        int mid = (start + end)/2;
        if(start > end) return -1;
        else if(nums[mid] == target){
            if(mid <nums.size()-1 && nums[mid+1] == target)
                return getupper(mid+1, end, target, nums);
            else return mid;
        }
        else if(nums[mid] < target)
           return getupper(mid+1, end, target, nums);
        else 
           return getupper(start, mid-1, target, nums);
    }
};

