#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        char c;
        int min = INT_MAX;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    if(j<=min){
                        min = j;
                        break;
                    }
                }
            }
        }
        return s[min];
    }
};