#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
bool isIsomorphic(string s, string t) {
        unordered_map<char,char> char_map;
        unordered_set<char> char_set;
        for(int i=0;i<s.length();i++){
            if(char_map.count(s[i])==0){
                if(char_set.count(t[i])==1)
                    return false;
                char_map[s[i]]=t[i];
                char_set.insert(t[i]);
            }
                
            else{
                if(char_map[s[i]]!=t[i])
                    return false;
            }
        }
        return true;
    }
};