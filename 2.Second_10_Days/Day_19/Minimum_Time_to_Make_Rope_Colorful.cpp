/*
Problem Title: Minimum Time to Make Rope Colorful
Problem Link: https://leetcode.com/problems/minimum-time-to-make-rope-colorful
*/

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, prev = 0;

         for(int i = 1; i < colors.size(); i++){
            if(colors[prev] != colors[i])
                prev = i;
            else{
                if(neededTime[prev] < neededTime[i]){
                    ans += neededTime[prev];
                    prev=i;
                }
                else
                    ans += neededTime[i];
            }
        }

        return ans;
    }
};