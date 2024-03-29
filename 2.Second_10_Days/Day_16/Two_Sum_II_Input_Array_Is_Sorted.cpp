/*
Problem Title: Two Sum II - Input Array Is Sorted
Problem Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1 = 0, p2 = numbers.size()-1;
        vector<int> ans;

        while(p2 > p1){
            if(numbers[p1] + numbers[p2] == target){
                ans.push_back(p1+1);
                ans.push_back(p2+1);                
                break;
            }
            else if(numbers[p1] + numbers[p2] > target)
                p2--;
            else 
                p1++;
        }

        return ans;
    }
};