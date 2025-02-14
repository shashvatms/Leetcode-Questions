class Solution {
public:
    int checkheight(TreeNode* root){
       if(!root){
            return 0;
       }
       int left = checkheight(root->left);
       int right = checkheight(root->right);
       if(left==-1 || right==-1 || abs(left-right) > 1){
        return -1;
       }
       return 1 + max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        int n = checkheight(root);
        return n!=-1;
    }
};