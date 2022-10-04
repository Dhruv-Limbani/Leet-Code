#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(),m=nums2.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    ans.push_back(nums1[i]);
                    vector<int>::iterator it = nums2.begin()+j;
                    nums2.erase(it);
                    m--;
                    break;
                }
            }
        return ans;
    }
};