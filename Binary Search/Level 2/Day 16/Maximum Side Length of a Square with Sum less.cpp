#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        const int m = mat.size();
        const int n = mat[0].size();
        // Prefix[i][j] = sum of rectangle with left-top corner at (0, 0) with height i and width j.
        vector<vector<int>> prefix(m + 1, vector<int>(n + 1));
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                prefix[i + 1][j + 1] = prefix[i + 1][j] + mat[i][j];
            }
        }
        for(int j = 0; j < n; ++j){
            for(int i = 0; i < m; ++i){
                prefix[i + 1][j + 1] += prefix[i][j + 1];
            }
        }
        // Calculate sum of a square with left-top corner at (i, j) with side length len.
        auto square_sum = [&](int i, int j, int len){
            return prefix[i + len][j + len] - prefix[i][j + len] - prefix[i + len][j] + prefix[i][j];
        };
        // Iterate all possible left-top coner of the square and binary-search maximum possible side length.
        int result = 0;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                int min_len = 0, max_len = min(m - i, n - j);
                while(min_len < max_len){
                    const int mid_len = (min_len + max_len + 1) / 2;
                    if(square_sum(i, j, mid_len) > threshold) max_len = mid_len - 1;
                    else min_len = mid_len;
                }
                result = max(result, min_len);
            }
        }
        return result;
    }
};