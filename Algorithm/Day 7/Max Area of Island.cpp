#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int cnt=0;
     int dfs(int row,int col,vector<vector<int>> &vis,vector<vector<int>>& grid,int delrow[],int delcol[]){
         // cnt++;
        int m=grid.size();
        int n=grid[0].size();
        vis[row][col]=1;
        // neighbours
        int sum=0;
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                sum+=dfs(nrow,ncol,vis,grid,delrow,delcol);
            }
        }
        return sum+1;
        
        
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int max_cnt=0;
        // int cnt=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m,vector<int> (n,0));
        int delrow[]={-1,1,0,0}; //up,down,left,right 
        int delcol[]={0,0,-1,1}; //up,down,left,right 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    // cnt=0;
                    int cnt=dfs(i,j,vis,grid,delrow,delcol);
                    max_cnt=max(max_cnt,cnt);
                }
            }
        }
        
        return max_cnt;
        
    }
};