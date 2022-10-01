#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static int cmp(const void *a, const void *b)
    {
        return *(int*)a - *(int*)b;
    }
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        int arr[n];
        for(int i=0;i<n;i++)
            arr[i]=nums[i];
        qsort(arr,n,sizeof(int),cmp);
        for(int i=0;i<n-1;i++)
            if(arr[i]==arr[i+1])
                return true;
        return false;
    }
};