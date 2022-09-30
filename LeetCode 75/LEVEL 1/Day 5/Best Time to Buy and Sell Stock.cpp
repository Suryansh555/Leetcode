#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int buy = prices[0];
        int diff = 0;
        for(int i = 1;i<n;i++)
        {
            int diff = prices[i] - buy;
            buy = min(prices[i],buy);
            profit = max(profit,diff);
        }
        return profit;
    }
};