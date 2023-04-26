/*
Problem Title: Add Digits
Problem Link: https://leetcode.com/problems/add-digits/
*/

class Solution {
public:
    int addDigits(int num) {
        int sum = num;

        while(num / 10 !=0){
            sum = 0;
            while(num !=0){
                sum+= num%10;
                num/=10;
            }
            num = sum;
        }

        return sum;
    }
};