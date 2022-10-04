#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),i=0,j=n-1,mx=0,profit=0;
        for(int i=n-1;i>=0;i--)
        {
            mx = max(mx,prices[i]);
            profit = max(profit,mx-prices[i]);
        }
        return profit;
    }
};