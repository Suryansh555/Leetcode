#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        if(s.size()==0){
            return "";
        }
        int c=0;
        list<int> re_list;
        re_list.push_front(0);
        for(int i=1; i<s.size(); i++){
            if(s[i]=='('){
                c+=1;
                if(c==0){
                    re_list.push_front(i);
                }
            }else{
                if(c==0){
                    re_list.push_front(i);
                    c=-1;
                }else{
                    c-=1;
                }
            }
        }
        for (auto it = re_list.begin(); it !=re_list.end(); ++it) {
            // cout << ' ' << ;
            s.erase(s.begin() + *it);
        }
        return s;
        
    }
};