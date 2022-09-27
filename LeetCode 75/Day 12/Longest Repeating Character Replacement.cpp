#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
int characterReplacement(string s, int k) {
    int maxLen = 1, i=0, j=0, maxi=0;       
    int n = s.size();
    unordered_map<char, int> mp;
    
    while(j < n) {
        mp[s[j]]++;
        maxi = max(maxi, mp[s[j]]);
        
        while((j-i+1)-maxi > k) {
            mp[s[i]]--;
            i++;
        }
        
        maxLen = max(maxLen, j-i+1);
        j++;
    }
    
    return maxLen;
}
};