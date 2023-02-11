#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int n1=nums1.size();int n2=nums2.size();int n3=nums3.size();
        int A[101]={0}; int B[101]={0}; int C[101]={0};//creating 3 Auxilary arrays
        for(int i=0;i<n1;i++){ //copying values from given array to Auxilary arrays.
            A[nums1[i]]++;
        }
        for(int i=0;i<n2;i++){
            B[nums2[i]]++;
        }
        for(int i=0;i<n3;i++){
            C[nums3[i]]++;
        }
        vector<int>k;
        for(int i=1;i<=100;i++){
            if(A[i]>=1&&B[i]>=1||B[i]>=1&&C[i]>=1||C[i]>=1&&A[i]>=1)//comparing Two out of three arrays 
            k.push_back(i);
        }
        return k;
    }
};