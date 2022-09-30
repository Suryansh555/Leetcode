#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int n,m;
    int dp[105][105]; 
    bool check(int a , int b){
        if(a >= 0 && a < n && b >= 0 && b < m){
            return true;
        }
        return false;
    }
    int Calculate(vector<vector<int>>& grid , int r, int c){
        if(r == n) return c; 
        if(check(r,c)){
            if(grid[r][c] == 1 && check(r,c+1) && grid[r][c+1] == 1){
                if(dp[r+1][c+1] != -2) return dp[r+1][c+1];
                else return dp[r+1][c+1] = Calculate(grid,r+1,c+1);
            }
            if(grid[r][c] == -1 && check(r,c-1) && grid[r][c-1] == -1 ){
                if(dp[r+1][c-1] != -2) return dp[r+1][c-1];
                else    return dp[r+1][c-1] = Calculate(grid,r+1,c-1);
            }
        }
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vector<int> ans(m) ;
        for(int i = 0 ;i < 101 ; i++){
            for(int j = 0; j < 101 ; j++){
                dp[i][j] = -2 ;
            }
        }
        for(int i = 0 ; i < m ; i++){
            ans[i] = Calculate(grid,0,i);
        }
        return ans ;
    }
};