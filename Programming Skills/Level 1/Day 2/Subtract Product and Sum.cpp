class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int sum = 0 ;
        long long int mul = 1 ;
        while(n != 0){
            int x = n % 10;
            sum += x ;
            mul *= x;
            n = n / 10 ;
        }
        return mul - sum ;
    }
};