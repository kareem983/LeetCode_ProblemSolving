/*
Problem Title: Number of Laser Beams in a Bank
Problem Link: https://leetcode.com/problems/number-of-laser-beams-in-a-bank
*/

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, temp = 0;
        for(int i=0;i<bank.size();i++){
            int cnt = 0;
            for(auto it: bank[i]){
                if(it == '1')cnt++;
            }

            if(cnt > 0){
                ans+= (cnt*temp);
                temp = cnt;
            }
        }

        return ans;
    }
};