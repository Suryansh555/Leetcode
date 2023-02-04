#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        int ans=first;
        v.push_back(ans);
        for(int i=0;i<encoded.size();i++){
           ans=ans^encoded[i];
           v.push_back(ans);
        }
        return v;
        
    }
};