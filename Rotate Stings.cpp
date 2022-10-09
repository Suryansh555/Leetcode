#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
bool rotateString(string s, string goal) {
if(s.size() != goal.size()) return false;
string res=s+s;
if(res.find(goal) != -1) return true;
return false;
}
};