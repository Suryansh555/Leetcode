#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res;
        bool found=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[i]>=prices[j])
                {
                    res.push_back(prices[i]-prices[j]);
                    found=1;
                    break;
                }
            }
            if(!found)
                res.push_back(prices[i]);
            found=0;
        }


        return res;
    }
};