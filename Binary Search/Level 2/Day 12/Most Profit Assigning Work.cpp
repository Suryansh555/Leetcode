#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //sort vector pair in non-decreasing order of difficulty
    static bool compare(const pair<int,int> &a,const pair<int,int> & b)
    {
        return a.first<b.first;
    }
    
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = profit.size();

        vector<pair<int,int>> v;// pair difficulty[i] and profit[i]
        int ans =0; //final maximum profit
        
        for(int i=0; i<n; i++)
        {
            v.push_back({difficulty[i],profit[i]});
        }
        sort(v.begin(),v.end(), compare);
        
        for(int i=1; i<n; i++)
        {
            //Hanlde cases with difficulty[i]>difficulty[j] and profit[i]<profit[j]
            //      for this, we simply update profit[i] as profit[j]
            v[i].second = max(v[i].second,v[i-1].second);
            // after this step we have a vector pair with non-decreasing difficulty and non-decreasing profit
        }
        
        //for every worker w search the highest possible difficulty ('v[].first') which will correspond to highes profit ('v[].second')
        // ie. now maximising difficulty is enough to maximise profit
        for(int w : worker)
        {
            int l=0;
            int h=n-1;
            int res=-1;
            while(l<=h)
            {
                int mid = (h-l)/2 +l;
                if(v[mid].first <= w)
                {
                    res = mid;
                    l = mid +1;
                }
                //if(v[mid].first == w)   break;
                else h = mid-1;
            }
            if(res>=0 && v[res].first<=w)   ans+=v[res].second;
        }
        return ans;
    }
};