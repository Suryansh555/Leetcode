#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        return find(candidates, 0, target);
    }
    
    vector<vector<int>> find(vector<int>& candidates,int begin, int target){
        vector<vector<int>> result;
        
        for(int i = begin; i < candidates.size(); ++i){
            if(target > candidates[i]){            
                vector<vector<int>> temp = find(candidates, i+1, target - candidates[i]);
                for(int j = 0; j < temp.size(); j++){
                    temp[j].push_back(candidates[i]);
                    result.push_back(temp[j]);
                }
            }else if(candidates[i] == target){
                result.push_back({candidates[i]});
            }else break;
            
            while(candidates[i+1] == candidates[i]){
                i++;
            }
        }
        
        return result;
    }
};