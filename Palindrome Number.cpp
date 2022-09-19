class Solution {
public:
    long long int rev(int x){
        long long int num = 0 ;
        while(x != 0){
            num = num * 10 + x % 10;
            x /= 10;
        }
        return num ;
    }
    bool isPalindrome(long long int x) {
        if(x < 0){
            return false;
        }
        long long int revnum = rev(x);
        if(x == revnum){
            return true;
        }
        else{
            return false;
        }
    }
};