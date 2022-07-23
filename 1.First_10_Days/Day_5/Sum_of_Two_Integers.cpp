/*
Problem Title: Sum of Two Integers
Problem Link: https://leetcode.com/problems/sum-of-two-integers/
*/


class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            unsigned carry = a&b; // a and b
            a = a^b; // a XOR b
            b = carry <<1; // shift left by 1
        }
        
        return a;
    }
};
