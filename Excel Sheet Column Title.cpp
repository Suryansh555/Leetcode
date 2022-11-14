#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string output;
        
        while(columnNumber > 0){
         
            columnNumber--;
           
            int m = columnNumber % 26;
            
            columnNumber /= 26;
            output += 'A' + m;
        }
      
       
        reverse(output.begin(),output.end());
        
        return output;
    }
};