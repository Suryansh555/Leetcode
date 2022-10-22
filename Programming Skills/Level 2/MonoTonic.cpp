#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int size = arr.size();
        if(size <= 2){
            return true ;
        }
        int diff = arr[1] - arr[0];
        int check = 0;
        if(diff > 0){
            check = 1 ;
        }
        else if(diff < 0){
            check = -1;
        }
        else{
            check = 0;
        }
        for(int i = 2 ; i < size ; i++){
            int checkdiff = arr[i] - arr[i-1];
            if(checkdiff > 0 && check == -1){
                return false;
            }
            else if(checkdiff < 0 && check == 1){
                return false;
            }
            if(check == 0 && checkdiff != 0){
                if(checkdiff > 0){
                    check = 1 ;
                }
                else{
                    check = -1;
                }
            }
        }
        return true ;
    }
};