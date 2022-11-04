#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int c=0,ans=0;
        for(int i:nums){
            if(c==0)
                ans=i;
            
            if(i==ans) c++;
            else c--;
        }
        return ans;
     }
};