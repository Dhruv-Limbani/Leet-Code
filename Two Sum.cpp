#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int arr[nums.size()],j=0;
        for(auto i = nums.cbegin();i!=nums.cend();i++)
        {
            arr[j]=*i;
            j++;
        }
        for(int i = 0; i<nums.size()-1; i++)
            for(int j=i+1; j<nums.size(); j++)
                if(arr[i]+arr[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
        return ans;
    }
};