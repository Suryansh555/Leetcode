#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLatestStep(vector<int>& arr, int m) {
        
        int n = arr.size();
        if (m == n) return n;
        vector<pair<int, int>> pairs = {{0, n - 1}};
        int lvl = n;
        while(lvl >= 1){
            for (auto& [p, q]: pairs){
                if (q - p + 1 == m){
                    return lvl;
                }
            }
            int k = arr[lvl - 1] - 1;
            int key = -1;
            for (int i = 0; i < (int)pairs.size(); i++){
                int p = pairs[i].first, q = pairs[i].second;
                if (k >= p && k <= q){
                    key = i;
                    break;
                }
            }
            if (key != -1){
                auto [p, q] = pairs[key];
                pairs.erase(pairs.begin() + key, pairs.begin() + key + 1);
                if (k - p >= m) pairs.push_back({p, k - 1});
                if (q - k >= m) pairs.push_back({k + 1, q});                
            }
            lvl--;
        }
        return -1;
    }

};