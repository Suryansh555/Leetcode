#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<pair<int,int>>& nums, int target){
        int idx = -1;
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid].first==target){
                return nums[mid].second;
            }else if(nums[mid].first>target){
                high = mid-1;
                idx = nums[mid].second;
            }else{
                low = mid+1;
            }
        }
        return idx;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<pair<int,int>>nums;
        int i=0;
        for(auto it:intervals){
            nums.push_back({it[0],i});
            i++;
        }
        int n = intervals.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(n,0);
        i=0;
        for(auto it:intervals){
            int idx = search(nums,it[1]);
            ans[i] = idx;
            i++;
        }
        return ans;
    }
};