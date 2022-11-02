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
    void SearchLocation(TreeNode* root , int val){
        if(val > root -> val){
            if(root -> right == NULL){
                root -> right = new TreeNode(val);
            }
            else{
                SearchLocation(root -> right , val);
            }
        }
        else{
            if(root -> left == NULL){
                root -> left = new TreeNode(val);
            }
            else{
                SearchLocation(root -> left , val);
            }
        }

    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            TreeNode* newRoot = new TreeNode(val);
            return newRoot;
        }
        SearchLocation(root,val);
        return root;
    }
};