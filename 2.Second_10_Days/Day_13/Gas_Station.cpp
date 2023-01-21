/*
Problem Title: Gas Station
Problem Link: https://leetcode.com/problems/gas-station/
*/


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas, totalCost, currGas, startPoint;
        totalGas = totalCost = currGas = startPoint = 0;
        
        for(int i=0; i<gas.size();i++){
            totalGas+= gas[i];
            totalCost+= cost[i];
            currGas+= gas[i] - cost[i];
            if(currGas < 0){
                startPoint = i+1;
                currGas = 0;
            }
        }
        
        if(totalGas < totalCost) return -1;
        return startPoint;
    }
};