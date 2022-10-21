#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        int max = -1;
        for(int i = size-1; i >= 0 ; i--){
            int index = arr[i];
            arr[i] = max ;
            if(index > max){
                max = index;
            }
        }
        return arr ;
    }
};