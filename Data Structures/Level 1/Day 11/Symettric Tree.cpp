#include<bits/stdc++.h>
using namespace std;

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
    bool is_same(TreeNode *root1, TreeNode *root2){
        if(!root1 && !root2) return true;
        if((!root1 && root2) || (root1 && !root2)) return false;
        
        if(root1->val == root2->val) return is_same(root1->left , root2->right) && is_same(root1->right , root2->left);
        else return false;
    }
    
    bool isSymmetric(TreeNode* root) {
        return is_same(root->left, root->right);
    }
};