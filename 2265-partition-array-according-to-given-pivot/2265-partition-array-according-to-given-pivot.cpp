class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> temp;
        for(int i: nums){
            if(i<pivot){
                temp.push_back(i);
            }
        }
        for(int i: nums){
            if(i==pivot){
                temp.push_back(i);
            }
        }
        for(int i: nums){
            if(i>pivot){
                temp.push_back(i);
            }
        }
        nums = temp;
        return nums;
    }
};