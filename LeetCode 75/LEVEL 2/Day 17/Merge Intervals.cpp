#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        int start = intervals[0][0];
        int end = intervals[0][1];
        vector<vector<int>> merged ;
        for(int i = 1 ; i < n ; i++ ){
            if(end >= intervals[i][0]){
                end = max(end,intervals[i][1]);
            }
            else{
                merged.push_back({start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        merged.push_back({start,end});
        return merged ;
    }
};