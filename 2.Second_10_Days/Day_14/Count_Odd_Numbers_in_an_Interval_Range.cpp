/*
Problem Title: Count Odd Numbers in an Interval Range
Problem Link: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
*/


/*********************** Time O(1), Space O(1) **********************/
class Solution {
public:
    int countOdds(int low, int high) {
      int cnt = (high - low)/2;
      return (low%2==1 || high%2==1)?cnt+1:cnt;

    }
};