class Solution {
public:
     int target;
    
    vector<vector<int>> ans;
    
    void solve(vector<int>& arr, int i, int sum, vector<int> op)
    {
        
        
        if(i >= arr.size()) 
        {
            return;
        }
        
        
        if(arr[i] + sum == target)
        {
            op.push_back(arr[i]);
            ans.push_back(op);
            return;
        }
        
       
        if(arr[i] + sum < target)
        {
            
            vector<int> op1 = op;
            vector<int> op2 = op;
            
            op2.push_back(arr[i]);
            solve(arr, i, sum + arr[i], op2);
            solve(arr, i + 1, sum, op1);
        }
        else
        {
            solve(arr, i + 1, sum, op); // call for the next index
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int required_target) {
        ans.clear(); //clear global array, make to sure that no garbage value is present in it
        
        target = required_target; // give target what he wants 
        vector<int> op; // op array to try all possible combination
        sort(arr.begin(),arr.end()); // sort the array in ascending order
        solve(arr, 0, 0, op); // call function
        
        return ans;
    }
};