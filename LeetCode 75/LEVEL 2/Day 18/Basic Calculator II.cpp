#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int calculate(string s) {
        int size= s.size(),i=0,ans=0;
        char prevOperator='+';
        stack<int> sta;
        while(i<size){
            if(s[i]==' '){
                i++;
                continue;
            }
            int num=0;
            while(isdigit(s[i]))
                num = num*10 + (s[i++]-'0');
            if(prevOperator=='+')
                sta.push(num);
            else if(prevOperator=='-')
                sta.push(-num);
            else if(prevOperator=='*'){
                int x=sta.top();
                sta.pop();
                sta.push(x*num);
            }
            else if(prevOperator=='/'){
                int x=sta.top();
                sta.pop();
                sta.push(x/num);
            }
            prevOperator=s[i++];
        }
        while(sta.size()){
            ans+=sta.top();
            sta.pop();
        }
        return ans;
    }
};