class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                if(matrix[top][i]==target){
                    return true;
                }
            }
            top++;
            for(int i=top;i<=bottom;i++){
                if(matrix[i][right]==target){
                    return true;
                }
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    if(matrix[bottom][i]==target){
                        return true;
                    }
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    if(matrix[i][left]==target){
                        return true;
                    }
                }
                left++;
            }
        }
        return false;
    }
};