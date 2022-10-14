#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        long long int max = -1;
        int n = accounts.size();
        int m = accounts[0].size();
        for(int i = 0 ; i < n ; i++){
            long long int count = 0 ;
            for(int j = 0 ; j < m ; j++){
                count += accounts[i][j];
            }
            if(count > max){
                max = count ;
            }
        }
        return max ;
    }
};