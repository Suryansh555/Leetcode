#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()<=0) return {-1,-1};
        if(nums.size()==1 && target==nums[0]) return {0,0};
        pair<int,int> a = {-1,-1};
        int count= 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && count==0){
                count++;
                a.first=i;
            }
            if(nums[i]==target){
                count++;
                a.second=i;
            }
            else{
                count=0;
            }
        }
        vector<int> ans;
        ans.push_back(a.first);
        ans.push_back(a.second);
        return ans;
    }
};