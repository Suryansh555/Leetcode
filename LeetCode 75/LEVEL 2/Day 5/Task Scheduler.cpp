#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mp;
        priority_queue<int>pq;
        queue<pair<int,int>> process;
        int ans;
        
        for(auto it : tasks){
            mp[it]++;
            
        }
        for(auto it : mp){
            pq.push(it.second);
        }
        
       int time=0;
        
        while(!pq.empty() or !process.empty()){
            
            
            if(!process.empty() and time == process.front().second){
                pq.push(process.front().first);
                process.pop();
            }
            
            time+=1;
            if(!pq.empty()){
                int task = pq.top();
                pq.pop();
                task--;
                if(task>0){
                    process.push({task,time+n});
                }
                
            }
            
        }
        
        return time;
        
        
        
    }
};