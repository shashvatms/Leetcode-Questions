class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c1=0,c2=0,c3=0;
        for(int i: nums){
            if(i==0){
                c1++;
            }
            if(i==1){
                c2++;
            }
            else{
                c3++;
            }
        }
        int j=0;
        for(int i=0;i<c1;i++){
            if(j<nums.size()){

            
                nums[j] = 0;
                j++;
            }
        }
        for(int i=0;i<c2;i++){
            if(j<nums.size()){
                nums[j] = 1;
                j++;
            }
            
        }
        for(int i=0;i<c3;i++){
            if(j<nums.size()){
                nums[j] = 2;
                j++;
            }
        }
    }
};