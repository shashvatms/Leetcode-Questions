class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int> mp;
        for(vector<int> i : grid){
            for (int j : i){
                mp[j]++;
            }
        }
        int missing = 0;
        int duplicate = 0;
        for(int i = 1;i<=n*n;i++){
            if(mp.find(i)==mp.end()){
                missing = i;
            }
            if(mp[i]==2){
                duplicate = i;
            }
        }
        return {duplicate,missing};
    }
};