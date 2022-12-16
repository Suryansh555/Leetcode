#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int len = nums.size();
        int res = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == 0) 
                continue; 
            for (int j = i + 1; j < len; j++) {
                int max_l = nums[j] + nums[i] - 1;
                int idx = std::distance(nums.begin(),
                    std::upper_bound(nums.begin(), nums.end(), max_l));
                if (idx >= len) {
                    idx = len - 1;
                }
                while (idx >= 0 && nums[idx] > max_l) { idx--; }
                int tmp = idx - j;
                if (tmp > 0) {
                    res += tmp;
                }
            }
        }
        return res;
    }
};