
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> res ;
        for(int i = 1 ; i <= n ; i++){
            int divide3 = 0 ;
            int divide5 = 0 ;
            if(i % 3 == 0){
                divide3 = 1 ;
            }
            if(i % 5 == 0){
                divide5 = 1 ;
            }
            if(divide3 && divide5){
                res.push_back("FizzBuzz");
                continue;
            }
            if(divide3){
                res.push_back("Fizz");
                continue;
            }
            if(divide5){
                res.push_back("Buzz");
                continue;
            }
            res.push_back(to_string(i));
        }
        return res ;
    }
};