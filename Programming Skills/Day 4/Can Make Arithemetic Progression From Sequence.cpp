#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        if(n == 1){
            return true ;
        }
        int diff = arr[1] - arr[0];
        for(int i = 1 ; i < n ; i++){
            if(diff != arr[i] - arr[i-1]){
                return false;
            }
        }
        return true ;
    }
};