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

TreeNode* deleteNode(TreeNode* root, int key) {
    if(root==NULL){return NULL;}
    if(root->val==key){return rmv(root);}
    TreeNode* r=root;
    while(r!=NULL){
        if(r->val>key){
            if(r->left!=NULL && r->left->val==key){
                r->left=rmv(r->left);
            }
            else{r=r->left;}
        }
        else{
            if(r->right!=NULL && r->right->val==key){
                r->right=rmv(r->right);
            }
            else{
                r=r->right;
            }
        }
    }
    return root;
}
TreeNode* rmv(TreeNode* node){
    if(node->left==NULL){return node->right;}
    if(node->right==NULL){return node->left;}
    TreeNode* rgt=node->right;
    TreeNode* lft=rgtmst(node->left);
    lft->right=rgt;
    return node->left;
}
TreeNode* rgtmst(TreeNode* rt){
    if(rt->right==NULL){return rt;}
    return rgtmst(rt->right);
}
};