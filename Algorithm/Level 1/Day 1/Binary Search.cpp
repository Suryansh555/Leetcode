#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 ;
        int high = nums.size() - 1 ;
        int ans = -1 ;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                ans = mid ;
                break ;
            }
            if(nums[mid] < target){
                low = mid + 1 ;
            }
            else{
                high = mid - 1 ;
            }
        }
        return ans ;
    }
};