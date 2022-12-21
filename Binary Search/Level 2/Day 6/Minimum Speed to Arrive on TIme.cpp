#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool solve( vector<int>&dist , double hour  , long long int speed )
    {
        double time = 0 ;
        
        for( int i = 0 ; i < dist.size()-1 ; i++ )
        {
            time += ceil(dist[i]*1.0/speed) ;
        }
        
         
        int n = dist.size() ;
        
        time += (dist[n-1]*1.0/speed) ;
        
        if( time <= hour ) return true ;
        
        return false ;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int n = dist.size() ;
        int h = ceil(hour) ;
        if( h < n ) return -1 ;
        
        long long int ans =  INT_MAX , low = 1 , high = ans , mid ;
    
        while( low <= high )
        {
            
            mid = low + (high-low)/2 ;
          
            if(solve( dist , hour , mid ))
            {
               
                ans = mid ;
                high = mid-1 ;
            }
            else{
                
                low = mid + 1 ;
            }
        }
        
        return ans ;
        
        
        
    }
};