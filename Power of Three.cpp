#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        return fmod((log10(n) / log10(3)), 1) == 0;
    }
};