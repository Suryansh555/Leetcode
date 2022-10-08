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

TreeNode* sort(vector<int>& nums , int li , int ri)
{
    if(li > ri )
    {
        return NULL;
    }
    int mi = li + (ri-li)/2;
    TreeNode* root = new TreeNode(nums[mi]);
    TreeNode* root_l = sort(nums , li , mi - 1 );
    TreeNode* root_r = sort(nums , mi + 1 , ri );
    root->left = root_l;
    root->right = root_r;
    return root;
}
TreeNode* sortedArrayToBST(vector<int>& nums) {
    int li = 0;
    int ri = nums.size() -1;
    return sort(nums , li , ri);
    
        
}
};