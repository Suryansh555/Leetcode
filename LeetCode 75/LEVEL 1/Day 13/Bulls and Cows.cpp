#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
string getHint(string st, string gu)
{
    map<char,int>s;
    map<char,int>g;
    int b=0,c=0;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]==gu[i])
            b++;
        else
        {
            if(g[st[i]]>0)
            {
                g[st[i]]--;
                c++;
            }
            else
            {
                s[st[i]]++;
            }
            if(s[gu[i]]>0)
            {
                s[gu[i]]--;
                c++;
            }
            else
            {
                g[gu[i]]++;
            }
        }
    }
    return to_string(b)+'A'+to_string(c)+'B';
}
};