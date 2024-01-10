/*
Problem Title: Special Positions in a Binary Matrix
Problem Link: https://leetcode.com/problems/special-positions-in-a-binary-matrix
*/

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;

        for(int i = 0;i<mat.size();i++){
            int tempCnt = 0;
            for(int j = 0;j<mat[0].size();j++){
                if(mat[i].at(j) == 1){
                    tempCnt++;
                    for(int k = 0;k<mat.size();k++)
                        if(i != k && mat[k].at(j) == 1){tempCnt++; break;}
                }
            }

            if(tempCnt == 1) ans++;
        }

        return ans;
    }
};