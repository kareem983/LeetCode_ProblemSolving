/*
Problem Title: Difference Between Ones and Zeros in Row and Column
Problem Link: https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column
*/

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> rowOnes(m, 0);
        vector<int> colOnes(n, 0);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if(grid[i][j] == 1){
                    rowOnes[i]++;
                    colOnes[j]++;
                }
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                grid[i][j] =  rowOnes[i] + colOnes[j] - (m-rowOnes[i]) - (n-colOnes[j]);
            }
        }

        return grid;
    }
};