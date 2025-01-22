class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n= nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k = j+1;
                int z = n-1;
                
                while(k<z){
                    long long sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[z];
                if(sum==target){
                    s.insert({nums[i],nums[j],nums[k],nums[z]});
                    k++;
                    z--;
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
        for(auto i: s){
            ans.push_back(i);
        }
        return ans;
    }
};