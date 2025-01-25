class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int buy1 = INT_MAX;
      int buy2 = INT_MAX;
      int p1 = INT_MIN;
      int p2 = INT_MIN;
      for(int num: prices){
        buy1 = min(buy1,num);
        p1= max(p1,num-buy1);
        buy2 = min(buy2,num-p1);
        p2 = max(p2,num-buy2);
      }
      return p2;
    }
};