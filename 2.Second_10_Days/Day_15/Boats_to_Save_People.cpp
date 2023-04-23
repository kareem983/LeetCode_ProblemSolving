/*
Problem Title: Boats to Save People
Problem Link: https://leetcode.com/problems/boats-to-save-people/
*/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i = 0, j = people.size() - 1, cnt = 0;
        sort(people.begin(), people.end());        
        
        while(j >= i){   
            if(people[i] + people[j] <= limit){
                i++; j--;
            }
            else
                j--;
            cnt++;      
        }
        
        return cnt;
    }
};