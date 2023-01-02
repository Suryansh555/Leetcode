#include<bits/stdc++.h>
using namespace std;


class SnapshotArray {
public:
    vector<int> arr;
    vector<vector<pair<int,int>>> mutated;
    int snap_count;

    SnapshotArray(int length) {
          arr.resize(length);
          mutated.resize(length);
          snap_count=-1;       
    }
    
    void set(int index, int val) {
         mutated[index].push_back({val,snap_count+1}); 
    }
    
    int snap(){
        snap_count++;
        return(snap_count);     
    }
    
    int get(int index, int snap_id) {
        if(mutated[index].empty())
           return(0);
        int ans=-1;

        int low=0;
        int high=mutated[index].size()-1;
 
        while(low<=high){
             int mid=(low+high)>>1;
             if(mutated[index][mid].second<=snap_id){
                ans=mid;
                low=mid+1;  
             }
             else
                high=mid-1; 
        }  
        if(ans==-1)
           return(0);
        return(mutated[index][ans].first);
    }
};


/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */