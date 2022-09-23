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
    vector<int> inorder1;
    
    void inorder(TreeNode* root){
        if(!root){
            return ;
        }
        inorder(root -> left);
        inorder1.push_back(root-> val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return inorder1;
    }
};