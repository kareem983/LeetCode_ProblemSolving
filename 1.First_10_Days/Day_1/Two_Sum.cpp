/*
Problem Title: two Sum
Problem Link: https://leetcode.com/problems/two-sum/
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; bool isOk = false;
        for(int i=0;i<nums.size();i++){
            for(int j= i+1 ;j<nums.size();j++){
                if( nums[i] + nums[j] == target){
                    ans.push_back(i); ans.push_back(j);
                    isOk = true; break;
                }
            }
            if(isOk)break;
        }
        return ans;
    }
};

