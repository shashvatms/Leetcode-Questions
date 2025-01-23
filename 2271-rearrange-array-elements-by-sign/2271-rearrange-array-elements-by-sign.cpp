class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i=0;
        int j=1;
        for(int z:nums){
            if(z>0){
                ans[i] = z;
                i=i+2;
            }
            else if(z<0){
                ans[j] = z;
                j=j+2;
            }
        }
        return ans;
    }
};