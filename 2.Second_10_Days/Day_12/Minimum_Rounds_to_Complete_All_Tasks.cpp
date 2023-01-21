/*
Problem Title: Minimum Rounds to Complete All Tasks
Problem Link: https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/
*/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int ans = 0;
        map<int, int> mp;
        for(auto task: tasks)
            mp[task]++;
        
        for(auto it: mp){
            if(it.second == 1)
                return -1;
            else if(it.second %3 == 0)
                ans+= it.second /3;
            else 
                ans+= (it.second /3) +1;
        }
        
        return ans;
    }
};