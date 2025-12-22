class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int count = 0;
        // unordered_map<int,int> mp;
        // for(int i : nums){
        //     mp[i]++;
        // }
        // for(auto i : mp){
        //     if(i.second > nums.size()/2){
        //         return i.first;
        //     }
        // }
        // return 0;
        int candidate = nums[0];
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==candidate){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                candidate = nums[i];
                count=1;
            }
        }
        return candidate;
    }
};