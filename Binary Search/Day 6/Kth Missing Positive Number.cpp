#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       vector<int>vec;
        int i=0;
        int j=1;  
         int n=arr.size();
        while(vec.size()<k)
        {
            if(arr[i]!=j)
            {
               vec.push_back(j);
                j++;
            }
            else
            {
              if(i<arr.size()-1)   {
                  i++;
              }
               j++;
            } 
        }
        return vec[k-1];
    }
};