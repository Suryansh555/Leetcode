#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool judgeSquareSum(int c) {
        int a = 0;
        int b = sqrt(c);
        
        while(a <= b){
            
            if(a*a + b*b == c)return true;
            else if(a*a + b*b > c)b--;
            else a++;
        }
        return false;
    }
};