class Solution {
public:
int countOdds(int low, int high) {
return (high&1 || low&1)? (high-low+2)/2:(high-low)/2;
}
};