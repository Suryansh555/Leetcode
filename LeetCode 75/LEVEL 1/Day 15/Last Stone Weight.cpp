#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> gq;
        int n = stones.size();
        for(int i = 0 ; i < n ; i++){
            gq.push(stones[i]);
        }
        while(gq.size() > 1){
            int x = gq.top();
            gq.pop();
            int y = gq.top();
            gq.pop();
            if(x != y){
                gq.push(x - y);
            }
        }
        if(gq.size() == 0){
            return 0 ;
        }
        return gq.top();
    }
};