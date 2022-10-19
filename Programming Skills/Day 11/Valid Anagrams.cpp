#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> character(26);
        int len = s.length();
        int len1 = t.length();
        
        if(len != len1){
            return false;
        }
        
        for(int i = 0 ; i < len ;i++){
            character[int(s[i]) % 26]++;
            character[int(t[i]) % 26]--;
        }
        bool check = true ;
        for(int  i= 0 ; i <  26 ; i++){
            if(character[i] != 0){
                check = false;
            }
        }
        return check ;
    }
};