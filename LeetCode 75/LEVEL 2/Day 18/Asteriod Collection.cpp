#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int>vec;
        int n=ast.size();
        for(int i=0;i<n;i++){ 
            if( ast[i] > 0 || vec.empty() ){
                vec.push_back(ast[i]);
            }
            else if(vec.back() == abs(ast[i])){
                vec.pop_back();
            }
            else if(vec.back() > abs(ast[i])){
                continue;
            }
            else{
                while(!vec.empty()){
                    if(vec.back() == abs(ast[i])){
                        vec.pop_back();
                        break;
                    }
                    else if(vec.back() < 0){
                        vec.push_back(ast[i]);
                        break;
                    }
                    else if(vec.back() > abs(ast[i])){
                        break;
                    }
                    else{
                        vec.pop_back();
                        if(vec.empty()){
                            vec.push_back(ast[i]);
                            break;
                        }
                    }
                }
            }
        }
        return vec;
    }
};