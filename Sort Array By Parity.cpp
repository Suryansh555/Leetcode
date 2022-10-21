#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0 ;
        int size = nums.size();
        int r = size - 1 ;
        int index = 0 ;
        while(l <= r){
            if(nums[l] % 2 != 0){
                swap(nums[l],nums[r]);
                r--;
            }
            else{
                l++;
            }
        }
        return nums;
    }
};