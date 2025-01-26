#include<cmath>
class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1){
            return x;
        }
        int start = 1;
        int end = x;
        int mid = -1;
        while(start<=end){
            mid = start + (end-start)/2;
            if((long)mid*mid==(long)x){
                return mid;
            }
            else if((long)mid*mid<(long)x){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return round(end);
    }
};