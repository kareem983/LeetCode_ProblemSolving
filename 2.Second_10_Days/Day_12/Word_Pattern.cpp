/*
Problem Title: Word Pattern
Problem Link: https://leetcode.com/problems/word-pattern/
*/


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s.push_back(' ');
        char separator = ' ';
        int i = 0;

        vector<string> arr;
        string temp ="";
        while (s[i] != '\0') {
            if (s[i] != separator) {
               temp+=s[i];

            } else {
                arr.push_back(temp);
                temp ="";
           }
           i++;
       }
       if (pattern.size() != arr.size())
            return false;
        
        i=0;
        unordered_map<char, string> umap;
        unordered_map<string, char> umap2;        
        for(auto p : pattern){
            if(umap.find(p) != umap.end()){
                if( arr[i] != umap.at(p)) return false;
                
            }
            else umap[p] = arr[i];
            i++;
        }
        
        i=0;
        for(auto a: arr){
            if(umap2.find(a) != umap2.end()){
                if(pattern[i] != umap2.at(a)) return false;
            }
            else umap2[a] = pattern[i];          
            i++;
        }
        
        return true;
    }
};