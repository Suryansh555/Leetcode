#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    string intToRoman(int num)
    {
        static const std::vector<std::vector<const char*>> data = 
        {
            { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" },
            { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
            { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
            { "", "M", "MM", "MMM" }
        };

        std::string res;

        for(int i=0; i<data.size() && num; ++i, num/=10)
        {
            res = data[i][num % 10] + res;
        }

        return res;
    }
};