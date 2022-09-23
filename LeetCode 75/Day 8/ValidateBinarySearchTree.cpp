
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
  bool isValidBST(TreeNode* node, long mn = (long) INT_MIN - 1, long mx = (long) INT_MAX + 1) {
    if (node->val <= mn || node->val >= mx) return false;
    
    bool left = true, right = true;
    if (node->left) left = isValidBST(node->left, mn, min(mx, (long) node->val));
    if (node->right) right = isValidBST(node->right, max(mn, (long) node->val), mx);
    return left && right;
  }
};