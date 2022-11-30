#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int i,int j, int &cnt, vector<vector<char>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        if(i>= n || i <0) return;
        if(j>= m || j <0) return;
        
        if(grid[i][j] == '0' || grid[i][j] == 'v') return;
        
        grid[i][j] = 'v';
        cnt++;
        
        dfs(i-1,j,cnt,grid);
        dfs(i,j-1,cnt,grid);
        dfs(i+1,j,cnt,grid);
        dfs(i,j+1,cnt,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int sz=0;
        
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                dfs(i,j,count,grid);
                if(count>0)
                {
                    sz++;
                }
                count=0;
            }
        }
        
        return sz;
    }
};