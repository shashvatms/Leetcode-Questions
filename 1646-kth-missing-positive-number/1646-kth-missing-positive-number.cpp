class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
          int i = 0;
          int num = 1;
          int count = 0;
          while(count<k){
            if(i<arr.size() && arr[i] == num){
                i++;
            }
            else{
                count++;
                if(count == k){
                    return num;
                }
            }
            num++;
          }
          return num;
    }
};