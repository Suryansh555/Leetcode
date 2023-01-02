#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        vector<int> ans(rains.size(),1);
        map<int,int> mp;
        set<int> ms;
        for(int i=0;i<rains.size();i++){
            if(rains[i] == 0){
                ms.insert(i);
            }else if(mp.count(rains[i])){
                int last = mp[rains[i]];
                auto lb = ms.lower_bound(last);
                if(lb == ms.end()) return {};
                ans[*lb] = rains[i];
                ans[i] = -1;
                ms.erase(lb);
            }else{
                ans[i] = -1;
            }
            mp[rains[i]] = i;
        }
        return ans;
    }
};