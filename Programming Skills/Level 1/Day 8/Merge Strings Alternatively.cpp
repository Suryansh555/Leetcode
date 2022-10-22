#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        int l = 0;
        int r = 0 ;
        string res = "";
        while(l < n && r < m){
            res += word1[l];
            res += word2[r];
            l++;
            r++;
        }
        while(l < n){
            res += word1[l];
            l++;
        }
        while(r < m){
            res += word2[r];
            r++;
        }
        return res ;
    }
};