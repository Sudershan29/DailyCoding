/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

*/

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) { 
       unordered_map<int, int> umap;
       for(int i=0;i<nums.size();i++)
           umap[nums[i]]=i;
        for(auto it : umap){
         cout<< it.first << " " << it.second << endl;
        }

       
       int finding;
       vector<int> returning;
       for(int i=0;i<nums.size();i++)
       {
               finding=target-nums[i];
               if(!(umap.find(finding) == umap.end()))
               {
                   if(i!=umap[finding])
                   {
                    returning.push_back(i);
                    returning.push_back(umap[finding]);
                    break;
                   }
               }
        }
       
        return returning;

    }
};