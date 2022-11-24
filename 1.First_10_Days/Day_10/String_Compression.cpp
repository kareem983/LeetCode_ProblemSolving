/*
Problem Title: String Compression
Problem Link: https://leetcode.com/problems/string-compression/
*/


/********************* Using Less Space (O(N))**************************/

class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 1) return 1;
        
        int ptr1 = 0, ptr2 = 1, ansIndex = 0;
        chars.push_back('-1');
        
        while(ptr2 <chars.size()){
            if(chars[ptr1] != chars[ptr2]){
                chars[ansIndex++] = chars[ptr1];
                if(ptr2 - ptr1 > 1){
                    string countStr = to_string(ptr2 - ptr1);
                    for(char ch: countStr)
                        chars[ansIndex++] = ch;
                }
                ptr1 = ptr2;
            }
            ptr2++;
            
        }

        return ansIndex;
    }
};




/********************* Using Extra Vector Space**************************/

class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 1) return 1;
        
        vector<char> result;
        int ptr1 = 0, ptr2 = 1;
        chars.push_back('-1');
        
        while(ptr2 <chars.size()){
            if(chars[ptr1] != chars[ptr2]){
                result.push_back(chars[ptr1]);
                if(ptr2 - ptr1 > 1){
                    string countStr = to_string(ptr2 - ptr1);
                    for(int i=0;i<countStr.size();i++)
                        result.push_back(countStr[i]);
                }
                ptr1 = ptr2;
            }
            ptr2++;
            
        }

        chars = result;
        return result.size();
    }
};
