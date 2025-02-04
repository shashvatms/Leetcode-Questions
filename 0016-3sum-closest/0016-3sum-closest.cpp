class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum = nums[0]+nums[1]+nums[3];
        int temp =0 ;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                temp=nums[i]+nums[j]+nums[k];
                if(abs(temp-target)<abs(sum-target)){
                    sum = temp;
                }
                if(temp<target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return sum;
    }
};