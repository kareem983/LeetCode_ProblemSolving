/*
Problem Title: Successful Pairs of Spells and Potions
Problem Link: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
*/

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(), m = potions.size();
        vector<int> ans;
        sort(potions.begin(), potions.end());

        for(int i=0; i<n;i++){
            int start = 0, end = m-1;
            while(end>=start){
                int mid = (start + end)/2;
                long long mul = (long long) spells[i] * (long long) potions[mid];
                if(mul >= success)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
                ans.push_back(m-start);
        }

        return ans;
    }
};