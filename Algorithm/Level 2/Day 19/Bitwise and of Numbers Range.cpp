#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int len = 0;
        while (m != n) { m >>= 1; n >>= 1; ++len; }
        return m << len;
    }
};