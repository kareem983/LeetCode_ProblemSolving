/*
Problem Title: Valid Parentheses
Problem Link: https://leetcode.com/problems/valid-parentheses/
*/


class Solution {
public:
    bool isValid(string s) {
        stack<char> q;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{' ) q.push(s[i]);
            else{
                if(!q.empty()){
                    if(q.top() == '(' && s[i] == ')')q.pop();
                    else if(q.top() == '{' && s[i] == '}')q.pop();
                    else if(q.top() == '[' && s[i] == ']')q.pop();
                    else cnt++;
                }
                else cnt++;
                
            }
        }
        
        if(cnt >0)return false;
        else if(q.empty())return true;
        return false;
    }
};