/*
Problem Title: Longest Common Prefix
Problem Link: https://leetcode.com/problems/longest-common-prefix/
*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string common = ""; bool isDone = true;

	for (int i = 0; i < strs[0].size(); i++) {
		char co = strs[0].at(i);
		
		for (int j = 0; j < strs.size(); j++) {
			if (i >= strs[j].size() || co != strs[j].at(i)) {
				isDone = false; break;
			}
		}
		if (!isDone) break;
		common.push_back(co);
	}
        
        return common;
        
    }
};
