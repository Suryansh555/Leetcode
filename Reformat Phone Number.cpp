#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reformatNumber(string number) {
        string newNumber = "";
        int counter = 0;
        int pos = 0;
        for(int i = 0; i < number.length();i++){
            if(number[i] != '-' && number[i] != ' ')
                counter++;
        }

      while(counter != 0){
          if(counter == 4){
              for(int i = 0; i < 5;i++){
                  if(number[pos] == '-' || number[pos] == ' '){
                      pos++;
                      i--;
                  }
                  else if( i == 2)
                    newNumber.push_back('-');
                  else {
                    newNumber.push_back(number[pos]);
                    pos++;
                  }  
              }
              newNumber.push_back('-');
              counter -= 4;
          }
          else if(counter >= 3){
              for(int i = 0; i < 3;i++){
                  if(number[pos] == '-' || number[pos] == ' '){
                      pos++;
                      i--;
                  }
                  else {
                    newNumber.push_back(number[pos]);
                    pos++;
                  }  
              }
              newNumber.push_back('-');
              counter -= 3;
          }
          else if(counter < 3){
            for(int i = 0;i < 2;i++){
               if(number[pos] == '-' || number[pos] == ' '){
                      pos++;
                      i--;
                  }
                  else {
                    newNumber.push_back(number[pos]);
                    pos++;
                  } 
            }
            newNumber.push_back('-');
            counter -= 2;
          }
      }
        if(newNumber[newNumber.length()-1] == '-')
            newNumber.pop_back();
        return newNumber;
    }
};