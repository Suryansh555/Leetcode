#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int cache[101][101] = {}; // for memoization
    int uniquePaths(int m, int n) {
        if(m < 1 || n < 1) return 0; 
        if(cache[m][n]) return cache[m][n];
        if(m == 1 && n == 1) return 1;
        return cache[m][n] = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
    }
};;