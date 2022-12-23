/*
Problem Title: Excel Sheet Column Title
Problem Link: https://leetcode.com/problems/excel-sheet-column-title/
*/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while(columnNumber!=0){
            result.push_back('A' + (columnNumber-1)%26);
            columnNumber = (columnNumber-1) / 26;
        }
        reverse(result.begin(), result.end());
        
        return result;
    }
};