#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len = t.size();
        int curr = 0 ;
        int size = s.size();
        for(int i = 0 ; i < len ; i++){
            if(s[curr] == t[i]){
                curr++;
            }
        }
        if(curr == size){
            return true;
        }
        return false;
    }
};