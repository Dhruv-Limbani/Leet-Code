#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums2=nums;
        sort(nums.begin(),nums.end());
        int n=nums.size(),i=0,j=n-1;
        pair<int,int> p;
        while(j>i)
        {
            if(nums[i]+nums[j]==target)
            {
                p.first = nums[i];
                p.second = nums[j];
                break;
            }
            else if(nums[i]+nums[j]>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(nums2[i]==p.first)
                ans.push_back(i);
            else if(nums2[i]==p.second)
                ans.push_back(i);
        }
        return ans;
    }
};