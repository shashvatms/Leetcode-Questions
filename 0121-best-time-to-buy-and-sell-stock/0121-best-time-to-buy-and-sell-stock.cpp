class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp = INT_MAX;
        int ans=0;
        for(int i: prices){
            temp = min(temp,i);
            int df = i-temp;
            ans = max(ans,df);
        }
        return ans;
    }
};