/*
Problem Title: Top K Frequent Elements
Problem Link: https://leetcode.com/problems/top-k-frequent-elements/
*/

/************************* Time O(NLog((N)), Space O(N) *************************/
class Solution {
public:
    static bool cmp(pair<int, int>& a,
        pair<int, int>& b)
    {
        return a.second > b.second;
    }
    
    vector<pair<int, int>> sortByValue(map<int, int>& M)
    {
        vector<pair<int, int> > A;
        for (auto& it : M) 
            A.push_back(it);
        sort(A.begin(), A.end(), cmp);
        return A;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> mp;
        for(auto num: nums)
            mp[num]++;
        
        vector<pair<int, int>> v = sortByValue(mp);
        for(auto it: v){
            if(k>0)
                ans.push_back(it.first);
            k--;
        }

        return ans;
    }
};