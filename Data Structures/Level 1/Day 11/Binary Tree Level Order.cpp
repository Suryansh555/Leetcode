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

    void levelOrder(TreeNode* root, vector<vector<int>>& ans) {
        if(root == NULL) return;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int size = q.size();
            vector<int> res;
            for(int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                res.push_back(node->val);
            }
            ans.push_back(res);
            
        }
        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        //here we have to use queue data structure to traverse using level order.
        vector<vector<int>> ans;
        levelOrder(root, ans);
        return ans;
    }
};