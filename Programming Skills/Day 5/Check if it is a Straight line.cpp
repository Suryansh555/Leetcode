#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) {
        int n = arr.size();
        long double d;
        int flag = 0;
        if(arr[1][0] - arr[0][0] != 0) d = ((double)arr[1][1] - (double)arr[0][1]) / ((double)arr[1][0] - (double)arr[0][0]);
        else flag = 1;
        for(int i = 1;i<n;i++){
            if(flag == 1){
                if(((double)arr[i][0] - (double)arr[i-1][0]) != 0){
                     return false;
                }
            }
            else{
                if(((double)arr[i][0] - (double)arr[i-1][0]) == 0){
                    return false;
                }
                else{
                    if(((double)arr[i][1] - (double)arr[i-1][1]) / ((double)arr[i][0] - (double)arr[i-1][0]) != d){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};