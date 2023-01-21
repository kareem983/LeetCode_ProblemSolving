/*
Problem Title: Detect Capital
Problem Link: https://leetcode.com/problems/detect-capital/
*/


class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt =0;
        bool firstCapital=false;
        if(isupper(word[0])) firstCapital =true;
        for(auto s: word){
            if(isupper(s))
                cnt++;
        }
        if(word.size() == cnt || cnt == 0 || (cnt ==1 && firstCapital)) return true;
       
    return false;       
    }
};