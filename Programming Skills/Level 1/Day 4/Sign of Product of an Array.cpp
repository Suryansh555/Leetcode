#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int signcount = 0 ;
        int n = nums.size();
        for(int i = 0; i < n ; i++){
            if(nums[i] == 0){
                return 0;
            }
            if(nums[i] < 0)
            {
                signcount++;
            }
        }
        if(signcount % 2 == 0){
            return 1;
        }

        return -1;
    }
};