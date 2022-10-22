#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
bool isHappy(int n)
{
    unordered_set<int> s;
    while(true)
    {
        if(n==1)
            return true;
        s.insert(n);
        string r=to_string(n);
        int sm=0;
        for(int i=0;i<r.length();i++)
        {
            int sum=int(r[i]-'0');
            sm+=pow(sum,2);
        }
        n=sm;
        if(s.find(n)!=s.end())
            return false;
    }
    return true;
}
};