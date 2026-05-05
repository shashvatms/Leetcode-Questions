class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int si=0;
        int ei = arr.size()-1;
        while(si<ei){
            int mid = (si+ei)/2;
            if(arr[mid]>arr[mid+1]){
                ei = mid;
            }
            else{
                si = mid+1;
            }
        }
        return si;
    }
};