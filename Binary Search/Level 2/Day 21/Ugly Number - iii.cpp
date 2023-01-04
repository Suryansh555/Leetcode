#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
//reference : ugly number II
    long long lcm(long long a,long long b){
        return (a*b)/(__gcd(a,b));
    }

    int nthUglyNumber(int n, int aa, int bb, int cc) {
        long long a=aa,b=bb,c=cc;
        long long low = 1 ,high = INT_MAX;
        while(low < high){
            int mid = low + (high - low)/2;
            //number of divisible numbers (aDiv) : numbers divisible by a,(abDiv):numbers divisible by a and b,(abcDiv) : numbers divisible by a,b and c;
            long long aDiv = mid/a, bDiv = mid/b , cDiv = mid/c , abDiv = mid/lcm(a,b), bcDiv = mid/lcm(b,c),caDiv = mid/lcm(c,a),abcDiv=mid/lcm(a,lcm(b,c));

            long long total = aDiv + bDiv + cDiv - abDiv - bcDiv - caDiv + abcDiv;
            if(total < n) low = mid + 1;
            else high = mid;
        }

        return low;
    }
};