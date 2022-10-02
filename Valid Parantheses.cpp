#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        int n = s.length();
        int i = 0 ;
        while(i!= n){
            char A = s[i];
            char rev ;
            int check = 0;
            switch(A){
                case ')' :
                    rev = '(' ;
                    check = 1 ;
                    break ;
                case '}' :
                    rev = '{';
                    check = 1 ;                    
                    break;
                case ']' :
                    rev = '[';
                    check = 1 ;                    
                    break ;
                default :
                    st.push(A);
                    break ;        
            }
            if(check == 1){
                if(st.empty()){
                    return false;
                }
                char B = st.top();
                st.pop();
                if(B != rev){
                    return false;
                }
            }
          i++;
        }
        if(st.empty()){
            return true ;
        }
        return false;
        
    }
};