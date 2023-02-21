/*
Problem Title: Add to Array-Form of Integer
Problem Link: https://leetcode.com/problems/add-to-array-form-of-integer/
*/


/*********************** Time O(N), Space O(1) **********************/
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int rem = 0;

        for(int i=num.size()-1;i>=0;i--){
            rem += num[i] + k%10;

            if(rem > 9) {
                num[i] = rem%10;
                rem/=10;
            }
            else {
                num[i] = rem;
                rem = 0;
            }

            k/=10;
            if(k == 0 && rem == 0) break;
        }

        k+=rem;
        while(k){
            num.insert(num.begin()+0, k%10);
            k/=10;
        }

        return num;
    }
};