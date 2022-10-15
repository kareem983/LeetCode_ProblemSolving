/*
Problem Title: Valid Anagram
Problem Link: https://leetcode.com/problems/valid-anagram/
*/

/********************* Using HashTable O(N)**************************/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char, int> umap;
        for(int i = 0 ;i<s.size();i++)
            umap[s[i]]++;
        
        for(int i = 0 ;i<t.size();i++){
            if(umap.find(t[i]) == umap.end()) return false;
            if(umap.at(t[i]) > 1 ) umap[t[i]]--;
            else umap.erase(t[i]);
        }
        
        if(umap.size() == 0) return true;
        return false;
    }
};



/********************* Using Sort O(NLog(N))**************************/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0;i<s.size();i++)
            if(s[i] != t[i]) return false;
                                 
        return true;
    }
};