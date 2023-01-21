/*
Problem Title: Maximum Ice Cream Bars
Problem Link: https://leetcode.com/problems/maximum-ice-cream-bars/
*/


class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        if(costs.size() == 0) return 0;
        int numOfBars = 0;
        sort(costs.begin(), costs.end());
        
        for(auto cost: costs){
            if(cost <= coins){
                coins-= cost;
                numOfBars++;
            }
            else break;
        }
        
        return numOfBars;
    }
};