/*
Problem Title: Set Matrix Zeroes
Problem Link: https://leetcode.com/problems/set-matrix-zeroes/
*/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> colIndex;
        int rowNumber;
        
        // store cols ondex
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix.at(0).size(); j++)
                if (matrix[i][j] == 0)colIndex.insert(j);
        
        
        // set rows and cols to zero
        for (int i = 0; i < matrix.size(); i++) {
            rowNumber = -1;
            for (auto j : colIndex) {
                if (matrix[i][j] == 0)rowNumber = i;
                matrix[i][j] = 0;
            }

            if (rowNumber != -1)
                for (int col = 0; col < matrix.at(0).size(); col++)
                    matrix[rowNumber][col] = 0;
        }
        
        
    }
};