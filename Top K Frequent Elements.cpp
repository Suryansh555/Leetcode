#include<bits/stdc++.h>
using namespace std ;

#define pi pair<int,int>
class mycomparator{
    public:
        bool operator() (const pi &a1 , const pi &a2){

            return a1.first < a2.first ;
        }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        int n ;
        n = nums.size();
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }
        priority_queue<pi,vector<pi>,mycomparator> pq;
        for(auto i : mp){
            pq.push(pair<int,int>(i.second , i.first));
        }
        int a = 0;
        vector<int> res ;
        while(a != k && pq.size() != 0){
            res.push_back(pq.top().second);
            pq.pop();
            a++;
        }
        return res ;
    }
};