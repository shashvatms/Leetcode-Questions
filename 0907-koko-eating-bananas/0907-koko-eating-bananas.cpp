class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int result = high;
        while(low<=high){
            int mid= (low+high)/2;
            long long hour = 0;
            for(int banana: piles){
                hour += ceil((banana+ mid - 1)/mid);
            }
            if(hour<=h){
                result = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return result;
    }
};