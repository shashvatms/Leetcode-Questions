class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int si = 0;
        int ei = nums.size()-1;
        int index =  0;
        while(si<=ei){
            int mid = (si+ei)/2;
            if(nums[mid]==target){
                return true;
            }
            if (nums[si] == nums[mid] && nums[mid] == nums[ei]) {
                si++;
                ei--;
                continue;
            }
            else if(nums[si]<=nums[mid]){
                if(nums[si]<=target&&nums[mid]>target){
                    ei = mid-1;
                }
                else{
                   si = mid +1;
                }
            }
            else{
                if(nums[mid]<target&&target<=nums[ei]){
                    si = mid+1;
                }
                else{
                    ei = mid-1;
                }
            }
        }
        return false;
    }
};