/*
Problem Title: Excel Sheet Column Number
Problem Link: https://leetcode.com/problems/excel-sheet-column-number/
*/


class Solution {
public:
    int titleToNumber(string columnTitle) {
        if(columnTitle.size() == 0) return 0;
        int result = 0;
        for(auto s: columnTitle)
            result = (result * 26) + (s -'A' +1);
        
        return result;
    }
};