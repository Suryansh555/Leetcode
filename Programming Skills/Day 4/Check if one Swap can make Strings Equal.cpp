#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int fi=-1,si=-1;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                if(fi==-1){
                    fi=i;
                }
                else if(si==-1){
                    si=i;
                }
            }
        }
        if(fi!=-1 && si!=-1){
            swap(s1[fi],s1[si]);
            return s1==s2;
        }

        return s1==s2;
        
        
    }
};