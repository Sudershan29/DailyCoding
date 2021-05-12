/*
Given integer array nums, return the third maximum number in this array. If the third maximum does not exist, return the maximum number.


*/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        sort(nums.begin(), nums.end(), greater<int>());
        int ctr=1,ret;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]!=nums[i])            
            {
                ctr+=1;
                ret=i;
            }
            if(ctr==3)
                break;
        }
        if(ctr!=3)
            return nums[0];
        return nums[ret];
    }
};