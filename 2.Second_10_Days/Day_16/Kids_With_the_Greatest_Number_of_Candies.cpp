/*
Problem Title: Kids With the Greatest Number of Candies
Problem Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatestNum = *max_element(candies.begin(),candies.end());
        vector<bool> ans;

        for(auto it: candies){
            if(it + extraCandies >= greatestNum)
                ans.push_back(true);
            else 
                ans.push_back(false);
        }

        return ans;
    }
};