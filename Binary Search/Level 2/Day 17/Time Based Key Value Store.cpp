#include<bits/stdc++.h>
using namespace std;

class TimeMap {
public:
unordered_map<string,vector<pair<int,string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int n=mp[key].size();
        if (n==0) return "";
        string ans="";
        int low=0;
        int high=n-1;
        while(low<=high)
        {
           
            long long mid=low+(high-low)/2;
            
            if (mp[key][mid].first<=timestamp)
            {
                ans=mp[key][mid].second;
                low=mid+1;
            }
            else high=mid-1;
            
        }
        return ans;;

    }
};


/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */