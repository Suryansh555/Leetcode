#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        long long int total = 0 ;
        for(int i = 0 ; i < n ; i++){
            int count = 0;
            long long int sum = 0 ;
            for(int j = i ; j < n ; j++){
                sum += arr[j];
                count++;
                if(count % 2 == 1){
                    total += sum ;
                }
            }
        }
        return total ;
    }
};