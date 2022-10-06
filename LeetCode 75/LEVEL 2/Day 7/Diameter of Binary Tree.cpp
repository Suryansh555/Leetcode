#include<bits/stdc++.h>
using namespace std ; 


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
pair<int,int> diameterFast(TreeNode* root)
{
if(root == NULL)
{
pair<int,int>p = make_pair(0,0);
return p;
}

  pair<int,int>left = diameterFast(root->left);
  pair<int,int>right = diameterFast(root->right);
    
  int left_diameter = left.first;
  int right_diameter = right.first;
  int diameter = left.second  + right.second;

  pair<int,int>ans;
  ans.first = max(diameter , max(left_diameter,right_diameter) );
  ans.second = 1 + max(left.second,right.second);
  return ans;
}
int diameterOfBinaryTree(TreeNode* root) {
    pair<int,int>ans = diameterFast(root);
    
    return ans.first ;
}
};