#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        string ans = "";
        for(int i = 0 ; i < n ; i++){
            ans += tolower(s[i]);
        }
        return ans ;
    }
};