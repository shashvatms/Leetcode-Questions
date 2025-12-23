class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int si=0,ei=m*n-1;
        while(si<=ei){
            int mid = (si+ei)/2;

            int row = mid/n;
            int col = mid%n;

            int value = matrix[row][col];

            if(value==target){
                return true;
            }
            else if(value<target){
                si = mid+1;
            }
            else{
                ei = mid-1;
            }
        }
        return false;
    }
};