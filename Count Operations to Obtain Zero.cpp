#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOperations(int num1, int num2) {
        int operation = 0 ; 
        while((num1>=0) || (num2>=0)){
            if(num1 == 0 ){
                break ; 
            }
            if(num2 ==0 ){
                break ; 
            }
            if(num1 == num2){
                num1 = num1 - num2 ; 
                operation+=1 ; 

            }
            else if(num1 < num2){
                num2 = num2 - num1 ; 
                operation+=1 ; 
            }
            else{
                num1 = num1 - num2 ; 
                operation+=1 ; 

            }
        }
        return operation ; 
    }
};