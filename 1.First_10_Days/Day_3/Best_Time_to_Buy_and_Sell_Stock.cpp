/*
Problem Title: Best Time to Buy and Sell Stock
Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/


class Solution {
public:
    
    int getMaxProfit(vector<int>& prices){
        int maxProfit = 0, minPrice = INT_MAX;
        
        for(int i = 0 ; i < prices.size() ; i++){
            if(prices[i] < minPrice)
                minPrice = prices[i];
            else if (prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
        }
        
        return maxProfit;
    }
    
    
    int maxProfit(vector<int>& prices) {
        
        return getMaxProfit(prices);
    }
};
