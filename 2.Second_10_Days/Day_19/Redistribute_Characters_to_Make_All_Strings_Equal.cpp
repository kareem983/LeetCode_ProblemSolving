/*
Problem Title: Redistribute Characters to Make All Strings Equal
Problem Link: https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal
*/

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int size = words.size();
        unordered_map<char, int> umap;

        for(auto word: words){
            for(auto it: word){
                umap[it]++;
            }
        }

        for(auto it : umap){
            if(it.second % size) return false;
        }
        
        return true;
    }
};