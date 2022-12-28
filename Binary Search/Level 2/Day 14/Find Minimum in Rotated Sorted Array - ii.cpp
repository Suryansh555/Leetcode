#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0] < nums[nums.size()-1]) return nums[0];
        if(nums.size() == 1) return nums[0];
        int i=0, j=nums.size()-1;
        int prev=INT_MAX;
        while(i<=j){
            if(nums[i] < nums[j]) return nums[i] > prev? prev: nums[i];
            if(nums[j] > prev) return prev;
            if(nums[i] == nums[j] && (i == j-1 || i == j)) return nums[i];
            if(i == j-1) return nums[j];
            prev = nums[j];
            i++;
            j--;
        }
        return -1;
    }
};