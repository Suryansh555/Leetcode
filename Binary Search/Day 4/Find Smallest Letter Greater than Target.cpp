#include "bits/stdc++.h"
using namespace std;



class Solution {
public:
char nextGreatestLetter(vector<char>& letters, char target) {
set<char>st;
char ans=letters[0];
for(auto i: letters)
{
st.insert(i);
}
for(auto i: st)
{
if(i>target)
{
ans=i;
break;
}
}
return ans;
}
};