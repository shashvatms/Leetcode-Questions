class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left,mid,right;
        for(int i: nums){
            if(i<pivot){
                left.push_back(i);
            }
            else if(i==pivot){
                mid.push_back(i);
            }
            else{
                right.push_back(i);
            }
        }
        left.insert(left.end(),mid.begin(),mid.end());
        left.insert(left.end(),right.begin(),right.end());
        return left;
    }
};