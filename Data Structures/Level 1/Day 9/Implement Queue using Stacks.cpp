#include<bits/stdc++.h>
using namespace std;


class MyQueue {
public:
    stack<int> pre;
    stack<int> pos;
    MyQueue() {
        
    }
    
    void push(int x) {
        pre.push(x);
    }
    
    int pop() {
        if(pos.empty()){
            while(!pre.empty()){
                int x = pre.top();
                pre.pop();
                pos.push(x);
            }
        }
        int x = pos.top();
        pos.pop();
        return x;
    }
    
    int peek() {
        if(pos.empty()){
            while(!pre.empty()){
                int x = pre.top();
                pre.pop();
                pos.push(x);
            }
        }
        int x = pos.top();
        return x ;

    }
    
    bool empty() {
        return pre.empty() && pos.empty() ; 
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */