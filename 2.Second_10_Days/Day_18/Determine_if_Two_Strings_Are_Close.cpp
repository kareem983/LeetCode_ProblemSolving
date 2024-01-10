/*
Problem Title: Determine if Two Strings Are Close
Problem Link: https://leetcode.com/problems/determine-if-two-strings-are-close
*/

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        vector<int> cnt1(26,0),cnt2(26,0),present1(26,0),present2(26,0);
        for(auto i : word1){
            cnt1[i-'a']++; present1[i-'a']=1;
        }
        for(auto i : word2){
            cnt2[i-'a']++; present2[i-'a']=1;
        }

        sort(cnt1.begin(),cnt1.end());
        sort(cnt2.begin(),cnt2.end());

        return cnt1==cnt2 && present1==present2;
    }
};