/*
Problem Title: Length of Last Word
Problem Link: https://leetcode.com/problems/length-of-last-word/
*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0, cnt1 = 0;
        for(int i=0;i<s.size();i++){
            if (s[i]!=' ')cnt++;
            else {
                if(cnt>0)cnt1 = cnt;
                cnt = 0;
            }
        }
        if(cnt>0)cnt1 = cnt;
        
     return cnt1;   
    }
};