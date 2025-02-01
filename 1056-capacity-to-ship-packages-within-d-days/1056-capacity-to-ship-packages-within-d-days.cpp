class Solution {
public:
    bool cando(vector<int>& weights, int days,int mid){
        int sum = 0;
        int d = 1;
        for(int n: weights){
            sum += n;
            if(sum>mid){
                d++;
                sum = n;
            }
        }
        return d <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int result = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(cando(weights,days,mid)){
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