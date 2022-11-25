#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          bool found = false;
    int m;
    
    int t = 0;
    int b = matrix.size()-1;
    int l = 0;
    int r = matrix[0].size()-1;

    while(t < b)
    {
        m = (t+b)/2;
        
        if (target < matrix[m][0])
            b = m -1;
        else if(target > matrix[m][r])
            t = m + 1;
        else
        {
            t = m;
            b = m;
        }
    }
    
    // We have to find the column now
    while (l <= r)
    {
        m = (l+r)/2;
        if (target == matrix[t][m])
        {
            found = true;
            break;
        }
        else if (target < matrix[t][m])
        {
            r = m - 1;
        }
        else if (target > matrix[t][m])
        {
            l = m + 1;
        }
    }
    
    return found;
    }
};