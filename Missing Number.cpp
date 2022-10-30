#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actual_sum = 0, should_be_sum, ans;
        for(auto it : nums)
        {
            actual_sum = actual_sum + it;
        }
        int n = nums.size();
        should_be_sum = (n * (n + 1)) / 2; 
        ans = should_be_sum - actual_sum;
        return ans;
    }
};