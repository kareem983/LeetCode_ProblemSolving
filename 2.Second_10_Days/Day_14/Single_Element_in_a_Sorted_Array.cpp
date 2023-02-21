/*
Problem Title: Single Element in a Sorted Array
Problem Link: https://leetcode.com/problems/single-element-in-a-sorted-array/
*/


/*********************** Time O(N), Space O(1) **********************/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int s = 0, e = nums.size()-1, mid, ans = 0;
        
        while(s <= e){
            mid = (s + e) / 2;
            if(mid > 0 && mid < nums.size()-1 && nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                ans = nums[mid];
                break;
            }
            else if(mid > 0 && nums[mid] == nums[mid-1]){
                if(mid % 2 == 0){
                    e = mid - 1;
                }
                else s = mid + 1;
            }
            else if(mid < nums.size()-1 && nums[mid] == nums[mid+1]){
                if(mid % 2 == 0){
                    s = mid + 1;
                }
                else e = mid - 1;
            }
            else return nums[mid];
        }
        
        return ans;
    }
};