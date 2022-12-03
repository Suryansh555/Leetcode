#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        subset(res,nums,vector<int>(),0);
        return res;
    }
    void subset(vector<vector<int>>& res,const vector<int>& nums,vector<int> temp,int pos){
        if(pos>=nums.size()){
            res.push_back(temp);
            return;
        }
        int cnt=0;
        while(pos+cnt<nums.size()&&nums[pos]==nums[pos+cnt]){
            cnt++;
        }
        subset(res,nums,temp,pos+cnt);
        for(int i=1;i<=cnt;++i){
            temp.push_back(nums[pos]);
            subset(res,nums,temp,pos+cnt);
        }


    }
};