#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        bool check = 0;
        if(n % 2 == 1){
            check = 1 ;
        }
        long long int sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            sum += mat[i][i] + mat[i][n-i-1];
        }
        if(check){
            sum -= mat[n/2][n/2];
        }
        return sum ;
    }
};