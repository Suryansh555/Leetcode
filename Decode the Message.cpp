#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mapping{};
        char letter{'a'};

        for(char &c : key){
            if(mapping.count(c) || c == ' ')// If c is already a key in mapping or c is a space.
                continue;

            mapping[c] = letter;
            letter++;
        }

        string decoded{};

        for(char &c : message)
            decoded.push_back(c == ' ' ? c : mapping[c]);

        return decoded;
    }
};