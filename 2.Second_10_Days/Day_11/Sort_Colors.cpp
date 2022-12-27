/*
Problem Title: Sort Colors
Problem Link: https://leetcode.com/problems/sort-colors/
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, k = 0;
        map<int, int> colors;

        for(auto num: nums)
            colors[num]++;
        
        while(i<3){
            auto color = colors.find(i);
            for(int j=0;j<color->second;j++)
                nums[k++] = i;
            i++;
        }

    }
};