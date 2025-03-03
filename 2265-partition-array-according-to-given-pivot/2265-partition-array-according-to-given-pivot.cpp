class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans(nums.size(),0); 
        int left = 0;
        int right = nums.size()-1;
        int j = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans[left] = nums[i];
                left++;
            }
            if(nums[j]>pivot){
                ans[right] = nums[j];
                right--;
            }
            j--;
        }
        while(left<=right){
            ans[left] = pivot;
            left++;
        }
        return ans;
    }
};