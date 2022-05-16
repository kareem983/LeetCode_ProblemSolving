/*
Problem Title: Palindrom Number
Problem Link: https://leetcode.com/problems/palindrome-number/
*/



class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        string copy = num;
        reverse(copy.begin(), copy.end());
        if(num == copy)return true;
        
        return false;
    }
};