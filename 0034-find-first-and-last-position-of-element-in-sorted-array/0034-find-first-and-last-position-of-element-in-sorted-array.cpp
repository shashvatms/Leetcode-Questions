class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> temp;
        temp.push_back(-1);
        temp.push_back(-1);
        int si=0;
        int ei=nums.size()-1;
        //first occurence;
        while(si<=ei){
            int mid=(si+ei)/2;
            if(nums[mid]==target){
                temp[0] = mid;
                ei = mid-1;
            }
            else if(nums[mid]>target){
                ei=mid-1;
            }
            else{
                si=mid+1;
            }
        }
         si=0;
         ei=nums.size()-1;
        //last occurence
         while(si<=ei){
            int mid=(si+ei)/2;
            if(nums[mid]==target){
                temp[1] = mid;
                si = mid+1;
            }
            else if(nums[mid]>target){
                ei=mid-1;
            }
            else{
                si=mid+1;
            }
        }
        return temp;
    }
};