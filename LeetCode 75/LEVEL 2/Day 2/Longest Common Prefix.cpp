
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
 string final_str = strs[0],new_str = "";
int size = strs.size();
for (int i = 0; i < size; i++)
{
    int size1 = final_str.size(),size2 = strs[i].size();
    int j = 0,k = 0;
    while(j < size1 && k < size2){
        if(final_str[j] == strs[i][k]){
            new_str+=final_str[k];
        }
        else{
            break;
        }

        k++;
        j++;
    }
    final_str = new_str;
    new_str = "";
}
return final_str;
}
};