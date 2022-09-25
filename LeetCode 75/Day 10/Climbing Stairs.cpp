class Solution {
public:
    int climbStairs(int n) {
    if(n<=2) return n;
    //for ex 5 stairs
    //1 2 3 4 5 stairs
    //to climb 1 only one move enough
    //to climb 2 we can have 2 moves 1,1 or 2
    //for 3 we have either 1,1,1 or 1,2 or 2,1 so 3 move
    //so we have a pattern here the output is sum of 2 prev input
    // stair 1    stair 2     stari 3        stari 4     stari 5
    //  1 move     2 move     1+2=3 move     2+3=5      3+5=8 
    int pre=1,pre2=2,ans;
    for(int i=3;i<=n;i++){
     ans=pre+pre2;
        pre=pre2;
        pre2=ans;
    }
    return ans;
}
};