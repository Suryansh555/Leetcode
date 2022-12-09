#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numDecodings(string s) {
        int m = s.length();

        if (m == 0 || s[0] == '0')
            return 0;

        if (m == 1)
            return m;
        
        int a = 1; 
        int b = 1; 
                
        for (int i = 1; i < m; i++) {
            int tmp1 = b; 
            if (s[i] == '0' && (s[i-1] == '0' || s[i-1] > '2'))
                return 0;
            
            if (((s[i-1] - '0') * 10 + (s[i] -'0') <= 26) && s[i-1] != '0') 
                b = (s[i] == '0') ? a : a + b;
        
            a = tmp1;
        }
        
        return b;
    }
};