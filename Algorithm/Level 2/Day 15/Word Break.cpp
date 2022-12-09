#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        if (wordDict.size() == 0) return false;
        set<string> strset(wordDict.begin(), wordDict.end());
        // bool dp[s.length()+1] does not work without initialization
        /* bool dp[s.length()+1]; 
        for (int i=0; i<s.length()+1; i++) {
            dp[i] = false;
        } */
        vector<bool> dp(s.length()+1, false);
        dp[0] = true;
        for (int i=1; i<=s.length(); i++) {
            for (int j=i-1; j>=0; j--) {
                string word = s.substr(j, i-j);
                if (dp[j] && (strset.find(word) != strset.end())) {
                    dp[i] = true;
                }
            }
        }
        return dp[s.length()];
        
    }
};