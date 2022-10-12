/*
Problem Title: Valid Palindrome
Problem Link: https://leetcode.com/problems/valid-palindrome/
*/


class Solution {
public:
    string getClearString(string s){
        string updatedString = "";
        for(int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
            if((isdigit(s[i])) || (s[i] > 96 && s[i] < 123))
                updatedString.push_back(s[i]);
        }
        
        return updatedString;
    }
    
    bool isPalindrome(string s) {
        if(s.size() == 0) return false;
        string updatedString = getClearString(s);
        int size = updatedString.size();

        for(int i=0;i<size/2;i++)
            if(updatedString[i] != updatedString[size-(i+1)]) return false;
        
        return true;
    }
};