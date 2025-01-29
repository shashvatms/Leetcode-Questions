class Solution {
public:
    int func(string& s,int l,int r, vector<vector<int>>& dp){
        if(l>=r){
            return 0;
        }
        if(dp[l][r]!=-1){
            return dp[l][r];
        }
        if(s[l]==s[r]){
            dp[l][r] = func(s,l+1,r-1,dp);
        }
        else{
             dp[l][r] =  1+ min(func(s,l+1,r,dp),func(s,l,r-1,dp));
        }
        return dp[l][r];
    }
    int minInsertions(string s) {
        int n = s.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return func(s,0,s.size()-1,dp);
    }
};