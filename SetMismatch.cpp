#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int repeat_num=0;
        int xor_value=0;
        
        for(auto x: nums)
            xor_value = xor_value ^ x ;
        
        for(int i=1;i<=nums.size();i++)
        {
            xor_value= xor_value ^ i;
        }
        
        int set_bit_no=xor_value & ~(xor_value-1);
        
        int x = 0, y = 0;
        for (auto temp: nums)
        {
            if (temp & set_bit_no)
                x = x ^ temp;
            else
                y = y ^ temp;
        }
        
        for (int i = 1; i <= nums.size(); i++)
        {
            if (i & set_bit_no)
                x = x ^ i; 
            else
                y = y ^ i; 
        }
               
        if(find(begin(nums),end(nums),x)==end(nums))
             return {y,x};
        else
            return {x,y};
    }
};