
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int i = 0, sum = 0;
        
        while(i < n){
            
            switch(s[i]){
                // case 1 - if s[i] == I
                case ('I'):
                    // if next element is V
                    if(s[i+1] == 'V'){
                        sum += 4;   // IV = 4
                        i++;
                        break;
                    }
                    // if next element is X
                    else if(s[i+1] == 'X'){
                        sum += 9;  // IX = 9
                        i++;
                        break;
                    }
                    
                    sum += 1;  // I = 1
                    break;
                // case 2 - if s[i] == V    
                case ('V'):
                    sum += 5;   // V = 5
                    break;
                // case 3 - if s[i] == X
                case ('X'):
                    // if next element is L
                    if(s[i+1] == 'L'){
                        sum += 40; // XL = 40
                        i++;
                        break;
                    }
                    // if next element is C
                    else if(s[i+1] == 'C'){
                        sum += 90;  // XC = 90
                        i++;
                        break;
                    }
                    sum += 10;  // X = 10
                    break;
                // case 4 - if s[i] == L
                case ('L'):
                    sum += 50;  // L = 50
                    break;
                // case 5 - if s[i] == C
                case ('C'):
                    // if next element is D
                    if(s[i+1] == 'D'){
                        sum += 400; // CD == 500
                        i++;
                        break;
                    }
                    // if next element is M
                    else if(s[i+1] == 'M'){
                        sum += 900; // DM = 900
                        i++;
                        break;
                    }
                    sum += 100;  // C = 100
                    break;
                // case 6 - if s[i] == D
				case ('D'):
                    sum += 500; // D = 500
                    break;
                // case 7 - if s[i] == M
                case ('M'):
                    sum += 1000;  // M = 1000
                    break;
            }
            
            i++;
        }   
        return sum;
    } 
};