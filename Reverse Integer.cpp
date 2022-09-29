#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int reverse(int x) 
    {
        long long y = 0, z = x;  //because if x = INT_MIN, x = -x will give overflow
        bool neg = false;
        if(x < 0)
        {
            neg = true;
            z = -z;  //reverse only numbers, if z = -7 , -z = 7
        }
        while(z)
        {
            y = 10*y + z%10;
            z /= 10;
        }
        if(neg == true)
            y = -y;
        
        if(y > INT_MAX || y < INT_MIN) //out of range of integer
            return 0;
        return y;
    }
};