#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int rows = matrix.size(),
			cols = matrix[0].size(),
            currow = 0, curcol = cols - 1;
			
        while (currow < rows && curcol >=0) {
            int cur = matrix[currow][curcol];
            if (target == cur) return true;
            else if (target > cur) currow++;
            else if (target < cur) curcol--;
        }
        
        return false;
    }
};