class Solution {
public:
    bool canmake(vector<int>& bloomDay, int m, int k,int day){
        int count = 0;
        int buq = 0;
        for(int bloom : bloomDay){
            if(bloom<=day){
                count++;
                if(count==k){
                    buq++;
                    count=0;
                }
            }
            else{
                count=0;
            }
        }
        return buq >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = (long long)m*k;
        if(total>bloomDay.size()){
            return -1;
        }
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int result = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(canmake(bloomDay,m,k,mid)){
                result = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return result;
    }
};