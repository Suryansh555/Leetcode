#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int A) {
        vector<vector<int>> ans(A,vector<int>(A,0));
    long long int count = 1 ;
    int left = 0 , bottom = A - 1 , top = 0 , right = A - 1;
    int direction = 1 ;

    while(left <= right && top <= bottom){
    if(direction == 1){
            for(int i = left ; i <= right ; i++){
                ans[top][i] = count ;
                count++;
            }
            top++;
            direction = 2 ;
}
else if(direction == 2){
        for(int i = top ; i <= bottom ; i++){
            ans[i][right] = count ;
            count++;
        }
            right-- ;
            direction = 3 ;
}
else if(direction == 3){
        for(int i = right ; i >= left ; i--,count++){
            ans[bottom][i] = count ;
        }
            bottom--;
            direction = 4 ;
}
else{
    for(int i = bottom ; i >= top ; i--,count++){
        ans[i][left] = count ;
    }
    left++;
    direction = 1 ;
}

    }
    return ans;
    }
};