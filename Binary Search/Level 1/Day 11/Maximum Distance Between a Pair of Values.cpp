#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int> &nums, int n, int l) {
        if(l >= nums.size()) return -1;
        int r = nums.size() - 1;
        while(l < r){
            int mid = (l + r) / 2;
            if(nums[mid] < n) r = mid;
            else
                l = mid + 1;
        }
        if(nums[l] < n) --l;
        return l;
    }
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        for(int i = 0; i < nums1.size(); i++) {
            int idx = helper(nums2, nums1[i], i);
            if(idx < i) continue;
            ans = max(idx - i, ans);
        }
        return ans;
    }
};