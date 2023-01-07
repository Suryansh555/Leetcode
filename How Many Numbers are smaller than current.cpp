#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans;
        for(int i =0; i < len; i++){
            ans.push_back(0);
            for(int j = 0; j < len; j++)
            {
                if(nums[i] > nums[j]){
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};