class Solution {
public:
    long long reverseh(int n){
        long long temp = 0,rem;
        
        while(n>0){
            rem = n%10;
            temp = temp*10+rem;
            n=n/10;
        }
        return temp;
    }
    
    long long reverse(long long x) {
        
        long long ans;
        if(x>=0){
            ans = reverseh(x);
            
        }
        else{
            ans = 0 - x;
            ans = reverseh(ans);
        }
        if(ans>INT_MAX||ans<INT_MIN){
            return 0;
        }
        if(x<0){
            return 0-ans;
        }
        return ans;
    }
};