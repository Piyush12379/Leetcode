class Solution {
public:
    bool isPowerOfFour(int n) {
    if(n<=0) return false;
    int k= sqrt(n);

    return((k*k==n) && (k&(k-1))==0);
    }
};