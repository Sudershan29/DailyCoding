/*
Given two strings a and b, return true if you can swap two letters in a so the result is equal to b, otherwise, return false.

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at a[i] and a[j].

For example, swapping at indices 0 and 2 in "abcd" results in "cbad".
*/
class Solution {
public:
    bool buddyStrings(string a, string b) 
    {
        unordered_map<int,string> in_a;
        unordered_map<int,string> in_b;
        int ctr=0;
        
        if(a.length()==b.length())
        {
            if(a==b)
            {
                unordered_map<char,int> check;
                for(int i=0;i<a.length();i++)    
                {
                    if((check.find(a[i])==check.end()))
                       check[a[i]]=0;
                    else
                        return true;
                }    
            }
            
            for(int i=0;i<a.length();i++)
            {
                if(a[i]!=b[i])
                {
                    in_a[ctr]=a[i];
                    in_b[ctr]=b[i];
                    ctr+=1;
                }
            }
            if(ctr==2)
                if(in_a[0]==in_b[1] && in_b[0]==in_a[1])
                    return true;
        }   
        return false;
    }
};