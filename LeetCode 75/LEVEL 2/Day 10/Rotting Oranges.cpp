#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
     
        int a=g.size()-1, b=g[0].size()-1; 
       
        int ans=0;
        vector<vector<int>> v=g;
        queue<pair<int,int>> q;
        
        for(int i=0;i<=a;i++){
            
            for(int j=0;j<=b;j++){
                
                if(g[i][j]==2)
                q.push(make_pair(i,j));
            }
            
        }
        
        
        while(!q.empty()){
            
            int size=q.size();
            
            for(int k=0;k<size;k++){
            
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                
            if( i+1>=0 &&  i+1<=a  &&  j>=0  &&  j<=b  && g[i+1][j]==1 ){
             q.push(make_pair(i+1,j));
             g[i+1][j]=2;}
                
            if( i-1>=0 &&  i-1<=a  &&  j>=0  &&  j<=b  && g[i-1][j]==1 ){
             q.push(make_pair(i-1,j));
             g[i-1][j]=2; }  
                
            if( i>=0 &&  i<=a  &&  j+1>=0  &&  j+1<=b  && g[i][j+1]==1 ){
             q.push(make_pair(i,j+1));
             g[i][j+1]=2;}   
                
            if( i+1>=0 &&  i<=a  &&  j-1>=0  &&  j-1<=b  && g[i][j-1]==1 ){
             q.push(make_pair(i,j-1));
             g[i][j-1]=2;}    
            
             
                
                
            }
             ans++;
            
        }
        
        
        for(int i=0;i<=a;i++){
            
            for(int j=0;j<=b;j++)    
                if(g[i][j]==1)
                 return -1;
        }
        
        if(ans>0)
        return --ans;
        else
        return ans;
        
    }
};