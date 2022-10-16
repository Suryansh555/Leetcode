#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    bool CountEven(int num){
        long long int count = 0;
        while(num != 0){
            num = num/10;
            count++;
        }
        return count % 2 ;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        long long int sum = 0;
        for(int i = 0 ; i < n ; i++){
            if(!CountEven(nums[i])){
                sum++;
            }
        }
        return sum ;
    }
};