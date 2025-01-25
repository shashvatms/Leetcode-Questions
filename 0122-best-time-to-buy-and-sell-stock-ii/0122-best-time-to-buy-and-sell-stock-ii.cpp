class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int temp = prices[0];
        for(int num: prices){
            if(temp<num){
                max+=num-temp;
            }
            temp = num;
        }  
        return max;
    }
};