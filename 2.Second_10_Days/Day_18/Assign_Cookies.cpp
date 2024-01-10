/*
Problem Title: Assign Cookies
Problem Link: https://leetcode.com/problems/assign-cookies
*/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans = 0,ptr1 = 0, ptr2 = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(ptr1 < g.size() && ptr2 < s.size()){
            if(s[ptr2]>= g[ptr1]){
                ans++;
                ptr1++;
            }
            ptr2++;
        }

        return ans;
    }
};