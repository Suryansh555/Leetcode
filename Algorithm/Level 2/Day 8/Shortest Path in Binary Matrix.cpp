#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isValid(int m,int n,int i,int j){
        if(i < 0 || j < 0 || i >= m || j >= n){
            return false;
        }
        return true;
    }

    
    struct Node{
        int dist;
        int x;
        int y;
    };
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        if(m == 0 || grid[0][0] == 1 || grid[m - 1][n - 1] == 1){
            return -1;
        }
        
        vector<vector<bool>> visited;
        for(int i = 0;i<m;i++){
            vector<bool> t;
            for(int j = 0;j<n;j++){
                t.push_back(false);
            }
            visited.push_back(t);
        }
        visited[0][0] = true;
        
        queue<Node> q;
        
        Node nn;
        nn.dist = 1;
        nn.x = 0;
        nn.y = 0;
        q.push(nn);
        
        int rowNum[] = {-1,-1,0,1,1,1,0,-1};
        int colNum[] = {0,1,1,1,0,-1,-1,-1};
        
        while(!q.empty()){
            Node temp = q.front();
            q.pop();
            
            if(temp.x == m - 1 && temp.y == n - 1){
                return temp.dist;
            }
            
            for(int i = 0;i<8;i++){
                int row = temp.x + rowNum[i];
                int col = temp.y + colNum[i];
                
                if(isValid(m,n,row,col) && grid[row][col] == 0 && !visited[row][col]){
                    visited[row][col] = true;
                    Node t;
                    t.x = row;
                    t.y = col;
                    t.dist = temp.dist + 1;
                    q.push(t);
                }
            }
        }
        
        return -1;
    }
};