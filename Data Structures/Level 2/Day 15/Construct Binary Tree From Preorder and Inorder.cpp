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
    // preS = preorder start ans so on.....
    TreeNode* build(vector<int>& preorder,int preS , int preE, vector<int>& inorder,int inS,int inE){
            if(inS > inE){
        return NULL;
    }
        TreeNode *root= new TreeNode(preorder[preS]);
        int rootdata = preorder[preS];
        int rootindex =0;
        for(int i=0;i<=inE;i++){
            if(rootdata == inorder[i]){
                rootindex = i;
                break;
            }
        }
        int lns = inS;    // left subtree inorder start
        int lne = rootindex-1; // left inorder end
        int rns = rootindex+1; // right inorder start
        int rne = inE;      // right inorder end
        int lps = preS+1;   // left preorder start;
        int lpe = lne-lns+lps;  // left preorder end
        int rps = lpe+1;      // right preorder start
        int rpe = preE;       // right preorder end;
        root->left = build(preorder,lps,lpe,inorder,lns,lne);
        root->right = build(preorder,rps,rpe,inorder,rns,rne);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int l = preorder.size();
        int m = inorder.size();
        return build(preorder,0,l-1,inorder,0,m-1);
    }
}; 
