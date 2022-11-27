#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=1; int e= num;
        int mid= s+(e-s)/2;
        while(s<=e){ //high-low>=0
            //cout<<mid<<endl;
            if(num%mid==0 && mid==num/mid)return true;
            if (mid > num/mid){  //9 1 9 5 25>num
                e=mid-1;
            }
            else s= mid+1;
            mid= s+(e-s)/2;
        }
        return false;
    }
};