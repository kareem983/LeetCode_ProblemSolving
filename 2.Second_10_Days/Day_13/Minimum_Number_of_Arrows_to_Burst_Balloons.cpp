/*
Problem Title: Minimum Number of Arrows to Burst Balloons
Problem Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
*/

class Solution {
public:
    
    static bool comp(vector<int> &a, vector<int> &b){
        return a[1]<b[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0) return 0;
        sort(points.begin(), points.end(), comp); //sorting with end diameter
        int lastEnd = points [0][1];
        int arrows = 1;
        
        for(auto point: points){
            if(point[0] > lastEnd){
                arrows++;
                lastEnd = point[1];
            }
        }
        
        return arrows;
    }
};