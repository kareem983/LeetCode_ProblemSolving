/*
Problem Title: Palindrom Number
Problem Link: https://leetcode.com/problems/palindrome-number/
*/


class Solution {
public:
   bool isPalindrome(int x) {
    bool isP = true;
	string num = to_string(x);
	for (int i = 0; i < num.size() / 2; i++) {
		if (num[i] != num[num.size() - i - 1]) {
			isP = false; break;
		}
	}
     if (isP)return true;
	 return false;
}
};
 