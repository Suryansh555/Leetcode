
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int get(string s, string p, vector<int>& removable, int k) {
        for(int i = 0; i < k; i++) {
            s[removable[i]] = '?';

        }
        int n1= s.size(), n2 = p.size();
        int i = 0, j = 0;
        while(i < n1 && j < n2) {
            if(s[i] == p[j]) j++;
            i++;
        }
        return j == n2;
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int ans = 0, st = 0, e = removable.size();
        while(st <= e) {
            int mid = st + (e - st) / 2;
            if(get(s, p, removable, mid))
                ans = mid , st = mid + 1;
            else e = mid - 1;
        }
        return ans;
    }
};