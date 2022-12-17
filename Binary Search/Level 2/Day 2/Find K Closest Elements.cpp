#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    deque<int> q;
    void find(vector<int>& arr, int idx, int k, int x){
        int l = idx-1;
        int r = idx+1;
        while(k){
            if(l<0) q.push_back(arr[r++]);
            else if(r>=arr.size()) q.push_front(arr[l--]);
            else if(abs(arr[r]-x) < abs(arr[l]-x)) q.push_back(arr[r++]);
            else q.push_front(arr[l--]);
            k--;
        }
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        q.clear();
        auto it = lower_bound(arr.begin(), arr.end(), x);
        int f_idx = it-arr.begin();

        if(it == arr.end()) f_idx = arr.size()-1;
        else if(f_idx > 0 && (abs(x-arr[f_idx]) >= abs(x-arr[f_idx-1]))) f_idx = it-arr.begin()-1;

        int xx = arr[f_idx];

        
        q.push_back(xx);
        find(arr, f_idx, k-1, x);

        vector<int> v(q.begin(), q.end());
        return v;
    }
};