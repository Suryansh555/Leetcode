#include "bits/stdc++.h"
using namespace std;    

class Solution {
public:
    void sortColors(vector<int>& a) {
        // quick sort algo with pivot 1
        int p = 1;
        int l = 0, r = a.size() - 1;
        for(int i = 0; i <= r; i++) {
            if(a[i] < p) {
                swap(a[i], a[l]);
                l++;
            } else if(a[i] > p) {
                swap(a[i], a[r]);
                r--;
                i--;
            }
        }
    }
};