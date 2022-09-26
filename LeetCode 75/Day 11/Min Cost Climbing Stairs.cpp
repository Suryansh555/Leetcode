#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int fin(int ind,vector<int>& cost,vector<int> &dp){
        if(ind>=cost.size()){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int step1=cost[ind]+fin(ind+1,cost,dp);
        int step2=cost[ind]+fin(ind+2,cost,dp);
        
        return dp[ind]=min(step1,step2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min(fin(0,cost,dp),fin(1,cost,dp));
    }
};