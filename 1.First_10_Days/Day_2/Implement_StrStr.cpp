/*
Problem Title: Implement strStr
Problem Link: https://leetcode.com/problems/implement-strstr/
*/


class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle =="")return 0;
        return haystack.find(needle);

    }
};