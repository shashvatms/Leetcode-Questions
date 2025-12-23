class Solution {
public:
    double power(double x, int n){
        if(n==0) return 1;
        double half = power(x,n/2);
        if(n%2==0) return half*half;
        return half*half*x;
    }
    double myPow(double x, int n) {
        long long p = n;
        if(p<0){
            x = 1/x;
            return power(x,-p);
        }
        return power(x,p);
    }
};