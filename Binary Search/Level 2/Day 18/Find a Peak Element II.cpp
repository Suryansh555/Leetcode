#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        for(int i=0; i<n; i++) {
            int s = 0, e = m - 1;
            while(s <= e) {
                int mid = (s + e) / 2, l = -1, r = -1, u = -1, d = -1;
                
                if(mid - 1 >= 0) l = mat[i][mid - 1];
                if(mid + 1 < m) r = mat[i][mid + 1];
                if(i - 1 >= 0) u = mat[i - 1][mid];
                if(i + 1 < n) d = mat[i + 1][mid];
                
                if(mat[i][mid] > l && mat[i][mid] > r && mat[i][mid] > u && mat[i][mid] > d) return {i, mid};
                l < r ? s = mid + 1 : e = mid - 1;
            }
        }
        return {};
     }
};;