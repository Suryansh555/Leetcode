#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int chalkReplacer(vector<int>& chalk, int k) {
    long long int sum=0;
    for(int i:chalk){
        sum+=i;
    }
    k=k%sum;
    vector<long long int> pre(chalk.size());
    pre[0]=chalk[0];
    for(int i=1;i<chalk.size();i++){
        pre[i]=chalk[i]+pre[i-1];
    }
    return upper_bound(pre.begin(),pre.end(),k)-pre.begin();
}
};