#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool possible ( int n, int k, vector<int> &stalls , int mid){

    int cowCount = 1;
    
    int temp = stalls[0];
    
    for(int i=0; i<n; i++){
        if(stalls[i] - temp >= mid ){
           
           temp = stalls[i] ;
         cowCount++;
        
    }
        if( cowCount == k ) return true;
        
        
    }
    return 0;
    
}

int maxDistance(vector<int>& position, int m) {
   int n = position.size();

sort(position.begin() , position.end() );
int s = 0;
int maxi = -1;

for(int i=0; i<n; i++){
    maxi = max(maxi,position[i]);
}

int mid = s + (maxi - s)/2;

while( s <= maxi ){
    
    if( possible(n,m,position,mid) ){
        s = mid+1;
    }
    
    
    else maxi = mid - 1;
    
    mid = s + (maxi - s)/2;
}

    // Write your code here
    return maxi;

}
};