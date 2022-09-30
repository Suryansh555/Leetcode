#include<bits/stdc++.h>
using namespace std ;


    int pivotIndex(vector<int>& nums) {
        vector<long long int> prefix ;
        int n =  nums.size();
        vector<long long int> postfix(n) ;

        postfix[n-1] = nums[n-1];
        prefix.push_back(nums[0]) ;

        for(int i = 1 ; i < n ; i++){
            prefix.push_back(prefix[i-1] + nums[i]);
            postfix[n-i-1] = postfix[n-i] + nums[n-i-1]; 
        }
        int index = -1;
        for(int i = 0 ; i < n ; i++){
            if(prefix[i] == postfix[i]){
                index = i ;
                break ;
            }
        }
        return index ;
    }
