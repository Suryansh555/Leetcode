#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        for (vector<int>& row :  grid) 
            sort(row.begin(), row.end());
        for (int j = grid[0].size() - 1; j >=0 ; j--) {
            int mx = INT_MIN;
            for (int i = 0; i < grid.size(); i++) {
                 mx = max(mx, grid[i][j]);
            }
            ans += mx;
        }
        return ans;
    }
};