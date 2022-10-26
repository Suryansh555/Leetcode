#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        int size = s.size();
        for(int i = 0 ; i < size ; i++){
            mp[s[i]]++;
        }
        for(int i = 0 ; i < size ; i++){
            if(mp[s[i]] == 1 ){
                return i;
            }
        }
        return -1;
    }
};