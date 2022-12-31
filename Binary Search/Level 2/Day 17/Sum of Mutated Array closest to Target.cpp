#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        // the idea is to decrease numbers so that we get sum near to target
        int ans = 0;
        int dif = 0;
        int sum = 0;
        for(int x: arr){ sum += x; ans = max(ans,x); }
        dif = abs(sum - target);
        if(sum <= target) return ans;
        int right = ans;
        int ideal = target/arr.size();
        int left = ideal;
        while(left <= right){
            int mid = left + (right - left)/2;
            // cout<<mid<<endl;
            int lsum = 0;
            for(int x: arr){
                if(x > mid) lsum += mid;
                else lsum += x;
            }
            if(dif > abs(target - lsum)){ 
                dif = abs(target - lsum);
                ans = mid;
            }
            if(dif == abs(target - lsum)) ans = min(ans,mid);
            if(lsum >= target){
                right = mid - 1;
            }else{
                
                left = mid + 1;
            }
        }
        return ans;
    }
};