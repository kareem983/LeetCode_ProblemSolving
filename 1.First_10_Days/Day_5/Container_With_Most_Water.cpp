/*
Problem Title: Container With Most Water
Problem Link: https://leetcode.com/problems/container-with-most-water/
*/



class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxAmount = 0, ptr1 = 0, ptr2 = height.size()-1, minHeight = 0, width = 0;
        
        
        while(ptr1 < ptr2){
            width = ptr2 - ptr1;
            minHeight = min(height[ptr1], height[ptr2]);
            
            if(minHeight * width > maxAmount)
                maxAmount = minHeight * width;
            
            if(height[ptr1] < height[ptr2])ptr1++;
            else ptr2--; 
        }
        
        return maxAmount;
    }
};