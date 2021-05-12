/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0)
        {
            int cpy=x;
             vector<int> a;
             while(cpy>0)
             {
                 a.push_back(cpy%10);
                 cpy/=10;
             }
            bool ctr=true;
            int size=a.size();
            for(int i=0;i<size/2;i++)
                if(a[i]!=a[size-1-i])
                {
                    ctr=false;
                    break;
                }
            return ctr;
        }
        else
            return false;
    }
};