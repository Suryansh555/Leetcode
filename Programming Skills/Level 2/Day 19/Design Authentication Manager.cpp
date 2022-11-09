#include<bits/stdc++.h>
using namespace std;

class AuthenticationManager {
public:
    int time;
    unordered_map<string,int>m;
    AuthenticationManager(int timeToLive) {
        time = timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        m[tokenId] = currentTime;
    }
    
    void renew(string tokenId, int currentTime) {
        if(m.find(tokenId)!=m.end() && m[tokenId] + time > currentTime){
            m[tokenId] = currentTime;
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int ans = 0;
        for(auto x:m){
            if(x.second + time > currentTime){
                ans++;
            }
        }
        return ans;
        
    }
};


/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */