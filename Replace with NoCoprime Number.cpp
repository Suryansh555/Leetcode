#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N = 2 ;
    long long  Arr[N];
        stack<long long >st;
        int n=N;
        
        for(int i=0;i<n;i++)
        {
            st.push(Arr[i]);
            
            while(st.size()>1)
            {
                long long a=st.top();
                st.pop();
                long long b=st.top();
                st.pop();
                
                if(__gcd(a,b)>1)
                {
                    st.push(((long long)(a*b)/(__gcd(a,b))));
                }
                else
                {
                    st.push(b);
                    st.push(a);
                    break;
                }
            }
        }
        
        vector<long long> ans;
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return 0;
    
}