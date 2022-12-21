/*
Problem Title: Palindromic Substrings
Problem Link: https://leetcode.com/problems/palindromic-substrings/
*/

/********************* Using Two Pointers O(N2)**************************/

class Solution {
public:
    int countSubstrings(string s) {
        if(s.size() == 0) return 0;
        
        int count , left, right;
        left = right = count = 0;
        for(int i=0;i<s.size();i++){
            left = right =i;
            count+= getNumOfSubStrings(left, right, s);
            left = i; right = i+1;
            count+= getNumOfSubStrings(left, right, s);
        }
        
        return count;
    }
    
    int getNumOfSubStrings(int left, int right, string s){
        int count = 0;
        while(left >=0 && right < s.size() && s[left] == s[right]){
            count++;
            left--;
            right++;
        }
        
        return count;
    }
};