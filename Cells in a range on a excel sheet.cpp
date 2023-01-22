#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        char letterS = (s[0] < s[3]) ? s[0] : s[3];
        char numberS = (s[1] < s[4]) ? s[1] : s[4];
        char letterE = (s[0] < s[3]) ? s[3] : s[0];
        char numberE = (s[1] < s[4]) ? s[4] : s[1];

        while (letterS <= letterE) {
            char c = numberS;
            string tmp = "";
            tmp = tmp + letterS + c;

            while (c <= numberE) {
                tmp[1] = c;
                res.push_back(tmp);
                c = c + 1;
            }
            letterS = letterS + 1;
        }
        return res;
    }
};