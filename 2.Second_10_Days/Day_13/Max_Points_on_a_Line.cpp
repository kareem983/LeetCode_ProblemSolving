/*
Problem Title: Max Points on a Line
Problem Link: https://leetcode.com/problems/max-points-on-a-line/
*/


class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size() < 2) return points.size();
        int maxP = 1;
        double slope = 0;
        
        for(int i=0; i<points.size(); i++){
            unordered_map<double, int>umap;
            for(int j = i+1;j<points.size();j++){

                 slope = double(points[j][1]-points[i][1]) / double(points[j][0]-points[i][0]);
                   if(points[j][1]-points[i][1]<0 &&points[j][0]-points[i][0] == 0){

umap[abs(slope)]++;

                 }
                else 
                    umap[slope]++;
            }
        
        
        for(auto it: umap){
            if(it.second+1 > maxP)
                maxP = it.second +1;
        }
    }
        return maxP;
    }
};