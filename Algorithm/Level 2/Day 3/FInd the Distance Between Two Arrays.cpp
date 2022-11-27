#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int cnt=0;
        for(int i= 0; i<arr1.size(); i++)
        {
            
        int start = 0, end = arr2.size()-1,
        j =1; 
        while(start<=end)
        {
             int mid = start +(end - start)/2;
            if(abs(arr2[mid]-arr1[i]) <= d)
            {
                j=-1;
                break;
            }
            else if(arr2[mid] > arr1[i]) 
            {
                end = mid - 1;
            }
            else
            {
                start = mid+1;
            }
         
        }
            if(j == 1)
            {
                cnt++;
            }
        }
       return cnt;
    }

};