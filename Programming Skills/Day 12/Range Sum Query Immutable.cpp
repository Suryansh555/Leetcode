#include<bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> presum ;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        
        presum.push_back(nums[0]);
        for(int i = 1 ; i < n ; i++){
            presum.push_back(presum[i-1] + nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left){
            return presum[right] - presum[left - 1];
        }
        else{
            return presum[right];
        }
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */