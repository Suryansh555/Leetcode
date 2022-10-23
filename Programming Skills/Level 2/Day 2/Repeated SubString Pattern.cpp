#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size=s.size(),i=0,j=size-1;
        string str=s;
        str+=s;
        str.pop_back();
        str.erase(str.begin());
        while(j<str.size()){
            string g=str.substr(i,j-i+1); //(j-i+1) helps to calculate the length of the substring from index i to j
            if(g==s)
                return true;
            i++;j++;
        }
        return false;
    }
};