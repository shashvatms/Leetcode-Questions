class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l =0;
        int r=0;
        int res = 0;
        long long total = 0;
        while(r<nums.size()){
            total += nums[r];
            while(nums[r] >(total+ k)/(r-l+1)){
                total -= nums[l];
                l++;
            }
            res = max(res,r-l+1);
            r++;
        }
        return res;
    }
};