#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int sum=0;
        for(auto e: m){
            sum+=((e.second-1)*(e.second))/2;
        }
        return sum;
    }
};