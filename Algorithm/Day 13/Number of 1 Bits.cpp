#include "bits/stdc++.h"
using namespace std;


class Solution {
public:
    int hammingWeight(uint32_t n) {
        long long int sum = 0 ;
        while(n != 0){
            if(n & 1){
                sum++;
            }
            n = n >> 1;
        }
        return sum ;
    }
};