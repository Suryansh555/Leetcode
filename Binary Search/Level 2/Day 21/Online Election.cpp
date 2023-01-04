#include<bits/stdc++.h>
using namespace std;

class TopVotedCandidate {
public:
    // person, vote count
    unordered_map<int,int> m;
    // current most voted person info
    int best = -1;
    int countBest = INT_MIN;
    // timestamp and best vote
    map<int, int> voteLog;
    
    TopVotedCandidate(vector<int>& p, vector<int>& t) {
        for (int i = 0; i < t.size(); ++i){
            if (++m[p[i]] >= countBest){
                best = p[i];
                countBest = m[p[i]];
            }
            voteLog[t[i]] = best;
        }
    }
    
    int q(int t) {
        auto it = voteLog.upper_bound(t);
        return (*--it).second;
    }
};
/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */