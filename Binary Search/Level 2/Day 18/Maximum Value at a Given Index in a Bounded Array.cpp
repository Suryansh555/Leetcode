#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int ans = 1;
        long long sum = n;
        int i = index-1 , j = index+1;

        if (sum + 1 > maxSum) return ans;
        else {
            ans++;
            sum++;
        }
        
        while (i >= 0 || j < n) {
            if (i >= 0 && j < n) sum += (j-i+1);
            else sum += (j-i);

            if (i >= 0) i--;
            if (j < n) j++;

            if (sum > maxSum) return ans;
            ans++;
        }

        if (sum < maxSum) {
            ans += (maxSum-sum) / n;
        }

        return ans;
    }
};