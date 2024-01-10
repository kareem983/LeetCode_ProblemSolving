/*
Problem Title: Element Appearing More Than 25% In Sorted Array
Problem Link: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array
*/

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        double size = arr.size();
        unordered_map<int, double> umap;
        for(auto num : arr) umap[num]++;
        
        for(auto it : umap){
            if((it.second/size)*100 > 25){
                return it.first;
            }
        }

        return 0;
    }
};