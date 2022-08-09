/*
Problem Title: Search Insert Position
Problem Link: https://leetcode.com/problems/search-insert-position/
*/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1, mid = 0, result = 0;
        
        while(e>=s){
            mid = (s + e) /2;
            
            if(target == nums[mid]){
                result = mid; break;
            }
            else if(target > nums[mid]){
                result = mid+1; s = mid + 1;
            }
            else{
                e = mid - 1; result = mid;
            }
        }
        
        return max(result, 0);
    }
};
