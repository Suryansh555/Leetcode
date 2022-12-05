#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits=="")
            return result;
        
        dfs(digits,"",result,0);
        return result;
    }

    void dfs(string digits,string path,vector<string>& result,int index)
    {
        if(index == digits.size())
        {
            result.push_back(path);
            return;
        }
        vector<string> letters= mapping(digits[index]);
        for(auto i:letters)
        {
            dfs(digits,path+i,result,index+1);
        }
    }

    vector<string> mapping(char c)
    {
        switch (c)
        {
            case '0': return {};
            case '1': return {};
            case '2': return {"a","b","c"};
            case '3': return {"d","e","f"};
            case '4': return {"g","h","i"};
            case '5': return {"j","k","l"};
            case '6': return {"m","n","o"};
            case '7': return {"p","q","r","s"};
            case '8': return {"t","u","v"};
            case '9': return {"w","x","y","z"};
            default: return {};
        }
    }

};