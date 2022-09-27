#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int>st;
        int n= nums.size();
        
        for(int i=0;i<n;i++)
        {
            st.push(nums[i]);
            
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
        
        vector<int> ans;
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};