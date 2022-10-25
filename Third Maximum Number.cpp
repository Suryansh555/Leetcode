#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int thirdMax(vector<int>& nums) {
    set<int> a;
    vector<int> ans;

    for(int i=0;i<nums.size();i++)
    {
        a.insert(nums[i]);
    }
    
    
    for(auto x : a)
    {
        ans.push_back(x);
    }
    
    
    if(ans.size()==1)
    {
        return ans[0];
    }
    if(ans.size()==2)
    {
        sort(ans.begin(),ans.end());
        return ans[1];
    }
    
    if(ans.size()>=3)
        return ans[ans.size()-3];
    
    return ans[ans.size()]; 
    }
};