class Solution {
public:
    void sortColors(vector<int>& nums) {
        int si = 0;
        int ei = nums.size()-1;
        int mid = 0;
        while(mid<=ei){
            if(nums[mid]==0){
                swap(nums[si],nums[mid]);
                si++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[ei]);
                ei--;
            }
        }
    }
};