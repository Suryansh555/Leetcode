#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        char a='[';
        char b='.';
        char c=']';
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                s.push_back(a);
                s.push_back(b);
                s.push_back(c);

            }else{
                s.push_back(address[i]);
            }
        }
        return s;

        
    }
};