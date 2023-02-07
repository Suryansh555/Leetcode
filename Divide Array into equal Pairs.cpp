#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>map;
        int n = nums.size(),sum = 0;
        for(auto i: nums) map[i]++;
        for(auto i: map) sum += i.second/2;
        return (sum == n/2);
    }
};