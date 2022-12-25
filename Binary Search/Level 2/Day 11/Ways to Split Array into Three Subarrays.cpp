#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int M = 1e9+7;
    int waysToSplit(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];
        
        for(int i = 1; i<n; i++) {
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }
        long output = 0l;
        for(int i = 0; i<n-2; i++) {
            int lo = i, hi = n-2;
            int sumLeft = prefixSum[i];
            while(hi - lo > 1) {
                int mid = lo + (hi-lo)/2;
                int sumMid = prefixSum[mid] - sumLeft;
                int sumRight = prefixSum[n-1] - sumMid - sumLeft;
                if (sumRight >= sumMid && sumMid >= sumLeft) {
                    hi = mid;
                } else if (sumRight < sumMid) {
                    hi = mid-1;
                } else if(sumMid < sumLeft) {
                    lo = mid;
                }
            }
            int j = lo+1;
            int sumMid = prefixSum[j] - sumLeft;
            int sumRight = prefixSum[n-1] - sumMid - sumLeft;
            if(sumMid < sumLeft || sumRight < sumMid)
                continue;
             lo = i+1; hi = n-1;
            while(hi - lo > 1) {
                int mid = lo + (hi-lo)/2;
                int sumMid = prefixSum[mid] - sumLeft;
                int sumRight = prefixSum[n-1] - sumMid - sumLeft;
                if (sumRight >= sumMid && sumMid >= sumLeft) {
                    lo = mid;
                } else if (sumRight < sumMid) {
                    hi = mid;
                } else if(sumMid < sumLeft) {
                    lo = mid+1;
                }
            }
            int k = hi-1;
            
            output = (output + (k-j+1))%M;

        }
        return output;
    }
};