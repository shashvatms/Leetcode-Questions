class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0,temp=x;
        if(x<0){
            return false;
        }
        while(temp!=0){
            int rem = temp%10;
            rev = rev*10+rem;
            temp = temp/10;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
};