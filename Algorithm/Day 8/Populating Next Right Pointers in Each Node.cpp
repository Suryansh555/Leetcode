
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if (root) q.push(root);
        while (q.size()) {
            int len = q.size();
            Node* curr;
            while (len--) {
                curr = q.front(), q.pop();
                curr->next = len ? q.front():NULL;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);         
            }
        }         
        return root;
    }
};