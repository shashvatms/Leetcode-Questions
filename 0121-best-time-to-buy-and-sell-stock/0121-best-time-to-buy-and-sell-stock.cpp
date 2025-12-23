class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy = prices[0];
       int profit = 0;
       for(int i: prices){
        buy = min(buy,i);
        profit = max(profit,i-buy);
       }
       return profit;
    }
};