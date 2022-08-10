/*
Problem Title: Integer to Roman
Problem Link: https://leetcode.com/problems/integer-to-roman/
*/


class Solution {
public:
     
    string intToRoman(int num) {
        string res = "";
        map<int, string, greater<int>> romanRep;
        romanRep.insert(pair<int, string>(1, "I"));
        romanRep.insert(pair<int, string>(4, "IV"));
        romanRep.insert(pair<int, string>(5, "V"));
        romanRep.insert(pair<int, string>(9, "IX"));
        romanRep.insert(pair<int, string>(10, "X"));
        romanRep.insert(pair<int, string>(40, "XL"));
        romanRep.insert(pair<int, string>(50, "L"));
        romanRep.insert(pair<int, string>(90, "XC"));
        romanRep.insert(pair<int, string>(100, "C"));
        romanRep.insert(pair<int, string>(400, "CD"));
        romanRep.insert(pair<int, string>(500, "D"));
        romanRep.insert(pair<int, string>(900, "CM"));
        romanRep.insert(pair<int, string>(1000, "M"));
        
        while(num>0){
            map<int, string> ::iterator it;
            for (it = romanRep.begin(); it != romanRep.end(); ++it) {
                 if(num >= it->first){
                    res+=it->second;
                    num -= it->first; 
		    break;
                 }
            }
        }
        
        return res;
    }
};