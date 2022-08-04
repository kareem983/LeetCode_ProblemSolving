/*
Problem Title: Mirror Reflection
Problem Link: https://leetcode.com/problems/mirror-reflection/
*/


class Solution {
public:
    int mirrorReflection(int p, int q) {
        while(p%2==0 && q%2==0){
            p/= 2;
            q/= 2;
        }
        
        if(p % 2 == 0) return 2;
        else if(q % 2 == 0) return 0;
        else return 1;
    }
};



/* Different Cases
p   q

4   2  --->  2

4   4  --->  1

5   3  --->  1

3   3  --->  1

4   1  --->  2

5   2  --->  0
*/