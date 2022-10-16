#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        int n = ransomNote.size();
        int m = magazine.size();
        for(int i = 0 ; i < m ; i++){
            mp[magazine[i]]++;
        }
        for(int i = 0 ; i < n ; i++){
            mp[ransomNote[i]]--;
            if(mp[ransomNote[i]] < 0 ){
                return false;
            }
        }
        return true ;
    }
};