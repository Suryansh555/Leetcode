#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int digit(int n){
        int res = 0;
        while(n!=0){
            int r = n%10;
            n = n/10;
            res += r;
        }
        return res;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        for(auto i:nums){
            sum += i - digit(i);
        }
        return sum;
    }
};