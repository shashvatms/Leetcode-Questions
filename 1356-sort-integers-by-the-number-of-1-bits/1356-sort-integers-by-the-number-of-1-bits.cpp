class Solution {
public:
    int countBits(int x) {
        int count = 0;
        while(x>0){
            if(x%2==1){
                count++;
            }
            x=x/2;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        vector<int> temp;
        for(int i:arr){
            int count = countBits(i);
            temp.push_back(count*10001 + i);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<arr.size();i++){
            arr[i] = temp[i]%10001;
        }
        return arr;
    }
};