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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root==NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool chk=0;
        TreeNode* node= root;
        while (!q.empty()){
            int size= q.size();
            vector<int> temp;
            for (int i=0; i<size; i++){
                TreeNode* ele= q.front();
                q.pop();
                temp.push_back(ele->val);
                if (ele->left)q.push(ele->left);
                if (ele->right)q.push(ele->right);
            }
            if (chk){reverse(temp.begin(),temp.end());}
            ans.push_back(temp);
            chk= !chk;
        }
        return ans;
    }
};