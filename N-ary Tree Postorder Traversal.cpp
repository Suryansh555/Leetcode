
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
    vector<int> ans ;
    void recur(Node* root){
        if(!root){
            return ;
        }
        for(auto i : root->children){
            recur(i);
        }
        ans.push_back(root -> val);
    }
    vector<int> postorder(Node* root) {
        recur(root);
        return ans ;
    }
};