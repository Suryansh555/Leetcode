#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int longestPalindrome(string s) {
        int a[26]={0},A[26]={0},ans=0,mx=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                A[s[i]-'A']++;
            }
            else{
                a[s[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(a[i]%2==0){
                ans+=a[i];
            }
            else{
                ans+=a[i]-1;
                mx=max(mx,a[i]);
            }
            if(A[i]%2==0){
                ans+=A[i];
            }
            else{
                ans+=A[i]-1;
                mx=max(mx,A[i]);
            }
        }
        if(mx){
            ++ans;
        }
        return ans;
    }
};