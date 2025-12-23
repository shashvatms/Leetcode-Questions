class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i: nums){
            ans ^= i;
        }
        return ans;
        // unordered_map<int,int> mp;
        // for(int i: nums){
        //     mp[i]++;
        // }
        // int ans = -1;
        // for(auto i: mp){
        //     if(i.second==1){
        //         ans = i.first;
        //     }
        // }
        // return ans;
    }
};