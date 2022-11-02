#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int len = p.length();
        vector<int> character(26);
        for(int i = 0 ; i < len ; i++){
            character[int(p[i]) % 26]--;
        }
        vector<int> res ;
        int len1 = s.length();
        if(len > len1){
            return res ;
        }
        for(int  i = 0 ; i < len ; i++){
            character[int(s[i]) % 26]++;
        }
        int check = 1 ;
        for(int i = 0 ; i < 26 ;  i++){
            if(character[i] != 0){
                check = 0;
            }
        }
        if(check == 1){
            res.push_back(0);
        }
        int k = len;
        for(int i = len ; i < len1 ; i++ ){
            character[int(s[i - k])% 26]--;
            character[int(s[i])% 26]++;
        int check = 1 ;
        for(int i = 0 ; i < 26 ;  i++){
            if(character[i] != 0){
                check = 0;
            }
        }
        if(check == 1){
            res.push_back(i - k + 1);
        }
        
            
        }
        return res ;
    }
};