class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int  low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int result = 0;
        while(low<=high){
            int mid = (low+high)/2;
            int sum = 0;
            for(int i: nums){
                sum += (i+mid-1)/mid;
            }
            if(sum<=threshold){
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