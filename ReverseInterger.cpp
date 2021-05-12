/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

class Solution {
public:
    int reverse(int x) {
        long long int cpy=x;
        long long returning=0;
        cpy*=x>=0?1:-1;
        while(cpy!=0)
        {   
            returning = returning*10 + cpy%10;
            cpy/=10;
        }
        returning*=x>=0?1:-1;
        if(returning>(pow(2,31)-1)||returning<(pow(-2,31)))
            return 0;
        else
            return returning;
        
    }
};