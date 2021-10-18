/*
Problem Title: Plus One
Problem Link: https://leetcode.com/problems/plus-one/
*/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int rem = 1, num = 0;
        
        for(int i=digits.size()-1 ;i>=0;i--){
            if(digits[i] + rem <9){
                digits[i]+= rem;
                rem = 0;
            }
            else{
                num = digits[i] + rem;
                digits[i] = num %10;
                rem = num/10;
            }
        }
        
        if(rem !=0){
            digits.push_back(0);
            for(int i=digits.size()-1 ;i>0;i--){
               digits[i] = digits[i-1];   
            }
            digits[0] = rem;
        }
        
        return digits;
        
    }
};

