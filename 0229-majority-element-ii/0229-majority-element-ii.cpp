class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int count1=0;
        int count2=0;
        int c1=0,c2=0;
        for(int num: nums){
            if(num==c1){
                count1++;
            }
            else if(num==c2){
                count2++;
            }
            else if(count1==0){
                c1=num;
                count1++;
            }
            else if(count2==0){
                c2=num;
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(int num: nums){
            if(num==c1){
                count1++;
            }
            else if(num==c2){
                count2++;
            }
        }
        if(count1>n/3){
            ans.push_back(c1);
        }
        if(count2>n/3){
            ans.push_back(c2);
        }
        return ans;
    }
};