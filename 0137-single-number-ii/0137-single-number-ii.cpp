class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int num: nums){
            map[num]++;
        }
        for(auto i: map){
            if(i.second==1){
                return i.first;
            }
        }
        return -1;
    }
};