#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    int dp[101][40005];
    int helper(vector<int>&nums,int idx,int robbed){
        if(idx >= nums.size()){
            return robbed;
        }
        if(dp[idx][robbed]!=-1){
            return dp[idx][robbed];
        }
        int rob = helper(nums,idx+2,robbed+nums[idx]);
        int notrob = helper(nums,idx+1,robbed);
        int ans = max(rob,notrob);
        
        return dp[idx][robbed] = ans;
    }
    
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return helper(nums,0,0);
    }
};