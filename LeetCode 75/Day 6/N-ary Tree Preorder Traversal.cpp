#include<bits/stdc++.h>
using namespace std ;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    vector<int> ans;
    void recur(Node* root){ //this function is for recursion
        if(!root) return;
        ans.push_back(root->val);
        for(auto child: root->children){
            recur(child);
        }
    }
    vector<int> preorder(Node* root) {
        recur(root);
        return ans;
    }
};