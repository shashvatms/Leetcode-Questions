class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]){
                    continue;
            }
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1&&nums[j]==nums[j-1]){
                    continue;
                }
                int k = j+1;
                int z = nums.size()-1;
                while(k<z){
                    long long sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[z];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[z]});
                        k++;
                        while(k<z&&nums[k]==nums[k-1]){
                            k++;
                        }
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        z--;
                    }
                }
            }
        }
        return ans;
    }
};