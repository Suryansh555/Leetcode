#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st ;
        stack<char> ts ;
        int len = s.length();
        int len1 = t.length();
        string res = "";
        string res1 = "";
        for(int i = 0 ; i < len ; i++){
            if(s[i] == '#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        for(int i = 0 ; i < len1 ; i++){
            if(t[i] == '#'){
                if(!ts.empty()){
                    ts.pop();
                }
            }
            else{
                ts.push(t[i]);
            }
        }
        while(!st.empty()){
            res = res + st.top();
            st.pop();
        }
        while(!ts.empty()){
            res1 = res1 + ts.top();
            ts.pop();
        }
        cout << res << " " << res1 ;
        if(res == res1){
            return true;
        }
        else{
            return false;
        }
    }
};