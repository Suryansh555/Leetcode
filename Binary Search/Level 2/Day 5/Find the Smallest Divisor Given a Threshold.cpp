#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int K) {
        int l=1, h=INT_MIN, mid, ans=-1;
         for(int i=0; i<nums.size(); i++)
            {
                h=max(h,nums[i]);
            }
        while(l<=h)
        {
            int sum=0;
            mid=l+(h-l)/2;
            for(int i=0; i<nums.size(); i++)
            {
                sum+=ceil((1.0 * nums[i]) / mid);
            }
            if(sum<=K)
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};