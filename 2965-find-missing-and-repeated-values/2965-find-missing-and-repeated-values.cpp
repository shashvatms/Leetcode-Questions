class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // int n = grid.size();
        // unordered_map<int,int> mp;
        // for(vector<int> i : grid){
        //     for (int j : i){
        //         mp[j]++;
        //     }
        // }
        // int missing = 0;
        // int duplicate = 0;
        // for(int i = 1;i<=n*n;i++){
        //     if(mp.find(i)==mp.end()){
        //         missing = i;
        //     }
        //     if(mp[i]==2){
        //         duplicate = i;
        //     }
        // }
        // return {duplicate,missing};
        // int k = nums.size()*nums.size();
        // int sum = k*(k+1) / 2;
        // int curr = 0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         curr += nums[i][j];
        //     }
        // }
        // int repeated = abs(sum - curr);
        int k = grid.size()*grid.size();
        vector<int> freq(k+1,0);
        int rem = -1;
        int rep = -1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i=1;i<=k;i++){
            if(freq[i]==2){
                rep = i;
            }
            else if(freq[i]==0){
                rem = i;
            }
        }
        return {rep,rem};
    }
};