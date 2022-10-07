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
    int LeftSum (TreeNode* root , bool checkleft) {
        if(checkleft){
            if(root -> left == NULL && root -> right == NULL){
                return root -> val ;
            }
            if(root -> left == NULL){
                return LeftSum(root -> right , false);
            }
            if(root -> right == NULL){
                return LeftSum(root -> left , true);
            }
            return LeftSum(root -> left , true) + LeftSum(root -> right , false);
        }
        else{
            if(root -> left == NULL && root -> right == NULL){
                return 0 ;
            }
            if(root -> left == NULL){
                return LeftSum(root -> right ,false);
            }
            if(root -> right == NULL){
                return LeftSum(root -> left , true);
            }
            return LeftSum(root -> left , true) + LeftSum(root -> right , false);
        }
    }
    int sumOfLeftLeaves(TreeNode * root ){
        long long int sum = 0;
        if(root -> left){
            sum += LeftSum(root -> left , true);
        }
        if(root -> right){
            sum += LeftSum(root -> right , false);
        }
        return sum;
    }
};