/*
Problem Title: Destination City
Problem Link: https://leetcode.com/problems/destination-city
*/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
           unordered_set<string> uset;
           for(auto path : paths){
               uset.insert(path[0]);
           }

           for(auto path : paths){    
               if(uset.find(path[1]) == uset.end()){
                   return path[1];
               }
           }

        return "";
    }
};