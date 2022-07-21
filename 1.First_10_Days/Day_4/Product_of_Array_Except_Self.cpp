/*
Problem Title: Product of Array Except Self
Problem Link: https://leetcode.com/problems/product-of-array-except-self/
*/


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int pref = 1, post = 1, i;
        
        for(i=0;i<nums.size();i++){
            answer.push_back(pref);
            pref *= nums[i];
        }
        
        for(i= answer.size()-1 ;i>=0;i--){
            answer[i] *= post;
            post *= nums[i];
        }
        
        return answer;
    }
};

