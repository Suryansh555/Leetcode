#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
string addStrings(string num1, string num2) {
        

        int len=max(num1.size(),num2.size()); 
        
        while(num1.size()<len)
            num1.insert(num1.begin(),'0');
        while(num2.size()<len)
            num2.insert(num2.begin(),'0');
        
        int carry=0;
        string ans="";
        

        for(int i=len-1;i>=0;--i){            
            int sum=(num1[i]-'0')+(num2[i]-'0')+carry;
            

            if(sum>9){
    
                carry=sum/10;
    
                sum=sum%10;
            }
            else
                carry=0;
            
           
            ans.insert(ans.begin(),sum+'0');
        }
        if(carry)
            ans.insert(ans.begin(),carry+'0');
        
        return ans;
    }
};