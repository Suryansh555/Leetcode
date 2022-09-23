#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
void dfs(int i,int j,int initialcolor,int newcolor,vector<vector<int>> &image)
{
if(i<0 || j<0 || i>=(image.size()) || j>=(image[0].size()) || image[i][j] != initialcolor) return;

image[i][j]=newcolor;

dfs(i-1,j,initialcolor,newcolor,image);
dfs(i+1,j,initialcolor,newcolor,image);
dfs(i,j+1,initialcolor,newcolor,image);
dfs(i,j-1,initialcolor,newcolor,image);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
int initialcolor= image[sr][sc];

   if(initialcolor == newColor){
       return image;
   }
 dfs(sr,sc,initialcolor,newColor,image);
   return image; 
}

};