/*
Problem Title: Group Anagrams
Problem Link: https://leetcode.com/problems/group-anagrams/
*/



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> copy = strs;
        map<string, vector<int>> m;
        
        for(int i=0;i<copy.size();i++)
            sort(copy[i].begin(), copy[i].end());
        
        for(int i=0;i<copy.size();i++)
            m[copy[i]].push_back(i);
        
        map<string, vector<int>> ::iterator it;
        for(it = m.begin(); it!= m.end(); it++){
            vector<string> tmp_ans;
            for(int i=0;i< it->second.size();i++)
                tmp_ans.push_back(strs[it->second[i]]);
            ans.push_back(tmp_ans);
        }
        
        return ans;
    }
};