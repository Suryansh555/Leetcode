#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int lengthOfLIS(vector<int>& nums) 
{
    // BIS[k]表示num[0,k-1]中递增子序列最后一个元素最小的那个序列
    vector<int> BIS(nums.size() + 1, INT_MAX);
    int len = 0;
    
    for (int i = 0; i < nums.size(); i++)
    {
        for (int k = 0; k < i; k++)
        {
            if (nums[i] > BIS[k] && nums[i] < BIS[k + 1])
                BIS[k + 1] = nums[i];
        }
        if (BIS[0] > nums[i])
            BIS[0] = nums[i];
    }
    
    for (len = 0; len < BIS.size(); len++)
        if (BIS[len] >= INT_MAX)
            break;
            
    return len;
}
};