#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int count , ans = 0;
        for(int i=0;i<n;i++){
            int k = sentences[i].length();
            count = 1;
            for(int j=0;j<k;j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            ans = max(count,ans);

        }
        return ans;
        
    }
};