#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1; 
        int n=0;
        for(auto i : piles)
        n=max(n,i);
               int ans=n;
        while(s<=n)
        {
            int m=(s+n)/2;
            long long int t=0;
            for(auto i : piles)
            {
                if(i%m!=0)
                t+=(i/m)+1;
                else
                t+=(i/m);
                }

            if(t<=h)
            {ans=min(ans,m);
                n=m-1;
            }
            else
            s=m+1;    
        }
        return ans;
    }
};