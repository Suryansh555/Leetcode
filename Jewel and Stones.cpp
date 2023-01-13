#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numJewelsInStones(string p, string s) {
        int n=p.size();
        int u=0;
        int k=s.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++ )
            {
                 if(p[i]==s[j])
                 {
                     u++;
                 }
            }
        }
        return u;
    }
};