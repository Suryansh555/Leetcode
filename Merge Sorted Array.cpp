#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int p1 = m-1, p2 = n-1, i = n+m-1;
        while(p2 >= 0){
            if(p1 >= 0 && arr1[p1] > arr2[p2]) arr1[i--] = arr1[p1--];
            else arr1[i--] = arr2[p2--];
        }
    }
};