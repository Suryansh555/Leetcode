#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    unordered_map<string,int>mp;
    int numOfStrings(vector<string>& patterns, string word) {
        string s="";
        for(int i=0;i<word.size();i++){
            s=word[i];
            mp[s]++;
            for(int j=i+1;j<word.size();j++){
                s+=word[j];
                mp[s]++;
            }
            s="";
        }
        int count=0;
        for(auto &i:patterns){
            if(mp.find(i)!=mp.end()) count++;
        }
        return count;
    }
};