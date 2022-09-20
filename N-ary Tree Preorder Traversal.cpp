#include<bits/stdc++.h>
using namespace std ;

// ITERATIVE

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
    vector<int> preorder(Node* root) {
        if(!root) return ans;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            auto node = st.top();
            st.pop();
            ans.push_back(node->val);
            auto it = (node->children).rbegin();
            while(it != node->children.rend()){
                st.push(*it);
                it++;
            }
        }
        return ans;
    }
};