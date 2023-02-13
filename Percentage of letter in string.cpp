#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int percentageLetter(string s, char letter) {
        float c=0;
        float a=s.size();
        for(int i=0;i<a;i++){
            if(s[i]==letter){
                c++;
            }
        }
            float x=(c*100)/a;
            return x;
    }
};