/*
Problem Title: Delete Columns to Make Sorted
Problem Link: https://leetcode.com/problems/delete-columns-to-make-sorted/
*/

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt = 0;
        
        for(int i = 0; i<strs[0].size();i++){
            for(int j =1; j< strs.size(); j++){
                if(strs[j].at(i) < strs[j-1].at(i)){
                    cnt++;
                    break;
                }
            }

        }
        
        return cnt;
    }
};