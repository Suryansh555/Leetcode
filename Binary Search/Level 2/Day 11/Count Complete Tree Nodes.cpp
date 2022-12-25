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
    int getRightHeight(TreeNode* root) {
        int count = root != NULL;
        while (root && root->right && count++)
            root = root->right;
        return count;
    }

    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;
        int leftTreeHeight = getRightHeight(root->left);
        int rightTreeHeight = getRightHeight(root->right);
        int nodes = pow(2, max(leftTreeHeight, rightTreeHeight));
        if (leftTreeHeight <= rightTreeHeight)
            return nodes + countNodes(root->left);
        return nodes + countNodes(root->right);
    }
};