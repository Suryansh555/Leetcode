#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp ;
        int len = nums.size();
        vector<int> res ;
        for(int i = 0 ; i < len ; i++ ){
        if(mp.find(target - nums[i]) != mp.end()){
                res.push_back(i);
                res.push_back(mp[target - nums[i]]);
            }
            mp[nums[i]] = i;

        }
        return res ;
    }
};