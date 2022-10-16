#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long long int count = -1 ;
        int n = nums.size();
        long long int curr = 0 ;
        for(int i = 0 ; i < n ; i++){
      if(nums[i] == 1)
          curr++;
      else{
          count = max(curr,count);
          curr = 0;
         }
    }
                  count = max(curr,count);
        return count;
        }
};