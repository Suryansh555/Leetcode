#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
int largestPerimeter(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int mx=0;
    for(int i=0;i<=nums.size()-3;i++){
        if(nums[i]+nums[i+1]>nums[i+2]) 
            mx=max(mx,nums[i]+nums[i+1]+nums[i+2]);
       
}
 return mx ;
}
};