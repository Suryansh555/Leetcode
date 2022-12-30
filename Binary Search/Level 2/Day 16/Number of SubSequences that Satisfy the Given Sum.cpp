#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int mod = 1e9+7;
    long help(int x, int y)
    {
        if(x==0) return 0;
        if(y==0) return 1;
        if(y==1) return x;
        long long ans = 1;
        if(y%2==0)
        {
            ans = help(x,y/2);
            ans*=ans;
        }
        else
        {
            ans = help(x,y-1);
            ans*=x;
        }
        return ans%mod;
    }
    int numSubseq(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int left =0;
        int right = nums.size()-1;
        long long ans = 0;
        while(left<=right)
        {
            int sum = nums[left]+nums[right];
            if(sum<=target)
            {
                int x = right-left;
                ans +=(long)help(2,x);
                ans%=mod;
                left++;
            }
            else if(target<sum)
            {
                right--;
            }
        }
        return ans;
    }
};